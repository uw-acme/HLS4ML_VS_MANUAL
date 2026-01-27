#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_349_V_read419_phi_phi_fu_75234_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_349_V_read419_phi_phi_fu_75234_p4 = ap_phi_mux_data_349_V_read419_rewind_phi_fu_30769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_349_V_read419_phi_phi_fu_75234_p4 = data_349_V_read.read();
        } else {
            ap_phi_mux_data_349_V_read419_phi_phi_fu_75234_p4 = ap_phi_reg_pp0_iter0_data_349_V_read419_phi_reg_75230.read();
        }
    } else {
        ap_phi_mux_data_349_V_read419_phi_phi_fu_75234_p4 = ap_phi_reg_pp0_iter0_data_349_V_read419_phi_reg_75230.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_349_V_read419_rewind_phi_fu_30769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_349_V_read419_rewind_phi_fu_30769_p6 = data_349_V_read419_phi_reg_75230.read();
    } else {
        ap_phi_mux_data_349_V_read419_rewind_phi_fu_30769_p6 = data_349_V_read419_rewind_reg_30765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_34_V_read104_phi_phi_fu_71139_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_34_V_read104_phi_phi_fu_71139_p4 = ap_phi_mux_data_34_V_read104_rewind_phi_fu_26359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_34_V_read104_phi_phi_fu_71139_p4 = data_34_V_read.read();
        } else {
            ap_phi_mux_data_34_V_read104_phi_phi_fu_71139_p4 = ap_phi_reg_pp0_iter0_data_34_V_read104_phi_reg_71135.read();
        }
    } else {
        ap_phi_mux_data_34_V_read104_phi_phi_fu_71139_p4 = ap_phi_reg_pp0_iter0_data_34_V_read104_phi_reg_71135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_34_V_read104_rewind_phi_fu_26359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_34_V_read104_rewind_phi_fu_26359_p6 = data_34_V_read104_phi_reg_71135.read();
    } else {
        ap_phi_mux_data_34_V_read104_rewind_phi_fu_26359_p6 = data_34_V_read104_rewind_reg_26355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_350_V_read420_phi_phi_fu_75247_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_350_V_read420_phi_phi_fu_75247_p4 = ap_phi_mux_data_350_V_read420_rewind_phi_fu_30783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_350_V_read420_phi_phi_fu_75247_p4 = data_350_V_read.read();
        } else {
            ap_phi_mux_data_350_V_read420_phi_phi_fu_75247_p4 = ap_phi_reg_pp0_iter0_data_350_V_read420_phi_reg_75243.read();
        }
    } else {
        ap_phi_mux_data_350_V_read420_phi_phi_fu_75247_p4 = ap_phi_reg_pp0_iter0_data_350_V_read420_phi_reg_75243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_350_V_read420_rewind_phi_fu_30783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_350_V_read420_rewind_phi_fu_30783_p6 = data_350_V_read420_phi_reg_75243.read();
    } else {
        ap_phi_mux_data_350_V_read420_rewind_phi_fu_30783_p6 = data_350_V_read420_rewind_reg_30779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_351_V_read421_phi_phi_fu_75260_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_351_V_read421_phi_phi_fu_75260_p4 = ap_phi_mux_data_351_V_read421_rewind_phi_fu_30797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_351_V_read421_phi_phi_fu_75260_p4 = data_351_V_read.read();
        } else {
            ap_phi_mux_data_351_V_read421_phi_phi_fu_75260_p4 = ap_phi_reg_pp0_iter0_data_351_V_read421_phi_reg_75256.read();
        }
    } else {
        ap_phi_mux_data_351_V_read421_phi_phi_fu_75260_p4 = ap_phi_reg_pp0_iter0_data_351_V_read421_phi_reg_75256.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_351_V_read421_rewind_phi_fu_30797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_351_V_read421_rewind_phi_fu_30797_p6 = data_351_V_read421_phi_reg_75256.read();
    } else {
        ap_phi_mux_data_351_V_read421_rewind_phi_fu_30797_p6 = data_351_V_read421_rewind_reg_30793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_352_V_read422_phi_phi_fu_75273_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_352_V_read422_phi_phi_fu_75273_p4 = ap_phi_mux_data_352_V_read422_rewind_phi_fu_30811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_352_V_read422_phi_phi_fu_75273_p4 = data_352_V_read.read();
        } else {
            ap_phi_mux_data_352_V_read422_phi_phi_fu_75273_p4 = ap_phi_reg_pp0_iter0_data_352_V_read422_phi_reg_75269.read();
        }
    } else {
        ap_phi_mux_data_352_V_read422_phi_phi_fu_75273_p4 = ap_phi_reg_pp0_iter0_data_352_V_read422_phi_reg_75269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_352_V_read422_rewind_phi_fu_30811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_352_V_read422_rewind_phi_fu_30811_p6 = data_352_V_read422_phi_reg_75269.read();
    } else {
        ap_phi_mux_data_352_V_read422_rewind_phi_fu_30811_p6 = data_352_V_read422_rewind_reg_30807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_353_V_read423_phi_phi_fu_75286_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_353_V_read423_phi_phi_fu_75286_p4 = ap_phi_mux_data_353_V_read423_rewind_phi_fu_30825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_353_V_read423_phi_phi_fu_75286_p4 = data_353_V_read.read();
        } else {
            ap_phi_mux_data_353_V_read423_phi_phi_fu_75286_p4 = ap_phi_reg_pp0_iter0_data_353_V_read423_phi_reg_75282.read();
        }
    } else {
        ap_phi_mux_data_353_V_read423_phi_phi_fu_75286_p4 = ap_phi_reg_pp0_iter0_data_353_V_read423_phi_reg_75282.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_353_V_read423_rewind_phi_fu_30825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_353_V_read423_rewind_phi_fu_30825_p6 = data_353_V_read423_phi_reg_75282.read();
    } else {
        ap_phi_mux_data_353_V_read423_rewind_phi_fu_30825_p6 = data_353_V_read423_rewind_reg_30821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_354_V_read424_phi_phi_fu_75299_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_354_V_read424_phi_phi_fu_75299_p4 = ap_phi_mux_data_354_V_read424_rewind_phi_fu_30839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_354_V_read424_phi_phi_fu_75299_p4 = data_354_V_read.read();
        } else {
            ap_phi_mux_data_354_V_read424_phi_phi_fu_75299_p4 = ap_phi_reg_pp0_iter0_data_354_V_read424_phi_reg_75295.read();
        }
    } else {
        ap_phi_mux_data_354_V_read424_phi_phi_fu_75299_p4 = ap_phi_reg_pp0_iter0_data_354_V_read424_phi_reg_75295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_354_V_read424_rewind_phi_fu_30839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_354_V_read424_rewind_phi_fu_30839_p6 = data_354_V_read424_phi_reg_75295.read();
    } else {
        ap_phi_mux_data_354_V_read424_rewind_phi_fu_30839_p6 = data_354_V_read424_rewind_reg_30835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_355_V_read425_phi_phi_fu_75312_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_355_V_read425_phi_phi_fu_75312_p4 = ap_phi_mux_data_355_V_read425_rewind_phi_fu_30853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_355_V_read425_phi_phi_fu_75312_p4 = data_355_V_read.read();
        } else {
            ap_phi_mux_data_355_V_read425_phi_phi_fu_75312_p4 = ap_phi_reg_pp0_iter0_data_355_V_read425_phi_reg_75308.read();
        }
    } else {
        ap_phi_mux_data_355_V_read425_phi_phi_fu_75312_p4 = ap_phi_reg_pp0_iter0_data_355_V_read425_phi_reg_75308.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_355_V_read425_rewind_phi_fu_30853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_355_V_read425_rewind_phi_fu_30853_p6 = data_355_V_read425_phi_reg_75308.read();
    } else {
        ap_phi_mux_data_355_V_read425_rewind_phi_fu_30853_p6 = data_355_V_read425_rewind_reg_30849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_356_V_read426_phi_phi_fu_75325_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_356_V_read426_phi_phi_fu_75325_p4 = ap_phi_mux_data_356_V_read426_rewind_phi_fu_30867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_356_V_read426_phi_phi_fu_75325_p4 = data_356_V_read.read();
        } else {
            ap_phi_mux_data_356_V_read426_phi_phi_fu_75325_p4 = ap_phi_reg_pp0_iter0_data_356_V_read426_phi_reg_75321.read();
        }
    } else {
        ap_phi_mux_data_356_V_read426_phi_phi_fu_75325_p4 = ap_phi_reg_pp0_iter0_data_356_V_read426_phi_reg_75321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_356_V_read426_rewind_phi_fu_30867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_356_V_read426_rewind_phi_fu_30867_p6 = data_356_V_read426_phi_reg_75321.read();
    } else {
        ap_phi_mux_data_356_V_read426_rewind_phi_fu_30867_p6 = data_356_V_read426_rewind_reg_30863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_357_V_read427_phi_phi_fu_75338_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_357_V_read427_phi_phi_fu_75338_p4 = ap_phi_mux_data_357_V_read427_rewind_phi_fu_30881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_357_V_read427_phi_phi_fu_75338_p4 = data_357_V_read.read();
        } else {
            ap_phi_mux_data_357_V_read427_phi_phi_fu_75338_p4 = ap_phi_reg_pp0_iter0_data_357_V_read427_phi_reg_75334.read();
        }
    } else {
        ap_phi_mux_data_357_V_read427_phi_phi_fu_75338_p4 = ap_phi_reg_pp0_iter0_data_357_V_read427_phi_reg_75334.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_357_V_read427_rewind_phi_fu_30881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_357_V_read427_rewind_phi_fu_30881_p6 = data_357_V_read427_phi_reg_75334.read();
    } else {
        ap_phi_mux_data_357_V_read427_rewind_phi_fu_30881_p6 = data_357_V_read427_rewind_reg_30877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_358_V_read428_phi_phi_fu_75351_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_358_V_read428_phi_phi_fu_75351_p4 = ap_phi_mux_data_358_V_read428_rewind_phi_fu_30895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_358_V_read428_phi_phi_fu_75351_p4 = data_358_V_read.read();
        } else {
            ap_phi_mux_data_358_V_read428_phi_phi_fu_75351_p4 = ap_phi_reg_pp0_iter0_data_358_V_read428_phi_reg_75347.read();
        }
    } else {
        ap_phi_mux_data_358_V_read428_phi_phi_fu_75351_p4 = ap_phi_reg_pp0_iter0_data_358_V_read428_phi_reg_75347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_358_V_read428_rewind_phi_fu_30895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_358_V_read428_rewind_phi_fu_30895_p6 = data_358_V_read428_phi_reg_75347.read();
    } else {
        ap_phi_mux_data_358_V_read428_rewind_phi_fu_30895_p6 = data_358_V_read428_rewind_reg_30891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_359_V_read429_phi_phi_fu_75364_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_359_V_read429_phi_phi_fu_75364_p4 = ap_phi_mux_data_359_V_read429_rewind_phi_fu_30909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_359_V_read429_phi_phi_fu_75364_p4 = data_359_V_read.read();
        } else {
            ap_phi_mux_data_359_V_read429_phi_phi_fu_75364_p4 = ap_phi_reg_pp0_iter0_data_359_V_read429_phi_reg_75360.read();
        }
    } else {
        ap_phi_mux_data_359_V_read429_phi_phi_fu_75364_p4 = ap_phi_reg_pp0_iter0_data_359_V_read429_phi_reg_75360.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_359_V_read429_rewind_phi_fu_30909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_359_V_read429_rewind_phi_fu_30909_p6 = data_359_V_read429_phi_reg_75360.read();
    } else {
        ap_phi_mux_data_359_V_read429_rewind_phi_fu_30909_p6 = data_359_V_read429_rewind_reg_30905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_35_V_read105_phi_phi_fu_71152_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_35_V_read105_phi_phi_fu_71152_p4 = ap_phi_mux_data_35_V_read105_rewind_phi_fu_26373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_35_V_read105_phi_phi_fu_71152_p4 = data_35_V_read.read();
        } else {
            ap_phi_mux_data_35_V_read105_phi_phi_fu_71152_p4 = ap_phi_reg_pp0_iter0_data_35_V_read105_phi_reg_71148.read();
        }
    } else {
        ap_phi_mux_data_35_V_read105_phi_phi_fu_71152_p4 = ap_phi_reg_pp0_iter0_data_35_V_read105_phi_reg_71148.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_35_V_read105_rewind_phi_fu_26373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_35_V_read105_rewind_phi_fu_26373_p6 = data_35_V_read105_phi_reg_71148.read();
    } else {
        ap_phi_mux_data_35_V_read105_rewind_phi_fu_26373_p6 = data_35_V_read105_rewind_reg_26369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_360_V_read430_phi_phi_fu_75377_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_360_V_read430_phi_phi_fu_75377_p4 = ap_phi_mux_data_360_V_read430_rewind_phi_fu_30923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_360_V_read430_phi_phi_fu_75377_p4 = data_360_V_read.read();
        } else {
            ap_phi_mux_data_360_V_read430_phi_phi_fu_75377_p4 = ap_phi_reg_pp0_iter0_data_360_V_read430_phi_reg_75373.read();
        }
    } else {
        ap_phi_mux_data_360_V_read430_phi_phi_fu_75377_p4 = ap_phi_reg_pp0_iter0_data_360_V_read430_phi_reg_75373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_360_V_read430_rewind_phi_fu_30923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_360_V_read430_rewind_phi_fu_30923_p6 = data_360_V_read430_phi_reg_75373.read();
    } else {
        ap_phi_mux_data_360_V_read430_rewind_phi_fu_30923_p6 = data_360_V_read430_rewind_reg_30919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_361_V_read431_phi_phi_fu_75390_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_361_V_read431_phi_phi_fu_75390_p4 = ap_phi_mux_data_361_V_read431_rewind_phi_fu_30937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_361_V_read431_phi_phi_fu_75390_p4 = data_361_V_read.read();
        } else {
            ap_phi_mux_data_361_V_read431_phi_phi_fu_75390_p4 = ap_phi_reg_pp0_iter0_data_361_V_read431_phi_reg_75386.read();
        }
    } else {
        ap_phi_mux_data_361_V_read431_phi_phi_fu_75390_p4 = ap_phi_reg_pp0_iter0_data_361_V_read431_phi_reg_75386.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_361_V_read431_rewind_phi_fu_30937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_361_V_read431_rewind_phi_fu_30937_p6 = data_361_V_read431_phi_reg_75386.read();
    } else {
        ap_phi_mux_data_361_V_read431_rewind_phi_fu_30937_p6 = data_361_V_read431_rewind_reg_30933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_362_V_read432_phi_phi_fu_75403_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_362_V_read432_phi_phi_fu_75403_p4 = ap_phi_mux_data_362_V_read432_rewind_phi_fu_30951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_362_V_read432_phi_phi_fu_75403_p4 = data_362_V_read.read();
        } else {
            ap_phi_mux_data_362_V_read432_phi_phi_fu_75403_p4 = ap_phi_reg_pp0_iter0_data_362_V_read432_phi_reg_75399.read();
        }
    } else {
        ap_phi_mux_data_362_V_read432_phi_phi_fu_75403_p4 = ap_phi_reg_pp0_iter0_data_362_V_read432_phi_reg_75399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_362_V_read432_rewind_phi_fu_30951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_362_V_read432_rewind_phi_fu_30951_p6 = data_362_V_read432_phi_reg_75399.read();
    } else {
        ap_phi_mux_data_362_V_read432_rewind_phi_fu_30951_p6 = data_362_V_read432_rewind_reg_30947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_363_V_read433_phi_phi_fu_75416_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_363_V_read433_phi_phi_fu_75416_p4 = ap_phi_mux_data_363_V_read433_rewind_phi_fu_30965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_363_V_read433_phi_phi_fu_75416_p4 = data_363_V_read.read();
        } else {
            ap_phi_mux_data_363_V_read433_phi_phi_fu_75416_p4 = ap_phi_reg_pp0_iter0_data_363_V_read433_phi_reg_75412.read();
        }
    } else {
        ap_phi_mux_data_363_V_read433_phi_phi_fu_75416_p4 = ap_phi_reg_pp0_iter0_data_363_V_read433_phi_reg_75412.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_363_V_read433_rewind_phi_fu_30965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_363_V_read433_rewind_phi_fu_30965_p6 = data_363_V_read433_phi_reg_75412.read();
    } else {
        ap_phi_mux_data_363_V_read433_rewind_phi_fu_30965_p6 = data_363_V_read433_rewind_reg_30961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_364_V_read434_phi_phi_fu_75429_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_364_V_read434_phi_phi_fu_75429_p4 = ap_phi_mux_data_364_V_read434_rewind_phi_fu_30979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_364_V_read434_phi_phi_fu_75429_p4 = data_364_V_read.read();
        } else {
            ap_phi_mux_data_364_V_read434_phi_phi_fu_75429_p4 = ap_phi_reg_pp0_iter0_data_364_V_read434_phi_reg_75425.read();
        }
    } else {
        ap_phi_mux_data_364_V_read434_phi_phi_fu_75429_p4 = ap_phi_reg_pp0_iter0_data_364_V_read434_phi_reg_75425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_364_V_read434_rewind_phi_fu_30979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_364_V_read434_rewind_phi_fu_30979_p6 = data_364_V_read434_phi_reg_75425.read();
    } else {
        ap_phi_mux_data_364_V_read434_rewind_phi_fu_30979_p6 = data_364_V_read434_rewind_reg_30975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_365_V_read435_phi_phi_fu_75442_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_365_V_read435_phi_phi_fu_75442_p4 = ap_phi_mux_data_365_V_read435_rewind_phi_fu_30993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_365_V_read435_phi_phi_fu_75442_p4 = data_365_V_read.read();
        } else {
            ap_phi_mux_data_365_V_read435_phi_phi_fu_75442_p4 = ap_phi_reg_pp0_iter0_data_365_V_read435_phi_reg_75438.read();
        }
    } else {
        ap_phi_mux_data_365_V_read435_phi_phi_fu_75442_p4 = ap_phi_reg_pp0_iter0_data_365_V_read435_phi_reg_75438.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_365_V_read435_rewind_phi_fu_30993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_365_V_read435_rewind_phi_fu_30993_p6 = data_365_V_read435_phi_reg_75438.read();
    } else {
        ap_phi_mux_data_365_V_read435_rewind_phi_fu_30993_p6 = data_365_V_read435_rewind_reg_30989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_366_V_read436_phi_phi_fu_75455_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_366_V_read436_phi_phi_fu_75455_p4 = ap_phi_mux_data_366_V_read436_rewind_phi_fu_31007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_366_V_read436_phi_phi_fu_75455_p4 = data_366_V_read.read();
        } else {
            ap_phi_mux_data_366_V_read436_phi_phi_fu_75455_p4 = ap_phi_reg_pp0_iter0_data_366_V_read436_phi_reg_75451.read();
        }
    } else {
        ap_phi_mux_data_366_V_read436_phi_phi_fu_75455_p4 = ap_phi_reg_pp0_iter0_data_366_V_read436_phi_reg_75451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_366_V_read436_rewind_phi_fu_31007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_366_V_read436_rewind_phi_fu_31007_p6 = data_366_V_read436_phi_reg_75451.read();
    } else {
        ap_phi_mux_data_366_V_read436_rewind_phi_fu_31007_p6 = data_366_V_read436_rewind_reg_31003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_367_V_read437_phi_phi_fu_75468_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_367_V_read437_phi_phi_fu_75468_p4 = ap_phi_mux_data_367_V_read437_rewind_phi_fu_31021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_367_V_read437_phi_phi_fu_75468_p4 = data_367_V_read.read();
        } else {
            ap_phi_mux_data_367_V_read437_phi_phi_fu_75468_p4 = ap_phi_reg_pp0_iter0_data_367_V_read437_phi_reg_75464.read();
        }
    } else {
        ap_phi_mux_data_367_V_read437_phi_phi_fu_75468_p4 = ap_phi_reg_pp0_iter0_data_367_V_read437_phi_reg_75464.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_367_V_read437_rewind_phi_fu_31021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_367_V_read437_rewind_phi_fu_31021_p6 = data_367_V_read437_phi_reg_75464.read();
    } else {
        ap_phi_mux_data_367_V_read437_rewind_phi_fu_31021_p6 = data_367_V_read437_rewind_reg_31017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_368_V_read438_phi_phi_fu_75481_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_368_V_read438_phi_phi_fu_75481_p4 = ap_phi_mux_data_368_V_read438_rewind_phi_fu_31035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_368_V_read438_phi_phi_fu_75481_p4 = data_368_V_read.read();
        } else {
            ap_phi_mux_data_368_V_read438_phi_phi_fu_75481_p4 = ap_phi_reg_pp0_iter0_data_368_V_read438_phi_reg_75477.read();
        }
    } else {
        ap_phi_mux_data_368_V_read438_phi_phi_fu_75481_p4 = ap_phi_reg_pp0_iter0_data_368_V_read438_phi_reg_75477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_368_V_read438_rewind_phi_fu_31035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_368_V_read438_rewind_phi_fu_31035_p6 = data_368_V_read438_phi_reg_75477.read();
    } else {
        ap_phi_mux_data_368_V_read438_rewind_phi_fu_31035_p6 = data_368_V_read438_rewind_reg_31031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_369_V_read439_phi_phi_fu_75494_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_369_V_read439_phi_phi_fu_75494_p4 = ap_phi_mux_data_369_V_read439_rewind_phi_fu_31049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_369_V_read439_phi_phi_fu_75494_p4 = data_369_V_read.read();
        } else {
            ap_phi_mux_data_369_V_read439_phi_phi_fu_75494_p4 = ap_phi_reg_pp0_iter0_data_369_V_read439_phi_reg_75490.read();
        }
    } else {
        ap_phi_mux_data_369_V_read439_phi_phi_fu_75494_p4 = ap_phi_reg_pp0_iter0_data_369_V_read439_phi_reg_75490.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_369_V_read439_rewind_phi_fu_31049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_369_V_read439_rewind_phi_fu_31049_p6 = data_369_V_read439_phi_reg_75490.read();
    } else {
        ap_phi_mux_data_369_V_read439_rewind_phi_fu_31049_p6 = data_369_V_read439_rewind_reg_31045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_36_V_read106_phi_phi_fu_71165_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_36_V_read106_phi_phi_fu_71165_p4 = ap_phi_mux_data_36_V_read106_rewind_phi_fu_26387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_36_V_read106_phi_phi_fu_71165_p4 = data_36_V_read.read();
        } else {
            ap_phi_mux_data_36_V_read106_phi_phi_fu_71165_p4 = ap_phi_reg_pp0_iter0_data_36_V_read106_phi_reg_71161.read();
        }
    } else {
        ap_phi_mux_data_36_V_read106_phi_phi_fu_71165_p4 = ap_phi_reg_pp0_iter0_data_36_V_read106_phi_reg_71161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_36_V_read106_rewind_phi_fu_26387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_36_V_read106_rewind_phi_fu_26387_p6 = data_36_V_read106_phi_reg_71161.read();
    } else {
        ap_phi_mux_data_36_V_read106_rewind_phi_fu_26387_p6 = data_36_V_read106_rewind_reg_26383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_370_V_read440_phi_phi_fu_75507_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_370_V_read440_phi_phi_fu_75507_p4 = ap_phi_mux_data_370_V_read440_rewind_phi_fu_31063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_370_V_read440_phi_phi_fu_75507_p4 = data_370_V_read.read();
        } else {
            ap_phi_mux_data_370_V_read440_phi_phi_fu_75507_p4 = ap_phi_reg_pp0_iter0_data_370_V_read440_phi_reg_75503.read();
        }
    } else {
        ap_phi_mux_data_370_V_read440_phi_phi_fu_75507_p4 = ap_phi_reg_pp0_iter0_data_370_V_read440_phi_reg_75503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_370_V_read440_rewind_phi_fu_31063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_370_V_read440_rewind_phi_fu_31063_p6 = data_370_V_read440_phi_reg_75503.read();
    } else {
        ap_phi_mux_data_370_V_read440_rewind_phi_fu_31063_p6 = data_370_V_read440_rewind_reg_31059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_371_V_read441_phi_phi_fu_75520_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_371_V_read441_phi_phi_fu_75520_p4 = ap_phi_mux_data_371_V_read441_rewind_phi_fu_31077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_371_V_read441_phi_phi_fu_75520_p4 = data_371_V_read.read();
        } else {
            ap_phi_mux_data_371_V_read441_phi_phi_fu_75520_p4 = ap_phi_reg_pp0_iter0_data_371_V_read441_phi_reg_75516.read();
        }
    } else {
        ap_phi_mux_data_371_V_read441_phi_phi_fu_75520_p4 = ap_phi_reg_pp0_iter0_data_371_V_read441_phi_reg_75516.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_371_V_read441_rewind_phi_fu_31077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_371_V_read441_rewind_phi_fu_31077_p6 = data_371_V_read441_phi_reg_75516.read();
    } else {
        ap_phi_mux_data_371_V_read441_rewind_phi_fu_31077_p6 = data_371_V_read441_rewind_reg_31073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_372_V_read442_phi_phi_fu_75533_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_372_V_read442_phi_phi_fu_75533_p4 = ap_phi_mux_data_372_V_read442_rewind_phi_fu_31091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_372_V_read442_phi_phi_fu_75533_p4 = data_372_V_read.read();
        } else {
            ap_phi_mux_data_372_V_read442_phi_phi_fu_75533_p4 = ap_phi_reg_pp0_iter0_data_372_V_read442_phi_reg_75529.read();
        }
    } else {
        ap_phi_mux_data_372_V_read442_phi_phi_fu_75533_p4 = ap_phi_reg_pp0_iter0_data_372_V_read442_phi_reg_75529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_372_V_read442_rewind_phi_fu_31091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_372_V_read442_rewind_phi_fu_31091_p6 = data_372_V_read442_phi_reg_75529.read();
    } else {
        ap_phi_mux_data_372_V_read442_rewind_phi_fu_31091_p6 = data_372_V_read442_rewind_reg_31087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_373_V_read443_phi_phi_fu_75546_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_373_V_read443_phi_phi_fu_75546_p4 = ap_phi_mux_data_373_V_read443_rewind_phi_fu_31105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_373_V_read443_phi_phi_fu_75546_p4 = data_373_V_read.read();
        } else {
            ap_phi_mux_data_373_V_read443_phi_phi_fu_75546_p4 = ap_phi_reg_pp0_iter0_data_373_V_read443_phi_reg_75542.read();
        }
    } else {
        ap_phi_mux_data_373_V_read443_phi_phi_fu_75546_p4 = ap_phi_reg_pp0_iter0_data_373_V_read443_phi_reg_75542.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_373_V_read443_rewind_phi_fu_31105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_373_V_read443_rewind_phi_fu_31105_p6 = data_373_V_read443_phi_reg_75542.read();
    } else {
        ap_phi_mux_data_373_V_read443_rewind_phi_fu_31105_p6 = data_373_V_read443_rewind_reg_31101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_374_V_read444_phi_phi_fu_75559_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_374_V_read444_phi_phi_fu_75559_p4 = ap_phi_mux_data_374_V_read444_rewind_phi_fu_31119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_374_V_read444_phi_phi_fu_75559_p4 = data_374_V_read.read();
        } else {
            ap_phi_mux_data_374_V_read444_phi_phi_fu_75559_p4 = ap_phi_reg_pp0_iter0_data_374_V_read444_phi_reg_75555.read();
        }
    } else {
        ap_phi_mux_data_374_V_read444_phi_phi_fu_75559_p4 = ap_phi_reg_pp0_iter0_data_374_V_read444_phi_reg_75555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_374_V_read444_rewind_phi_fu_31119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_374_V_read444_rewind_phi_fu_31119_p6 = data_374_V_read444_phi_reg_75555.read();
    } else {
        ap_phi_mux_data_374_V_read444_rewind_phi_fu_31119_p6 = data_374_V_read444_rewind_reg_31115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_375_V_read445_phi_phi_fu_75572_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_375_V_read445_phi_phi_fu_75572_p4 = ap_phi_mux_data_375_V_read445_rewind_phi_fu_31133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_375_V_read445_phi_phi_fu_75572_p4 = data_375_V_read.read();
        } else {
            ap_phi_mux_data_375_V_read445_phi_phi_fu_75572_p4 = ap_phi_reg_pp0_iter0_data_375_V_read445_phi_reg_75568.read();
        }
    } else {
        ap_phi_mux_data_375_V_read445_phi_phi_fu_75572_p4 = ap_phi_reg_pp0_iter0_data_375_V_read445_phi_reg_75568.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_375_V_read445_rewind_phi_fu_31133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_375_V_read445_rewind_phi_fu_31133_p6 = data_375_V_read445_phi_reg_75568.read();
    } else {
        ap_phi_mux_data_375_V_read445_rewind_phi_fu_31133_p6 = data_375_V_read445_rewind_reg_31129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_376_V_read446_phi_phi_fu_75585_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_376_V_read446_phi_phi_fu_75585_p4 = ap_phi_mux_data_376_V_read446_rewind_phi_fu_31147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_376_V_read446_phi_phi_fu_75585_p4 = data_376_V_read.read();
        } else {
            ap_phi_mux_data_376_V_read446_phi_phi_fu_75585_p4 = ap_phi_reg_pp0_iter0_data_376_V_read446_phi_reg_75581.read();
        }
    } else {
        ap_phi_mux_data_376_V_read446_phi_phi_fu_75585_p4 = ap_phi_reg_pp0_iter0_data_376_V_read446_phi_reg_75581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_376_V_read446_rewind_phi_fu_31147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_376_V_read446_rewind_phi_fu_31147_p6 = data_376_V_read446_phi_reg_75581.read();
    } else {
        ap_phi_mux_data_376_V_read446_rewind_phi_fu_31147_p6 = data_376_V_read446_rewind_reg_31143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_377_V_read447_phi_phi_fu_75598_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_377_V_read447_phi_phi_fu_75598_p4 = ap_phi_mux_data_377_V_read447_rewind_phi_fu_31161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_377_V_read447_phi_phi_fu_75598_p4 = data_377_V_read.read();
        } else {
            ap_phi_mux_data_377_V_read447_phi_phi_fu_75598_p4 = ap_phi_reg_pp0_iter0_data_377_V_read447_phi_reg_75594.read();
        }
    } else {
        ap_phi_mux_data_377_V_read447_phi_phi_fu_75598_p4 = ap_phi_reg_pp0_iter0_data_377_V_read447_phi_reg_75594.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_377_V_read447_rewind_phi_fu_31161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_377_V_read447_rewind_phi_fu_31161_p6 = data_377_V_read447_phi_reg_75594.read();
    } else {
        ap_phi_mux_data_377_V_read447_rewind_phi_fu_31161_p6 = data_377_V_read447_rewind_reg_31157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_378_V_read448_phi_phi_fu_75611_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_378_V_read448_phi_phi_fu_75611_p4 = ap_phi_mux_data_378_V_read448_rewind_phi_fu_31175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_378_V_read448_phi_phi_fu_75611_p4 = data_378_V_read.read();
        } else {
            ap_phi_mux_data_378_V_read448_phi_phi_fu_75611_p4 = ap_phi_reg_pp0_iter0_data_378_V_read448_phi_reg_75607.read();
        }
    } else {
        ap_phi_mux_data_378_V_read448_phi_phi_fu_75611_p4 = ap_phi_reg_pp0_iter0_data_378_V_read448_phi_reg_75607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_378_V_read448_rewind_phi_fu_31175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_378_V_read448_rewind_phi_fu_31175_p6 = data_378_V_read448_phi_reg_75607.read();
    } else {
        ap_phi_mux_data_378_V_read448_rewind_phi_fu_31175_p6 = data_378_V_read448_rewind_reg_31171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_379_V_read449_phi_phi_fu_75624_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_379_V_read449_phi_phi_fu_75624_p4 = ap_phi_mux_data_379_V_read449_rewind_phi_fu_31189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_379_V_read449_phi_phi_fu_75624_p4 = data_379_V_read.read();
        } else {
            ap_phi_mux_data_379_V_read449_phi_phi_fu_75624_p4 = ap_phi_reg_pp0_iter0_data_379_V_read449_phi_reg_75620.read();
        }
    } else {
        ap_phi_mux_data_379_V_read449_phi_phi_fu_75624_p4 = ap_phi_reg_pp0_iter0_data_379_V_read449_phi_reg_75620.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_379_V_read449_rewind_phi_fu_31189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_379_V_read449_rewind_phi_fu_31189_p6 = data_379_V_read449_phi_reg_75620.read();
    } else {
        ap_phi_mux_data_379_V_read449_rewind_phi_fu_31189_p6 = data_379_V_read449_rewind_reg_31185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_37_V_read107_phi_phi_fu_71178_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_37_V_read107_phi_phi_fu_71178_p4 = ap_phi_mux_data_37_V_read107_rewind_phi_fu_26401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_37_V_read107_phi_phi_fu_71178_p4 = data_37_V_read.read();
        } else {
            ap_phi_mux_data_37_V_read107_phi_phi_fu_71178_p4 = ap_phi_reg_pp0_iter0_data_37_V_read107_phi_reg_71174.read();
        }
    } else {
        ap_phi_mux_data_37_V_read107_phi_phi_fu_71178_p4 = ap_phi_reg_pp0_iter0_data_37_V_read107_phi_reg_71174.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_37_V_read107_rewind_phi_fu_26401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_37_V_read107_rewind_phi_fu_26401_p6 = data_37_V_read107_phi_reg_71174.read();
    } else {
        ap_phi_mux_data_37_V_read107_rewind_phi_fu_26401_p6 = data_37_V_read107_rewind_reg_26397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_380_V_read450_phi_phi_fu_75637_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_380_V_read450_phi_phi_fu_75637_p4 = ap_phi_mux_data_380_V_read450_rewind_phi_fu_31203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_380_V_read450_phi_phi_fu_75637_p4 = data_380_V_read.read();
        } else {
            ap_phi_mux_data_380_V_read450_phi_phi_fu_75637_p4 = ap_phi_reg_pp0_iter0_data_380_V_read450_phi_reg_75633.read();
        }
    } else {
        ap_phi_mux_data_380_V_read450_phi_phi_fu_75637_p4 = ap_phi_reg_pp0_iter0_data_380_V_read450_phi_reg_75633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_380_V_read450_rewind_phi_fu_31203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_380_V_read450_rewind_phi_fu_31203_p6 = data_380_V_read450_phi_reg_75633.read();
    } else {
        ap_phi_mux_data_380_V_read450_rewind_phi_fu_31203_p6 = data_380_V_read450_rewind_reg_31199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_381_V_read451_phi_phi_fu_75650_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_381_V_read451_phi_phi_fu_75650_p4 = ap_phi_mux_data_381_V_read451_rewind_phi_fu_31217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_381_V_read451_phi_phi_fu_75650_p4 = data_381_V_read.read();
        } else {
            ap_phi_mux_data_381_V_read451_phi_phi_fu_75650_p4 = ap_phi_reg_pp0_iter0_data_381_V_read451_phi_reg_75646.read();
        }
    } else {
        ap_phi_mux_data_381_V_read451_phi_phi_fu_75650_p4 = ap_phi_reg_pp0_iter0_data_381_V_read451_phi_reg_75646.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_381_V_read451_rewind_phi_fu_31217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_381_V_read451_rewind_phi_fu_31217_p6 = data_381_V_read451_phi_reg_75646.read();
    } else {
        ap_phi_mux_data_381_V_read451_rewind_phi_fu_31217_p6 = data_381_V_read451_rewind_reg_31213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_382_V_read452_phi_phi_fu_75663_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_382_V_read452_phi_phi_fu_75663_p4 = ap_phi_mux_data_382_V_read452_rewind_phi_fu_31231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_382_V_read452_phi_phi_fu_75663_p4 = data_382_V_read.read();
        } else {
            ap_phi_mux_data_382_V_read452_phi_phi_fu_75663_p4 = ap_phi_reg_pp0_iter0_data_382_V_read452_phi_reg_75659.read();
        }
    } else {
        ap_phi_mux_data_382_V_read452_phi_phi_fu_75663_p4 = ap_phi_reg_pp0_iter0_data_382_V_read452_phi_reg_75659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_382_V_read452_rewind_phi_fu_31231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_382_V_read452_rewind_phi_fu_31231_p6 = data_382_V_read452_phi_reg_75659.read();
    } else {
        ap_phi_mux_data_382_V_read452_rewind_phi_fu_31231_p6 = data_382_V_read452_rewind_reg_31227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_383_V_read453_phi_phi_fu_75676_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_383_V_read453_phi_phi_fu_75676_p4 = ap_phi_mux_data_383_V_read453_rewind_phi_fu_31245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_383_V_read453_phi_phi_fu_75676_p4 = data_383_V_read.read();
        } else {
            ap_phi_mux_data_383_V_read453_phi_phi_fu_75676_p4 = ap_phi_reg_pp0_iter0_data_383_V_read453_phi_reg_75672.read();
        }
    } else {
        ap_phi_mux_data_383_V_read453_phi_phi_fu_75676_p4 = ap_phi_reg_pp0_iter0_data_383_V_read453_phi_reg_75672.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_383_V_read453_rewind_phi_fu_31245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_383_V_read453_rewind_phi_fu_31245_p6 = data_383_V_read453_phi_reg_75672.read();
    } else {
        ap_phi_mux_data_383_V_read453_rewind_phi_fu_31245_p6 = data_383_V_read453_rewind_reg_31241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_384_V_read454_phi_phi_fu_75689_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_384_V_read454_phi_phi_fu_75689_p4 = ap_phi_mux_data_384_V_read454_rewind_phi_fu_31259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_384_V_read454_phi_phi_fu_75689_p4 = data_384_V_read.read();
        } else {
            ap_phi_mux_data_384_V_read454_phi_phi_fu_75689_p4 = ap_phi_reg_pp0_iter0_data_384_V_read454_phi_reg_75685.read();
        }
    } else {
        ap_phi_mux_data_384_V_read454_phi_phi_fu_75689_p4 = ap_phi_reg_pp0_iter0_data_384_V_read454_phi_reg_75685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_384_V_read454_rewind_phi_fu_31259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_384_V_read454_rewind_phi_fu_31259_p6 = data_384_V_read454_phi_reg_75685.read();
    } else {
        ap_phi_mux_data_384_V_read454_rewind_phi_fu_31259_p6 = data_384_V_read454_rewind_reg_31255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_385_V_read455_phi_phi_fu_75702_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_385_V_read455_phi_phi_fu_75702_p4 = ap_phi_mux_data_385_V_read455_rewind_phi_fu_31273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_385_V_read455_phi_phi_fu_75702_p4 = data_385_V_read.read();
        } else {
            ap_phi_mux_data_385_V_read455_phi_phi_fu_75702_p4 = ap_phi_reg_pp0_iter0_data_385_V_read455_phi_reg_75698.read();
        }
    } else {
        ap_phi_mux_data_385_V_read455_phi_phi_fu_75702_p4 = ap_phi_reg_pp0_iter0_data_385_V_read455_phi_reg_75698.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_385_V_read455_rewind_phi_fu_31273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_385_V_read455_rewind_phi_fu_31273_p6 = data_385_V_read455_phi_reg_75698.read();
    } else {
        ap_phi_mux_data_385_V_read455_rewind_phi_fu_31273_p6 = data_385_V_read455_rewind_reg_31269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_386_V_read456_phi_phi_fu_75715_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_386_V_read456_phi_phi_fu_75715_p4 = ap_phi_mux_data_386_V_read456_rewind_phi_fu_31287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_386_V_read456_phi_phi_fu_75715_p4 = data_386_V_read.read();
        } else {
            ap_phi_mux_data_386_V_read456_phi_phi_fu_75715_p4 = ap_phi_reg_pp0_iter0_data_386_V_read456_phi_reg_75711.read();
        }
    } else {
        ap_phi_mux_data_386_V_read456_phi_phi_fu_75715_p4 = ap_phi_reg_pp0_iter0_data_386_V_read456_phi_reg_75711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_386_V_read456_rewind_phi_fu_31287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_386_V_read456_rewind_phi_fu_31287_p6 = data_386_V_read456_phi_reg_75711.read();
    } else {
        ap_phi_mux_data_386_V_read456_rewind_phi_fu_31287_p6 = data_386_V_read456_rewind_reg_31283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_387_V_read457_phi_phi_fu_75728_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_387_V_read457_phi_phi_fu_75728_p4 = ap_phi_mux_data_387_V_read457_rewind_phi_fu_31301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_387_V_read457_phi_phi_fu_75728_p4 = data_387_V_read.read();
        } else {
            ap_phi_mux_data_387_V_read457_phi_phi_fu_75728_p4 = ap_phi_reg_pp0_iter0_data_387_V_read457_phi_reg_75724.read();
        }
    } else {
        ap_phi_mux_data_387_V_read457_phi_phi_fu_75728_p4 = ap_phi_reg_pp0_iter0_data_387_V_read457_phi_reg_75724.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_387_V_read457_rewind_phi_fu_31301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_387_V_read457_rewind_phi_fu_31301_p6 = data_387_V_read457_phi_reg_75724.read();
    } else {
        ap_phi_mux_data_387_V_read457_rewind_phi_fu_31301_p6 = data_387_V_read457_rewind_reg_31297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_388_V_read458_phi_phi_fu_75741_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_388_V_read458_phi_phi_fu_75741_p4 = ap_phi_mux_data_388_V_read458_rewind_phi_fu_31315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_388_V_read458_phi_phi_fu_75741_p4 = data_388_V_read.read();
        } else {
            ap_phi_mux_data_388_V_read458_phi_phi_fu_75741_p4 = ap_phi_reg_pp0_iter0_data_388_V_read458_phi_reg_75737.read();
        }
    } else {
        ap_phi_mux_data_388_V_read458_phi_phi_fu_75741_p4 = ap_phi_reg_pp0_iter0_data_388_V_read458_phi_reg_75737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_388_V_read458_rewind_phi_fu_31315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_388_V_read458_rewind_phi_fu_31315_p6 = data_388_V_read458_phi_reg_75737.read();
    } else {
        ap_phi_mux_data_388_V_read458_rewind_phi_fu_31315_p6 = data_388_V_read458_rewind_reg_31311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_389_V_read459_phi_phi_fu_75754_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_389_V_read459_phi_phi_fu_75754_p4 = ap_phi_mux_data_389_V_read459_rewind_phi_fu_31329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_389_V_read459_phi_phi_fu_75754_p4 = data_389_V_read.read();
        } else {
            ap_phi_mux_data_389_V_read459_phi_phi_fu_75754_p4 = ap_phi_reg_pp0_iter0_data_389_V_read459_phi_reg_75750.read();
        }
    } else {
        ap_phi_mux_data_389_V_read459_phi_phi_fu_75754_p4 = ap_phi_reg_pp0_iter0_data_389_V_read459_phi_reg_75750.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_389_V_read459_rewind_phi_fu_31329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_389_V_read459_rewind_phi_fu_31329_p6 = data_389_V_read459_phi_reg_75750.read();
    } else {
        ap_phi_mux_data_389_V_read459_rewind_phi_fu_31329_p6 = data_389_V_read459_rewind_reg_31325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_38_V_read108_phi_phi_fu_71191_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_38_V_read108_phi_phi_fu_71191_p4 = ap_phi_mux_data_38_V_read108_rewind_phi_fu_26415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_38_V_read108_phi_phi_fu_71191_p4 = data_38_V_read.read();
        } else {
            ap_phi_mux_data_38_V_read108_phi_phi_fu_71191_p4 = ap_phi_reg_pp0_iter0_data_38_V_read108_phi_reg_71187.read();
        }
    } else {
        ap_phi_mux_data_38_V_read108_phi_phi_fu_71191_p4 = ap_phi_reg_pp0_iter0_data_38_V_read108_phi_reg_71187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_38_V_read108_rewind_phi_fu_26415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_38_V_read108_rewind_phi_fu_26415_p6 = data_38_V_read108_phi_reg_71187.read();
    } else {
        ap_phi_mux_data_38_V_read108_rewind_phi_fu_26415_p6 = data_38_V_read108_rewind_reg_26411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_390_V_read460_phi_phi_fu_75767_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_390_V_read460_phi_phi_fu_75767_p4 = ap_phi_mux_data_390_V_read460_rewind_phi_fu_31343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_390_V_read460_phi_phi_fu_75767_p4 = data_390_V_read.read();
        } else {
            ap_phi_mux_data_390_V_read460_phi_phi_fu_75767_p4 = ap_phi_reg_pp0_iter0_data_390_V_read460_phi_reg_75763.read();
        }
    } else {
        ap_phi_mux_data_390_V_read460_phi_phi_fu_75767_p4 = ap_phi_reg_pp0_iter0_data_390_V_read460_phi_reg_75763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_390_V_read460_rewind_phi_fu_31343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_390_V_read460_rewind_phi_fu_31343_p6 = data_390_V_read460_phi_reg_75763.read();
    } else {
        ap_phi_mux_data_390_V_read460_rewind_phi_fu_31343_p6 = data_390_V_read460_rewind_reg_31339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_391_V_read461_phi_phi_fu_75780_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_391_V_read461_phi_phi_fu_75780_p4 = ap_phi_mux_data_391_V_read461_rewind_phi_fu_31357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_391_V_read461_phi_phi_fu_75780_p4 = data_391_V_read.read();
        } else {
            ap_phi_mux_data_391_V_read461_phi_phi_fu_75780_p4 = ap_phi_reg_pp0_iter0_data_391_V_read461_phi_reg_75776.read();
        }
    } else {
        ap_phi_mux_data_391_V_read461_phi_phi_fu_75780_p4 = ap_phi_reg_pp0_iter0_data_391_V_read461_phi_reg_75776.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_391_V_read461_rewind_phi_fu_31357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_391_V_read461_rewind_phi_fu_31357_p6 = data_391_V_read461_phi_reg_75776.read();
    } else {
        ap_phi_mux_data_391_V_read461_rewind_phi_fu_31357_p6 = data_391_V_read461_rewind_reg_31353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_392_V_read462_phi_phi_fu_75793_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_392_V_read462_phi_phi_fu_75793_p4 = ap_phi_mux_data_392_V_read462_rewind_phi_fu_31371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_392_V_read462_phi_phi_fu_75793_p4 = data_392_V_read.read();
        } else {
            ap_phi_mux_data_392_V_read462_phi_phi_fu_75793_p4 = ap_phi_reg_pp0_iter0_data_392_V_read462_phi_reg_75789.read();
        }
    } else {
        ap_phi_mux_data_392_V_read462_phi_phi_fu_75793_p4 = ap_phi_reg_pp0_iter0_data_392_V_read462_phi_reg_75789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_392_V_read462_rewind_phi_fu_31371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_392_V_read462_rewind_phi_fu_31371_p6 = data_392_V_read462_phi_reg_75789.read();
    } else {
        ap_phi_mux_data_392_V_read462_rewind_phi_fu_31371_p6 = data_392_V_read462_rewind_reg_31367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_393_V_read463_phi_phi_fu_75806_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_393_V_read463_phi_phi_fu_75806_p4 = ap_phi_mux_data_393_V_read463_rewind_phi_fu_31385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_393_V_read463_phi_phi_fu_75806_p4 = data_393_V_read.read();
        } else {
            ap_phi_mux_data_393_V_read463_phi_phi_fu_75806_p4 = ap_phi_reg_pp0_iter0_data_393_V_read463_phi_reg_75802.read();
        }
    } else {
        ap_phi_mux_data_393_V_read463_phi_phi_fu_75806_p4 = ap_phi_reg_pp0_iter0_data_393_V_read463_phi_reg_75802.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_393_V_read463_rewind_phi_fu_31385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_393_V_read463_rewind_phi_fu_31385_p6 = data_393_V_read463_phi_reg_75802.read();
    } else {
        ap_phi_mux_data_393_V_read463_rewind_phi_fu_31385_p6 = data_393_V_read463_rewind_reg_31381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_394_V_read464_phi_phi_fu_75819_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_394_V_read464_phi_phi_fu_75819_p4 = ap_phi_mux_data_394_V_read464_rewind_phi_fu_31399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_394_V_read464_phi_phi_fu_75819_p4 = data_394_V_read.read();
        } else {
            ap_phi_mux_data_394_V_read464_phi_phi_fu_75819_p4 = ap_phi_reg_pp0_iter0_data_394_V_read464_phi_reg_75815.read();
        }
    } else {
        ap_phi_mux_data_394_V_read464_phi_phi_fu_75819_p4 = ap_phi_reg_pp0_iter0_data_394_V_read464_phi_reg_75815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_394_V_read464_rewind_phi_fu_31399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_394_V_read464_rewind_phi_fu_31399_p6 = data_394_V_read464_phi_reg_75815.read();
    } else {
        ap_phi_mux_data_394_V_read464_rewind_phi_fu_31399_p6 = data_394_V_read464_rewind_reg_31395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_395_V_read465_phi_phi_fu_75832_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_395_V_read465_phi_phi_fu_75832_p4 = ap_phi_mux_data_395_V_read465_rewind_phi_fu_31413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_395_V_read465_phi_phi_fu_75832_p4 = data_395_V_read.read();
        } else {
            ap_phi_mux_data_395_V_read465_phi_phi_fu_75832_p4 = ap_phi_reg_pp0_iter0_data_395_V_read465_phi_reg_75828.read();
        }
    } else {
        ap_phi_mux_data_395_V_read465_phi_phi_fu_75832_p4 = ap_phi_reg_pp0_iter0_data_395_V_read465_phi_reg_75828.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_395_V_read465_rewind_phi_fu_31413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_395_V_read465_rewind_phi_fu_31413_p6 = data_395_V_read465_phi_reg_75828.read();
    } else {
        ap_phi_mux_data_395_V_read465_rewind_phi_fu_31413_p6 = data_395_V_read465_rewind_reg_31409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_396_V_read466_phi_phi_fu_75845_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_396_V_read466_phi_phi_fu_75845_p4 = ap_phi_mux_data_396_V_read466_rewind_phi_fu_31427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_396_V_read466_phi_phi_fu_75845_p4 = data_396_V_read.read();
        } else {
            ap_phi_mux_data_396_V_read466_phi_phi_fu_75845_p4 = ap_phi_reg_pp0_iter0_data_396_V_read466_phi_reg_75841.read();
        }
    } else {
        ap_phi_mux_data_396_V_read466_phi_phi_fu_75845_p4 = ap_phi_reg_pp0_iter0_data_396_V_read466_phi_reg_75841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_396_V_read466_rewind_phi_fu_31427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_396_V_read466_rewind_phi_fu_31427_p6 = data_396_V_read466_phi_reg_75841.read();
    } else {
        ap_phi_mux_data_396_V_read466_rewind_phi_fu_31427_p6 = data_396_V_read466_rewind_reg_31423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_397_V_read467_phi_phi_fu_75858_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_397_V_read467_phi_phi_fu_75858_p4 = ap_phi_mux_data_397_V_read467_rewind_phi_fu_31441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_397_V_read467_phi_phi_fu_75858_p4 = data_397_V_read.read();
        } else {
            ap_phi_mux_data_397_V_read467_phi_phi_fu_75858_p4 = ap_phi_reg_pp0_iter0_data_397_V_read467_phi_reg_75854.read();
        }
    } else {
        ap_phi_mux_data_397_V_read467_phi_phi_fu_75858_p4 = ap_phi_reg_pp0_iter0_data_397_V_read467_phi_reg_75854.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_397_V_read467_rewind_phi_fu_31441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_397_V_read467_rewind_phi_fu_31441_p6 = data_397_V_read467_phi_reg_75854.read();
    } else {
        ap_phi_mux_data_397_V_read467_rewind_phi_fu_31441_p6 = data_397_V_read467_rewind_reg_31437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_398_V_read468_phi_phi_fu_75871_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_398_V_read468_phi_phi_fu_75871_p4 = ap_phi_mux_data_398_V_read468_rewind_phi_fu_31455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_398_V_read468_phi_phi_fu_75871_p4 = data_398_V_read.read();
        } else {
            ap_phi_mux_data_398_V_read468_phi_phi_fu_75871_p4 = ap_phi_reg_pp0_iter0_data_398_V_read468_phi_reg_75867.read();
        }
    } else {
        ap_phi_mux_data_398_V_read468_phi_phi_fu_75871_p4 = ap_phi_reg_pp0_iter0_data_398_V_read468_phi_reg_75867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_398_V_read468_rewind_phi_fu_31455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_398_V_read468_rewind_phi_fu_31455_p6 = data_398_V_read468_phi_reg_75867.read();
    } else {
        ap_phi_mux_data_398_V_read468_rewind_phi_fu_31455_p6 = data_398_V_read468_rewind_reg_31451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_399_V_read469_phi_phi_fu_75884_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_399_V_read469_phi_phi_fu_75884_p4 = ap_phi_mux_data_399_V_read469_rewind_phi_fu_31469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_399_V_read469_phi_phi_fu_75884_p4 = data_399_V_read.read();
        } else {
            ap_phi_mux_data_399_V_read469_phi_phi_fu_75884_p4 = ap_phi_reg_pp0_iter0_data_399_V_read469_phi_reg_75880.read();
        }
    } else {
        ap_phi_mux_data_399_V_read469_phi_phi_fu_75884_p4 = ap_phi_reg_pp0_iter0_data_399_V_read469_phi_reg_75880.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_399_V_read469_rewind_phi_fu_31469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_399_V_read469_rewind_phi_fu_31469_p6 = data_399_V_read469_phi_reg_75880.read();
    } else {
        ap_phi_mux_data_399_V_read469_rewind_phi_fu_31469_p6 = data_399_V_read469_rewind_reg_31465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_39_V_read109_phi_phi_fu_71204_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_39_V_read109_phi_phi_fu_71204_p4 = ap_phi_mux_data_39_V_read109_rewind_phi_fu_26429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_39_V_read109_phi_phi_fu_71204_p4 = data_39_V_read.read();
        } else {
            ap_phi_mux_data_39_V_read109_phi_phi_fu_71204_p4 = ap_phi_reg_pp0_iter0_data_39_V_read109_phi_reg_71200.read();
        }
    } else {
        ap_phi_mux_data_39_V_read109_phi_phi_fu_71204_p4 = ap_phi_reg_pp0_iter0_data_39_V_read109_phi_reg_71200.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_39_V_read109_rewind_phi_fu_26429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_39_V_read109_rewind_phi_fu_26429_p6 = data_39_V_read109_phi_reg_71200.read();
    } else {
        ap_phi_mux_data_39_V_read109_rewind_phi_fu_26429_p6 = data_39_V_read109_rewind_reg_26425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3_V_read73_phi_phi_fu_70736_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_3_V_read73_phi_phi_fu_70736_p4 = ap_phi_mux_data_3_V_read73_rewind_phi_fu_25925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_3_V_read73_phi_phi_fu_70736_p4 = data_3_V_read.read();
        } else {
            ap_phi_mux_data_3_V_read73_phi_phi_fu_70736_p4 = ap_phi_reg_pp0_iter0_data_3_V_read73_phi_reg_70732.read();
        }
    } else {
        ap_phi_mux_data_3_V_read73_phi_phi_fu_70736_p4 = ap_phi_reg_pp0_iter0_data_3_V_read73_phi_reg_70732.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_3_V_read73_rewind_phi_fu_25925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3_V_read73_rewind_phi_fu_25925_p6 = data_3_V_read73_phi_reg_70732.read();
    } else {
        ap_phi_mux_data_3_V_read73_rewind_phi_fu_25925_p6 = data_3_V_read73_rewind_reg_25921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_400_V_read470_phi_phi_fu_75897_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_400_V_read470_phi_phi_fu_75897_p4 = ap_phi_mux_data_400_V_read470_rewind_phi_fu_31483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_400_V_read470_phi_phi_fu_75897_p4 = data_400_V_read.read();
        } else {
            ap_phi_mux_data_400_V_read470_phi_phi_fu_75897_p4 = ap_phi_reg_pp0_iter0_data_400_V_read470_phi_reg_75893.read();
        }
    } else {
        ap_phi_mux_data_400_V_read470_phi_phi_fu_75897_p4 = ap_phi_reg_pp0_iter0_data_400_V_read470_phi_reg_75893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_400_V_read470_rewind_phi_fu_31483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_400_V_read470_rewind_phi_fu_31483_p6 = data_400_V_read470_phi_reg_75893.read();
    } else {
        ap_phi_mux_data_400_V_read470_rewind_phi_fu_31483_p6 = data_400_V_read470_rewind_reg_31479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_401_V_read471_phi_phi_fu_75910_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_401_V_read471_phi_phi_fu_75910_p4 = ap_phi_mux_data_401_V_read471_rewind_phi_fu_31497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_401_V_read471_phi_phi_fu_75910_p4 = data_401_V_read.read();
        } else {
            ap_phi_mux_data_401_V_read471_phi_phi_fu_75910_p4 = ap_phi_reg_pp0_iter0_data_401_V_read471_phi_reg_75906.read();
        }
    } else {
        ap_phi_mux_data_401_V_read471_phi_phi_fu_75910_p4 = ap_phi_reg_pp0_iter0_data_401_V_read471_phi_reg_75906.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_401_V_read471_rewind_phi_fu_31497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_401_V_read471_rewind_phi_fu_31497_p6 = data_401_V_read471_phi_reg_75906.read();
    } else {
        ap_phi_mux_data_401_V_read471_rewind_phi_fu_31497_p6 = data_401_V_read471_rewind_reg_31493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_402_V_read472_phi_phi_fu_75923_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_402_V_read472_phi_phi_fu_75923_p4 = ap_phi_mux_data_402_V_read472_rewind_phi_fu_31511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_402_V_read472_phi_phi_fu_75923_p4 = data_402_V_read.read();
        } else {
            ap_phi_mux_data_402_V_read472_phi_phi_fu_75923_p4 = ap_phi_reg_pp0_iter0_data_402_V_read472_phi_reg_75919.read();
        }
    } else {
        ap_phi_mux_data_402_V_read472_phi_phi_fu_75923_p4 = ap_phi_reg_pp0_iter0_data_402_V_read472_phi_reg_75919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_402_V_read472_rewind_phi_fu_31511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_402_V_read472_rewind_phi_fu_31511_p6 = data_402_V_read472_phi_reg_75919.read();
    } else {
        ap_phi_mux_data_402_V_read472_rewind_phi_fu_31511_p6 = data_402_V_read472_rewind_reg_31507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_403_V_read473_phi_phi_fu_75936_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_403_V_read473_phi_phi_fu_75936_p4 = ap_phi_mux_data_403_V_read473_rewind_phi_fu_31525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_403_V_read473_phi_phi_fu_75936_p4 = data_403_V_read.read();
        } else {
            ap_phi_mux_data_403_V_read473_phi_phi_fu_75936_p4 = ap_phi_reg_pp0_iter0_data_403_V_read473_phi_reg_75932.read();
        }
    } else {
        ap_phi_mux_data_403_V_read473_phi_phi_fu_75936_p4 = ap_phi_reg_pp0_iter0_data_403_V_read473_phi_reg_75932.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_403_V_read473_rewind_phi_fu_31525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_403_V_read473_rewind_phi_fu_31525_p6 = data_403_V_read473_phi_reg_75932.read();
    } else {
        ap_phi_mux_data_403_V_read473_rewind_phi_fu_31525_p6 = data_403_V_read473_rewind_reg_31521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_404_V_read474_phi_phi_fu_75949_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_404_V_read474_phi_phi_fu_75949_p4 = ap_phi_mux_data_404_V_read474_rewind_phi_fu_31539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_404_V_read474_phi_phi_fu_75949_p4 = data_404_V_read.read();
        } else {
            ap_phi_mux_data_404_V_read474_phi_phi_fu_75949_p4 = ap_phi_reg_pp0_iter0_data_404_V_read474_phi_reg_75945.read();
        }
    } else {
        ap_phi_mux_data_404_V_read474_phi_phi_fu_75949_p4 = ap_phi_reg_pp0_iter0_data_404_V_read474_phi_reg_75945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_404_V_read474_rewind_phi_fu_31539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_404_V_read474_rewind_phi_fu_31539_p6 = data_404_V_read474_phi_reg_75945.read();
    } else {
        ap_phi_mux_data_404_V_read474_rewind_phi_fu_31539_p6 = data_404_V_read474_rewind_reg_31535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_405_V_read475_phi_phi_fu_75962_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_405_V_read475_phi_phi_fu_75962_p4 = ap_phi_mux_data_405_V_read475_rewind_phi_fu_31553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_405_V_read475_phi_phi_fu_75962_p4 = data_405_V_read.read();
        } else {
            ap_phi_mux_data_405_V_read475_phi_phi_fu_75962_p4 = ap_phi_reg_pp0_iter0_data_405_V_read475_phi_reg_75958.read();
        }
    } else {
        ap_phi_mux_data_405_V_read475_phi_phi_fu_75962_p4 = ap_phi_reg_pp0_iter0_data_405_V_read475_phi_reg_75958.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_405_V_read475_rewind_phi_fu_31553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_405_V_read475_rewind_phi_fu_31553_p6 = data_405_V_read475_phi_reg_75958.read();
    } else {
        ap_phi_mux_data_405_V_read475_rewind_phi_fu_31553_p6 = data_405_V_read475_rewind_reg_31549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_406_V_read476_phi_phi_fu_75975_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_406_V_read476_phi_phi_fu_75975_p4 = ap_phi_mux_data_406_V_read476_rewind_phi_fu_31567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_406_V_read476_phi_phi_fu_75975_p4 = data_406_V_read.read();
        } else {
            ap_phi_mux_data_406_V_read476_phi_phi_fu_75975_p4 = ap_phi_reg_pp0_iter0_data_406_V_read476_phi_reg_75971.read();
        }
    } else {
        ap_phi_mux_data_406_V_read476_phi_phi_fu_75975_p4 = ap_phi_reg_pp0_iter0_data_406_V_read476_phi_reg_75971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_406_V_read476_rewind_phi_fu_31567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_406_V_read476_rewind_phi_fu_31567_p6 = data_406_V_read476_phi_reg_75971.read();
    } else {
        ap_phi_mux_data_406_V_read476_rewind_phi_fu_31567_p6 = data_406_V_read476_rewind_reg_31563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_407_V_read477_phi_phi_fu_75988_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_407_V_read477_phi_phi_fu_75988_p4 = ap_phi_mux_data_407_V_read477_rewind_phi_fu_31581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_407_V_read477_phi_phi_fu_75988_p4 = data_407_V_read.read();
        } else {
            ap_phi_mux_data_407_V_read477_phi_phi_fu_75988_p4 = ap_phi_reg_pp0_iter0_data_407_V_read477_phi_reg_75984.read();
        }
    } else {
        ap_phi_mux_data_407_V_read477_phi_phi_fu_75988_p4 = ap_phi_reg_pp0_iter0_data_407_V_read477_phi_reg_75984.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_407_V_read477_rewind_phi_fu_31581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_407_V_read477_rewind_phi_fu_31581_p6 = data_407_V_read477_phi_reg_75984.read();
    } else {
        ap_phi_mux_data_407_V_read477_rewind_phi_fu_31581_p6 = data_407_V_read477_rewind_reg_31577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_408_V_read478_phi_phi_fu_76001_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_408_V_read478_phi_phi_fu_76001_p4 = ap_phi_mux_data_408_V_read478_rewind_phi_fu_31595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_408_V_read478_phi_phi_fu_76001_p4 = data_408_V_read.read();
        } else {
            ap_phi_mux_data_408_V_read478_phi_phi_fu_76001_p4 = ap_phi_reg_pp0_iter0_data_408_V_read478_phi_reg_75997.read();
        }
    } else {
        ap_phi_mux_data_408_V_read478_phi_phi_fu_76001_p4 = ap_phi_reg_pp0_iter0_data_408_V_read478_phi_reg_75997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_408_V_read478_rewind_phi_fu_31595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_408_V_read478_rewind_phi_fu_31595_p6 = data_408_V_read478_phi_reg_75997.read();
    } else {
        ap_phi_mux_data_408_V_read478_rewind_phi_fu_31595_p6 = data_408_V_read478_rewind_reg_31591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_409_V_read479_phi_phi_fu_76014_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_409_V_read479_phi_phi_fu_76014_p4 = ap_phi_mux_data_409_V_read479_rewind_phi_fu_31609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_409_V_read479_phi_phi_fu_76014_p4 = data_409_V_read.read();
        } else {
            ap_phi_mux_data_409_V_read479_phi_phi_fu_76014_p4 = ap_phi_reg_pp0_iter0_data_409_V_read479_phi_reg_76010.read();
        }
    } else {
        ap_phi_mux_data_409_V_read479_phi_phi_fu_76014_p4 = ap_phi_reg_pp0_iter0_data_409_V_read479_phi_reg_76010.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_409_V_read479_rewind_phi_fu_31609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_409_V_read479_rewind_phi_fu_31609_p6 = data_409_V_read479_phi_reg_76010.read();
    } else {
        ap_phi_mux_data_409_V_read479_rewind_phi_fu_31609_p6 = data_409_V_read479_rewind_reg_31605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_40_V_read110_phi_phi_fu_71217_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_40_V_read110_phi_phi_fu_71217_p4 = ap_phi_mux_data_40_V_read110_rewind_phi_fu_26443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_40_V_read110_phi_phi_fu_71217_p4 = data_40_V_read.read();
        } else {
            ap_phi_mux_data_40_V_read110_phi_phi_fu_71217_p4 = ap_phi_reg_pp0_iter0_data_40_V_read110_phi_reg_71213.read();
        }
    } else {
        ap_phi_mux_data_40_V_read110_phi_phi_fu_71217_p4 = ap_phi_reg_pp0_iter0_data_40_V_read110_phi_reg_71213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_40_V_read110_rewind_phi_fu_26443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_40_V_read110_rewind_phi_fu_26443_p6 = data_40_V_read110_phi_reg_71213.read();
    } else {
        ap_phi_mux_data_40_V_read110_rewind_phi_fu_26443_p6 = data_40_V_read110_rewind_reg_26439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_410_V_read480_phi_phi_fu_76027_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_410_V_read480_phi_phi_fu_76027_p4 = ap_phi_mux_data_410_V_read480_rewind_phi_fu_31623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_410_V_read480_phi_phi_fu_76027_p4 = data_410_V_read.read();
        } else {
            ap_phi_mux_data_410_V_read480_phi_phi_fu_76027_p4 = ap_phi_reg_pp0_iter0_data_410_V_read480_phi_reg_76023.read();
        }
    } else {
        ap_phi_mux_data_410_V_read480_phi_phi_fu_76027_p4 = ap_phi_reg_pp0_iter0_data_410_V_read480_phi_reg_76023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_410_V_read480_rewind_phi_fu_31623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_410_V_read480_rewind_phi_fu_31623_p6 = data_410_V_read480_phi_reg_76023.read();
    } else {
        ap_phi_mux_data_410_V_read480_rewind_phi_fu_31623_p6 = data_410_V_read480_rewind_reg_31619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_411_V_read481_phi_phi_fu_76040_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_411_V_read481_phi_phi_fu_76040_p4 = ap_phi_mux_data_411_V_read481_rewind_phi_fu_31637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_411_V_read481_phi_phi_fu_76040_p4 = data_411_V_read.read();
        } else {
            ap_phi_mux_data_411_V_read481_phi_phi_fu_76040_p4 = ap_phi_reg_pp0_iter0_data_411_V_read481_phi_reg_76036.read();
        }
    } else {
        ap_phi_mux_data_411_V_read481_phi_phi_fu_76040_p4 = ap_phi_reg_pp0_iter0_data_411_V_read481_phi_reg_76036.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_411_V_read481_rewind_phi_fu_31637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_411_V_read481_rewind_phi_fu_31637_p6 = data_411_V_read481_phi_reg_76036.read();
    } else {
        ap_phi_mux_data_411_V_read481_rewind_phi_fu_31637_p6 = data_411_V_read481_rewind_reg_31633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_412_V_read482_phi_phi_fu_76053_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_412_V_read482_phi_phi_fu_76053_p4 = ap_phi_mux_data_412_V_read482_rewind_phi_fu_31651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_412_V_read482_phi_phi_fu_76053_p4 = data_412_V_read.read();
        } else {
            ap_phi_mux_data_412_V_read482_phi_phi_fu_76053_p4 = ap_phi_reg_pp0_iter0_data_412_V_read482_phi_reg_76049.read();
        }
    } else {
        ap_phi_mux_data_412_V_read482_phi_phi_fu_76053_p4 = ap_phi_reg_pp0_iter0_data_412_V_read482_phi_reg_76049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_412_V_read482_rewind_phi_fu_31651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_412_V_read482_rewind_phi_fu_31651_p6 = data_412_V_read482_phi_reg_76049.read();
    } else {
        ap_phi_mux_data_412_V_read482_rewind_phi_fu_31651_p6 = data_412_V_read482_rewind_reg_31647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_413_V_read483_phi_phi_fu_76066_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_413_V_read483_phi_phi_fu_76066_p4 = ap_phi_mux_data_413_V_read483_rewind_phi_fu_31665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_413_V_read483_phi_phi_fu_76066_p4 = data_413_V_read.read();
        } else {
            ap_phi_mux_data_413_V_read483_phi_phi_fu_76066_p4 = ap_phi_reg_pp0_iter0_data_413_V_read483_phi_reg_76062.read();
        }
    } else {
        ap_phi_mux_data_413_V_read483_phi_phi_fu_76066_p4 = ap_phi_reg_pp0_iter0_data_413_V_read483_phi_reg_76062.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_413_V_read483_rewind_phi_fu_31665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_413_V_read483_rewind_phi_fu_31665_p6 = data_413_V_read483_phi_reg_76062.read();
    } else {
        ap_phi_mux_data_413_V_read483_rewind_phi_fu_31665_p6 = data_413_V_read483_rewind_reg_31661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_414_V_read484_phi_phi_fu_76079_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_414_V_read484_phi_phi_fu_76079_p4 = ap_phi_mux_data_414_V_read484_rewind_phi_fu_31679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_414_V_read484_phi_phi_fu_76079_p4 = data_414_V_read.read();
        } else {
            ap_phi_mux_data_414_V_read484_phi_phi_fu_76079_p4 = ap_phi_reg_pp0_iter0_data_414_V_read484_phi_reg_76075.read();
        }
    } else {
        ap_phi_mux_data_414_V_read484_phi_phi_fu_76079_p4 = ap_phi_reg_pp0_iter0_data_414_V_read484_phi_reg_76075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_414_V_read484_rewind_phi_fu_31679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_414_V_read484_rewind_phi_fu_31679_p6 = data_414_V_read484_phi_reg_76075.read();
    } else {
        ap_phi_mux_data_414_V_read484_rewind_phi_fu_31679_p6 = data_414_V_read484_rewind_reg_31675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_415_V_read485_phi_phi_fu_76092_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_415_V_read485_phi_phi_fu_76092_p4 = ap_phi_mux_data_415_V_read485_rewind_phi_fu_31693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_415_V_read485_phi_phi_fu_76092_p4 = data_415_V_read.read();
        } else {
            ap_phi_mux_data_415_V_read485_phi_phi_fu_76092_p4 = ap_phi_reg_pp0_iter0_data_415_V_read485_phi_reg_76088.read();
        }
    } else {
        ap_phi_mux_data_415_V_read485_phi_phi_fu_76092_p4 = ap_phi_reg_pp0_iter0_data_415_V_read485_phi_reg_76088.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_415_V_read485_rewind_phi_fu_31693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_415_V_read485_rewind_phi_fu_31693_p6 = data_415_V_read485_phi_reg_76088.read();
    } else {
        ap_phi_mux_data_415_V_read485_rewind_phi_fu_31693_p6 = data_415_V_read485_rewind_reg_31689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_416_V_read486_phi_phi_fu_76105_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_416_V_read486_phi_phi_fu_76105_p4 = ap_phi_mux_data_416_V_read486_rewind_phi_fu_31707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_416_V_read486_phi_phi_fu_76105_p4 = data_416_V_read.read();
        } else {
            ap_phi_mux_data_416_V_read486_phi_phi_fu_76105_p4 = ap_phi_reg_pp0_iter0_data_416_V_read486_phi_reg_76101.read();
        }
    } else {
        ap_phi_mux_data_416_V_read486_phi_phi_fu_76105_p4 = ap_phi_reg_pp0_iter0_data_416_V_read486_phi_reg_76101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_416_V_read486_rewind_phi_fu_31707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_416_V_read486_rewind_phi_fu_31707_p6 = data_416_V_read486_phi_reg_76101.read();
    } else {
        ap_phi_mux_data_416_V_read486_rewind_phi_fu_31707_p6 = data_416_V_read486_rewind_reg_31703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_417_V_read487_phi_phi_fu_76118_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_417_V_read487_phi_phi_fu_76118_p4 = ap_phi_mux_data_417_V_read487_rewind_phi_fu_31721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_417_V_read487_phi_phi_fu_76118_p4 = data_417_V_read.read();
        } else {
            ap_phi_mux_data_417_V_read487_phi_phi_fu_76118_p4 = ap_phi_reg_pp0_iter0_data_417_V_read487_phi_reg_76114.read();
        }
    } else {
        ap_phi_mux_data_417_V_read487_phi_phi_fu_76118_p4 = ap_phi_reg_pp0_iter0_data_417_V_read487_phi_reg_76114.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_417_V_read487_rewind_phi_fu_31721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_417_V_read487_rewind_phi_fu_31721_p6 = data_417_V_read487_phi_reg_76114.read();
    } else {
        ap_phi_mux_data_417_V_read487_rewind_phi_fu_31721_p6 = data_417_V_read487_rewind_reg_31717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_418_V_read488_phi_phi_fu_76131_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_418_V_read488_phi_phi_fu_76131_p4 = ap_phi_mux_data_418_V_read488_rewind_phi_fu_31735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_418_V_read488_phi_phi_fu_76131_p4 = data_418_V_read.read();
        } else {
            ap_phi_mux_data_418_V_read488_phi_phi_fu_76131_p4 = ap_phi_reg_pp0_iter0_data_418_V_read488_phi_reg_76127.read();
        }
    } else {
        ap_phi_mux_data_418_V_read488_phi_phi_fu_76131_p4 = ap_phi_reg_pp0_iter0_data_418_V_read488_phi_reg_76127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_418_V_read488_rewind_phi_fu_31735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_418_V_read488_rewind_phi_fu_31735_p6 = data_418_V_read488_phi_reg_76127.read();
    } else {
        ap_phi_mux_data_418_V_read488_rewind_phi_fu_31735_p6 = data_418_V_read488_rewind_reg_31731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_419_V_read489_phi_phi_fu_76144_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_419_V_read489_phi_phi_fu_76144_p4 = ap_phi_mux_data_419_V_read489_rewind_phi_fu_31749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_419_V_read489_phi_phi_fu_76144_p4 = data_419_V_read.read();
        } else {
            ap_phi_mux_data_419_V_read489_phi_phi_fu_76144_p4 = ap_phi_reg_pp0_iter0_data_419_V_read489_phi_reg_76140.read();
        }
    } else {
        ap_phi_mux_data_419_V_read489_phi_phi_fu_76144_p4 = ap_phi_reg_pp0_iter0_data_419_V_read489_phi_reg_76140.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_419_V_read489_rewind_phi_fu_31749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_419_V_read489_rewind_phi_fu_31749_p6 = data_419_V_read489_phi_reg_76140.read();
    } else {
        ap_phi_mux_data_419_V_read489_rewind_phi_fu_31749_p6 = data_419_V_read489_rewind_reg_31745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_41_V_read111_phi_phi_fu_71230_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_41_V_read111_phi_phi_fu_71230_p4 = ap_phi_mux_data_41_V_read111_rewind_phi_fu_26457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_41_V_read111_phi_phi_fu_71230_p4 = data_41_V_read.read();
        } else {
            ap_phi_mux_data_41_V_read111_phi_phi_fu_71230_p4 = ap_phi_reg_pp0_iter0_data_41_V_read111_phi_reg_71226.read();
        }
    } else {
        ap_phi_mux_data_41_V_read111_phi_phi_fu_71230_p4 = ap_phi_reg_pp0_iter0_data_41_V_read111_phi_reg_71226.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_41_V_read111_rewind_phi_fu_26457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_41_V_read111_rewind_phi_fu_26457_p6 = data_41_V_read111_phi_reg_71226.read();
    } else {
        ap_phi_mux_data_41_V_read111_rewind_phi_fu_26457_p6 = data_41_V_read111_rewind_reg_26453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_420_V_read490_phi_phi_fu_76157_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_420_V_read490_phi_phi_fu_76157_p4 = ap_phi_mux_data_420_V_read490_rewind_phi_fu_31763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_420_V_read490_phi_phi_fu_76157_p4 = data_420_V_read.read();
        } else {
            ap_phi_mux_data_420_V_read490_phi_phi_fu_76157_p4 = ap_phi_reg_pp0_iter0_data_420_V_read490_phi_reg_76153.read();
        }
    } else {
        ap_phi_mux_data_420_V_read490_phi_phi_fu_76157_p4 = ap_phi_reg_pp0_iter0_data_420_V_read490_phi_reg_76153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_420_V_read490_rewind_phi_fu_31763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_420_V_read490_rewind_phi_fu_31763_p6 = data_420_V_read490_phi_reg_76153.read();
    } else {
        ap_phi_mux_data_420_V_read490_rewind_phi_fu_31763_p6 = data_420_V_read490_rewind_reg_31759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_421_V_read491_phi_phi_fu_76170_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_421_V_read491_phi_phi_fu_76170_p4 = ap_phi_mux_data_421_V_read491_rewind_phi_fu_31777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_421_V_read491_phi_phi_fu_76170_p4 = data_421_V_read.read();
        } else {
            ap_phi_mux_data_421_V_read491_phi_phi_fu_76170_p4 = ap_phi_reg_pp0_iter0_data_421_V_read491_phi_reg_76166.read();
        }
    } else {
        ap_phi_mux_data_421_V_read491_phi_phi_fu_76170_p4 = ap_phi_reg_pp0_iter0_data_421_V_read491_phi_reg_76166.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_421_V_read491_rewind_phi_fu_31777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_421_V_read491_rewind_phi_fu_31777_p6 = data_421_V_read491_phi_reg_76166.read();
    } else {
        ap_phi_mux_data_421_V_read491_rewind_phi_fu_31777_p6 = data_421_V_read491_rewind_reg_31773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_422_V_read492_phi_phi_fu_76183_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_422_V_read492_phi_phi_fu_76183_p4 = ap_phi_mux_data_422_V_read492_rewind_phi_fu_31791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_422_V_read492_phi_phi_fu_76183_p4 = data_422_V_read.read();
        } else {
            ap_phi_mux_data_422_V_read492_phi_phi_fu_76183_p4 = ap_phi_reg_pp0_iter0_data_422_V_read492_phi_reg_76179.read();
        }
    } else {
        ap_phi_mux_data_422_V_read492_phi_phi_fu_76183_p4 = ap_phi_reg_pp0_iter0_data_422_V_read492_phi_reg_76179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_422_V_read492_rewind_phi_fu_31791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_422_V_read492_rewind_phi_fu_31791_p6 = data_422_V_read492_phi_reg_76179.read();
    } else {
        ap_phi_mux_data_422_V_read492_rewind_phi_fu_31791_p6 = data_422_V_read492_rewind_reg_31787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_423_V_read493_phi_phi_fu_76196_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_423_V_read493_phi_phi_fu_76196_p4 = ap_phi_mux_data_423_V_read493_rewind_phi_fu_31805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_423_V_read493_phi_phi_fu_76196_p4 = data_423_V_read.read();
        } else {
            ap_phi_mux_data_423_V_read493_phi_phi_fu_76196_p4 = ap_phi_reg_pp0_iter0_data_423_V_read493_phi_reg_76192.read();
        }
    } else {
        ap_phi_mux_data_423_V_read493_phi_phi_fu_76196_p4 = ap_phi_reg_pp0_iter0_data_423_V_read493_phi_reg_76192.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_423_V_read493_rewind_phi_fu_31805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_423_V_read493_rewind_phi_fu_31805_p6 = data_423_V_read493_phi_reg_76192.read();
    } else {
        ap_phi_mux_data_423_V_read493_rewind_phi_fu_31805_p6 = data_423_V_read493_rewind_reg_31801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_424_V_read494_phi_phi_fu_76209_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_424_V_read494_phi_phi_fu_76209_p4 = ap_phi_mux_data_424_V_read494_rewind_phi_fu_31819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_424_V_read494_phi_phi_fu_76209_p4 = data_424_V_read.read();
        } else {
            ap_phi_mux_data_424_V_read494_phi_phi_fu_76209_p4 = ap_phi_reg_pp0_iter0_data_424_V_read494_phi_reg_76205.read();
        }
    } else {
        ap_phi_mux_data_424_V_read494_phi_phi_fu_76209_p4 = ap_phi_reg_pp0_iter0_data_424_V_read494_phi_reg_76205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_424_V_read494_rewind_phi_fu_31819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_424_V_read494_rewind_phi_fu_31819_p6 = data_424_V_read494_phi_reg_76205.read();
    } else {
        ap_phi_mux_data_424_V_read494_rewind_phi_fu_31819_p6 = data_424_V_read494_rewind_reg_31815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_425_V_read495_phi_phi_fu_76222_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_425_V_read495_phi_phi_fu_76222_p4 = ap_phi_mux_data_425_V_read495_rewind_phi_fu_31833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_425_V_read495_phi_phi_fu_76222_p4 = data_425_V_read.read();
        } else {
            ap_phi_mux_data_425_V_read495_phi_phi_fu_76222_p4 = ap_phi_reg_pp0_iter0_data_425_V_read495_phi_reg_76218.read();
        }
    } else {
        ap_phi_mux_data_425_V_read495_phi_phi_fu_76222_p4 = ap_phi_reg_pp0_iter0_data_425_V_read495_phi_reg_76218.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_425_V_read495_rewind_phi_fu_31833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_425_V_read495_rewind_phi_fu_31833_p6 = data_425_V_read495_phi_reg_76218.read();
    } else {
        ap_phi_mux_data_425_V_read495_rewind_phi_fu_31833_p6 = data_425_V_read495_rewind_reg_31829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_426_V_read496_phi_phi_fu_76235_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_426_V_read496_phi_phi_fu_76235_p4 = ap_phi_mux_data_426_V_read496_rewind_phi_fu_31847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_426_V_read496_phi_phi_fu_76235_p4 = data_426_V_read.read();
        } else {
            ap_phi_mux_data_426_V_read496_phi_phi_fu_76235_p4 = ap_phi_reg_pp0_iter0_data_426_V_read496_phi_reg_76231.read();
        }
    } else {
        ap_phi_mux_data_426_V_read496_phi_phi_fu_76235_p4 = ap_phi_reg_pp0_iter0_data_426_V_read496_phi_reg_76231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_426_V_read496_rewind_phi_fu_31847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_426_V_read496_rewind_phi_fu_31847_p6 = data_426_V_read496_phi_reg_76231.read();
    } else {
        ap_phi_mux_data_426_V_read496_rewind_phi_fu_31847_p6 = data_426_V_read496_rewind_reg_31843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_427_V_read497_phi_phi_fu_76248_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_427_V_read497_phi_phi_fu_76248_p4 = ap_phi_mux_data_427_V_read497_rewind_phi_fu_31861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_427_V_read497_phi_phi_fu_76248_p4 = data_427_V_read.read();
        } else {
            ap_phi_mux_data_427_V_read497_phi_phi_fu_76248_p4 = ap_phi_reg_pp0_iter0_data_427_V_read497_phi_reg_76244.read();
        }
    } else {
        ap_phi_mux_data_427_V_read497_phi_phi_fu_76248_p4 = ap_phi_reg_pp0_iter0_data_427_V_read497_phi_reg_76244.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_427_V_read497_rewind_phi_fu_31861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_427_V_read497_rewind_phi_fu_31861_p6 = data_427_V_read497_phi_reg_76244.read();
    } else {
        ap_phi_mux_data_427_V_read497_rewind_phi_fu_31861_p6 = data_427_V_read497_rewind_reg_31857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_428_V_read498_phi_phi_fu_76261_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_428_V_read498_phi_phi_fu_76261_p4 = ap_phi_mux_data_428_V_read498_rewind_phi_fu_31875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_428_V_read498_phi_phi_fu_76261_p4 = data_428_V_read.read();
        } else {
            ap_phi_mux_data_428_V_read498_phi_phi_fu_76261_p4 = ap_phi_reg_pp0_iter0_data_428_V_read498_phi_reg_76257.read();
        }
    } else {
        ap_phi_mux_data_428_V_read498_phi_phi_fu_76261_p4 = ap_phi_reg_pp0_iter0_data_428_V_read498_phi_reg_76257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_428_V_read498_rewind_phi_fu_31875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_428_V_read498_rewind_phi_fu_31875_p6 = data_428_V_read498_phi_reg_76257.read();
    } else {
        ap_phi_mux_data_428_V_read498_rewind_phi_fu_31875_p6 = data_428_V_read498_rewind_reg_31871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_429_V_read499_phi_phi_fu_76274_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_429_V_read499_phi_phi_fu_76274_p4 = ap_phi_mux_data_429_V_read499_rewind_phi_fu_31889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_429_V_read499_phi_phi_fu_76274_p4 = data_429_V_read.read();
        } else {
            ap_phi_mux_data_429_V_read499_phi_phi_fu_76274_p4 = ap_phi_reg_pp0_iter0_data_429_V_read499_phi_reg_76270.read();
        }
    } else {
        ap_phi_mux_data_429_V_read499_phi_phi_fu_76274_p4 = ap_phi_reg_pp0_iter0_data_429_V_read499_phi_reg_76270.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_429_V_read499_rewind_phi_fu_31889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_429_V_read499_rewind_phi_fu_31889_p6 = data_429_V_read499_phi_reg_76270.read();
    } else {
        ap_phi_mux_data_429_V_read499_rewind_phi_fu_31889_p6 = data_429_V_read499_rewind_reg_31885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_42_V_read112_phi_phi_fu_71243_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_42_V_read112_phi_phi_fu_71243_p4 = ap_phi_mux_data_42_V_read112_rewind_phi_fu_26471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_42_V_read112_phi_phi_fu_71243_p4 = data_42_V_read.read();
        } else {
            ap_phi_mux_data_42_V_read112_phi_phi_fu_71243_p4 = ap_phi_reg_pp0_iter0_data_42_V_read112_phi_reg_71239.read();
        }
    } else {
        ap_phi_mux_data_42_V_read112_phi_phi_fu_71243_p4 = ap_phi_reg_pp0_iter0_data_42_V_read112_phi_reg_71239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_42_V_read112_rewind_phi_fu_26471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_42_V_read112_rewind_phi_fu_26471_p6 = data_42_V_read112_phi_reg_71239.read();
    } else {
        ap_phi_mux_data_42_V_read112_rewind_phi_fu_26471_p6 = data_42_V_read112_rewind_reg_26467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_430_V_read500_phi_phi_fu_76287_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_430_V_read500_phi_phi_fu_76287_p4 = ap_phi_mux_data_430_V_read500_rewind_phi_fu_31903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_430_V_read500_phi_phi_fu_76287_p4 = data_430_V_read.read();
        } else {
            ap_phi_mux_data_430_V_read500_phi_phi_fu_76287_p4 = ap_phi_reg_pp0_iter0_data_430_V_read500_phi_reg_76283.read();
        }
    } else {
        ap_phi_mux_data_430_V_read500_phi_phi_fu_76287_p4 = ap_phi_reg_pp0_iter0_data_430_V_read500_phi_reg_76283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_430_V_read500_rewind_phi_fu_31903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_430_V_read500_rewind_phi_fu_31903_p6 = data_430_V_read500_phi_reg_76283.read();
    } else {
        ap_phi_mux_data_430_V_read500_rewind_phi_fu_31903_p6 = data_430_V_read500_rewind_reg_31899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_431_V_read501_phi_phi_fu_76300_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_431_V_read501_phi_phi_fu_76300_p4 = ap_phi_mux_data_431_V_read501_rewind_phi_fu_31917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_431_V_read501_phi_phi_fu_76300_p4 = data_431_V_read.read();
        } else {
            ap_phi_mux_data_431_V_read501_phi_phi_fu_76300_p4 = ap_phi_reg_pp0_iter0_data_431_V_read501_phi_reg_76296.read();
        }
    } else {
        ap_phi_mux_data_431_V_read501_phi_phi_fu_76300_p4 = ap_phi_reg_pp0_iter0_data_431_V_read501_phi_reg_76296.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_431_V_read501_rewind_phi_fu_31917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_431_V_read501_rewind_phi_fu_31917_p6 = data_431_V_read501_phi_reg_76296.read();
    } else {
        ap_phi_mux_data_431_V_read501_rewind_phi_fu_31917_p6 = data_431_V_read501_rewind_reg_31913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_432_V_read502_phi_phi_fu_76313_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_432_V_read502_phi_phi_fu_76313_p4 = ap_phi_mux_data_432_V_read502_rewind_phi_fu_31931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_432_V_read502_phi_phi_fu_76313_p4 = data_432_V_read.read();
        } else {
            ap_phi_mux_data_432_V_read502_phi_phi_fu_76313_p4 = ap_phi_reg_pp0_iter0_data_432_V_read502_phi_reg_76309.read();
        }
    } else {
        ap_phi_mux_data_432_V_read502_phi_phi_fu_76313_p4 = ap_phi_reg_pp0_iter0_data_432_V_read502_phi_reg_76309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_432_V_read502_rewind_phi_fu_31931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_432_V_read502_rewind_phi_fu_31931_p6 = data_432_V_read502_phi_reg_76309.read();
    } else {
        ap_phi_mux_data_432_V_read502_rewind_phi_fu_31931_p6 = data_432_V_read502_rewind_reg_31927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_433_V_read503_phi_phi_fu_76326_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_433_V_read503_phi_phi_fu_76326_p4 = ap_phi_mux_data_433_V_read503_rewind_phi_fu_31945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_433_V_read503_phi_phi_fu_76326_p4 = data_433_V_read.read();
        } else {
            ap_phi_mux_data_433_V_read503_phi_phi_fu_76326_p4 = ap_phi_reg_pp0_iter0_data_433_V_read503_phi_reg_76322.read();
        }
    } else {
        ap_phi_mux_data_433_V_read503_phi_phi_fu_76326_p4 = ap_phi_reg_pp0_iter0_data_433_V_read503_phi_reg_76322.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_433_V_read503_rewind_phi_fu_31945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_433_V_read503_rewind_phi_fu_31945_p6 = data_433_V_read503_phi_reg_76322.read();
    } else {
        ap_phi_mux_data_433_V_read503_rewind_phi_fu_31945_p6 = data_433_V_read503_rewind_reg_31941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_434_V_read504_phi_phi_fu_76339_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_434_V_read504_phi_phi_fu_76339_p4 = ap_phi_mux_data_434_V_read504_rewind_phi_fu_31959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_434_V_read504_phi_phi_fu_76339_p4 = data_434_V_read.read();
        } else {
            ap_phi_mux_data_434_V_read504_phi_phi_fu_76339_p4 = ap_phi_reg_pp0_iter0_data_434_V_read504_phi_reg_76335.read();
        }
    } else {
        ap_phi_mux_data_434_V_read504_phi_phi_fu_76339_p4 = ap_phi_reg_pp0_iter0_data_434_V_read504_phi_reg_76335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_434_V_read504_rewind_phi_fu_31959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_434_V_read504_rewind_phi_fu_31959_p6 = data_434_V_read504_phi_reg_76335.read();
    } else {
        ap_phi_mux_data_434_V_read504_rewind_phi_fu_31959_p6 = data_434_V_read504_rewind_reg_31955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_435_V_read505_phi_phi_fu_76352_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_435_V_read505_phi_phi_fu_76352_p4 = ap_phi_mux_data_435_V_read505_rewind_phi_fu_31973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_435_V_read505_phi_phi_fu_76352_p4 = data_435_V_read.read();
        } else {
            ap_phi_mux_data_435_V_read505_phi_phi_fu_76352_p4 = ap_phi_reg_pp0_iter0_data_435_V_read505_phi_reg_76348.read();
        }
    } else {
        ap_phi_mux_data_435_V_read505_phi_phi_fu_76352_p4 = ap_phi_reg_pp0_iter0_data_435_V_read505_phi_reg_76348.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_435_V_read505_rewind_phi_fu_31973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_435_V_read505_rewind_phi_fu_31973_p6 = data_435_V_read505_phi_reg_76348.read();
    } else {
        ap_phi_mux_data_435_V_read505_rewind_phi_fu_31973_p6 = data_435_V_read505_rewind_reg_31969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_436_V_read506_phi_phi_fu_76365_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_436_V_read506_phi_phi_fu_76365_p4 = ap_phi_mux_data_436_V_read506_rewind_phi_fu_31987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_436_V_read506_phi_phi_fu_76365_p4 = data_436_V_read.read();
        } else {
            ap_phi_mux_data_436_V_read506_phi_phi_fu_76365_p4 = ap_phi_reg_pp0_iter0_data_436_V_read506_phi_reg_76361.read();
        }
    } else {
        ap_phi_mux_data_436_V_read506_phi_phi_fu_76365_p4 = ap_phi_reg_pp0_iter0_data_436_V_read506_phi_reg_76361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_436_V_read506_rewind_phi_fu_31987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_436_V_read506_rewind_phi_fu_31987_p6 = data_436_V_read506_phi_reg_76361.read();
    } else {
        ap_phi_mux_data_436_V_read506_rewind_phi_fu_31987_p6 = data_436_V_read506_rewind_reg_31983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_437_V_read507_phi_phi_fu_76378_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_437_V_read507_phi_phi_fu_76378_p4 = ap_phi_mux_data_437_V_read507_rewind_phi_fu_32001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_437_V_read507_phi_phi_fu_76378_p4 = data_437_V_read.read();
        } else {
            ap_phi_mux_data_437_V_read507_phi_phi_fu_76378_p4 = ap_phi_reg_pp0_iter0_data_437_V_read507_phi_reg_76374.read();
        }
    } else {
        ap_phi_mux_data_437_V_read507_phi_phi_fu_76378_p4 = ap_phi_reg_pp0_iter0_data_437_V_read507_phi_reg_76374.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_437_V_read507_rewind_phi_fu_32001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_437_V_read507_rewind_phi_fu_32001_p6 = data_437_V_read507_phi_reg_76374.read();
    } else {
        ap_phi_mux_data_437_V_read507_rewind_phi_fu_32001_p6 = data_437_V_read507_rewind_reg_31997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_438_V_read508_phi_phi_fu_76391_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_438_V_read508_phi_phi_fu_76391_p4 = ap_phi_mux_data_438_V_read508_rewind_phi_fu_32015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_438_V_read508_phi_phi_fu_76391_p4 = data_438_V_read.read();
        } else {
            ap_phi_mux_data_438_V_read508_phi_phi_fu_76391_p4 = ap_phi_reg_pp0_iter0_data_438_V_read508_phi_reg_76387.read();
        }
    } else {
        ap_phi_mux_data_438_V_read508_phi_phi_fu_76391_p4 = ap_phi_reg_pp0_iter0_data_438_V_read508_phi_reg_76387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_438_V_read508_rewind_phi_fu_32015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_438_V_read508_rewind_phi_fu_32015_p6 = data_438_V_read508_phi_reg_76387.read();
    } else {
        ap_phi_mux_data_438_V_read508_rewind_phi_fu_32015_p6 = data_438_V_read508_rewind_reg_32011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_439_V_read509_phi_phi_fu_76404_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_439_V_read509_phi_phi_fu_76404_p4 = ap_phi_mux_data_439_V_read509_rewind_phi_fu_32029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_439_V_read509_phi_phi_fu_76404_p4 = data_439_V_read.read();
        } else {
            ap_phi_mux_data_439_V_read509_phi_phi_fu_76404_p4 = ap_phi_reg_pp0_iter0_data_439_V_read509_phi_reg_76400.read();
        }
    } else {
        ap_phi_mux_data_439_V_read509_phi_phi_fu_76404_p4 = ap_phi_reg_pp0_iter0_data_439_V_read509_phi_reg_76400.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_439_V_read509_rewind_phi_fu_32029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_439_V_read509_rewind_phi_fu_32029_p6 = data_439_V_read509_phi_reg_76400.read();
    } else {
        ap_phi_mux_data_439_V_read509_rewind_phi_fu_32029_p6 = data_439_V_read509_rewind_reg_32025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_43_V_read113_phi_phi_fu_71256_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_43_V_read113_phi_phi_fu_71256_p4 = ap_phi_mux_data_43_V_read113_rewind_phi_fu_26485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_43_V_read113_phi_phi_fu_71256_p4 = data_43_V_read.read();
        } else {
            ap_phi_mux_data_43_V_read113_phi_phi_fu_71256_p4 = ap_phi_reg_pp0_iter0_data_43_V_read113_phi_reg_71252.read();
        }
    } else {
        ap_phi_mux_data_43_V_read113_phi_phi_fu_71256_p4 = ap_phi_reg_pp0_iter0_data_43_V_read113_phi_reg_71252.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_43_V_read113_rewind_phi_fu_26485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_43_V_read113_rewind_phi_fu_26485_p6 = data_43_V_read113_phi_reg_71252.read();
    } else {
        ap_phi_mux_data_43_V_read113_rewind_phi_fu_26485_p6 = data_43_V_read113_rewind_reg_26481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_440_V_read510_phi_phi_fu_76417_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_440_V_read510_phi_phi_fu_76417_p4 = ap_phi_mux_data_440_V_read510_rewind_phi_fu_32043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_440_V_read510_phi_phi_fu_76417_p4 = data_440_V_read.read();
        } else {
            ap_phi_mux_data_440_V_read510_phi_phi_fu_76417_p4 = ap_phi_reg_pp0_iter0_data_440_V_read510_phi_reg_76413.read();
        }
    } else {
        ap_phi_mux_data_440_V_read510_phi_phi_fu_76417_p4 = ap_phi_reg_pp0_iter0_data_440_V_read510_phi_reg_76413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_440_V_read510_rewind_phi_fu_32043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_440_V_read510_rewind_phi_fu_32043_p6 = data_440_V_read510_phi_reg_76413.read();
    } else {
        ap_phi_mux_data_440_V_read510_rewind_phi_fu_32043_p6 = data_440_V_read510_rewind_reg_32039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_441_V_read511_phi_phi_fu_76430_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_441_V_read511_phi_phi_fu_76430_p4 = ap_phi_mux_data_441_V_read511_rewind_phi_fu_32057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_441_V_read511_phi_phi_fu_76430_p4 = data_441_V_read.read();
        } else {
            ap_phi_mux_data_441_V_read511_phi_phi_fu_76430_p4 = ap_phi_reg_pp0_iter0_data_441_V_read511_phi_reg_76426.read();
        }
    } else {
        ap_phi_mux_data_441_V_read511_phi_phi_fu_76430_p4 = ap_phi_reg_pp0_iter0_data_441_V_read511_phi_reg_76426.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_441_V_read511_rewind_phi_fu_32057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_441_V_read511_rewind_phi_fu_32057_p6 = data_441_V_read511_phi_reg_76426.read();
    } else {
        ap_phi_mux_data_441_V_read511_rewind_phi_fu_32057_p6 = data_441_V_read511_rewind_reg_32053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_442_V_read512_phi_phi_fu_76443_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_442_V_read512_phi_phi_fu_76443_p4 = ap_phi_mux_data_442_V_read512_rewind_phi_fu_32071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_442_V_read512_phi_phi_fu_76443_p4 = data_442_V_read.read();
        } else {
            ap_phi_mux_data_442_V_read512_phi_phi_fu_76443_p4 = ap_phi_reg_pp0_iter0_data_442_V_read512_phi_reg_76439.read();
        }
    } else {
        ap_phi_mux_data_442_V_read512_phi_phi_fu_76443_p4 = ap_phi_reg_pp0_iter0_data_442_V_read512_phi_reg_76439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_442_V_read512_rewind_phi_fu_32071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_442_V_read512_rewind_phi_fu_32071_p6 = data_442_V_read512_phi_reg_76439.read();
    } else {
        ap_phi_mux_data_442_V_read512_rewind_phi_fu_32071_p6 = data_442_V_read512_rewind_reg_32067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_443_V_read513_phi_phi_fu_76456_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_443_V_read513_phi_phi_fu_76456_p4 = ap_phi_mux_data_443_V_read513_rewind_phi_fu_32085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_443_V_read513_phi_phi_fu_76456_p4 = data_443_V_read.read();
        } else {
            ap_phi_mux_data_443_V_read513_phi_phi_fu_76456_p4 = ap_phi_reg_pp0_iter0_data_443_V_read513_phi_reg_76452.read();
        }
    } else {
        ap_phi_mux_data_443_V_read513_phi_phi_fu_76456_p4 = ap_phi_reg_pp0_iter0_data_443_V_read513_phi_reg_76452.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_443_V_read513_rewind_phi_fu_32085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_443_V_read513_rewind_phi_fu_32085_p6 = data_443_V_read513_phi_reg_76452.read();
    } else {
        ap_phi_mux_data_443_V_read513_rewind_phi_fu_32085_p6 = data_443_V_read513_rewind_reg_32081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_444_V_read514_phi_phi_fu_76469_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_444_V_read514_phi_phi_fu_76469_p4 = ap_phi_mux_data_444_V_read514_rewind_phi_fu_32099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_444_V_read514_phi_phi_fu_76469_p4 = data_444_V_read.read();
        } else {
            ap_phi_mux_data_444_V_read514_phi_phi_fu_76469_p4 = ap_phi_reg_pp0_iter0_data_444_V_read514_phi_reg_76465.read();
        }
    } else {
        ap_phi_mux_data_444_V_read514_phi_phi_fu_76469_p4 = ap_phi_reg_pp0_iter0_data_444_V_read514_phi_reg_76465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_444_V_read514_rewind_phi_fu_32099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_444_V_read514_rewind_phi_fu_32099_p6 = data_444_V_read514_phi_reg_76465.read();
    } else {
        ap_phi_mux_data_444_V_read514_rewind_phi_fu_32099_p6 = data_444_V_read514_rewind_reg_32095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_445_V_read515_phi_phi_fu_76482_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_445_V_read515_phi_phi_fu_76482_p4 = ap_phi_mux_data_445_V_read515_rewind_phi_fu_32113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_445_V_read515_phi_phi_fu_76482_p4 = data_445_V_read.read();
        } else {
            ap_phi_mux_data_445_V_read515_phi_phi_fu_76482_p4 = ap_phi_reg_pp0_iter0_data_445_V_read515_phi_reg_76478.read();
        }
    } else {
        ap_phi_mux_data_445_V_read515_phi_phi_fu_76482_p4 = ap_phi_reg_pp0_iter0_data_445_V_read515_phi_reg_76478.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_445_V_read515_rewind_phi_fu_32113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_445_V_read515_rewind_phi_fu_32113_p6 = data_445_V_read515_phi_reg_76478.read();
    } else {
        ap_phi_mux_data_445_V_read515_rewind_phi_fu_32113_p6 = data_445_V_read515_rewind_reg_32109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_446_V_read516_phi_phi_fu_76495_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_446_V_read516_phi_phi_fu_76495_p4 = ap_phi_mux_data_446_V_read516_rewind_phi_fu_32127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_446_V_read516_phi_phi_fu_76495_p4 = data_446_V_read.read();
        } else {
            ap_phi_mux_data_446_V_read516_phi_phi_fu_76495_p4 = ap_phi_reg_pp0_iter0_data_446_V_read516_phi_reg_76491.read();
        }
    } else {
        ap_phi_mux_data_446_V_read516_phi_phi_fu_76495_p4 = ap_phi_reg_pp0_iter0_data_446_V_read516_phi_reg_76491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_446_V_read516_rewind_phi_fu_32127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_446_V_read516_rewind_phi_fu_32127_p6 = data_446_V_read516_phi_reg_76491.read();
    } else {
        ap_phi_mux_data_446_V_read516_rewind_phi_fu_32127_p6 = data_446_V_read516_rewind_reg_32123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_447_V_read517_phi_phi_fu_76508_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_447_V_read517_phi_phi_fu_76508_p4 = ap_phi_mux_data_447_V_read517_rewind_phi_fu_32141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_447_V_read517_phi_phi_fu_76508_p4 = data_447_V_read.read();
        } else {
            ap_phi_mux_data_447_V_read517_phi_phi_fu_76508_p4 = ap_phi_reg_pp0_iter0_data_447_V_read517_phi_reg_76504.read();
        }
    } else {
        ap_phi_mux_data_447_V_read517_phi_phi_fu_76508_p4 = ap_phi_reg_pp0_iter0_data_447_V_read517_phi_reg_76504.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_447_V_read517_rewind_phi_fu_32141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_447_V_read517_rewind_phi_fu_32141_p6 = data_447_V_read517_phi_reg_76504.read();
    } else {
        ap_phi_mux_data_447_V_read517_rewind_phi_fu_32141_p6 = data_447_V_read517_rewind_reg_32137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_448_V_read518_phi_phi_fu_76521_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_448_V_read518_phi_phi_fu_76521_p4 = ap_phi_mux_data_448_V_read518_rewind_phi_fu_32155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_448_V_read518_phi_phi_fu_76521_p4 = data_448_V_read.read();
        } else {
            ap_phi_mux_data_448_V_read518_phi_phi_fu_76521_p4 = ap_phi_reg_pp0_iter0_data_448_V_read518_phi_reg_76517.read();
        }
    } else {
        ap_phi_mux_data_448_V_read518_phi_phi_fu_76521_p4 = ap_phi_reg_pp0_iter0_data_448_V_read518_phi_reg_76517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_448_V_read518_rewind_phi_fu_32155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_448_V_read518_rewind_phi_fu_32155_p6 = data_448_V_read518_phi_reg_76517.read();
    } else {
        ap_phi_mux_data_448_V_read518_rewind_phi_fu_32155_p6 = data_448_V_read518_rewind_reg_32151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_449_V_read519_phi_phi_fu_76534_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_449_V_read519_phi_phi_fu_76534_p4 = ap_phi_mux_data_449_V_read519_rewind_phi_fu_32169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_449_V_read519_phi_phi_fu_76534_p4 = data_449_V_read.read();
        } else {
            ap_phi_mux_data_449_V_read519_phi_phi_fu_76534_p4 = ap_phi_reg_pp0_iter0_data_449_V_read519_phi_reg_76530.read();
        }
    } else {
        ap_phi_mux_data_449_V_read519_phi_phi_fu_76534_p4 = ap_phi_reg_pp0_iter0_data_449_V_read519_phi_reg_76530.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_449_V_read519_rewind_phi_fu_32169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_449_V_read519_rewind_phi_fu_32169_p6 = data_449_V_read519_phi_reg_76530.read();
    } else {
        ap_phi_mux_data_449_V_read519_rewind_phi_fu_32169_p6 = data_449_V_read519_rewind_reg_32165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_44_V_read114_phi_phi_fu_71269_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_44_V_read114_phi_phi_fu_71269_p4 = ap_phi_mux_data_44_V_read114_rewind_phi_fu_26499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_44_V_read114_phi_phi_fu_71269_p4 = data_44_V_read.read();
        } else {
            ap_phi_mux_data_44_V_read114_phi_phi_fu_71269_p4 = ap_phi_reg_pp0_iter0_data_44_V_read114_phi_reg_71265.read();
        }
    } else {
        ap_phi_mux_data_44_V_read114_phi_phi_fu_71269_p4 = ap_phi_reg_pp0_iter0_data_44_V_read114_phi_reg_71265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_44_V_read114_rewind_phi_fu_26499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_44_V_read114_rewind_phi_fu_26499_p6 = data_44_V_read114_phi_reg_71265.read();
    } else {
        ap_phi_mux_data_44_V_read114_rewind_phi_fu_26499_p6 = data_44_V_read114_rewind_reg_26495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_450_V_read520_phi_phi_fu_76547_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_450_V_read520_phi_phi_fu_76547_p4 = ap_phi_mux_data_450_V_read520_rewind_phi_fu_32183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_450_V_read520_phi_phi_fu_76547_p4 = data_450_V_read.read();
        } else {
            ap_phi_mux_data_450_V_read520_phi_phi_fu_76547_p4 = ap_phi_reg_pp0_iter0_data_450_V_read520_phi_reg_76543.read();
        }
    } else {
        ap_phi_mux_data_450_V_read520_phi_phi_fu_76547_p4 = ap_phi_reg_pp0_iter0_data_450_V_read520_phi_reg_76543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_450_V_read520_rewind_phi_fu_32183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_450_V_read520_rewind_phi_fu_32183_p6 = data_450_V_read520_phi_reg_76543.read();
    } else {
        ap_phi_mux_data_450_V_read520_rewind_phi_fu_32183_p6 = data_450_V_read520_rewind_reg_32179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_451_V_read521_phi_phi_fu_76560_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_451_V_read521_phi_phi_fu_76560_p4 = ap_phi_mux_data_451_V_read521_rewind_phi_fu_32197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_451_V_read521_phi_phi_fu_76560_p4 = data_451_V_read.read();
        } else {
            ap_phi_mux_data_451_V_read521_phi_phi_fu_76560_p4 = ap_phi_reg_pp0_iter0_data_451_V_read521_phi_reg_76556.read();
        }
    } else {
        ap_phi_mux_data_451_V_read521_phi_phi_fu_76560_p4 = ap_phi_reg_pp0_iter0_data_451_V_read521_phi_reg_76556.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_451_V_read521_rewind_phi_fu_32197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_451_V_read521_rewind_phi_fu_32197_p6 = data_451_V_read521_phi_reg_76556.read();
    } else {
        ap_phi_mux_data_451_V_read521_rewind_phi_fu_32197_p6 = data_451_V_read521_rewind_reg_32193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_452_V_read522_phi_phi_fu_76573_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_452_V_read522_phi_phi_fu_76573_p4 = ap_phi_mux_data_452_V_read522_rewind_phi_fu_32211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_452_V_read522_phi_phi_fu_76573_p4 = data_452_V_read.read();
        } else {
            ap_phi_mux_data_452_V_read522_phi_phi_fu_76573_p4 = ap_phi_reg_pp0_iter0_data_452_V_read522_phi_reg_76569.read();
        }
    } else {
        ap_phi_mux_data_452_V_read522_phi_phi_fu_76573_p4 = ap_phi_reg_pp0_iter0_data_452_V_read522_phi_reg_76569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_452_V_read522_rewind_phi_fu_32211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_452_V_read522_rewind_phi_fu_32211_p6 = data_452_V_read522_phi_reg_76569.read();
    } else {
        ap_phi_mux_data_452_V_read522_rewind_phi_fu_32211_p6 = data_452_V_read522_rewind_reg_32207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_453_V_read523_phi_phi_fu_76586_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_453_V_read523_phi_phi_fu_76586_p4 = ap_phi_mux_data_453_V_read523_rewind_phi_fu_32225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_453_V_read523_phi_phi_fu_76586_p4 = data_453_V_read.read();
        } else {
            ap_phi_mux_data_453_V_read523_phi_phi_fu_76586_p4 = ap_phi_reg_pp0_iter0_data_453_V_read523_phi_reg_76582.read();
        }
    } else {
        ap_phi_mux_data_453_V_read523_phi_phi_fu_76586_p4 = ap_phi_reg_pp0_iter0_data_453_V_read523_phi_reg_76582.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_453_V_read523_rewind_phi_fu_32225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_453_V_read523_rewind_phi_fu_32225_p6 = data_453_V_read523_phi_reg_76582.read();
    } else {
        ap_phi_mux_data_453_V_read523_rewind_phi_fu_32225_p6 = data_453_V_read523_rewind_reg_32221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_454_V_read524_phi_phi_fu_76599_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_454_V_read524_phi_phi_fu_76599_p4 = ap_phi_mux_data_454_V_read524_rewind_phi_fu_32239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_454_V_read524_phi_phi_fu_76599_p4 = data_454_V_read.read();
        } else {
            ap_phi_mux_data_454_V_read524_phi_phi_fu_76599_p4 = ap_phi_reg_pp0_iter0_data_454_V_read524_phi_reg_76595.read();
        }
    } else {
        ap_phi_mux_data_454_V_read524_phi_phi_fu_76599_p4 = ap_phi_reg_pp0_iter0_data_454_V_read524_phi_reg_76595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_454_V_read524_rewind_phi_fu_32239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_454_V_read524_rewind_phi_fu_32239_p6 = data_454_V_read524_phi_reg_76595.read();
    } else {
        ap_phi_mux_data_454_V_read524_rewind_phi_fu_32239_p6 = data_454_V_read524_rewind_reg_32235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_455_V_read525_phi_phi_fu_76612_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_455_V_read525_phi_phi_fu_76612_p4 = ap_phi_mux_data_455_V_read525_rewind_phi_fu_32253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_455_V_read525_phi_phi_fu_76612_p4 = data_455_V_read.read();
        } else {
            ap_phi_mux_data_455_V_read525_phi_phi_fu_76612_p4 = ap_phi_reg_pp0_iter0_data_455_V_read525_phi_reg_76608.read();
        }
    } else {
        ap_phi_mux_data_455_V_read525_phi_phi_fu_76612_p4 = ap_phi_reg_pp0_iter0_data_455_V_read525_phi_reg_76608.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_455_V_read525_rewind_phi_fu_32253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_455_V_read525_rewind_phi_fu_32253_p6 = data_455_V_read525_phi_reg_76608.read();
    } else {
        ap_phi_mux_data_455_V_read525_rewind_phi_fu_32253_p6 = data_455_V_read525_rewind_reg_32249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_456_V_read526_phi_phi_fu_76625_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_456_V_read526_phi_phi_fu_76625_p4 = ap_phi_mux_data_456_V_read526_rewind_phi_fu_32267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_456_V_read526_phi_phi_fu_76625_p4 = data_456_V_read.read();
        } else {
            ap_phi_mux_data_456_V_read526_phi_phi_fu_76625_p4 = ap_phi_reg_pp0_iter0_data_456_V_read526_phi_reg_76621.read();
        }
    } else {
        ap_phi_mux_data_456_V_read526_phi_phi_fu_76625_p4 = ap_phi_reg_pp0_iter0_data_456_V_read526_phi_reg_76621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_456_V_read526_rewind_phi_fu_32267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_456_V_read526_rewind_phi_fu_32267_p6 = data_456_V_read526_phi_reg_76621.read();
    } else {
        ap_phi_mux_data_456_V_read526_rewind_phi_fu_32267_p6 = data_456_V_read526_rewind_reg_32263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_457_V_read527_phi_phi_fu_76638_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_457_V_read527_phi_phi_fu_76638_p4 = ap_phi_mux_data_457_V_read527_rewind_phi_fu_32281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_457_V_read527_phi_phi_fu_76638_p4 = data_457_V_read.read();
        } else {
            ap_phi_mux_data_457_V_read527_phi_phi_fu_76638_p4 = ap_phi_reg_pp0_iter0_data_457_V_read527_phi_reg_76634.read();
        }
    } else {
        ap_phi_mux_data_457_V_read527_phi_phi_fu_76638_p4 = ap_phi_reg_pp0_iter0_data_457_V_read527_phi_reg_76634.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_457_V_read527_rewind_phi_fu_32281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_457_V_read527_rewind_phi_fu_32281_p6 = data_457_V_read527_phi_reg_76634.read();
    } else {
        ap_phi_mux_data_457_V_read527_rewind_phi_fu_32281_p6 = data_457_V_read527_rewind_reg_32277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_458_V_read528_phi_phi_fu_76651_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_458_V_read528_phi_phi_fu_76651_p4 = ap_phi_mux_data_458_V_read528_rewind_phi_fu_32295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_458_V_read528_phi_phi_fu_76651_p4 = data_458_V_read.read();
        } else {
            ap_phi_mux_data_458_V_read528_phi_phi_fu_76651_p4 = ap_phi_reg_pp0_iter0_data_458_V_read528_phi_reg_76647.read();
        }
    } else {
        ap_phi_mux_data_458_V_read528_phi_phi_fu_76651_p4 = ap_phi_reg_pp0_iter0_data_458_V_read528_phi_reg_76647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_458_V_read528_rewind_phi_fu_32295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_458_V_read528_rewind_phi_fu_32295_p6 = data_458_V_read528_phi_reg_76647.read();
    } else {
        ap_phi_mux_data_458_V_read528_rewind_phi_fu_32295_p6 = data_458_V_read528_rewind_reg_32291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_459_V_read529_phi_phi_fu_76664_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_459_V_read529_phi_phi_fu_76664_p4 = ap_phi_mux_data_459_V_read529_rewind_phi_fu_32309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_459_V_read529_phi_phi_fu_76664_p4 = data_459_V_read.read();
        } else {
            ap_phi_mux_data_459_V_read529_phi_phi_fu_76664_p4 = ap_phi_reg_pp0_iter0_data_459_V_read529_phi_reg_76660.read();
        }
    } else {
        ap_phi_mux_data_459_V_read529_phi_phi_fu_76664_p4 = ap_phi_reg_pp0_iter0_data_459_V_read529_phi_reg_76660.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_459_V_read529_rewind_phi_fu_32309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_459_V_read529_rewind_phi_fu_32309_p6 = data_459_V_read529_phi_reg_76660.read();
    } else {
        ap_phi_mux_data_459_V_read529_rewind_phi_fu_32309_p6 = data_459_V_read529_rewind_reg_32305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_45_V_read115_phi_phi_fu_71282_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_45_V_read115_phi_phi_fu_71282_p4 = ap_phi_mux_data_45_V_read115_rewind_phi_fu_26513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_45_V_read115_phi_phi_fu_71282_p4 = data_45_V_read.read();
        } else {
            ap_phi_mux_data_45_V_read115_phi_phi_fu_71282_p4 = ap_phi_reg_pp0_iter0_data_45_V_read115_phi_reg_71278.read();
        }
    } else {
        ap_phi_mux_data_45_V_read115_phi_phi_fu_71282_p4 = ap_phi_reg_pp0_iter0_data_45_V_read115_phi_reg_71278.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_45_V_read115_rewind_phi_fu_26513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_45_V_read115_rewind_phi_fu_26513_p6 = data_45_V_read115_phi_reg_71278.read();
    } else {
        ap_phi_mux_data_45_V_read115_rewind_phi_fu_26513_p6 = data_45_V_read115_rewind_reg_26509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_460_V_read530_phi_phi_fu_76677_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_460_V_read530_phi_phi_fu_76677_p4 = ap_phi_mux_data_460_V_read530_rewind_phi_fu_32323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_460_V_read530_phi_phi_fu_76677_p4 = data_460_V_read.read();
        } else {
            ap_phi_mux_data_460_V_read530_phi_phi_fu_76677_p4 = ap_phi_reg_pp0_iter0_data_460_V_read530_phi_reg_76673.read();
        }
    } else {
        ap_phi_mux_data_460_V_read530_phi_phi_fu_76677_p4 = ap_phi_reg_pp0_iter0_data_460_V_read530_phi_reg_76673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_460_V_read530_rewind_phi_fu_32323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_460_V_read530_rewind_phi_fu_32323_p6 = data_460_V_read530_phi_reg_76673.read();
    } else {
        ap_phi_mux_data_460_V_read530_rewind_phi_fu_32323_p6 = data_460_V_read530_rewind_reg_32319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_461_V_read531_phi_phi_fu_76690_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_461_V_read531_phi_phi_fu_76690_p4 = ap_phi_mux_data_461_V_read531_rewind_phi_fu_32337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_461_V_read531_phi_phi_fu_76690_p4 = data_461_V_read.read();
        } else {
            ap_phi_mux_data_461_V_read531_phi_phi_fu_76690_p4 = ap_phi_reg_pp0_iter0_data_461_V_read531_phi_reg_76686.read();
        }
    } else {
        ap_phi_mux_data_461_V_read531_phi_phi_fu_76690_p4 = ap_phi_reg_pp0_iter0_data_461_V_read531_phi_reg_76686.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_461_V_read531_rewind_phi_fu_32337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_461_V_read531_rewind_phi_fu_32337_p6 = data_461_V_read531_phi_reg_76686.read();
    } else {
        ap_phi_mux_data_461_V_read531_rewind_phi_fu_32337_p6 = data_461_V_read531_rewind_reg_32333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_462_V_read532_phi_phi_fu_76703_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_462_V_read532_phi_phi_fu_76703_p4 = ap_phi_mux_data_462_V_read532_rewind_phi_fu_32351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_462_V_read532_phi_phi_fu_76703_p4 = data_462_V_read.read();
        } else {
            ap_phi_mux_data_462_V_read532_phi_phi_fu_76703_p4 = ap_phi_reg_pp0_iter0_data_462_V_read532_phi_reg_76699.read();
        }
    } else {
        ap_phi_mux_data_462_V_read532_phi_phi_fu_76703_p4 = ap_phi_reg_pp0_iter0_data_462_V_read532_phi_reg_76699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_462_V_read532_rewind_phi_fu_32351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_462_V_read532_rewind_phi_fu_32351_p6 = data_462_V_read532_phi_reg_76699.read();
    } else {
        ap_phi_mux_data_462_V_read532_rewind_phi_fu_32351_p6 = data_462_V_read532_rewind_reg_32347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_463_V_read533_phi_phi_fu_76716_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_463_V_read533_phi_phi_fu_76716_p4 = ap_phi_mux_data_463_V_read533_rewind_phi_fu_32365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_463_V_read533_phi_phi_fu_76716_p4 = data_463_V_read.read();
        } else {
            ap_phi_mux_data_463_V_read533_phi_phi_fu_76716_p4 = ap_phi_reg_pp0_iter0_data_463_V_read533_phi_reg_76712.read();
        }
    } else {
        ap_phi_mux_data_463_V_read533_phi_phi_fu_76716_p4 = ap_phi_reg_pp0_iter0_data_463_V_read533_phi_reg_76712.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_463_V_read533_rewind_phi_fu_32365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_463_V_read533_rewind_phi_fu_32365_p6 = data_463_V_read533_phi_reg_76712.read();
    } else {
        ap_phi_mux_data_463_V_read533_rewind_phi_fu_32365_p6 = data_463_V_read533_rewind_reg_32361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_464_V_read534_phi_phi_fu_76729_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_464_V_read534_phi_phi_fu_76729_p4 = ap_phi_mux_data_464_V_read534_rewind_phi_fu_32379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_464_V_read534_phi_phi_fu_76729_p4 = data_464_V_read.read();
        } else {
            ap_phi_mux_data_464_V_read534_phi_phi_fu_76729_p4 = ap_phi_reg_pp0_iter0_data_464_V_read534_phi_reg_76725.read();
        }
    } else {
        ap_phi_mux_data_464_V_read534_phi_phi_fu_76729_p4 = ap_phi_reg_pp0_iter0_data_464_V_read534_phi_reg_76725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_464_V_read534_rewind_phi_fu_32379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_464_V_read534_rewind_phi_fu_32379_p6 = data_464_V_read534_phi_reg_76725.read();
    } else {
        ap_phi_mux_data_464_V_read534_rewind_phi_fu_32379_p6 = data_464_V_read534_rewind_reg_32375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_465_V_read535_phi_phi_fu_76742_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_465_V_read535_phi_phi_fu_76742_p4 = ap_phi_mux_data_465_V_read535_rewind_phi_fu_32393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_465_V_read535_phi_phi_fu_76742_p4 = data_465_V_read.read();
        } else {
            ap_phi_mux_data_465_V_read535_phi_phi_fu_76742_p4 = ap_phi_reg_pp0_iter0_data_465_V_read535_phi_reg_76738.read();
        }
    } else {
        ap_phi_mux_data_465_V_read535_phi_phi_fu_76742_p4 = ap_phi_reg_pp0_iter0_data_465_V_read535_phi_reg_76738.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_465_V_read535_rewind_phi_fu_32393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_465_V_read535_rewind_phi_fu_32393_p6 = data_465_V_read535_phi_reg_76738.read();
    } else {
        ap_phi_mux_data_465_V_read535_rewind_phi_fu_32393_p6 = data_465_V_read535_rewind_reg_32389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_466_V_read536_phi_phi_fu_76755_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_466_V_read536_phi_phi_fu_76755_p4 = ap_phi_mux_data_466_V_read536_rewind_phi_fu_32407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_466_V_read536_phi_phi_fu_76755_p4 = data_466_V_read.read();
        } else {
            ap_phi_mux_data_466_V_read536_phi_phi_fu_76755_p4 = ap_phi_reg_pp0_iter0_data_466_V_read536_phi_reg_76751.read();
        }
    } else {
        ap_phi_mux_data_466_V_read536_phi_phi_fu_76755_p4 = ap_phi_reg_pp0_iter0_data_466_V_read536_phi_reg_76751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_466_V_read536_rewind_phi_fu_32407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_466_V_read536_rewind_phi_fu_32407_p6 = data_466_V_read536_phi_reg_76751.read();
    } else {
        ap_phi_mux_data_466_V_read536_rewind_phi_fu_32407_p6 = data_466_V_read536_rewind_reg_32403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_467_V_read537_phi_phi_fu_76768_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_467_V_read537_phi_phi_fu_76768_p4 = ap_phi_mux_data_467_V_read537_rewind_phi_fu_32421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_467_V_read537_phi_phi_fu_76768_p4 = data_467_V_read.read();
        } else {
            ap_phi_mux_data_467_V_read537_phi_phi_fu_76768_p4 = ap_phi_reg_pp0_iter0_data_467_V_read537_phi_reg_76764.read();
        }
    } else {
        ap_phi_mux_data_467_V_read537_phi_phi_fu_76768_p4 = ap_phi_reg_pp0_iter0_data_467_V_read537_phi_reg_76764.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_467_V_read537_rewind_phi_fu_32421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_467_V_read537_rewind_phi_fu_32421_p6 = data_467_V_read537_phi_reg_76764.read();
    } else {
        ap_phi_mux_data_467_V_read537_rewind_phi_fu_32421_p6 = data_467_V_read537_rewind_reg_32417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_468_V_read538_phi_phi_fu_76781_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_468_V_read538_phi_phi_fu_76781_p4 = ap_phi_mux_data_468_V_read538_rewind_phi_fu_32435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_468_V_read538_phi_phi_fu_76781_p4 = data_468_V_read.read();
        } else {
            ap_phi_mux_data_468_V_read538_phi_phi_fu_76781_p4 = ap_phi_reg_pp0_iter0_data_468_V_read538_phi_reg_76777.read();
        }
    } else {
        ap_phi_mux_data_468_V_read538_phi_phi_fu_76781_p4 = ap_phi_reg_pp0_iter0_data_468_V_read538_phi_reg_76777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_468_V_read538_rewind_phi_fu_32435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_468_V_read538_rewind_phi_fu_32435_p6 = data_468_V_read538_phi_reg_76777.read();
    } else {
        ap_phi_mux_data_468_V_read538_rewind_phi_fu_32435_p6 = data_468_V_read538_rewind_reg_32431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_469_V_read539_phi_phi_fu_76794_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_469_V_read539_phi_phi_fu_76794_p4 = ap_phi_mux_data_469_V_read539_rewind_phi_fu_32449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_469_V_read539_phi_phi_fu_76794_p4 = data_469_V_read.read();
        } else {
            ap_phi_mux_data_469_V_read539_phi_phi_fu_76794_p4 = ap_phi_reg_pp0_iter0_data_469_V_read539_phi_reg_76790.read();
        }
    } else {
        ap_phi_mux_data_469_V_read539_phi_phi_fu_76794_p4 = ap_phi_reg_pp0_iter0_data_469_V_read539_phi_reg_76790.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_469_V_read539_rewind_phi_fu_32449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_469_V_read539_rewind_phi_fu_32449_p6 = data_469_V_read539_phi_reg_76790.read();
    } else {
        ap_phi_mux_data_469_V_read539_rewind_phi_fu_32449_p6 = data_469_V_read539_rewind_reg_32445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_46_V_read116_phi_phi_fu_71295_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_46_V_read116_phi_phi_fu_71295_p4 = ap_phi_mux_data_46_V_read116_rewind_phi_fu_26527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_46_V_read116_phi_phi_fu_71295_p4 = data_46_V_read.read();
        } else {
            ap_phi_mux_data_46_V_read116_phi_phi_fu_71295_p4 = ap_phi_reg_pp0_iter0_data_46_V_read116_phi_reg_71291.read();
        }
    } else {
        ap_phi_mux_data_46_V_read116_phi_phi_fu_71295_p4 = ap_phi_reg_pp0_iter0_data_46_V_read116_phi_reg_71291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_46_V_read116_rewind_phi_fu_26527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_46_V_read116_rewind_phi_fu_26527_p6 = data_46_V_read116_phi_reg_71291.read();
    } else {
        ap_phi_mux_data_46_V_read116_rewind_phi_fu_26527_p6 = data_46_V_read116_rewind_reg_26523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_470_V_read540_phi_phi_fu_76807_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_470_V_read540_phi_phi_fu_76807_p4 = ap_phi_mux_data_470_V_read540_rewind_phi_fu_32463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_470_V_read540_phi_phi_fu_76807_p4 = data_470_V_read.read();
        } else {
            ap_phi_mux_data_470_V_read540_phi_phi_fu_76807_p4 = ap_phi_reg_pp0_iter0_data_470_V_read540_phi_reg_76803.read();
        }
    } else {
        ap_phi_mux_data_470_V_read540_phi_phi_fu_76807_p4 = ap_phi_reg_pp0_iter0_data_470_V_read540_phi_reg_76803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_470_V_read540_rewind_phi_fu_32463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_470_V_read540_rewind_phi_fu_32463_p6 = data_470_V_read540_phi_reg_76803.read();
    } else {
        ap_phi_mux_data_470_V_read540_rewind_phi_fu_32463_p6 = data_470_V_read540_rewind_reg_32459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_471_V_read541_phi_phi_fu_76820_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_471_V_read541_phi_phi_fu_76820_p4 = ap_phi_mux_data_471_V_read541_rewind_phi_fu_32477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_471_V_read541_phi_phi_fu_76820_p4 = data_471_V_read.read();
        } else {
            ap_phi_mux_data_471_V_read541_phi_phi_fu_76820_p4 = ap_phi_reg_pp0_iter0_data_471_V_read541_phi_reg_76816.read();
        }
    } else {
        ap_phi_mux_data_471_V_read541_phi_phi_fu_76820_p4 = ap_phi_reg_pp0_iter0_data_471_V_read541_phi_reg_76816.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_471_V_read541_rewind_phi_fu_32477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_471_V_read541_rewind_phi_fu_32477_p6 = data_471_V_read541_phi_reg_76816.read();
    } else {
        ap_phi_mux_data_471_V_read541_rewind_phi_fu_32477_p6 = data_471_V_read541_rewind_reg_32473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_472_V_read542_phi_phi_fu_76833_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_472_V_read542_phi_phi_fu_76833_p4 = ap_phi_mux_data_472_V_read542_rewind_phi_fu_32491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_472_V_read542_phi_phi_fu_76833_p4 = data_472_V_read.read();
        } else {
            ap_phi_mux_data_472_V_read542_phi_phi_fu_76833_p4 = ap_phi_reg_pp0_iter0_data_472_V_read542_phi_reg_76829.read();
        }
    } else {
        ap_phi_mux_data_472_V_read542_phi_phi_fu_76833_p4 = ap_phi_reg_pp0_iter0_data_472_V_read542_phi_reg_76829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_472_V_read542_rewind_phi_fu_32491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_472_V_read542_rewind_phi_fu_32491_p6 = data_472_V_read542_phi_reg_76829.read();
    } else {
        ap_phi_mux_data_472_V_read542_rewind_phi_fu_32491_p6 = data_472_V_read542_rewind_reg_32487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_473_V_read543_phi_phi_fu_76846_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_473_V_read543_phi_phi_fu_76846_p4 = ap_phi_mux_data_473_V_read543_rewind_phi_fu_32505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_473_V_read543_phi_phi_fu_76846_p4 = data_473_V_read.read();
        } else {
            ap_phi_mux_data_473_V_read543_phi_phi_fu_76846_p4 = ap_phi_reg_pp0_iter0_data_473_V_read543_phi_reg_76842.read();
        }
    } else {
        ap_phi_mux_data_473_V_read543_phi_phi_fu_76846_p4 = ap_phi_reg_pp0_iter0_data_473_V_read543_phi_reg_76842.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_473_V_read543_rewind_phi_fu_32505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_473_V_read543_rewind_phi_fu_32505_p6 = data_473_V_read543_phi_reg_76842.read();
    } else {
        ap_phi_mux_data_473_V_read543_rewind_phi_fu_32505_p6 = data_473_V_read543_rewind_reg_32501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_474_V_read544_phi_phi_fu_76859_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_474_V_read544_phi_phi_fu_76859_p4 = ap_phi_mux_data_474_V_read544_rewind_phi_fu_32519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_474_V_read544_phi_phi_fu_76859_p4 = data_474_V_read.read();
        } else {
            ap_phi_mux_data_474_V_read544_phi_phi_fu_76859_p4 = ap_phi_reg_pp0_iter0_data_474_V_read544_phi_reg_76855.read();
        }
    } else {
        ap_phi_mux_data_474_V_read544_phi_phi_fu_76859_p4 = ap_phi_reg_pp0_iter0_data_474_V_read544_phi_reg_76855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_474_V_read544_rewind_phi_fu_32519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_474_V_read544_rewind_phi_fu_32519_p6 = data_474_V_read544_phi_reg_76855.read();
    } else {
        ap_phi_mux_data_474_V_read544_rewind_phi_fu_32519_p6 = data_474_V_read544_rewind_reg_32515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_475_V_read545_phi_phi_fu_76872_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_475_V_read545_phi_phi_fu_76872_p4 = ap_phi_mux_data_475_V_read545_rewind_phi_fu_32533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_475_V_read545_phi_phi_fu_76872_p4 = data_475_V_read.read();
        } else {
            ap_phi_mux_data_475_V_read545_phi_phi_fu_76872_p4 = ap_phi_reg_pp0_iter0_data_475_V_read545_phi_reg_76868.read();
        }
    } else {
        ap_phi_mux_data_475_V_read545_phi_phi_fu_76872_p4 = ap_phi_reg_pp0_iter0_data_475_V_read545_phi_reg_76868.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_475_V_read545_rewind_phi_fu_32533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_475_V_read545_rewind_phi_fu_32533_p6 = data_475_V_read545_phi_reg_76868.read();
    } else {
        ap_phi_mux_data_475_V_read545_rewind_phi_fu_32533_p6 = data_475_V_read545_rewind_reg_32529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_476_V_read546_phi_phi_fu_76885_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_476_V_read546_phi_phi_fu_76885_p4 = ap_phi_mux_data_476_V_read546_rewind_phi_fu_32547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_476_V_read546_phi_phi_fu_76885_p4 = data_476_V_read.read();
        } else {
            ap_phi_mux_data_476_V_read546_phi_phi_fu_76885_p4 = ap_phi_reg_pp0_iter0_data_476_V_read546_phi_reg_76881.read();
        }
    } else {
        ap_phi_mux_data_476_V_read546_phi_phi_fu_76885_p4 = ap_phi_reg_pp0_iter0_data_476_V_read546_phi_reg_76881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_476_V_read546_rewind_phi_fu_32547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_476_V_read546_rewind_phi_fu_32547_p6 = data_476_V_read546_phi_reg_76881.read();
    } else {
        ap_phi_mux_data_476_V_read546_rewind_phi_fu_32547_p6 = data_476_V_read546_rewind_reg_32543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_477_V_read547_phi_phi_fu_76898_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_477_V_read547_phi_phi_fu_76898_p4 = ap_phi_mux_data_477_V_read547_rewind_phi_fu_32561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_477_V_read547_phi_phi_fu_76898_p4 = data_477_V_read.read();
        } else {
            ap_phi_mux_data_477_V_read547_phi_phi_fu_76898_p4 = ap_phi_reg_pp0_iter0_data_477_V_read547_phi_reg_76894.read();
        }
    } else {
        ap_phi_mux_data_477_V_read547_phi_phi_fu_76898_p4 = ap_phi_reg_pp0_iter0_data_477_V_read547_phi_reg_76894.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_477_V_read547_rewind_phi_fu_32561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_477_V_read547_rewind_phi_fu_32561_p6 = data_477_V_read547_phi_reg_76894.read();
    } else {
        ap_phi_mux_data_477_V_read547_rewind_phi_fu_32561_p6 = data_477_V_read547_rewind_reg_32557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_478_V_read548_phi_phi_fu_76911_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_478_V_read548_phi_phi_fu_76911_p4 = ap_phi_mux_data_478_V_read548_rewind_phi_fu_32575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_478_V_read548_phi_phi_fu_76911_p4 = data_478_V_read.read();
        } else {
            ap_phi_mux_data_478_V_read548_phi_phi_fu_76911_p4 = ap_phi_reg_pp0_iter0_data_478_V_read548_phi_reg_76907.read();
        }
    } else {
        ap_phi_mux_data_478_V_read548_phi_phi_fu_76911_p4 = ap_phi_reg_pp0_iter0_data_478_V_read548_phi_reg_76907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_478_V_read548_rewind_phi_fu_32575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_478_V_read548_rewind_phi_fu_32575_p6 = data_478_V_read548_phi_reg_76907.read();
    } else {
        ap_phi_mux_data_478_V_read548_rewind_phi_fu_32575_p6 = data_478_V_read548_rewind_reg_32571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_479_V_read549_phi_phi_fu_76924_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_479_V_read549_phi_phi_fu_76924_p4 = ap_phi_mux_data_479_V_read549_rewind_phi_fu_32589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_479_V_read549_phi_phi_fu_76924_p4 = data_479_V_read.read();
        } else {
            ap_phi_mux_data_479_V_read549_phi_phi_fu_76924_p4 = ap_phi_reg_pp0_iter0_data_479_V_read549_phi_reg_76920.read();
        }
    } else {
        ap_phi_mux_data_479_V_read549_phi_phi_fu_76924_p4 = ap_phi_reg_pp0_iter0_data_479_V_read549_phi_reg_76920.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_479_V_read549_rewind_phi_fu_32589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_479_V_read549_rewind_phi_fu_32589_p6 = data_479_V_read549_phi_reg_76920.read();
    } else {
        ap_phi_mux_data_479_V_read549_rewind_phi_fu_32589_p6 = data_479_V_read549_rewind_reg_32585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_47_V_read117_phi_phi_fu_71308_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_47_V_read117_phi_phi_fu_71308_p4 = ap_phi_mux_data_47_V_read117_rewind_phi_fu_26541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_47_V_read117_phi_phi_fu_71308_p4 = data_47_V_read.read();
        } else {
            ap_phi_mux_data_47_V_read117_phi_phi_fu_71308_p4 = ap_phi_reg_pp0_iter0_data_47_V_read117_phi_reg_71304.read();
        }
    } else {
        ap_phi_mux_data_47_V_read117_phi_phi_fu_71308_p4 = ap_phi_reg_pp0_iter0_data_47_V_read117_phi_reg_71304.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_47_V_read117_rewind_phi_fu_26541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_47_V_read117_rewind_phi_fu_26541_p6 = data_47_V_read117_phi_reg_71304.read();
    } else {
        ap_phi_mux_data_47_V_read117_rewind_phi_fu_26541_p6 = data_47_V_read117_rewind_reg_26537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_480_V_read550_phi_phi_fu_76937_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_480_V_read550_phi_phi_fu_76937_p4 = ap_phi_mux_data_480_V_read550_rewind_phi_fu_32603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_480_V_read550_phi_phi_fu_76937_p4 = data_480_V_read.read();
        } else {
            ap_phi_mux_data_480_V_read550_phi_phi_fu_76937_p4 = ap_phi_reg_pp0_iter0_data_480_V_read550_phi_reg_76933.read();
        }
    } else {
        ap_phi_mux_data_480_V_read550_phi_phi_fu_76937_p4 = ap_phi_reg_pp0_iter0_data_480_V_read550_phi_reg_76933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_480_V_read550_rewind_phi_fu_32603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_480_V_read550_rewind_phi_fu_32603_p6 = data_480_V_read550_phi_reg_76933.read();
    } else {
        ap_phi_mux_data_480_V_read550_rewind_phi_fu_32603_p6 = data_480_V_read550_rewind_reg_32599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_481_V_read551_phi_phi_fu_76950_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_481_V_read551_phi_phi_fu_76950_p4 = ap_phi_mux_data_481_V_read551_rewind_phi_fu_32617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_481_V_read551_phi_phi_fu_76950_p4 = data_481_V_read.read();
        } else {
            ap_phi_mux_data_481_V_read551_phi_phi_fu_76950_p4 = ap_phi_reg_pp0_iter0_data_481_V_read551_phi_reg_76946.read();
        }
    } else {
        ap_phi_mux_data_481_V_read551_phi_phi_fu_76950_p4 = ap_phi_reg_pp0_iter0_data_481_V_read551_phi_reg_76946.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_481_V_read551_rewind_phi_fu_32617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_481_V_read551_rewind_phi_fu_32617_p6 = data_481_V_read551_phi_reg_76946.read();
    } else {
        ap_phi_mux_data_481_V_read551_rewind_phi_fu_32617_p6 = data_481_V_read551_rewind_reg_32613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_482_V_read552_phi_phi_fu_76963_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_482_V_read552_phi_phi_fu_76963_p4 = ap_phi_mux_data_482_V_read552_rewind_phi_fu_32631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_482_V_read552_phi_phi_fu_76963_p4 = data_482_V_read.read();
        } else {
            ap_phi_mux_data_482_V_read552_phi_phi_fu_76963_p4 = ap_phi_reg_pp0_iter0_data_482_V_read552_phi_reg_76959.read();
        }
    } else {
        ap_phi_mux_data_482_V_read552_phi_phi_fu_76963_p4 = ap_phi_reg_pp0_iter0_data_482_V_read552_phi_reg_76959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_482_V_read552_rewind_phi_fu_32631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_482_V_read552_rewind_phi_fu_32631_p6 = data_482_V_read552_phi_reg_76959.read();
    } else {
        ap_phi_mux_data_482_V_read552_rewind_phi_fu_32631_p6 = data_482_V_read552_rewind_reg_32627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_483_V_read553_phi_phi_fu_76976_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_483_V_read553_phi_phi_fu_76976_p4 = ap_phi_mux_data_483_V_read553_rewind_phi_fu_32645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_483_V_read553_phi_phi_fu_76976_p4 = data_483_V_read.read();
        } else {
            ap_phi_mux_data_483_V_read553_phi_phi_fu_76976_p4 = ap_phi_reg_pp0_iter0_data_483_V_read553_phi_reg_76972.read();
        }
    } else {
        ap_phi_mux_data_483_V_read553_phi_phi_fu_76976_p4 = ap_phi_reg_pp0_iter0_data_483_V_read553_phi_reg_76972.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_483_V_read553_rewind_phi_fu_32645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_483_V_read553_rewind_phi_fu_32645_p6 = data_483_V_read553_phi_reg_76972.read();
    } else {
        ap_phi_mux_data_483_V_read553_rewind_phi_fu_32645_p6 = data_483_V_read553_rewind_reg_32641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_484_V_read554_phi_phi_fu_76989_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_484_V_read554_phi_phi_fu_76989_p4 = ap_phi_mux_data_484_V_read554_rewind_phi_fu_32659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_484_V_read554_phi_phi_fu_76989_p4 = data_484_V_read.read();
        } else {
            ap_phi_mux_data_484_V_read554_phi_phi_fu_76989_p4 = ap_phi_reg_pp0_iter0_data_484_V_read554_phi_reg_76985.read();
        }
    } else {
        ap_phi_mux_data_484_V_read554_phi_phi_fu_76989_p4 = ap_phi_reg_pp0_iter0_data_484_V_read554_phi_reg_76985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_484_V_read554_rewind_phi_fu_32659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_484_V_read554_rewind_phi_fu_32659_p6 = data_484_V_read554_phi_reg_76985.read();
    } else {
        ap_phi_mux_data_484_V_read554_rewind_phi_fu_32659_p6 = data_484_V_read554_rewind_reg_32655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_485_V_read555_phi_phi_fu_77002_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_485_V_read555_phi_phi_fu_77002_p4 = ap_phi_mux_data_485_V_read555_rewind_phi_fu_32673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_485_V_read555_phi_phi_fu_77002_p4 = data_485_V_read.read();
        } else {
            ap_phi_mux_data_485_V_read555_phi_phi_fu_77002_p4 = ap_phi_reg_pp0_iter0_data_485_V_read555_phi_reg_76998.read();
        }
    } else {
        ap_phi_mux_data_485_V_read555_phi_phi_fu_77002_p4 = ap_phi_reg_pp0_iter0_data_485_V_read555_phi_reg_76998.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_485_V_read555_rewind_phi_fu_32673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_485_V_read555_rewind_phi_fu_32673_p6 = data_485_V_read555_phi_reg_76998.read();
    } else {
        ap_phi_mux_data_485_V_read555_rewind_phi_fu_32673_p6 = data_485_V_read555_rewind_reg_32669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_486_V_read556_phi_phi_fu_77015_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_486_V_read556_phi_phi_fu_77015_p4 = ap_phi_mux_data_486_V_read556_rewind_phi_fu_32687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_486_V_read556_phi_phi_fu_77015_p4 = data_486_V_read.read();
        } else {
            ap_phi_mux_data_486_V_read556_phi_phi_fu_77015_p4 = ap_phi_reg_pp0_iter0_data_486_V_read556_phi_reg_77011.read();
        }
    } else {
        ap_phi_mux_data_486_V_read556_phi_phi_fu_77015_p4 = ap_phi_reg_pp0_iter0_data_486_V_read556_phi_reg_77011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_486_V_read556_rewind_phi_fu_32687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_486_V_read556_rewind_phi_fu_32687_p6 = data_486_V_read556_phi_reg_77011.read();
    } else {
        ap_phi_mux_data_486_V_read556_rewind_phi_fu_32687_p6 = data_486_V_read556_rewind_reg_32683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_487_V_read557_phi_phi_fu_77028_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_487_V_read557_phi_phi_fu_77028_p4 = ap_phi_mux_data_487_V_read557_rewind_phi_fu_32701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_487_V_read557_phi_phi_fu_77028_p4 = data_487_V_read.read();
        } else {
            ap_phi_mux_data_487_V_read557_phi_phi_fu_77028_p4 = ap_phi_reg_pp0_iter0_data_487_V_read557_phi_reg_77024.read();
        }
    } else {
        ap_phi_mux_data_487_V_read557_phi_phi_fu_77028_p4 = ap_phi_reg_pp0_iter0_data_487_V_read557_phi_reg_77024.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_487_V_read557_rewind_phi_fu_32701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_487_V_read557_rewind_phi_fu_32701_p6 = data_487_V_read557_phi_reg_77024.read();
    } else {
        ap_phi_mux_data_487_V_read557_rewind_phi_fu_32701_p6 = data_487_V_read557_rewind_reg_32697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_488_V_read558_phi_phi_fu_77041_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_488_V_read558_phi_phi_fu_77041_p4 = ap_phi_mux_data_488_V_read558_rewind_phi_fu_32715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_488_V_read558_phi_phi_fu_77041_p4 = data_488_V_read.read();
        } else {
            ap_phi_mux_data_488_V_read558_phi_phi_fu_77041_p4 = ap_phi_reg_pp0_iter0_data_488_V_read558_phi_reg_77037.read();
        }
    } else {
        ap_phi_mux_data_488_V_read558_phi_phi_fu_77041_p4 = ap_phi_reg_pp0_iter0_data_488_V_read558_phi_reg_77037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_488_V_read558_rewind_phi_fu_32715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_488_V_read558_rewind_phi_fu_32715_p6 = data_488_V_read558_phi_reg_77037.read();
    } else {
        ap_phi_mux_data_488_V_read558_rewind_phi_fu_32715_p6 = data_488_V_read558_rewind_reg_32711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_489_V_read559_phi_phi_fu_77054_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_489_V_read559_phi_phi_fu_77054_p4 = ap_phi_mux_data_489_V_read559_rewind_phi_fu_32729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_489_V_read559_phi_phi_fu_77054_p4 = data_489_V_read.read();
        } else {
            ap_phi_mux_data_489_V_read559_phi_phi_fu_77054_p4 = ap_phi_reg_pp0_iter0_data_489_V_read559_phi_reg_77050.read();
        }
    } else {
        ap_phi_mux_data_489_V_read559_phi_phi_fu_77054_p4 = ap_phi_reg_pp0_iter0_data_489_V_read559_phi_reg_77050.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_489_V_read559_rewind_phi_fu_32729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_489_V_read559_rewind_phi_fu_32729_p6 = data_489_V_read559_phi_reg_77050.read();
    } else {
        ap_phi_mux_data_489_V_read559_rewind_phi_fu_32729_p6 = data_489_V_read559_rewind_reg_32725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_48_V_read118_phi_phi_fu_71321_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_48_V_read118_phi_phi_fu_71321_p4 = ap_phi_mux_data_48_V_read118_rewind_phi_fu_26555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_48_V_read118_phi_phi_fu_71321_p4 = data_48_V_read.read();
        } else {
            ap_phi_mux_data_48_V_read118_phi_phi_fu_71321_p4 = ap_phi_reg_pp0_iter0_data_48_V_read118_phi_reg_71317.read();
        }
    } else {
        ap_phi_mux_data_48_V_read118_phi_phi_fu_71321_p4 = ap_phi_reg_pp0_iter0_data_48_V_read118_phi_reg_71317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_48_V_read118_rewind_phi_fu_26555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_48_V_read118_rewind_phi_fu_26555_p6 = data_48_V_read118_phi_reg_71317.read();
    } else {
        ap_phi_mux_data_48_V_read118_rewind_phi_fu_26555_p6 = data_48_V_read118_rewind_reg_26551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_490_V_read560_phi_phi_fu_77067_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_490_V_read560_phi_phi_fu_77067_p4 = ap_phi_mux_data_490_V_read560_rewind_phi_fu_32743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_490_V_read560_phi_phi_fu_77067_p4 = data_490_V_read.read();
        } else {
            ap_phi_mux_data_490_V_read560_phi_phi_fu_77067_p4 = ap_phi_reg_pp0_iter0_data_490_V_read560_phi_reg_77063.read();
        }
    } else {
        ap_phi_mux_data_490_V_read560_phi_phi_fu_77067_p4 = ap_phi_reg_pp0_iter0_data_490_V_read560_phi_reg_77063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_490_V_read560_rewind_phi_fu_32743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_490_V_read560_rewind_phi_fu_32743_p6 = data_490_V_read560_phi_reg_77063.read();
    } else {
        ap_phi_mux_data_490_V_read560_rewind_phi_fu_32743_p6 = data_490_V_read560_rewind_reg_32739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_491_V_read561_phi_phi_fu_77080_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_491_V_read561_phi_phi_fu_77080_p4 = ap_phi_mux_data_491_V_read561_rewind_phi_fu_32757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_491_V_read561_phi_phi_fu_77080_p4 = data_491_V_read.read();
        } else {
            ap_phi_mux_data_491_V_read561_phi_phi_fu_77080_p4 = ap_phi_reg_pp0_iter0_data_491_V_read561_phi_reg_77076.read();
        }
    } else {
        ap_phi_mux_data_491_V_read561_phi_phi_fu_77080_p4 = ap_phi_reg_pp0_iter0_data_491_V_read561_phi_reg_77076.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_491_V_read561_rewind_phi_fu_32757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_491_V_read561_rewind_phi_fu_32757_p6 = data_491_V_read561_phi_reg_77076.read();
    } else {
        ap_phi_mux_data_491_V_read561_rewind_phi_fu_32757_p6 = data_491_V_read561_rewind_reg_32753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_492_V_read562_phi_phi_fu_77093_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_492_V_read562_phi_phi_fu_77093_p4 = ap_phi_mux_data_492_V_read562_rewind_phi_fu_32771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_492_V_read562_phi_phi_fu_77093_p4 = data_492_V_read.read();
        } else {
            ap_phi_mux_data_492_V_read562_phi_phi_fu_77093_p4 = ap_phi_reg_pp0_iter0_data_492_V_read562_phi_reg_77089.read();
        }
    } else {
        ap_phi_mux_data_492_V_read562_phi_phi_fu_77093_p4 = ap_phi_reg_pp0_iter0_data_492_V_read562_phi_reg_77089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_492_V_read562_rewind_phi_fu_32771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_492_V_read562_rewind_phi_fu_32771_p6 = data_492_V_read562_phi_reg_77089.read();
    } else {
        ap_phi_mux_data_492_V_read562_rewind_phi_fu_32771_p6 = data_492_V_read562_rewind_reg_32767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_493_V_read563_phi_phi_fu_77106_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_493_V_read563_phi_phi_fu_77106_p4 = ap_phi_mux_data_493_V_read563_rewind_phi_fu_32785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_493_V_read563_phi_phi_fu_77106_p4 = data_493_V_read.read();
        } else {
            ap_phi_mux_data_493_V_read563_phi_phi_fu_77106_p4 = ap_phi_reg_pp0_iter0_data_493_V_read563_phi_reg_77102.read();
        }
    } else {
        ap_phi_mux_data_493_V_read563_phi_phi_fu_77106_p4 = ap_phi_reg_pp0_iter0_data_493_V_read563_phi_reg_77102.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_493_V_read563_rewind_phi_fu_32785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_493_V_read563_rewind_phi_fu_32785_p6 = data_493_V_read563_phi_reg_77102.read();
    } else {
        ap_phi_mux_data_493_V_read563_rewind_phi_fu_32785_p6 = data_493_V_read563_rewind_reg_32781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_494_V_read564_phi_phi_fu_77119_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_494_V_read564_phi_phi_fu_77119_p4 = ap_phi_mux_data_494_V_read564_rewind_phi_fu_32799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_494_V_read564_phi_phi_fu_77119_p4 = data_494_V_read.read();
        } else {
            ap_phi_mux_data_494_V_read564_phi_phi_fu_77119_p4 = ap_phi_reg_pp0_iter0_data_494_V_read564_phi_reg_77115.read();
        }
    } else {
        ap_phi_mux_data_494_V_read564_phi_phi_fu_77119_p4 = ap_phi_reg_pp0_iter0_data_494_V_read564_phi_reg_77115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_494_V_read564_rewind_phi_fu_32799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_494_V_read564_rewind_phi_fu_32799_p6 = data_494_V_read564_phi_reg_77115.read();
    } else {
        ap_phi_mux_data_494_V_read564_rewind_phi_fu_32799_p6 = data_494_V_read564_rewind_reg_32795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_495_V_read565_phi_phi_fu_77132_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_495_V_read565_phi_phi_fu_77132_p4 = ap_phi_mux_data_495_V_read565_rewind_phi_fu_32813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_495_V_read565_phi_phi_fu_77132_p4 = data_495_V_read.read();
        } else {
            ap_phi_mux_data_495_V_read565_phi_phi_fu_77132_p4 = ap_phi_reg_pp0_iter0_data_495_V_read565_phi_reg_77128.read();
        }
    } else {
        ap_phi_mux_data_495_V_read565_phi_phi_fu_77132_p4 = ap_phi_reg_pp0_iter0_data_495_V_read565_phi_reg_77128.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_495_V_read565_rewind_phi_fu_32813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_495_V_read565_rewind_phi_fu_32813_p6 = data_495_V_read565_phi_reg_77128.read();
    } else {
        ap_phi_mux_data_495_V_read565_rewind_phi_fu_32813_p6 = data_495_V_read565_rewind_reg_32809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_496_V_read566_phi_phi_fu_77145_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_496_V_read566_phi_phi_fu_77145_p4 = ap_phi_mux_data_496_V_read566_rewind_phi_fu_32827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_496_V_read566_phi_phi_fu_77145_p4 = data_496_V_read.read();
        } else {
            ap_phi_mux_data_496_V_read566_phi_phi_fu_77145_p4 = ap_phi_reg_pp0_iter0_data_496_V_read566_phi_reg_77141.read();
        }
    } else {
        ap_phi_mux_data_496_V_read566_phi_phi_fu_77145_p4 = ap_phi_reg_pp0_iter0_data_496_V_read566_phi_reg_77141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_496_V_read566_rewind_phi_fu_32827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_496_V_read566_rewind_phi_fu_32827_p6 = data_496_V_read566_phi_reg_77141.read();
    } else {
        ap_phi_mux_data_496_V_read566_rewind_phi_fu_32827_p6 = data_496_V_read566_rewind_reg_32823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_497_V_read567_phi_phi_fu_77158_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_497_V_read567_phi_phi_fu_77158_p4 = ap_phi_mux_data_497_V_read567_rewind_phi_fu_32841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_497_V_read567_phi_phi_fu_77158_p4 = data_497_V_read.read();
        } else {
            ap_phi_mux_data_497_V_read567_phi_phi_fu_77158_p4 = ap_phi_reg_pp0_iter0_data_497_V_read567_phi_reg_77154.read();
        }
    } else {
        ap_phi_mux_data_497_V_read567_phi_phi_fu_77158_p4 = ap_phi_reg_pp0_iter0_data_497_V_read567_phi_reg_77154.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_497_V_read567_rewind_phi_fu_32841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_497_V_read567_rewind_phi_fu_32841_p6 = data_497_V_read567_phi_reg_77154.read();
    } else {
        ap_phi_mux_data_497_V_read567_rewind_phi_fu_32841_p6 = data_497_V_read567_rewind_reg_32837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_498_V_read568_phi_phi_fu_77171_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_498_V_read568_phi_phi_fu_77171_p4 = ap_phi_mux_data_498_V_read568_rewind_phi_fu_32855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_498_V_read568_phi_phi_fu_77171_p4 = data_498_V_read.read();
        } else {
            ap_phi_mux_data_498_V_read568_phi_phi_fu_77171_p4 = ap_phi_reg_pp0_iter0_data_498_V_read568_phi_reg_77167.read();
        }
    } else {
        ap_phi_mux_data_498_V_read568_phi_phi_fu_77171_p4 = ap_phi_reg_pp0_iter0_data_498_V_read568_phi_reg_77167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_498_V_read568_rewind_phi_fu_32855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_498_V_read568_rewind_phi_fu_32855_p6 = data_498_V_read568_phi_reg_77167.read();
    } else {
        ap_phi_mux_data_498_V_read568_rewind_phi_fu_32855_p6 = data_498_V_read568_rewind_reg_32851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_499_V_read569_phi_phi_fu_77184_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_499_V_read569_phi_phi_fu_77184_p4 = ap_phi_mux_data_499_V_read569_rewind_phi_fu_32869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_499_V_read569_phi_phi_fu_77184_p4 = data_499_V_read.read();
        } else {
            ap_phi_mux_data_499_V_read569_phi_phi_fu_77184_p4 = ap_phi_reg_pp0_iter0_data_499_V_read569_phi_reg_77180.read();
        }
    } else {
        ap_phi_mux_data_499_V_read569_phi_phi_fu_77184_p4 = ap_phi_reg_pp0_iter0_data_499_V_read569_phi_reg_77180.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_499_V_read569_rewind_phi_fu_32869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_499_V_read569_rewind_phi_fu_32869_p6 = data_499_V_read569_phi_reg_77180.read();
    } else {
        ap_phi_mux_data_499_V_read569_rewind_phi_fu_32869_p6 = data_499_V_read569_rewind_reg_32865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_49_V_read119_phi_phi_fu_71334_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_49_V_read119_phi_phi_fu_71334_p4 = ap_phi_mux_data_49_V_read119_rewind_phi_fu_26569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_49_V_read119_phi_phi_fu_71334_p4 = data_49_V_read.read();
        } else {
            ap_phi_mux_data_49_V_read119_phi_phi_fu_71334_p4 = ap_phi_reg_pp0_iter0_data_49_V_read119_phi_reg_71330.read();
        }
    } else {
        ap_phi_mux_data_49_V_read119_phi_phi_fu_71334_p4 = ap_phi_reg_pp0_iter0_data_49_V_read119_phi_reg_71330.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_49_V_read119_rewind_phi_fu_26569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_49_V_read119_rewind_phi_fu_26569_p6 = data_49_V_read119_phi_reg_71330.read();
    } else {
        ap_phi_mux_data_49_V_read119_rewind_phi_fu_26569_p6 = data_49_V_read119_rewind_reg_26565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_4_V_read74_phi_phi_fu_70749_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_4_V_read74_phi_phi_fu_70749_p4 = ap_phi_mux_data_4_V_read74_rewind_phi_fu_25939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_4_V_read74_phi_phi_fu_70749_p4 = data_4_V_read.read();
        } else {
            ap_phi_mux_data_4_V_read74_phi_phi_fu_70749_p4 = ap_phi_reg_pp0_iter0_data_4_V_read74_phi_reg_70745.read();
        }
    } else {
        ap_phi_mux_data_4_V_read74_phi_phi_fu_70749_p4 = ap_phi_reg_pp0_iter0_data_4_V_read74_phi_reg_70745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_4_V_read74_rewind_phi_fu_25939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_4_V_read74_rewind_phi_fu_25939_p6 = data_4_V_read74_phi_reg_70745.read();
    } else {
        ap_phi_mux_data_4_V_read74_rewind_phi_fu_25939_p6 = data_4_V_read74_rewind_reg_25935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_500_V_read570_phi_phi_fu_77197_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_500_V_read570_phi_phi_fu_77197_p4 = ap_phi_mux_data_500_V_read570_rewind_phi_fu_32883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_500_V_read570_phi_phi_fu_77197_p4 = data_500_V_read.read();
        } else {
            ap_phi_mux_data_500_V_read570_phi_phi_fu_77197_p4 = ap_phi_reg_pp0_iter0_data_500_V_read570_phi_reg_77193.read();
        }
    } else {
        ap_phi_mux_data_500_V_read570_phi_phi_fu_77197_p4 = ap_phi_reg_pp0_iter0_data_500_V_read570_phi_reg_77193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_500_V_read570_rewind_phi_fu_32883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_500_V_read570_rewind_phi_fu_32883_p6 = data_500_V_read570_phi_reg_77193.read();
    } else {
        ap_phi_mux_data_500_V_read570_rewind_phi_fu_32883_p6 = data_500_V_read570_rewind_reg_32879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_501_V_read571_phi_phi_fu_77210_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_501_V_read571_phi_phi_fu_77210_p4 = ap_phi_mux_data_501_V_read571_rewind_phi_fu_32897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_501_V_read571_phi_phi_fu_77210_p4 = data_501_V_read.read();
        } else {
            ap_phi_mux_data_501_V_read571_phi_phi_fu_77210_p4 = ap_phi_reg_pp0_iter0_data_501_V_read571_phi_reg_77206.read();
        }
    } else {
        ap_phi_mux_data_501_V_read571_phi_phi_fu_77210_p4 = ap_phi_reg_pp0_iter0_data_501_V_read571_phi_reg_77206.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_501_V_read571_rewind_phi_fu_32897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_501_V_read571_rewind_phi_fu_32897_p6 = data_501_V_read571_phi_reg_77206.read();
    } else {
        ap_phi_mux_data_501_V_read571_rewind_phi_fu_32897_p6 = data_501_V_read571_rewind_reg_32893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_502_V_read572_phi_phi_fu_77223_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_502_V_read572_phi_phi_fu_77223_p4 = ap_phi_mux_data_502_V_read572_rewind_phi_fu_32911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_502_V_read572_phi_phi_fu_77223_p4 = data_502_V_read.read();
        } else {
            ap_phi_mux_data_502_V_read572_phi_phi_fu_77223_p4 = ap_phi_reg_pp0_iter0_data_502_V_read572_phi_reg_77219.read();
        }
    } else {
        ap_phi_mux_data_502_V_read572_phi_phi_fu_77223_p4 = ap_phi_reg_pp0_iter0_data_502_V_read572_phi_reg_77219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_502_V_read572_rewind_phi_fu_32911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_502_V_read572_rewind_phi_fu_32911_p6 = data_502_V_read572_phi_reg_77219.read();
    } else {
        ap_phi_mux_data_502_V_read572_rewind_phi_fu_32911_p6 = data_502_V_read572_rewind_reg_32907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_503_V_read573_phi_phi_fu_77236_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_503_V_read573_phi_phi_fu_77236_p4 = ap_phi_mux_data_503_V_read573_rewind_phi_fu_32925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_503_V_read573_phi_phi_fu_77236_p4 = data_503_V_read.read();
        } else {
            ap_phi_mux_data_503_V_read573_phi_phi_fu_77236_p4 = ap_phi_reg_pp0_iter0_data_503_V_read573_phi_reg_77232.read();
        }
    } else {
        ap_phi_mux_data_503_V_read573_phi_phi_fu_77236_p4 = ap_phi_reg_pp0_iter0_data_503_V_read573_phi_reg_77232.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_503_V_read573_rewind_phi_fu_32925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_503_V_read573_rewind_phi_fu_32925_p6 = data_503_V_read573_phi_reg_77232.read();
    } else {
        ap_phi_mux_data_503_V_read573_rewind_phi_fu_32925_p6 = data_503_V_read573_rewind_reg_32921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_504_V_read574_phi_phi_fu_77249_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_504_V_read574_phi_phi_fu_77249_p4 = ap_phi_mux_data_504_V_read574_rewind_phi_fu_32939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_504_V_read574_phi_phi_fu_77249_p4 = data_504_V_read.read();
        } else {
            ap_phi_mux_data_504_V_read574_phi_phi_fu_77249_p4 = ap_phi_reg_pp0_iter0_data_504_V_read574_phi_reg_77245.read();
        }
    } else {
        ap_phi_mux_data_504_V_read574_phi_phi_fu_77249_p4 = ap_phi_reg_pp0_iter0_data_504_V_read574_phi_reg_77245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_504_V_read574_rewind_phi_fu_32939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_504_V_read574_rewind_phi_fu_32939_p6 = data_504_V_read574_phi_reg_77245.read();
    } else {
        ap_phi_mux_data_504_V_read574_rewind_phi_fu_32939_p6 = data_504_V_read574_rewind_reg_32935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_505_V_read575_phi_phi_fu_77262_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_505_V_read575_phi_phi_fu_77262_p4 = ap_phi_mux_data_505_V_read575_rewind_phi_fu_32953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_505_V_read575_phi_phi_fu_77262_p4 = data_505_V_read.read();
        } else {
            ap_phi_mux_data_505_V_read575_phi_phi_fu_77262_p4 = ap_phi_reg_pp0_iter0_data_505_V_read575_phi_reg_77258.read();
        }
    } else {
        ap_phi_mux_data_505_V_read575_phi_phi_fu_77262_p4 = ap_phi_reg_pp0_iter0_data_505_V_read575_phi_reg_77258.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_505_V_read575_rewind_phi_fu_32953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_505_V_read575_rewind_phi_fu_32953_p6 = data_505_V_read575_phi_reg_77258.read();
    } else {
        ap_phi_mux_data_505_V_read575_rewind_phi_fu_32953_p6 = data_505_V_read575_rewind_reg_32949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_506_V_read576_phi_phi_fu_77275_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_506_V_read576_phi_phi_fu_77275_p4 = ap_phi_mux_data_506_V_read576_rewind_phi_fu_32967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_506_V_read576_phi_phi_fu_77275_p4 = data_506_V_read.read();
        } else {
            ap_phi_mux_data_506_V_read576_phi_phi_fu_77275_p4 = ap_phi_reg_pp0_iter0_data_506_V_read576_phi_reg_77271.read();
        }
    } else {
        ap_phi_mux_data_506_V_read576_phi_phi_fu_77275_p4 = ap_phi_reg_pp0_iter0_data_506_V_read576_phi_reg_77271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_506_V_read576_rewind_phi_fu_32967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_506_V_read576_rewind_phi_fu_32967_p6 = data_506_V_read576_phi_reg_77271.read();
    } else {
        ap_phi_mux_data_506_V_read576_rewind_phi_fu_32967_p6 = data_506_V_read576_rewind_reg_32963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_507_V_read577_phi_phi_fu_77288_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_507_V_read577_phi_phi_fu_77288_p4 = ap_phi_mux_data_507_V_read577_rewind_phi_fu_32981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_507_V_read577_phi_phi_fu_77288_p4 = data_507_V_read.read();
        } else {
            ap_phi_mux_data_507_V_read577_phi_phi_fu_77288_p4 = ap_phi_reg_pp0_iter0_data_507_V_read577_phi_reg_77284.read();
        }
    } else {
        ap_phi_mux_data_507_V_read577_phi_phi_fu_77288_p4 = ap_phi_reg_pp0_iter0_data_507_V_read577_phi_reg_77284.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_507_V_read577_rewind_phi_fu_32981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_507_V_read577_rewind_phi_fu_32981_p6 = data_507_V_read577_phi_reg_77284.read();
    } else {
        ap_phi_mux_data_507_V_read577_rewind_phi_fu_32981_p6 = data_507_V_read577_rewind_reg_32977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_508_V_read578_phi_phi_fu_77301_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_508_V_read578_phi_phi_fu_77301_p4 = ap_phi_mux_data_508_V_read578_rewind_phi_fu_32995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_508_V_read578_phi_phi_fu_77301_p4 = data_508_V_read.read();
        } else {
            ap_phi_mux_data_508_V_read578_phi_phi_fu_77301_p4 = ap_phi_reg_pp0_iter0_data_508_V_read578_phi_reg_77297.read();
        }
    } else {
        ap_phi_mux_data_508_V_read578_phi_phi_fu_77301_p4 = ap_phi_reg_pp0_iter0_data_508_V_read578_phi_reg_77297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_508_V_read578_rewind_phi_fu_32995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_508_V_read578_rewind_phi_fu_32995_p6 = data_508_V_read578_phi_reg_77297.read();
    } else {
        ap_phi_mux_data_508_V_read578_rewind_phi_fu_32995_p6 = data_508_V_read578_rewind_reg_32991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_509_V_read579_phi_phi_fu_77314_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_509_V_read579_phi_phi_fu_77314_p4 = ap_phi_mux_data_509_V_read579_rewind_phi_fu_33009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_509_V_read579_phi_phi_fu_77314_p4 = data_509_V_read.read();
        } else {
            ap_phi_mux_data_509_V_read579_phi_phi_fu_77314_p4 = ap_phi_reg_pp0_iter0_data_509_V_read579_phi_reg_77310.read();
        }
    } else {
        ap_phi_mux_data_509_V_read579_phi_phi_fu_77314_p4 = ap_phi_reg_pp0_iter0_data_509_V_read579_phi_reg_77310.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_509_V_read579_rewind_phi_fu_33009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_509_V_read579_rewind_phi_fu_33009_p6 = data_509_V_read579_phi_reg_77310.read();
    } else {
        ap_phi_mux_data_509_V_read579_rewind_phi_fu_33009_p6 = data_509_V_read579_rewind_reg_33005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_50_V_read120_phi_phi_fu_71347_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_50_V_read120_phi_phi_fu_71347_p4 = ap_phi_mux_data_50_V_read120_rewind_phi_fu_26583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_50_V_read120_phi_phi_fu_71347_p4 = data_50_V_read.read();
        } else {
            ap_phi_mux_data_50_V_read120_phi_phi_fu_71347_p4 = ap_phi_reg_pp0_iter0_data_50_V_read120_phi_reg_71343.read();
        }
    } else {
        ap_phi_mux_data_50_V_read120_phi_phi_fu_71347_p4 = ap_phi_reg_pp0_iter0_data_50_V_read120_phi_reg_71343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_50_V_read120_rewind_phi_fu_26583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_50_V_read120_rewind_phi_fu_26583_p6 = data_50_V_read120_phi_reg_71343.read();
    } else {
        ap_phi_mux_data_50_V_read120_rewind_phi_fu_26583_p6 = data_50_V_read120_rewind_reg_26579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_510_V_read580_phi_phi_fu_77327_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_510_V_read580_phi_phi_fu_77327_p4 = ap_phi_mux_data_510_V_read580_rewind_phi_fu_33023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_510_V_read580_phi_phi_fu_77327_p4 = data_510_V_read.read();
        } else {
            ap_phi_mux_data_510_V_read580_phi_phi_fu_77327_p4 = ap_phi_reg_pp0_iter0_data_510_V_read580_phi_reg_77323.read();
        }
    } else {
        ap_phi_mux_data_510_V_read580_phi_phi_fu_77327_p4 = ap_phi_reg_pp0_iter0_data_510_V_read580_phi_reg_77323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_510_V_read580_rewind_phi_fu_33023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_510_V_read580_rewind_phi_fu_33023_p6 = data_510_V_read580_phi_reg_77323.read();
    } else {
        ap_phi_mux_data_510_V_read580_rewind_phi_fu_33023_p6 = data_510_V_read580_rewind_reg_33019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_511_V_read581_phi_phi_fu_77340_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_511_V_read581_phi_phi_fu_77340_p4 = ap_phi_mux_data_511_V_read581_rewind_phi_fu_33037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_511_V_read581_phi_phi_fu_77340_p4 = data_511_V_read.read();
        } else {
            ap_phi_mux_data_511_V_read581_phi_phi_fu_77340_p4 = ap_phi_reg_pp0_iter0_data_511_V_read581_phi_reg_77336.read();
        }
    } else {
        ap_phi_mux_data_511_V_read581_phi_phi_fu_77340_p4 = ap_phi_reg_pp0_iter0_data_511_V_read581_phi_reg_77336.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_511_V_read581_rewind_phi_fu_33037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_511_V_read581_rewind_phi_fu_33037_p6 = data_511_V_read581_phi_reg_77336.read();
    } else {
        ap_phi_mux_data_511_V_read581_rewind_phi_fu_33037_p6 = data_511_V_read581_rewind_reg_33033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_512_V_read582_phi_phi_fu_77353_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_512_V_read582_phi_phi_fu_77353_p4 = ap_phi_mux_data_512_V_read582_rewind_phi_fu_33051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_512_V_read582_phi_phi_fu_77353_p4 = data_512_V_read.read();
        } else {
            ap_phi_mux_data_512_V_read582_phi_phi_fu_77353_p4 = ap_phi_reg_pp0_iter0_data_512_V_read582_phi_reg_77349.read();
        }
    } else {
        ap_phi_mux_data_512_V_read582_phi_phi_fu_77353_p4 = ap_phi_reg_pp0_iter0_data_512_V_read582_phi_reg_77349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_512_V_read582_rewind_phi_fu_33051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_512_V_read582_rewind_phi_fu_33051_p6 = data_512_V_read582_phi_reg_77349.read();
    } else {
        ap_phi_mux_data_512_V_read582_rewind_phi_fu_33051_p6 = data_512_V_read582_rewind_reg_33047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_513_V_read583_phi_phi_fu_77366_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_513_V_read583_phi_phi_fu_77366_p4 = ap_phi_mux_data_513_V_read583_rewind_phi_fu_33065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_513_V_read583_phi_phi_fu_77366_p4 = data_513_V_read.read();
        } else {
            ap_phi_mux_data_513_V_read583_phi_phi_fu_77366_p4 = ap_phi_reg_pp0_iter0_data_513_V_read583_phi_reg_77362.read();
        }
    } else {
        ap_phi_mux_data_513_V_read583_phi_phi_fu_77366_p4 = ap_phi_reg_pp0_iter0_data_513_V_read583_phi_reg_77362.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_513_V_read583_rewind_phi_fu_33065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_513_V_read583_rewind_phi_fu_33065_p6 = data_513_V_read583_phi_reg_77362.read();
    } else {
        ap_phi_mux_data_513_V_read583_rewind_phi_fu_33065_p6 = data_513_V_read583_rewind_reg_33061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_514_V_read584_phi_phi_fu_77379_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_514_V_read584_phi_phi_fu_77379_p4 = ap_phi_mux_data_514_V_read584_rewind_phi_fu_33079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_514_V_read584_phi_phi_fu_77379_p4 = data_514_V_read.read();
        } else {
            ap_phi_mux_data_514_V_read584_phi_phi_fu_77379_p4 = ap_phi_reg_pp0_iter0_data_514_V_read584_phi_reg_77375.read();
        }
    } else {
        ap_phi_mux_data_514_V_read584_phi_phi_fu_77379_p4 = ap_phi_reg_pp0_iter0_data_514_V_read584_phi_reg_77375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_514_V_read584_rewind_phi_fu_33079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_514_V_read584_rewind_phi_fu_33079_p6 = data_514_V_read584_phi_reg_77375.read();
    } else {
        ap_phi_mux_data_514_V_read584_rewind_phi_fu_33079_p6 = data_514_V_read584_rewind_reg_33075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_515_V_read585_phi_phi_fu_77392_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_515_V_read585_phi_phi_fu_77392_p4 = ap_phi_mux_data_515_V_read585_rewind_phi_fu_33093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_515_V_read585_phi_phi_fu_77392_p4 = data_515_V_read.read();
        } else {
            ap_phi_mux_data_515_V_read585_phi_phi_fu_77392_p4 = ap_phi_reg_pp0_iter0_data_515_V_read585_phi_reg_77388.read();
        }
    } else {
        ap_phi_mux_data_515_V_read585_phi_phi_fu_77392_p4 = ap_phi_reg_pp0_iter0_data_515_V_read585_phi_reg_77388.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_515_V_read585_rewind_phi_fu_33093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_515_V_read585_rewind_phi_fu_33093_p6 = data_515_V_read585_phi_reg_77388.read();
    } else {
        ap_phi_mux_data_515_V_read585_rewind_phi_fu_33093_p6 = data_515_V_read585_rewind_reg_33089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_516_V_read586_phi_phi_fu_77405_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_516_V_read586_phi_phi_fu_77405_p4 = ap_phi_mux_data_516_V_read586_rewind_phi_fu_33107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_516_V_read586_phi_phi_fu_77405_p4 = data_516_V_read.read();
        } else {
            ap_phi_mux_data_516_V_read586_phi_phi_fu_77405_p4 = ap_phi_reg_pp0_iter0_data_516_V_read586_phi_reg_77401.read();
        }
    } else {
        ap_phi_mux_data_516_V_read586_phi_phi_fu_77405_p4 = ap_phi_reg_pp0_iter0_data_516_V_read586_phi_reg_77401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_516_V_read586_rewind_phi_fu_33107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_516_V_read586_rewind_phi_fu_33107_p6 = data_516_V_read586_phi_reg_77401.read();
    } else {
        ap_phi_mux_data_516_V_read586_rewind_phi_fu_33107_p6 = data_516_V_read586_rewind_reg_33103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_517_V_read587_phi_phi_fu_77418_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_517_V_read587_phi_phi_fu_77418_p4 = ap_phi_mux_data_517_V_read587_rewind_phi_fu_33121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_517_V_read587_phi_phi_fu_77418_p4 = data_517_V_read.read();
        } else {
            ap_phi_mux_data_517_V_read587_phi_phi_fu_77418_p4 = ap_phi_reg_pp0_iter0_data_517_V_read587_phi_reg_77414.read();
        }
    } else {
        ap_phi_mux_data_517_V_read587_phi_phi_fu_77418_p4 = ap_phi_reg_pp0_iter0_data_517_V_read587_phi_reg_77414.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_517_V_read587_rewind_phi_fu_33121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_517_V_read587_rewind_phi_fu_33121_p6 = data_517_V_read587_phi_reg_77414.read();
    } else {
        ap_phi_mux_data_517_V_read587_rewind_phi_fu_33121_p6 = data_517_V_read587_rewind_reg_33117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_518_V_read588_phi_phi_fu_77431_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_518_V_read588_phi_phi_fu_77431_p4 = ap_phi_mux_data_518_V_read588_rewind_phi_fu_33135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_518_V_read588_phi_phi_fu_77431_p4 = data_518_V_read.read();
        } else {
            ap_phi_mux_data_518_V_read588_phi_phi_fu_77431_p4 = ap_phi_reg_pp0_iter0_data_518_V_read588_phi_reg_77427.read();
        }
    } else {
        ap_phi_mux_data_518_V_read588_phi_phi_fu_77431_p4 = ap_phi_reg_pp0_iter0_data_518_V_read588_phi_reg_77427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_518_V_read588_rewind_phi_fu_33135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_518_V_read588_rewind_phi_fu_33135_p6 = data_518_V_read588_phi_reg_77427.read();
    } else {
        ap_phi_mux_data_518_V_read588_rewind_phi_fu_33135_p6 = data_518_V_read588_rewind_reg_33131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_519_V_read589_phi_phi_fu_77444_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_519_V_read589_phi_phi_fu_77444_p4 = ap_phi_mux_data_519_V_read589_rewind_phi_fu_33149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_519_V_read589_phi_phi_fu_77444_p4 = data_519_V_read.read();
        } else {
            ap_phi_mux_data_519_V_read589_phi_phi_fu_77444_p4 = ap_phi_reg_pp0_iter0_data_519_V_read589_phi_reg_77440.read();
        }
    } else {
        ap_phi_mux_data_519_V_read589_phi_phi_fu_77444_p4 = ap_phi_reg_pp0_iter0_data_519_V_read589_phi_reg_77440.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_519_V_read589_rewind_phi_fu_33149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_519_V_read589_rewind_phi_fu_33149_p6 = data_519_V_read589_phi_reg_77440.read();
    } else {
        ap_phi_mux_data_519_V_read589_rewind_phi_fu_33149_p6 = data_519_V_read589_rewind_reg_33145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_51_V_read121_phi_phi_fu_71360_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_51_V_read121_phi_phi_fu_71360_p4 = ap_phi_mux_data_51_V_read121_rewind_phi_fu_26597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_51_V_read121_phi_phi_fu_71360_p4 = data_51_V_read.read();
        } else {
            ap_phi_mux_data_51_V_read121_phi_phi_fu_71360_p4 = ap_phi_reg_pp0_iter0_data_51_V_read121_phi_reg_71356.read();
        }
    } else {
        ap_phi_mux_data_51_V_read121_phi_phi_fu_71360_p4 = ap_phi_reg_pp0_iter0_data_51_V_read121_phi_reg_71356.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_51_V_read121_rewind_phi_fu_26597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_51_V_read121_rewind_phi_fu_26597_p6 = data_51_V_read121_phi_reg_71356.read();
    } else {
        ap_phi_mux_data_51_V_read121_rewind_phi_fu_26597_p6 = data_51_V_read121_rewind_reg_26593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_520_V_read590_phi_phi_fu_77457_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_520_V_read590_phi_phi_fu_77457_p4 = ap_phi_mux_data_520_V_read590_rewind_phi_fu_33163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_520_V_read590_phi_phi_fu_77457_p4 = data_520_V_read.read();
        } else {
            ap_phi_mux_data_520_V_read590_phi_phi_fu_77457_p4 = ap_phi_reg_pp0_iter0_data_520_V_read590_phi_reg_77453.read();
        }
    } else {
        ap_phi_mux_data_520_V_read590_phi_phi_fu_77457_p4 = ap_phi_reg_pp0_iter0_data_520_V_read590_phi_reg_77453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_520_V_read590_rewind_phi_fu_33163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_520_V_read590_rewind_phi_fu_33163_p6 = data_520_V_read590_phi_reg_77453.read();
    } else {
        ap_phi_mux_data_520_V_read590_rewind_phi_fu_33163_p6 = data_520_V_read590_rewind_reg_33159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_521_V_read591_phi_phi_fu_77470_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_521_V_read591_phi_phi_fu_77470_p4 = ap_phi_mux_data_521_V_read591_rewind_phi_fu_33177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_521_V_read591_phi_phi_fu_77470_p4 = data_521_V_read.read();
        } else {
            ap_phi_mux_data_521_V_read591_phi_phi_fu_77470_p4 = ap_phi_reg_pp0_iter0_data_521_V_read591_phi_reg_77466.read();
        }
    } else {
        ap_phi_mux_data_521_V_read591_phi_phi_fu_77470_p4 = ap_phi_reg_pp0_iter0_data_521_V_read591_phi_reg_77466.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_521_V_read591_rewind_phi_fu_33177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_521_V_read591_rewind_phi_fu_33177_p6 = data_521_V_read591_phi_reg_77466.read();
    } else {
        ap_phi_mux_data_521_V_read591_rewind_phi_fu_33177_p6 = data_521_V_read591_rewind_reg_33173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_522_V_read592_phi_phi_fu_77483_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_522_V_read592_phi_phi_fu_77483_p4 = ap_phi_mux_data_522_V_read592_rewind_phi_fu_33191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_522_V_read592_phi_phi_fu_77483_p4 = data_522_V_read.read();
        } else {
            ap_phi_mux_data_522_V_read592_phi_phi_fu_77483_p4 = ap_phi_reg_pp0_iter0_data_522_V_read592_phi_reg_77479.read();
        }
    } else {
        ap_phi_mux_data_522_V_read592_phi_phi_fu_77483_p4 = ap_phi_reg_pp0_iter0_data_522_V_read592_phi_reg_77479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_522_V_read592_rewind_phi_fu_33191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_522_V_read592_rewind_phi_fu_33191_p6 = data_522_V_read592_phi_reg_77479.read();
    } else {
        ap_phi_mux_data_522_V_read592_rewind_phi_fu_33191_p6 = data_522_V_read592_rewind_reg_33187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_523_V_read593_phi_phi_fu_77496_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_523_V_read593_phi_phi_fu_77496_p4 = ap_phi_mux_data_523_V_read593_rewind_phi_fu_33205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_523_V_read593_phi_phi_fu_77496_p4 = data_523_V_read.read();
        } else {
            ap_phi_mux_data_523_V_read593_phi_phi_fu_77496_p4 = ap_phi_reg_pp0_iter0_data_523_V_read593_phi_reg_77492.read();
        }
    } else {
        ap_phi_mux_data_523_V_read593_phi_phi_fu_77496_p4 = ap_phi_reg_pp0_iter0_data_523_V_read593_phi_reg_77492.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_523_V_read593_rewind_phi_fu_33205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_523_V_read593_rewind_phi_fu_33205_p6 = data_523_V_read593_phi_reg_77492.read();
    } else {
        ap_phi_mux_data_523_V_read593_rewind_phi_fu_33205_p6 = data_523_V_read593_rewind_reg_33201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_524_V_read594_phi_phi_fu_77509_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_524_V_read594_phi_phi_fu_77509_p4 = ap_phi_mux_data_524_V_read594_rewind_phi_fu_33219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_524_V_read594_phi_phi_fu_77509_p4 = data_524_V_read.read();
        } else {
            ap_phi_mux_data_524_V_read594_phi_phi_fu_77509_p4 = ap_phi_reg_pp0_iter0_data_524_V_read594_phi_reg_77505.read();
        }
    } else {
        ap_phi_mux_data_524_V_read594_phi_phi_fu_77509_p4 = ap_phi_reg_pp0_iter0_data_524_V_read594_phi_reg_77505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_524_V_read594_rewind_phi_fu_33219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_524_V_read594_rewind_phi_fu_33219_p6 = data_524_V_read594_phi_reg_77505.read();
    } else {
        ap_phi_mux_data_524_V_read594_rewind_phi_fu_33219_p6 = data_524_V_read594_rewind_reg_33215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_525_V_read595_phi_phi_fu_77522_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_525_V_read595_phi_phi_fu_77522_p4 = ap_phi_mux_data_525_V_read595_rewind_phi_fu_33233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_525_V_read595_phi_phi_fu_77522_p4 = data_525_V_read.read();
        } else {
            ap_phi_mux_data_525_V_read595_phi_phi_fu_77522_p4 = ap_phi_reg_pp0_iter0_data_525_V_read595_phi_reg_77518.read();
        }
    } else {
        ap_phi_mux_data_525_V_read595_phi_phi_fu_77522_p4 = ap_phi_reg_pp0_iter0_data_525_V_read595_phi_reg_77518.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_525_V_read595_rewind_phi_fu_33233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_525_V_read595_rewind_phi_fu_33233_p6 = data_525_V_read595_phi_reg_77518.read();
    } else {
        ap_phi_mux_data_525_V_read595_rewind_phi_fu_33233_p6 = data_525_V_read595_rewind_reg_33229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_526_V_read596_phi_phi_fu_77535_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_526_V_read596_phi_phi_fu_77535_p4 = ap_phi_mux_data_526_V_read596_rewind_phi_fu_33247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_526_V_read596_phi_phi_fu_77535_p4 = data_526_V_read.read();
        } else {
            ap_phi_mux_data_526_V_read596_phi_phi_fu_77535_p4 = ap_phi_reg_pp0_iter0_data_526_V_read596_phi_reg_77531.read();
        }
    } else {
        ap_phi_mux_data_526_V_read596_phi_phi_fu_77535_p4 = ap_phi_reg_pp0_iter0_data_526_V_read596_phi_reg_77531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_526_V_read596_rewind_phi_fu_33247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_526_V_read596_rewind_phi_fu_33247_p6 = data_526_V_read596_phi_reg_77531.read();
    } else {
        ap_phi_mux_data_526_V_read596_rewind_phi_fu_33247_p6 = data_526_V_read596_rewind_reg_33243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_527_V_read597_phi_phi_fu_77548_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_527_V_read597_phi_phi_fu_77548_p4 = ap_phi_mux_data_527_V_read597_rewind_phi_fu_33261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_527_V_read597_phi_phi_fu_77548_p4 = data_527_V_read.read();
        } else {
            ap_phi_mux_data_527_V_read597_phi_phi_fu_77548_p4 = ap_phi_reg_pp0_iter0_data_527_V_read597_phi_reg_77544.read();
        }
    } else {
        ap_phi_mux_data_527_V_read597_phi_phi_fu_77548_p4 = ap_phi_reg_pp0_iter0_data_527_V_read597_phi_reg_77544.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_527_V_read597_rewind_phi_fu_33261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_527_V_read597_rewind_phi_fu_33261_p6 = data_527_V_read597_phi_reg_77544.read();
    } else {
        ap_phi_mux_data_527_V_read597_rewind_phi_fu_33261_p6 = data_527_V_read597_rewind_reg_33257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_528_V_read598_phi_phi_fu_77561_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_528_V_read598_phi_phi_fu_77561_p4 = ap_phi_mux_data_528_V_read598_rewind_phi_fu_33275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_528_V_read598_phi_phi_fu_77561_p4 = data_528_V_read.read();
        } else {
            ap_phi_mux_data_528_V_read598_phi_phi_fu_77561_p4 = ap_phi_reg_pp0_iter0_data_528_V_read598_phi_reg_77557.read();
        }
    } else {
        ap_phi_mux_data_528_V_read598_phi_phi_fu_77561_p4 = ap_phi_reg_pp0_iter0_data_528_V_read598_phi_reg_77557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_528_V_read598_rewind_phi_fu_33275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_528_V_read598_rewind_phi_fu_33275_p6 = data_528_V_read598_phi_reg_77557.read();
    } else {
        ap_phi_mux_data_528_V_read598_rewind_phi_fu_33275_p6 = data_528_V_read598_rewind_reg_33271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_529_V_read599_phi_phi_fu_77574_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_529_V_read599_phi_phi_fu_77574_p4 = ap_phi_mux_data_529_V_read599_rewind_phi_fu_33289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_529_V_read599_phi_phi_fu_77574_p4 = data_529_V_read.read();
        } else {
            ap_phi_mux_data_529_V_read599_phi_phi_fu_77574_p4 = ap_phi_reg_pp0_iter0_data_529_V_read599_phi_reg_77570.read();
        }
    } else {
        ap_phi_mux_data_529_V_read599_phi_phi_fu_77574_p4 = ap_phi_reg_pp0_iter0_data_529_V_read599_phi_reg_77570.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_529_V_read599_rewind_phi_fu_33289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_529_V_read599_rewind_phi_fu_33289_p6 = data_529_V_read599_phi_reg_77570.read();
    } else {
        ap_phi_mux_data_529_V_read599_rewind_phi_fu_33289_p6 = data_529_V_read599_rewind_reg_33285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_52_V_read122_phi_phi_fu_71373_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_52_V_read122_phi_phi_fu_71373_p4 = ap_phi_mux_data_52_V_read122_rewind_phi_fu_26611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_52_V_read122_phi_phi_fu_71373_p4 = data_52_V_read.read();
        } else {
            ap_phi_mux_data_52_V_read122_phi_phi_fu_71373_p4 = ap_phi_reg_pp0_iter0_data_52_V_read122_phi_reg_71369.read();
        }
    } else {
        ap_phi_mux_data_52_V_read122_phi_phi_fu_71373_p4 = ap_phi_reg_pp0_iter0_data_52_V_read122_phi_reg_71369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_52_V_read122_rewind_phi_fu_26611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_52_V_read122_rewind_phi_fu_26611_p6 = data_52_V_read122_phi_reg_71369.read();
    } else {
        ap_phi_mux_data_52_V_read122_rewind_phi_fu_26611_p6 = data_52_V_read122_rewind_reg_26607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_530_V_read600_phi_phi_fu_77587_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_530_V_read600_phi_phi_fu_77587_p4 = ap_phi_mux_data_530_V_read600_rewind_phi_fu_33303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_530_V_read600_phi_phi_fu_77587_p4 = data_530_V_read.read();
        } else {
            ap_phi_mux_data_530_V_read600_phi_phi_fu_77587_p4 = ap_phi_reg_pp0_iter0_data_530_V_read600_phi_reg_77583.read();
        }
    } else {
        ap_phi_mux_data_530_V_read600_phi_phi_fu_77587_p4 = ap_phi_reg_pp0_iter0_data_530_V_read600_phi_reg_77583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_530_V_read600_rewind_phi_fu_33303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_530_V_read600_rewind_phi_fu_33303_p6 = data_530_V_read600_phi_reg_77583.read();
    } else {
        ap_phi_mux_data_530_V_read600_rewind_phi_fu_33303_p6 = data_530_V_read600_rewind_reg_33299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_531_V_read601_phi_phi_fu_77600_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_531_V_read601_phi_phi_fu_77600_p4 = ap_phi_mux_data_531_V_read601_rewind_phi_fu_33317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_531_V_read601_phi_phi_fu_77600_p4 = data_531_V_read.read();
        } else {
            ap_phi_mux_data_531_V_read601_phi_phi_fu_77600_p4 = ap_phi_reg_pp0_iter0_data_531_V_read601_phi_reg_77596.read();
        }
    } else {
        ap_phi_mux_data_531_V_read601_phi_phi_fu_77600_p4 = ap_phi_reg_pp0_iter0_data_531_V_read601_phi_reg_77596.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_531_V_read601_rewind_phi_fu_33317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_531_V_read601_rewind_phi_fu_33317_p6 = data_531_V_read601_phi_reg_77596.read();
    } else {
        ap_phi_mux_data_531_V_read601_rewind_phi_fu_33317_p6 = data_531_V_read601_rewind_reg_33313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_532_V_read602_phi_phi_fu_77613_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_532_V_read602_phi_phi_fu_77613_p4 = ap_phi_mux_data_532_V_read602_rewind_phi_fu_33331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_532_V_read602_phi_phi_fu_77613_p4 = data_532_V_read.read();
        } else {
            ap_phi_mux_data_532_V_read602_phi_phi_fu_77613_p4 = ap_phi_reg_pp0_iter0_data_532_V_read602_phi_reg_77609.read();
        }
    } else {
        ap_phi_mux_data_532_V_read602_phi_phi_fu_77613_p4 = ap_phi_reg_pp0_iter0_data_532_V_read602_phi_reg_77609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_532_V_read602_rewind_phi_fu_33331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_532_V_read602_rewind_phi_fu_33331_p6 = data_532_V_read602_phi_reg_77609.read();
    } else {
        ap_phi_mux_data_532_V_read602_rewind_phi_fu_33331_p6 = data_532_V_read602_rewind_reg_33327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_533_V_read603_phi_phi_fu_77626_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_533_V_read603_phi_phi_fu_77626_p4 = ap_phi_mux_data_533_V_read603_rewind_phi_fu_33345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_533_V_read603_phi_phi_fu_77626_p4 = data_533_V_read.read();
        } else {
            ap_phi_mux_data_533_V_read603_phi_phi_fu_77626_p4 = ap_phi_reg_pp0_iter0_data_533_V_read603_phi_reg_77622.read();
        }
    } else {
        ap_phi_mux_data_533_V_read603_phi_phi_fu_77626_p4 = ap_phi_reg_pp0_iter0_data_533_V_read603_phi_reg_77622.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_533_V_read603_rewind_phi_fu_33345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_533_V_read603_rewind_phi_fu_33345_p6 = data_533_V_read603_phi_reg_77622.read();
    } else {
        ap_phi_mux_data_533_V_read603_rewind_phi_fu_33345_p6 = data_533_V_read603_rewind_reg_33341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_534_V_read604_phi_phi_fu_77639_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_534_V_read604_phi_phi_fu_77639_p4 = ap_phi_mux_data_534_V_read604_rewind_phi_fu_33359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_534_V_read604_phi_phi_fu_77639_p4 = data_534_V_read.read();
        } else {
            ap_phi_mux_data_534_V_read604_phi_phi_fu_77639_p4 = ap_phi_reg_pp0_iter0_data_534_V_read604_phi_reg_77635.read();
        }
    } else {
        ap_phi_mux_data_534_V_read604_phi_phi_fu_77639_p4 = ap_phi_reg_pp0_iter0_data_534_V_read604_phi_reg_77635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_534_V_read604_rewind_phi_fu_33359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_534_V_read604_rewind_phi_fu_33359_p6 = data_534_V_read604_phi_reg_77635.read();
    } else {
        ap_phi_mux_data_534_V_read604_rewind_phi_fu_33359_p6 = data_534_V_read604_rewind_reg_33355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_535_V_read605_phi_phi_fu_77652_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_535_V_read605_phi_phi_fu_77652_p4 = ap_phi_mux_data_535_V_read605_rewind_phi_fu_33373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_535_V_read605_phi_phi_fu_77652_p4 = data_535_V_read.read();
        } else {
            ap_phi_mux_data_535_V_read605_phi_phi_fu_77652_p4 = ap_phi_reg_pp0_iter0_data_535_V_read605_phi_reg_77648.read();
        }
    } else {
        ap_phi_mux_data_535_V_read605_phi_phi_fu_77652_p4 = ap_phi_reg_pp0_iter0_data_535_V_read605_phi_reg_77648.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_535_V_read605_rewind_phi_fu_33373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_535_V_read605_rewind_phi_fu_33373_p6 = data_535_V_read605_phi_reg_77648.read();
    } else {
        ap_phi_mux_data_535_V_read605_rewind_phi_fu_33373_p6 = data_535_V_read605_rewind_reg_33369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_536_V_read606_phi_phi_fu_77665_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_536_V_read606_phi_phi_fu_77665_p4 = ap_phi_mux_data_536_V_read606_rewind_phi_fu_33387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_536_V_read606_phi_phi_fu_77665_p4 = data_536_V_read.read();
        } else {
            ap_phi_mux_data_536_V_read606_phi_phi_fu_77665_p4 = ap_phi_reg_pp0_iter0_data_536_V_read606_phi_reg_77661.read();
        }
    } else {
        ap_phi_mux_data_536_V_read606_phi_phi_fu_77665_p4 = ap_phi_reg_pp0_iter0_data_536_V_read606_phi_reg_77661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_536_V_read606_rewind_phi_fu_33387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_536_V_read606_rewind_phi_fu_33387_p6 = data_536_V_read606_phi_reg_77661.read();
    } else {
        ap_phi_mux_data_536_V_read606_rewind_phi_fu_33387_p6 = data_536_V_read606_rewind_reg_33383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_537_V_read607_phi_phi_fu_77678_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_537_V_read607_phi_phi_fu_77678_p4 = ap_phi_mux_data_537_V_read607_rewind_phi_fu_33401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_537_V_read607_phi_phi_fu_77678_p4 = data_537_V_read.read();
        } else {
            ap_phi_mux_data_537_V_read607_phi_phi_fu_77678_p4 = ap_phi_reg_pp0_iter0_data_537_V_read607_phi_reg_77674.read();
        }
    } else {
        ap_phi_mux_data_537_V_read607_phi_phi_fu_77678_p4 = ap_phi_reg_pp0_iter0_data_537_V_read607_phi_reg_77674.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_537_V_read607_rewind_phi_fu_33401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_537_V_read607_rewind_phi_fu_33401_p6 = data_537_V_read607_phi_reg_77674.read();
    } else {
        ap_phi_mux_data_537_V_read607_rewind_phi_fu_33401_p6 = data_537_V_read607_rewind_reg_33397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_538_V_read608_phi_phi_fu_77691_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_538_V_read608_phi_phi_fu_77691_p4 = ap_phi_mux_data_538_V_read608_rewind_phi_fu_33415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_538_V_read608_phi_phi_fu_77691_p4 = data_538_V_read.read();
        } else {
            ap_phi_mux_data_538_V_read608_phi_phi_fu_77691_p4 = ap_phi_reg_pp0_iter0_data_538_V_read608_phi_reg_77687.read();
        }
    } else {
        ap_phi_mux_data_538_V_read608_phi_phi_fu_77691_p4 = ap_phi_reg_pp0_iter0_data_538_V_read608_phi_reg_77687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_538_V_read608_rewind_phi_fu_33415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_538_V_read608_rewind_phi_fu_33415_p6 = data_538_V_read608_phi_reg_77687.read();
    } else {
        ap_phi_mux_data_538_V_read608_rewind_phi_fu_33415_p6 = data_538_V_read608_rewind_reg_33411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_539_V_read609_phi_phi_fu_77704_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_539_V_read609_phi_phi_fu_77704_p4 = ap_phi_mux_data_539_V_read609_rewind_phi_fu_33429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_539_V_read609_phi_phi_fu_77704_p4 = data_539_V_read.read();
        } else {
            ap_phi_mux_data_539_V_read609_phi_phi_fu_77704_p4 = ap_phi_reg_pp0_iter0_data_539_V_read609_phi_reg_77700.read();
        }
    } else {
        ap_phi_mux_data_539_V_read609_phi_phi_fu_77704_p4 = ap_phi_reg_pp0_iter0_data_539_V_read609_phi_reg_77700.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_539_V_read609_rewind_phi_fu_33429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_539_V_read609_rewind_phi_fu_33429_p6 = data_539_V_read609_phi_reg_77700.read();
    } else {
        ap_phi_mux_data_539_V_read609_rewind_phi_fu_33429_p6 = data_539_V_read609_rewind_reg_33425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_53_V_read123_phi_phi_fu_71386_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_53_V_read123_phi_phi_fu_71386_p4 = ap_phi_mux_data_53_V_read123_rewind_phi_fu_26625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_53_V_read123_phi_phi_fu_71386_p4 = data_53_V_read.read();
        } else {
            ap_phi_mux_data_53_V_read123_phi_phi_fu_71386_p4 = ap_phi_reg_pp0_iter0_data_53_V_read123_phi_reg_71382.read();
        }
    } else {
        ap_phi_mux_data_53_V_read123_phi_phi_fu_71386_p4 = ap_phi_reg_pp0_iter0_data_53_V_read123_phi_reg_71382.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_53_V_read123_rewind_phi_fu_26625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_53_V_read123_rewind_phi_fu_26625_p6 = data_53_V_read123_phi_reg_71382.read();
    } else {
        ap_phi_mux_data_53_V_read123_rewind_phi_fu_26625_p6 = data_53_V_read123_rewind_reg_26621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_540_V_read610_phi_phi_fu_77717_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_540_V_read610_phi_phi_fu_77717_p4 = ap_phi_mux_data_540_V_read610_rewind_phi_fu_33443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_540_V_read610_phi_phi_fu_77717_p4 = data_540_V_read.read();
        } else {
            ap_phi_mux_data_540_V_read610_phi_phi_fu_77717_p4 = ap_phi_reg_pp0_iter0_data_540_V_read610_phi_reg_77713.read();
        }
    } else {
        ap_phi_mux_data_540_V_read610_phi_phi_fu_77717_p4 = ap_phi_reg_pp0_iter0_data_540_V_read610_phi_reg_77713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_540_V_read610_rewind_phi_fu_33443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_540_V_read610_rewind_phi_fu_33443_p6 = data_540_V_read610_phi_reg_77713.read();
    } else {
        ap_phi_mux_data_540_V_read610_rewind_phi_fu_33443_p6 = data_540_V_read610_rewind_reg_33439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_541_V_read611_phi_phi_fu_77730_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_541_V_read611_phi_phi_fu_77730_p4 = ap_phi_mux_data_541_V_read611_rewind_phi_fu_33457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_541_V_read611_phi_phi_fu_77730_p4 = data_541_V_read.read();
        } else {
            ap_phi_mux_data_541_V_read611_phi_phi_fu_77730_p4 = ap_phi_reg_pp0_iter0_data_541_V_read611_phi_reg_77726.read();
        }
    } else {
        ap_phi_mux_data_541_V_read611_phi_phi_fu_77730_p4 = ap_phi_reg_pp0_iter0_data_541_V_read611_phi_reg_77726.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_541_V_read611_rewind_phi_fu_33457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_541_V_read611_rewind_phi_fu_33457_p6 = data_541_V_read611_phi_reg_77726.read();
    } else {
        ap_phi_mux_data_541_V_read611_rewind_phi_fu_33457_p6 = data_541_V_read611_rewind_reg_33453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_542_V_read612_phi_phi_fu_77743_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_542_V_read612_phi_phi_fu_77743_p4 = ap_phi_mux_data_542_V_read612_rewind_phi_fu_33471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_542_V_read612_phi_phi_fu_77743_p4 = data_542_V_read.read();
        } else {
            ap_phi_mux_data_542_V_read612_phi_phi_fu_77743_p4 = ap_phi_reg_pp0_iter0_data_542_V_read612_phi_reg_77739.read();
        }
    } else {
        ap_phi_mux_data_542_V_read612_phi_phi_fu_77743_p4 = ap_phi_reg_pp0_iter0_data_542_V_read612_phi_reg_77739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_542_V_read612_rewind_phi_fu_33471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_542_V_read612_rewind_phi_fu_33471_p6 = data_542_V_read612_phi_reg_77739.read();
    } else {
        ap_phi_mux_data_542_V_read612_rewind_phi_fu_33471_p6 = data_542_V_read612_rewind_reg_33467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_543_V_read613_phi_phi_fu_77756_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_543_V_read613_phi_phi_fu_77756_p4 = ap_phi_mux_data_543_V_read613_rewind_phi_fu_33485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_543_V_read613_phi_phi_fu_77756_p4 = data_543_V_read.read();
        } else {
            ap_phi_mux_data_543_V_read613_phi_phi_fu_77756_p4 = ap_phi_reg_pp0_iter0_data_543_V_read613_phi_reg_77752.read();
        }
    } else {
        ap_phi_mux_data_543_V_read613_phi_phi_fu_77756_p4 = ap_phi_reg_pp0_iter0_data_543_V_read613_phi_reg_77752.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_543_V_read613_rewind_phi_fu_33485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_543_V_read613_rewind_phi_fu_33485_p6 = data_543_V_read613_phi_reg_77752.read();
    } else {
        ap_phi_mux_data_543_V_read613_rewind_phi_fu_33485_p6 = data_543_V_read613_rewind_reg_33481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_544_V_read614_phi_phi_fu_77769_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_544_V_read614_phi_phi_fu_77769_p4 = ap_phi_mux_data_544_V_read614_rewind_phi_fu_33499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_544_V_read614_phi_phi_fu_77769_p4 = data_544_V_read.read();
        } else {
            ap_phi_mux_data_544_V_read614_phi_phi_fu_77769_p4 = ap_phi_reg_pp0_iter0_data_544_V_read614_phi_reg_77765.read();
        }
    } else {
        ap_phi_mux_data_544_V_read614_phi_phi_fu_77769_p4 = ap_phi_reg_pp0_iter0_data_544_V_read614_phi_reg_77765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_544_V_read614_rewind_phi_fu_33499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_544_V_read614_rewind_phi_fu_33499_p6 = data_544_V_read614_phi_reg_77765.read();
    } else {
        ap_phi_mux_data_544_V_read614_rewind_phi_fu_33499_p6 = data_544_V_read614_rewind_reg_33495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_545_V_read615_phi_phi_fu_77782_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_545_V_read615_phi_phi_fu_77782_p4 = ap_phi_mux_data_545_V_read615_rewind_phi_fu_33513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_545_V_read615_phi_phi_fu_77782_p4 = data_545_V_read.read();
        } else {
            ap_phi_mux_data_545_V_read615_phi_phi_fu_77782_p4 = ap_phi_reg_pp0_iter0_data_545_V_read615_phi_reg_77778.read();
        }
    } else {
        ap_phi_mux_data_545_V_read615_phi_phi_fu_77782_p4 = ap_phi_reg_pp0_iter0_data_545_V_read615_phi_reg_77778.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_545_V_read615_rewind_phi_fu_33513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_545_V_read615_rewind_phi_fu_33513_p6 = data_545_V_read615_phi_reg_77778.read();
    } else {
        ap_phi_mux_data_545_V_read615_rewind_phi_fu_33513_p6 = data_545_V_read615_rewind_reg_33509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_546_V_read616_phi_phi_fu_77795_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_546_V_read616_phi_phi_fu_77795_p4 = ap_phi_mux_data_546_V_read616_rewind_phi_fu_33527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_546_V_read616_phi_phi_fu_77795_p4 = data_546_V_read.read();
        } else {
            ap_phi_mux_data_546_V_read616_phi_phi_fu_77795_p4 = ap_phi_reg_pp0_iter0_data_546_V_read616_phi_reg_77791.read();
        }
    } else {
        ap_phi_mux_data_546_V_read616_phi_phi_fu_77795_p4 = ap_phi_reg_pp0_iter0_data_546_V_read616_phi_reg_77791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_546_V_read616_rewind_phi_fu_33527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_546_V_read616_rewind_phi_fu_33527_p6 = data_546_V_read616_phi_reg_77791.read();
    } else {
        ap_phi_mux_data_546_V_read616_rewind_phi_fu_33527_p6 = data_546_V_read616_rewind_reg_33523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_547_V_read617_phi_phi_fu_77808_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_547_V_read617_phi_phi_fu_77808_p4 = ap_phi_mux_data_547_V_read617_rewind_phi_fu_33541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_547_V_read617_phi_phi_fu_77808_p4 = data_547_V_read.read();
        } else {
            ap_phi_mux_data_547_V_read617_phi_phi_fu_77808_p4 = ap_phi_reg_pp0_iter0_data_547_V_read617_phi_reg_77804.read();
        }
    } else {
        ap_phi_mux_data_547_V_read617_phi_phi_fu_77808_p4 = ap_phi_reg_pp0_iter0_data_547_V_read617_phi_reg_77804.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_547_V_read617_rewind_phi_fu_33541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_547_V_read617_rewind_phi_fu_33541_p6 = data_547_V_read617_phi_reg_77804.read();
    } else {
        ap_phi_mux_data_547_V_read617_rewind_phi_fu_33541_p6 = data_547_V_read617_rewind_reg_33537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_548_V_read618_phi_phi_fu_77821_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_548_V_read618_phi_phi_fu_77821_p4 = ap_phi_mux_data_548_V_read618_rewind_phi_fu_33555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_548_V_read618_phi_phi_fu_77821_p4 = data_548_V_read.read();
        } else {
            ap_phi_mux_data_548_V_read618_phi_phi_fu_77821_p4 = ap_phi_reg_pp0_iter0_data_548_V_read618_phi_reg_77817.read();
        }
    } else {
        ap_phi_mux_data_548_V_read618_phi_phi_fu_77821_p4 = ap_phi_reg_pp0_iter0_data_548_V_read618_phi_reg_77817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_548_V_read618_rewind_phi_fu_33555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_548_V_read618_rewind_phi_fu_33555_p6 = data_548_V_read618_phi_reg_77817.read();
    } else {
        ap_phi_mux_data_548_V_read618_rewind_phi_fu_33555_p6 = data_548_V_read618_rewind_reg_33551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_549_V_read619_phi_phi_fu_77834_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_549_V_read619_phi_phi_fu_77834_p4 = ap_phi_mux_data_549_V_read619_rewind_phi_fu_33569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_549_V_read619_phi_phi_fu_77834_p4 = data_549_V_read.read();
        } else {
            ap_phi_mux_data_549_V_read619_phi_phi_fu_77834_p4 = ap_phi_reg_pp0_iter0_data_549_V_read619_phi_reg_77830.read();
        }
    } else {
        ap_phi_mux_data_549_V_read619_phi_phi_fu_77834_p4 = ap_phi_reg_pp0_iter0_data_549_V_read619_phi_reg_77830.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_549_V_read619_rewind_phi_fu_33569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_549_V_read619_rewind_phi_fu_33569_p6 = data_549_V_read619_phi_reg_77830.read();
    } else {
        ap_phi_mux_data_549_V_read619_rewind_phi_fu_33569_p6 = data_549_V_read619_rewind_reg_33565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_54_V_read124_phi_phi_fu_71399_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_54_V_read124_phi_phi_fu_71399_p4 = ap_phi_mux_data_54_V_read124_rewind_phi_fu_26639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_54_V_read124_phi_phi_fu_71399_p4 = data_54_V_read.read();
        } else {
            ap_phi_mux_data_54_V_read124_phi_phi_fu_71399_p4 = ap_phi_reg_pp0_iter0_data_54_V_read124_phi_reg_71395.read();
        }
    } else {
        ap_phi_mux_data_54_V_read124_phi_phi_fu_71399_p4 = ap_phi_reg_pp0_iter0_data_54_V_read124_phi_reg_71395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_54_V_read124_rewind_phi_fu_26639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_54_V_read124_rewind_phi_fu_26639_p6 = data_54_V_read124_phi_reg_71395.read();
    } else {
        ap_phi_mux_data_54_V_read124_rewind_phi_fu_26639_p6 = data_54_V_read124_rewind_reg_26635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_550_V_read620_phi_phi_fu_77847_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_550_V_read620_phi_phi_fu_77847_p4 = ap_phi_mux_data_550_V_read620_rewind_phi_fu_33583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_550_V_read620_phi_phi_fu_77847_p4 = data_550_V_read.read();
        } else {
            ap_phi_mux_data_550_V_read620_phi_phi_fu_77847_p4 = ap_phi_reg_pp0_iter0_data_550_V_read620_phi_reg_77843.read();
        }
    } else {
        ap_phi_mux_data_550_V_read620_phi_phi_fu_77847_p4 = ap_phi_reg_pp0_iter0_data_550_V_read620_phi_reg_77843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_550_V_read620_rewind_phi_fu_33583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_550_V_read620_rewind_phi_fu_33583_p6 = data_550_V_read620_phi_reg_77843.read();
    } else {
        ap_phi_mux_data_550_V_read620_rewind_phi_fu_33583_p6 = data_550_V_read620_rewind_reg_33579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_551_V_read621_phi_phi_fu_77860_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_551_V_read621_phi_phi_fu_77860_p4 = ap_phi_mux_data_551_V_read621_rewind_phi_fu_33597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_551_V_read621_phi_phi_fu_77860_p4 = data_551_V_read.read();
        } else {
            ap_phi_mux_data_551_V_read621_phi_phi_fu_77860_p4 = ap_phi_reg_pp0_iter0_data_551_V_read621_phi_reg_77856.read();
        }
    } else {
        ap_phi_mux_data_551_V_read621_phi_phi_fu_77860_p4 = ap_phi_reg_pp0_iter0_data_551_V_read621_phi_reg_77856.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_551_V_read621_rewind_phi_fu_33597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_551_V_read621_rewind_phi_fu_33597_p6 = data_551_V_read621_phi_reg_77856.read();
    } else {
        ap_phi_mux_data_551_V_read621_rewind_phi_fu_33597_p6 = data_551_V_read621_rewind_reg_33593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_552_V_read622_phi_phi_fu_77873_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_552_V_read622_phi_phi_fu_77873_p4 = ap_phi_mux_data_552_V_read622_rewind_phi_fu_33611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_552_V_read622_phi_phi_fu_77873_p4 = data_552_V_read.read();
        } else {
            ap_phi_mux_data_552_V_read622_phi_phi_fu_77873_p4 = ap_phi_reg_pp0_iter0_data_552_V_read622_phi_reg_77869.read();
        }
    } else {
        ap_phi_mux_data_552_V_read622_phi_phi_fu_77873_p4 = ap_phi_reg_pp0_iter0_data_552_V_read622_phi_reg_77869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_552_V_read622_rewind_phi_fu_33611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_552_V_read622_rewind_phi_fu_33611_p6 = data_552_V_read622_phi_reg_77869.read();
    } else {
        ap_phi_mux_data_552_V_read622_rewind_phi_fu_33611_p6 = data_552_V_read622_rewind_reg_33607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_553_V_read623_phi_phi_fu_77886_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_553_V_read623_phi_phi_fu_77886_p4 = ap_phi_mux_data_553_V_read623_rewind_phi_fu_33625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_553_V_read623_phi_phi_fu_77886_p4 = data_553_V_read.read();
        } else {
            ap_phi_mux_data_553_V_read623_phi_phi_fu_77886_p4 = ap_phi_reg_pp0_iter0_data_553_V_read623_phi_reg_77882.read();
        }
    } else {
        ap_phi_mux_data_553_V_read623_phi_phi_fu_77886_p4 = ap_phi_reg_pp0_iter0_data_553_V_read623_phi_reg_77882.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_553_V_read623_rewind_phi_fu_33625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_553_V_read623_rewind_phi_fu_33625_p6 = data_553_V_read623_phi_reg_77882.read();
    } else {
        ap_phi_mux_data_553_V_read623_rewind_phi_fu_33625_p6 = data_553_V_read623_rewind_reg_33621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_554_V_read624_phi_phi_fu_77899_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_554_V_read624_phi_phi_fu_77899_p4 = ap_phi_mux_data_554_V_read624_rewind_phi_fu_33639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_554_V_read624_phi_phi_fu_77899_p4 = data_554_V_read.read();
        } else {
            ap_phi_mux_data_554_V_read624_phi_phi_fu_77899_p4 = ap_phi_reg_pp0_iter0_data_554_V_read624_phi_reg_77895.read();
        }
    } else {
        ap_phi_mux_data_554_V_read624_phi_phi_fu_77899_p4 = ap_phi_reg_pp0_iter0_data_554_V_read624_phi_reg_77895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_554_V_read624_rewind_phi_fu_33639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_554_V_read624_rewind_phi_fu_33639_p6 = data_554_V_read624_phi_reg_77895.read();
    } else {
        ap_phi_mux_data_554_V_read624_rewind_phi_fu_33639_p6 = data_554_V_read624_rewind_reg_33635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_555_V_read625_phi_phi_fu_77912_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_555_V_read625_phi_phi_fu_77912_p4 = ap_phi_mux_data_555_V_read625_rewind_phi_fu_33653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_555_V_read625_phi_phi_fu_77912_p4 = data_555_V_read.read();
        } else {
            ap_phi_mux_data_555_V_read625_phi_phi_fu_77912_p4 = ap_phi_reg_pp0_iter0_data_555_V_read625_phi_reg_77908.read();
        }
    } else {
        ap_phi_mux_data_555_V_read625_phi_phi_fu_77912_p4 = ap_phi_reg_pp0_iter0_data_555_V_read625_phi_reg_77908.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_555_V_read625_rewind_phi_fu_33653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_555_V_read625_rewind_phi_fu_33653_p6 = data_555_V_read625_phi_reg_77908.read();
    } else {
        ap_phi_mux_data_555_V_read625_rewind_phi_fu_33653_p6 = data_555_V_read625_rewind_reg_33649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_556_V_read626_phi_phi_fu_77925_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_556_V_read626_phi_phi_fu_77925_p4 = ap_phi_mux_data_556_V_read626_rewind_phi_fu_33667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_556_V_read626_phi_phi_fu_77925_p4 = data_556_V_read.read();
        } else {
            ap_phi_mux_data_556_V_read626_phi_phi_fu_77925_p4 = ap_phi_reg_pp0_iter0_data_556_V_read626_phi_reg_77921.read();
        }
    } else {
        ap_phi_mux_data_556_V_read626_phi_phi_fu_77925_p4 = ap_phi_reg_pp0_iter0_data_556_V_read626_phi_reg_77921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_556_V_read626_rewind_phi_fu_33667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_556_V_read626_rewind_phi_fu_33667_p6 = data_556_V_read626_phi_reg_77921.read();
    } else {
        ap_phi_mux_data_556_V_read626_rewind_phi_fu_33667_p6 = data_556_V_read626_rewind_reg_33663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_557_V_read627_phi_phi_fu_77938_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_557_V_read627_phi_phi_fu_77938_p4 = ap_phi_mux_data_557_V_read627_rewind_phi_fu_33681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_557_V_read627_phi_phi_fu_77938_p4 = data_557_V_read.read();
        } else {
            ap_phi_mux_data_557_V_read627_phi_phi_fu_77938_p4 = ap_phi_reg_pp0_iter0_data_557_V_read627_phi_reg_77934.read();
        }
    } else {
        ap_phi_mux_data_557_V_read627_phi_phi_fu_77938_p4 = ap_phi_reg_pp0_iter0_data_557_V_read627_phi_reg_77934.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_557_V_read627_rewind_phi_fu_33681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_557_V_read627_rewind_phi_fu_33681_p6 = data_557_V_read627_phi_reg_77934.read();
    } else {
        ap_phi_mux_data_557_V_read627_rewind_phi_fu_33681_p6 = data_557_V_read627_rewind_reg_33677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_558_V_read628_phi_phi_fu_77951_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_558_V_read628_phi_phi_fu_77951_p4 = ap_phi_mux_data_558_V_read628_rewind_phi_fu_33695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_558_V_read628_phi_phi_fu_77951_p4 = data_558_V_read.read();
        } else {
            ap_phi_mux_data_558_V_read628_phi_phi_fu_77951_p4 = ap_phi_reg_pp0_iter0_data_558_V_read628_phi_reg_77947.read();
        }
    } else {
        ap_phi_mux_data_558_V_read628_phi_phi_fu_77951_p4 = ap_phi_reg_pp0_iter0_data_558_V_read628_phi_reg_77947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_558_V_read628_rewind_phi_fu_33695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_558_V_read628_rewind_phi_fu_33695_p6 = data_558_V_read628_phi_reg_77947.read();
    } else {
        ap_phi_mux_data_558_V_read628_rewind_phi_fu_33695_p6 = data_558_V_read628_rewind_reg_33691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_559_V_read629_phi_phi_fu_77964_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_559_V_read629_phi_phi_fu_77964_p4 = ap_phi_mux_data_559_V_read629_rewind_phi_fu_33709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_559_V_read629_phi_phi_fu_77964_p4 = data_559_V_read.read();
        } else {
            ap_phi_mux_data_559_V_read629_phi_phi_fu_77964_p4 = ap_phi_reg_pp0_iter0_data_559_V_read629_phi_reg_77960.read();
        }
    } else {
        ap_phi_mux_data_559_V_read629_phi_phi_fu_77964_p4 = ap_phi_reg_pp0_iter0_data_559_V_read629_phi_reg_77960.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_559_V_read629_rewind_phi_fu_33709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_559_V_read629_rewind_phi_fu_33709_p6 = data_559_V_read629_phi_reg_77960.read();
    } else {
        ap_phi_mux_data_559_V_read629_rewind_phi_fu_33709_p6 = data_559_V_read629_rewind_reg_33705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_55_V_read125_phi_phi_fu_71412_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_55_V_read125_phi_phi_fu_71412_p4 = ap_phi_mux_data_55_V_read125_rewind_phi_fu_26653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_55_V_read125_phi_phi_fu_71412_p4 = data_55_V_read.read();
        } else {
            ap_phi_mux_data_55_V_read125_phi_phi_fu_71412_p4 = ap_phi_reg_pp0_iter0_data_55_V_read125_phi_reg_71408.read();
        }
    } else {
        ap_phi_mux_data_55_V_read125_phi_phi_fu_71412_p4 = ap_phi_reg_pp0_iter0_data_55_V_read125_phi_reg_71408.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_55_V_read125_rewind_phi_fu_26653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_55_V_read125_rewind_phi_fu_26653_p6 = data_55_V_read125_phi_reg_71408.read();
    } else {
        ap_phi_mux_data_55_V_read125_rewind_phi_fu_26653_p6 = data_55_V_read125_rewind_reg_26649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_560_V_read630_phi_phi_fu_77977_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_560_V_read630_phi_phi_fu_77977_p4 = ap_phi_mux_data_560_V_read630_rewind_phi_fu_33723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_560_V_read630_phi_phi_fu_77977_p4 = data_560_V_read.read();
        } else {
            ap_phi_mux_data_560_V_read630_phi_phi_fu_77977_p4 = ap_phi_reg_pp0_iter0_data_560_V_read630_phi_reg_77973.read();
        }
    } else {
        ap_phi_mux_data_560_V_read630_phi_phi_fu_77977_p4 = ap_phi_reg_pp0_iter0_data_560_V_read630_phi_reg_77973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_560_V_read630_rewind_phi_fu_33723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_560_V_read630_rewind_phi_fu_33723_p6 = data_560_V_read630_phi_reg_77973.read();
    } else {
        ap_phi_mux_data_560_V_read630_rewind_phi_fu_33723_p6 = data_560_V_read630_rewind_reg_33719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_561_V_read631_phi_phi_fu_77990_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_561_V_read631_phi_phi_fu_77990_p4 = ap_phi_mux_data_561_V_read631_rewind_phi_fu_33737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_561_V_read631_phi_phi_fu_77990_p4 = data_561_V_read.read();
        } else {
            ap_phi_mux_data_561_V_read631_phi_phi_fu_77990_p4 = ap_phi_reg_pp0_iter0_data_561_V_read631_phi_reg_77986.read();
        }
    } else {
        ap_phi_mux_data_561_V_read631_phi_phi_fu_77990_p4 = ap_phi_reg_pp0_iter0_data_561_V_read631_phi_reg_77986.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_561_V_read631_rewind_phi_fu_33737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_561_V_read631_rewind_phi_fu_33737_p6 = data_561_V_read631_phi_reg_77986.read();
    } else {
        ap_phi_mux_data_561_V_read631_rewind_phi_fu_33737_p6 = data_561_V_read631_rewind_reg_33733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_562_V_read632_phi_phi_fu_78003_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_562_V_read632_phi_phi_fu_78003_p4 = ap_phi_mux_data_562_V_read632_rewind_phi_fu_33751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_562_V_read632_phi_phi_fu_78003_p4 = data_562_V_read.read();
        } else {
            ap_phi_mux_data_562_V_read632_phi_phi_fu_78003_p4 = ap_phi_reg_pp0_iter0_data_562_V_read632_phi_reg_77999.read();
        }
    } else {
        ap_phi_mux_data_562_V_read632_phi_phi_fu_78003_p4 = ap_phi_reg_pp0_iter0_data_562_V_read632_phi_reg_77999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_562_V_read632_rewind_phi_fu_33751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_562_V_read632_rewind_phi_fu_33751_p6 = data_562_V_read632_phi_reg_77999.read();
    } else {
        ap_phi_mux_data_562_V_read632_rewind_phi_fu_33751_p6 = data_562_V_read632_rewind_reg_33747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_563_V_read633_phi_phi_fu_78016_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_563_V_read633_phi_phi_fu_78016_p4 = ap_phi_mux_data_563_V_read633_rewind_phi_fu_33765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_563_V_read633_phi_phi_fu_78016_p4 = data_563_V_read.read();
        } else {
            ap_phi_mux_data_563_V_read633_phi_phi_fu_78016_p4 = ap_phi_reg_pp0_iter0_data_563_V_read633_phi_reg_78012.read();
        }
    } else {
        ap_phi_mux_data_563_V_read633_phi_phi_fu_78016_p4 = ap_phi_reg_pp0_iter0_data_563_V_read633_phi_reg_78012.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_563_V_read633_rewind_phi_fu_33765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_563_V_read633_rewind_phi_fu_33765_p6 = data_563_V_read633_phi_reg_78012.read();
    } else {
        ap_phi_mux_data_563_V_read633_rewind_phi_fu_33765_p6 = data_563_V_read633_rewind_reg_33761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_564_V_read634_phi_phi_fu_78029_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_564_V_read634_phi_phi_fu_78029_p4 = ap_phi_mux_data_564_V_read634_rewind_phi_fu_33779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_564_V_read634_phi_phi_fu_78029_p4 = data_564_V_read.read();
        } else {
            ap_phi_mux_data_564_V_read634_phi_phi_fu_78029_p4 = ap_phi_reg_pp0_iter0_data_564_V_read634_phi_reg_78025.read();
        }
    } else {
        ap_phi_mux_data_564_V_read634_phi_phi_fu_78029_p4 = ap_phi_reg_pp0_iter0_data_564_V_read634_phi_reg_78025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_564_V_read634_rewind_phi_fu_33779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_564_V_read634_rewind_phi_fu_33779_p6 = data_564_V_read634_phi_reg_78025.read();
    } else {
        ap_phi_mux_data_564_V_read634_rewind_phi_fu_33779_p6 = data_564_V_read634_rewind_reg_33775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_565_V_read635_phi_phi_fu_78042_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_565_V_read635_phi_phi_fu_78042_p4 = ap_phi_mux_data_565_V_read635_rewind_phi_fu_33793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_565_V_read635_phi_phi_fu_78042_p4 = data_565_V_read.read();
        } else {
            ap_phi_mux_data_565_V_read635_phi_phi_fu_78042_p4 = ap_phi_reg_pp0_iter0_data_565_V_read635_phi_reg_78038.read();
        }
    } else {
        ap_phi_mux_data_565_V_read635_phi_phi_fu_78042_p4 = ap_phi_reg_pp0_iter0_data_565_V_read635_phi_reg_78038.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_565_V_read635_rewind_phi_fu_33793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_565_V_read635_rewind_phi_fu_33793_p6 = data_565_V_read635_phi_reg_78038.read();
    } else {
        ap_phi_mux_data_565_V_read635_rewind_phi_fu_33793_p6 = data_565_V_read635_rewind_reg_33789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_566_V_read636_phi_phi_fu_78055_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_566_V_read636_phi_phi_fu_78055_p4 = ap_phi_mux_data_566_V_read636_rewind_phi_fu_33807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_566_V_read636_phi_phi_fu_78055_p4 = data_566_V_read.read();
        } else {
            ap_phi_mux_data_566_V_read636_phi_phi_fu_78055_p4 = ap_phi_reg_pp0_iter0_data_566_V_read636_phi_reg_78051.read();
        }
    } else {
        ap_phi_mux_data_566_V_read636_phi_phi_fu_78055_p4 = ap_phi_reg_pp0_iter0_data_566_V_read636_phi_reg_78051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_566_V_read636_rewind_phi_fu_33807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_566_V_read636_rewind_phi_fu_33807_p6 = data_566_V_read636_phi_reg_78051.read();
    } else {
        ap_phi_mux_data_566_V_read636_rewind_phi_fu_33807_p6 = data_566_V_read636_rewind_reg_33803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_567_V_read637_phi_phi_fu_78068_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_567_V_read637_phi_phi_fu_78068_p4 = ap_phi_mux_data_567_V_read637_rewind_phi_fu_33821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_567_V_read637_phi_phi_fu_78068_p4 = data_567_V_read.read();
        } else {
            ap_phi_mux_data_567_V_read637_phi_phi_fu_78068_p4 = ap_phi_reg_pp0_iter0_data_567_V_read637_phi_reg_78064.read();
        }
    } else {
        ap_phi_mux_data_567_V_read637_phi_phi_fu_78068_p4 = ap_phi_reg_pp0_iter0_data_567_V_read637_phi_reg_78064.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_567_V_read637_rewind_phi_fu_33821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_567_V_read637_rewind_phi_fu_33821_p6 = data_567_V_read637_phi_reg_78064.read();
    } else {
        ap_phi_mux_data_567_V_read637_rewind_phi_fu_33821_p6 = data_567_V_read637_rewind_reg_33817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_568_V_read638_phi_phi_fu_78081_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_568_V_read638_phi_phi_fu_78081_p4 = ap_phi_mux_data_568_V_read638_rewind_phi_fu_33835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_568_V_read638_phi_phi_fu_78081_p4 = data_568_V_read.read();
        } else {
            ap_phi_mux_data_568_V_read638_phi_phi_fu_78081_p4 = ap_phi_reg_pp0_iter0_data_568_V_read638_phi_reg_78077.read();
        }
    } else {
        ap_phi_mux_data_568_V_read638_phi_phi_fu_78081_p4 = ap_phi_reg_pp0_iter0_data_568_V_read638_phi_reg_78077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_568_V_read638_rewind_phi_fu_33835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_568_V_read638_rewind_phi_fu_33835_p6 = data_568_V_read638_phi_reg_78077.read();
    } else {
        ap_phi_mux_data_568_V_read638_rewind_phi_fu_33835_p6 = data_568_V_read638_rewind_reg_33831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_569_V_read639_phi_phi_fu_78094_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_569_V_read639_phi_phi_fu_78094_p4 = ap_phi_mux_data_569_V_read639_rewind_phi_fu_33849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_569_V_read639_phi_phi_fu_78094_p4 = data_569_V_read.read();
        } else {
            ap_phi_mux_data_569_V_read639_phi_phi_fu_78094_p4 = ap_phi_reg_pp0_iter0_data_569_V_read639_phi_reg_78090.read();
        }
    } else {
        ap_phi_mux_data_569_V_read639_phi_phi_fu_78094_p4 = ap_phi_reg_pp0_iter0_data_569_V_read639_phi_reg_78090.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_569_V_read639_rewind_phi_fu_33849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_569_V_read639_rewind_phi_fu_33849_p6 = data_569_V_read639_phi_reg_78090.read();
    } else {
        ap_phi_mux_data_569_V_read639_rewind_phi_fu_33849_p6 = data_569_V_read639_rewind_reg_33845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_56_V_read126_phi_phi_fu_71425_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_56_V_read126_phi_phi_fu_71425_p4 = ap_phi_mux_data_56_V_read126_rewind_phi_fu_26667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_56_V_read126_phi_phi_fu_71425_p4 = data_56_V_read.read();
        } else {
            ap_phi_mux_data_56_V_read126_phi_phi_fu_71425_p4 = ap_phi_reg_pp0_iter0_data_56_V_read126_phi_reg_71421.read();
        }
    } else {
        ap_phi_mux_data_56_V_read126_phi_phi_fu_71425_p4 = ap_phi_reg_pp0_iter0_data_56_V_read126_phi_reg_71421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_56_V_read126_rewind_phi_fu_26667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_56_V_read126_rewind_phi_fu_26667_p6 = data_56_V_read126_phi_reg_71421.read();
    } else {
        ap_phi_mux_data_56_V_read126_rewind_phi_fu_26667_p6 = data_56_V_read126_rewind_reg_26663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_570_V_read640_phi_phi_fu_78107_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_570_V_read640_phi_phi_fu_78107_p4 = ap_phi_mux_data_570_V_read640_rewind_phi_fu_33863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_570_V_read640_phi_phi_fu_78107_p4 = data_570_V_read.read();
        } else {
            ap_phi_mux_data_570_V_read640_phi_phi_fu_78107_p4 = ap_phi_reg_pp0_iter0_data_570_V_read640_phi_reg_78103.read();
        }
    } else {
        ap_phi_mux_data_570_V_read640_phi_phi_fu_78107_p4 = ap_phi_reg_pp0_iter0_data_570_V_read640_phi_reg_78103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_570_V_read640_rewind_phi_fu_33863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_570_V_read640_rewind_phi_fu_33863_p6 = data_570_V_read640_phi_reg_78103.read();
    } else {
        ap_phi_mux_data_570_V_read640_rewind_phi_fu_33863_p6 = data_570_V_read640_rewind_reg_33859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_571_V_read641_phi_phi_fu_78120_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_571_V_read641_phi_phi_fu_78120_p4 = ap_phi_mux_data_571_V_read641_rewind_phi_fu_33877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_571_V_read641_phi_phi_fu_78120_p4 = data_571_V_read.read();
        } else {
            ap_phi_mux_data_571_V_read641_phi_phi_fu_78120_p4 = ap_phi_reg_pp0_iter0_data_571_V_read641_phi_reg_78116.read();
        }
    } else {
        ap_phi_mux_data_571_V_read641_phi_phi_fu_78120_p4 = ap_phi_reg_pp0_iter0_data_571_V_read641_phi_reg_78116.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_571_V_read641_rewind_phi_fu_33877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_571_V_read641_rewind_phi_fu_33877_p6 = data_571_V_read641_phi_reg_78116.read();
    } else {
        ap_phi_mux_data_571_V_read641_rewind_phi_fu_33877_p6 = data_571_V_read641_rewind_reg_33873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_572_V_read642_phi_phi_fu_78133_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_572_V_read642_phi_phi_fu_78133_p4 = ap_phi_mux_data_572_V_read642_rewind_phi_fu_33891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_572_V_read642_phi_phi_fu_78133_p4 = data_572_V_read.read();
        } else {
            ap_phi_mux_data_572_V_read642_phi_phi_fu_78133_p4 = ap_phi_reg_pp0_iter0_data_572_V_read642_phi_reg_78129.read();
        }
    } else {
        ap_phi_mux_data_572_V_read642_phi_phi_fu_78133_p4 = ap_phi_reg_pp0_iter0_data_572_V_read642_phi_reg_78129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_572_V_read642_rewind_phi_fu_33891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_572_V_read642_rewind_phi_fu_33891_p6 = data_572_V_read642_phi_reg_78129.read();
    } else {
        ap_phi_mux_data_572_V_read642_rewind_phi_fu_33891_p6 = data_572_V_read642_rewind_reg_33887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_573_V_read643_phi_phi_fu_78146_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_573_V_read643_phi_phi_fu_78146_p4 = ap_phi_mux_data_573_V_read643_rewind_phi_fu_33905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_573_V_read643_phi_phi_fu_78146_p4 = data_573_V_read.read();
        } else {
            ap_phi_mux_data_573_V_read643_phi_phi_fu_78146_p4 = ap_phi_reg_pp0_iter0_data_573_V_read643_phi_reg_78142.read();
        }
    } else {
        ap_phi_mux_data_573_V_read643_phi_phi_fu_78146_p4 = ap_phi_reg_pp0_iter0_data_573_V_read643_phi_reg_78142.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_573_V_read643_rewind_phi_fu_33905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_573_V_read643_rewind_phi_fu_33905_p6 = data_573_V_read643_phi_reg_78142.read();
    } else {
        ap_phi_mux_data_573_V_read643_rewind_phi_fu_33905_p6 = data_573_V_read643_rewind_reg_33901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_574_V_read644_phi_phi_fu_78159_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_574_V_read644_phi_phi_fu_78159_p4 = ap_phi_mux_data_574_V_read644_rewind_phi_fu_33919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_574_V_read644_phi_phi_fu_78159_p4 = data_574_V_read.read();
        } else {
            ap_phi_mux_data_574_V_read644_phi_phi_fu_78159_p4 = ap_phi_reg_pp0_iter0_data_574_V_read644_phi_reg_78155.read();
        }
    } else {
        ap_phi_mux_data_574_V_read644_phi_phi_fu_78159_p4 = ap_phi_reg_pp0_iter0_data_574_V_read644_phi_reg_78155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_574_V_read644_rewind_phi_fu_33919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_574_V_read644_rewind_phi_fu_33919_p6 = data_574_V_read644_phi_reg_78155.read();
    } else {
        ap_phi_mux_data_574_V_read644_rewind_phi_fu_33919_p6 = data_574_V_read644_rewind_reg_33915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_575_V_read645_phi_phi_fu_78172_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_575_V_read645_phi_phi_fu_78172_p4 = ap_phi_mux_data_575_V_read645_rewind_phi_fu_33933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_575_V_read645_phi_phi_fu_78172_p4 = data_575_V_read.read();
        } else {
            ap_phi_mux_data_575_V_read645_phi_phi_fu_78172_p4 = ap_phi_reg_pp0_iter0_data_575_V_read645_phi_reg_78168.read();
        }
    } else {
        ap_phi_mux_data_575_V_read645_phi_phi_fu_78172_p4 = ap_phi_reg_pp0_iter0_data_575_V_read645_phi_reg_78168.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_575_V_read645_rewind_phi_fu_33933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_575_V_read645_rewind_phi_fu_33933_p6 = data_575_V_read645_phi_reg_78168.read();
    } else {
        ap_phi_mux_data_575_V_read645_rewind_phi_fu_33933_p6 = data_575_V_read645_rewind_reg_33929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_576_V_read646_phi_phi_fu_78185_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_576_V_read646_phi_phi_fu_78185_p4 = ap_phi_mux_data_576_V_read646_rewind_phi_fu_33947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_576_V_read646_phi_phi_fu_78185_p4 = data_576_V_read.read();
        } else {
            ap_phi_mux_data_576_V_read646_phi_phi_fu_78185_p4 = ap_phi_reg_pp0_iter0_data_576_V_read646_phi_reg_78181.read();
        }
    } else {
        ap_phi_mux_data_576_V_read646_phi_phi_fu_78185_p4 = ap_phi_reg_pp0_iter0_data_576_V_read646_phi_reg_78181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_576_V_read646_rewind_phi_fu_33947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_576_V_read646_rewind_phi_fu_33947_p6 = data_576_V_read646_phi_reg_78181.read();
    } else {
        ap_phi_mux_data_576_V_read646_rewind_phi_fu_33947_p6 = data_576_V_read646_rewind_reg_33943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_577_V_read647_phi_phi_fu_78198_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_577_V_read647_phi_phi_fu_78198_p4 = ap_phi_mux_data_577_V_read647_rewind_phi_fu_33961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_577_V_read647_phi_phi_fu_78198_p4 = data_577_V_read.read();
        } else {
            ap_phi_mux_data_577_V_read647_phi_phi_fu_78198_p4 = ap_phi_reg_pp0_iter0_data_577_V_read647_phi_reg_78194.read();
        }
    } else {
        ap_phi_mux_data_577_V_read647_phi_phi_fu_78198_p4 = ap_phi_reg_pp0_iter0_data_577_V_read647_phi_reg_78194.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_577_V_read647_rewind_phi_fu_33961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_577_V_read647_rewind_phi_fu_33961_p6 = data_577_V_read647_phi_reg_78194.read();
    } else {
        ap_phi_mux_data_577_V_read647_rewind_phi_fu_33961_p6 = data_577_V_read647_rewind_reg_33957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_578_V_read648_phi_phi_fu_78211_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_578_V_read648_phi_phi_fu_78211_p4 = ap_phi_mux_data_578_V_read648_rewind_phi_fu_33975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_578_V_read648_phi_phi_fu_78211_p4 = data_578_V_read.read();
        } else {
            ap_phi_mux_data_578_V_read648_phi_phi_fu_78211_p4 = ap_phi_reg_pp0_iter0_data_578_V_read648_phi_reg_78207.read();
        }
    } else {
        ap_phi_mux_data_578_V_read648_phi_phi_fu_78211_p4 = ap_phi_reg_pp0_iter0_data_578_V_read648_phi_reg_78207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_578_V_read648_rewind_phi_fu_33975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_578_V_read648_rewind_phi_fu_33975_p6 = data_578_V_read648_phi_reg_78207.read();
    } else {
        ap_phi_mux_data_578_V_read648_rewind_phi_fu_33975_p6 = data_578_V_read648_rewind_reg_33971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_579_V_read649_phi_phi_fu_78224_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_579_V_read649_phi_phi_fu_78224_p4 = ap_phi_mux_data_579_V_read649_rewind_phi_fu_33989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_579_V_read649_phi_phi_fu_78224_p4 = data_579_V_read.read();
        } else {
            ap_phi_mux_data_579_V_read649_phi_phi_fu_78224_p4 = ap_phi_reg_pp0_iter0_data_579_V_read649_phi_reg_78220.read();
        }
    } else {
        ap_phi_mux_data_579_V_read649_phi_phi_fu_78224_p4 = ap_phi_reg_pp0_iter0_data_579_V_read649_phi_reg_78220.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_579_V_read649_rewind_phi_fu_33989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_579_V_read649_rewind_phi_fu_33989_p6 = data_579_V_read649_phi_reg_78220.read();
    } else {
        ap_phi_mux_data_579_V_read649_rewind_phi_fu_33989_p6 = data_579_V_read649_rewind_reg_33985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_57_V_read127_phi_phi_fu_71438_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_57_V_read127_phi_phi_fu_71438_p4 = ap_phi_mux_data_57_V_read127_rewind_phi_fu_26681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_57_V_read127_phi_phi_fu_71438_p4 = data_57_V_read.read();
        } else {
            ap_phi_mux_data_57_V_read127_phi_phi_fu_71438_p4 = ap_phi_reg_pp0_iter0_data_57_V_read127_phi_reg_71434.read();
        }
    } else {
        ap_phi_mux_data_57_V_read127_phi_phi_fu_71438_p4 = ap_phi_reg_pp0_iter0_data_57_V_read127_phi_reg_71434.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_57_V_read127_rewind_phi_fu_26681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_57_V_read127_rewind_phi_fu_26681_p6 = data_57_V_read127_phi_reg_71434.read();
    } else {
        ap_phi_mux_data_57_V_read127_rewind_phi_fu_26681_p6 = data_57_V_read127_rewind_reg_26677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_580_V_read650_phi_phi_fu_78237_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_580_V_read650_phi_phi_fu_78237_p4 = ap_phi_mux_data_580_V_read650_rewind_phi_fu_34003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_580_V_read650_phi_phi_fu_78237_p4 = data_580_V_read.read();
        } else {
            ap_phi_mux_data_580_V_read650_phi_phi_fu_78237_p4 = ap_phi_reg_pp0_iter0_data_580_V_read650_phi_reg_78233.read();
        }
    } else {
        ap_phi_mux_data_580_V_read650_phi_phi_fu_78237_p4 = ap_phi_reg_pp0_iter0_data_580_V_read650_phi_reg_78233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_580_V_read650_rewind_phi_fu_34003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_580_V_read650_rewind_phi_fu_34003_p6 = data_580_V_read650_phi_reg_78233.read();
    } else {
        ap_phi_mux_data_580_V_read650_rewind_phi_fu_34003_p6 = data_580_V_read650_rewind_reg_33999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_581_V_read651_phi_phi_fu_78250_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_581_V_read651_phi_phi_fu_78250_p4 = ap_phi_mux_data_581_V_read651_rewind_phi_fu_34017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_581_V_read651_phi_phi_fu_78250_p4 = data_581_V_read.read();
        } else {
            ap_phi_mux_data_581_V_read651_phi_phi_fu_78250_p4 = ap_phi_reg_pp0_iter0_data_581_V_read651_phi_reg_78246.read();
        }
    } else {
        ap_phi_mux_data_581_V_read651_phi_phi_fu_78250_p4 = ap_phi_reg_pp0_iter0_data_581_V_read651_phi_reg_78246.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_581_V_read651_rewind_phi_fu_34017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_581_V_read651_rewind_phi_fu_34017_p6 = data_581_V_read651_phi_reg_78246.read();
    } else {
        ap_phi_mux_data_581_V_read651_rewind_phi_fu_34017_p6 = data_581_V_read651_rewind_reg_34013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_582_V_read652_phi_phi_fu_78263_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_582_V_read652_phi_phi_fu_78263_p4 = ap_phi_mux_data_582_V_read652_rewind_phi_fu_34031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_582_V_read652_phi_phi_fu_78263_p4 = data_582_V_read.read();
        } else {
            ap_phi_mux_data_582_V_read652_phi_phi_fu_78263_p4 = ap_phi_reg_pp0_iter0_data_582_V_read652_phi_reg_78259.read();
        }
    } else {
        ap_phi_mux_data_582_V_read652_phi_phi_fu_78263_p4 = ap_phi_reg_pp0_iter0_data_582_V_read652_phi_reg_78259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_582_V_read652_rewind_phi_fu_34031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_582_V_read652_rewind_phi_fu_34031_p6 = data_582_V_read652_phi_reg_78259.read();
    } else {
        ap_phi_mux_data_582_V_read652_rewind_phi_fu_34031_p6 = data_582_V_read652_rewind_reg_34027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_583_V_read653_phi_phi_fu_78276_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_583_V_read653_phi_phi_fu_78276_p4 = ap_phi_mux_data_583_V_read653_rewind_phi_fu_34045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_583_V_read653_phi_phi_fu_78276_p4 = data_583_V_read.read();
        } else {
            ap_phi_mux_data_583_V_read653_phi_phi_fu_78276_p4 = ap_phi_reg_pp0_iter0_data_583_V_read653_phi_reg_78272.read();
        }
    } else {
        ap_phi_mux_data_583_V_read653_phi_phi_fu_78276_p4 = ap_phi_reg_pp0_iter0_data_583_V_read653_phi_reg_78272.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_583_V_read653_rewind_phi_fu_34045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_583_V_read653_rewind_phi_fu_34045_p6 = data_583_V_read653_phi_reg_78272.read();
    } else {
        ap_phi_mux_data_583_V_read653_rewind_phi_fu_34045_p6 = data_583_V_read653_rewind_reg_34041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_584_V_read654_phi_phi_fu_78289_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_584_V_read654_phi_phi_fu_78289_p4 = ap_phi_mux_data_584_V_read654_rewind_phi_fu_34059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_584_V_read654_phi_phi_fu_78289_p4 = data_584_V_read.read();
        } else {
            ap_phi_mux_data_584_V_read654_phi_phi_fu_78289_p4 = ap_phi_reg_pp0_iter0_data_584_V_read654_phi_reg_78285.read();
        }
    } else {
        ap_phi_mux_data_584_V_read654_phi_phi_fu_78289_p4 = ap_phi_reg_pp0_iter0_data_584_V_read654_phi_reg_78285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_584_V_read654_rewind_phi_fu_34059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_584_V_read654_rewind_phi_fu_34059_p6 = data_584_V_read654_phi_reg_78285.read();
    } else {
        ap_phi_mux_data_584_V_read654_rewind_phi_fu_34059_p6 = data_584_V_read654_rewind_reg_34055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_585_V_read655_phi_phi_fu_78302_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_585_V_read655_phi_phi_fu_78302_p4 = ap_phi_mux_data_585_V_read655_rewind_phi_fu_34073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_585_V_read655_phi_phi_fu_78302_p4 = data_585_V_read.read();
        } else {
            ap_phi_mux_data_585_V_read655_phi_phi_fu_78302_p4 = ap_phi_reg_pp0_iter0_data_585_V_read655_phi_reg_78298.read();
        }
    } else {
        ap_phi_mux_data_585_V_read655_phi_phi_fu_78302_p4 = ap_phi_reg_pp0_iter0_data_585_V_read655_phi_reg_78298.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_585_V_read655_rewind_phi_fu_34073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_585_V_read655_rewind_phi_fu_34073_p6 = data_585_V_read655_phi_reg_78298.read();
    } else {
        ap_phi_mux_data_585_V_read655_rewind_phi_fu_34073_p6 = data_585_V_read655_rewind_reg_34069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_586_V_read656_phi_phi_fu_78315_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_586_V_read656_phi_phi_fu_78315_p4 = ap_phi_mux_data_586_V_read656_rewind_phi_fu_34087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_586_V_read656_phi_phi_fu_78315_p4 = data_586_V_read.read();
        } else {
            ap_phi_mux_data_586_V_read656_phi_phi_fu_78315_p4 = ap_phi_reg_pp0_iter0_data_586_V_read656_phi_reg_78311.read();
        }
    } else {
        ap_phi_mux_data_586_V_read656_phi_phi_fu_78315_p4 = ap_phi_reg_pp0_iter0_data_586_V_read656_phi_reg_78311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_586_V_read656_rewind_phi_fu_34087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_586_V_read656_rewind_phi_fu_34087_p6 = data_586_V_read656_phi_reg_78311.read();
    } else {
        ap_phi_mux_data_586_V_read656_rewind_phi_fu_34087_p6 = data_586_V_read656_rewind_reg_34083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_587_V_read657_phi_phi_fu_78328_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_587_V_read657_phi_phi_fu_78328_p4 = ap_phi_mux_data_587_V_read657_rewind_phi_fu_34101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_587_V_read657_phi_phi_fu_78328_p4 = data_587_V_read.read();
        } else {
            ap_phi_mux_data_587_V_read657_phi_phi_fu_78328_p4 = ap_phi_reg_pp0_iter0_data_587_V_read657_phi_reg_78324.read();
        }
    } else {
        ap_phi_mux_data_587_V_read657_phi_phi_fu_78328_p4 = ap_phi_reg_pp0_iter0_data_587_V_read657_phi_reg_78324.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_587_V_read657_rewind_phi_fu_34101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_587_V_read657_rewind_phi_fu_34101_p6 = data_587_V_read657_phi_reg_78324.read();
    } else {
        ap_phi_mux_data_587_V_read657_rewind_phi_fu_34101_p6 = data_587_V_read657_rewind_reg_34097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_588_V_read658_phi_phi_fu_78341_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_588_V_read658_phi_phi_fu_78341_p4 = ap_phi_mux_data_588_V_read658_rewind_phi_fu_34115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_588_V_read658_phi_phi_fu_78341_p4 = data_588_V_read.read();
        } else {
            ap_phi_mux_data_588_V_read658_phi_phi_fu_78341_p4 = ap_phi_reg_pp0_iter0_data_588_V_read658_phi_reg_78337.read();
        }
    } else {
        ap_phi_mux_data_588_V_read658_phi_phi_fu_78341_p4 = ap_phi_reg_pp0_iter0_data_588_V_read658_phi_reg_78337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_588_V_read658_rewind_phi_fu_34115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_588_V_read658_rewind_phi_fu_34115_p6 = data_588_V_read658_phi_reg_78337.read();
    } else {
        ap_phi_mux_data_588_V_read658_rewind_phi_fu_34115_p6 = data_588_V_read658_rewind_reg_34111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_589_V_read659_phi_phi_fu_78354_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_589_V_read659_phi_phi_fu_78354_p4 = ap_phi_mux_data_589_V_read659_rewind_phi_fu_34129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_589_V_read659_phi_phi_fu_78354_p4 = data_589_V_read.read();
        } else {
            ap_phi_mux_data_589_V_read659_phi_phi_fu_78354_p4 = ap_phi_reg_pp0_iter0_data_589_V_read659_phi_reg_78350.read();
        }
    } else {
        ap_phi_mux_data_589_V_read659_phi_phi_fu_78354_p4 = ap_phi_reg_pp0_iter0_data_589_V_read659_phi_reg_78350.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_589_V_read659_rewind_phi_fu_34129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_589_V_read659_rewind_phi_fu_34129_p6 = data_589_V_read659_phi_reg_78350.read();
    } else {
        ap_phi_mux_data_589_V_read659_rewind_phi_fu_34129_p6 = data_589_V_read659_rewind_reg_34125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_58_V_read128_phi_phi_fu_71451_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_58_V_read128_phi_phi_fu_71451_p4 = ap_phi_mux_data_58_V_read128_rewind_phi_fu_26695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_58_V_read128_phi_phi_fu_71451_p4 = data_58_V_read.read();
        } else {
            ap_phi_mux_data_58_V_read128_phi_phi_fu_71451_p4 = ap_phi_reg_pp0_iter0_data_58_V_read128_phi_reg_71447.read();
        }
    } else {
        ap_phi_mux_data_58_V_read128_phi_phi_fu_71451_p4 = ap_phi_reg_pp0_iter0_data_58_V_read128_phi_reg_71447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_58_V_read128_rewind_phi_fu_26695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_58_V_read128_rewind_phi_fu_26695_p6 = data_58_V_read128_phi_reg_71447.read();
    } else {
        ap_phi_mux_data_58_V_read128_rewind_phi_fu_26695_p6 = data_58_V_read128_rewind_reg_26691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_590_V_read660_phi_phi_fu_78367_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_590_V_read660_phi_phi_fu_78367_p4 = ap_phi_mux_data_590_V_read660_rewind_phi_fu_34143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_590_V_read660_phi_phi_fu_78367_p4 = data_590_V_read.read();
        } else {
            ap_phi_mux_data_590_V_read660_phi_phi_fu_78367_p4 = ap_phi_reg_pp0_iter0_data_590_V_read660_phi_reg_78363.read();
        }
    } else {
        ap_phi_mux_data_590_V_read660_phi_phi_fu_78367_p4 = ap_phi_reg_pp0_iter0_data_590_V_read660_phi_reg_78363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_590_V_read660_rewind_phi_fu_34143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_590_V_read660_rewind_phi_fu_34143_p6 = data_590_V_read660_phi_reg_78363.read();
    } else {
        ap_phi_mux_data_590_V_read660_rewind_phi_fu_34143_p6 = data_590_V_read660_rewind_reg_34139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_591_V_read661_phi_phi_fu_78380_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_591_V_read661_phi_phi_fu_78380_p4 = ap_phi_mux_data_591_V_read661_rewind_phi_fu_34157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_591_V_read661_phi_phi_fu_78380_p4 = data_591_V_read.read();
        } else {
            ap_phi_mux_data_591_V_read661_phi_phi_fu_78380_p4 = ap_phi_reg_pp0_iter0_data_591_V_read661_phi_reg_78376.read();
        }
    } else {
        ap_phi_mux_data_591_V_read661_phi_phi_fu_78380_p4 = ap_phi_reg_pp0_iter0_data_591_V_read661_phi_reg_78376.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_591_V_read661_rewind_phi_fu_34157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_591_V_read661_rewind_phi_fu_34157_p6 = data_591_V_read661_phi_reg_78376.read();
    } else {
        ap_phi_mux_data_591_V_read661_rewind_phi_fu_34157_p6 = data_591_V_read661_rewind_reg_34153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_592_V_read662_phi_phi_fu_78393_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_592_V_read662_phi_phi_fu_78393_p4 = ap_phi_mux_data_592_V_read662_rewind_phi_fu_34171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_592_V_read662_phi_phi_fu_78393_p4 = data_592_V_read.read();
        } else {
            ap_phi_mux_data_592_V_read662_phi_phi_fu_78393_p4 = ap_phi_reg_pp0_iter0_data_592_V_read662_phi_reg_78389.read();
        }
    } else {
        ap_phi_mux_data_592_V_read662_phi_phi_fu_78393_p4 = ap_phi_reg_pp0_iter0_data_592_V_read662_phi_reg_78389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_592_V_read662_rewind_phi_fu_34171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_592_V_read662_rewind_phi_fu_34171_p6 = data_592_V_read662_phi_reg_78389.read();
    } else {
        ap_phi_mux_data_592_V_read662_rewind_phi_fu_34171_p6 = data_592_V_read662_rewind_reg_34167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_593_V_read663_phi_phi_fu_78406_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_593_V_read663_phi_phi_fu_78406_p4 = ap_phi_mux_data_593_V_read663_rewind_phi_fu_34185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_593_V_read663_phi_phi_fu_78406_p4 = data_593_V_read.read();
        } else {
            ap_phi_mux_data_593_V_read663_phi_phi_fu_78406_p4 = ap_phi_reg_pp0_iter0_data_593_V_read663_phi_reg_78402.read();
        }
    } else {
        ap_phi_mux_data_593_V_read663_phi_phi_fu_78406_p4 = ap_phi_reg_pp0_iter0_data_593_V_read663_phi_reg_78402.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_593_V_read663_rewind_phi_fu_34185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_593_V_read663_rewind_phi_fu_34185_p6 = data_593_V_read663_phi_reg_78402.read();
    } else {
        ap_phi_mux_data_593_V_read663_rewind_phi_fu_34185_p6 = data_593_V_read663_rewind_reg_34181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_594_V_read664_phi_phi_fu_78419_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_594_V_read664_phi_phi_fu_78419_p4 = ap_phi_mux_data_594_V_read664_rewind_phi_fu_34199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_594_V_read664_phi_phi_fu_78419_p4 = data_594_V_read.read();
        } else {
            ap_phi_mux_data_594_V_read664_phi_phi_fu_78419_p4 = ap_phi_reg_pp0_iter0_data_594_V_read664_phi_reg_78415.read();
        }
    } else {
        ap_phi_mux_data_594_V_read664_phi_phi_fu_78419_p4 = ap_phi_reg_pp0_iter0_data_594_V_read664_phi_reg_78415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_594_V_read664_rewind_phi_fu_34199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_594_V_read664_rewind_phi_fu_34199_p6 = data_594_V_read664_phi_reg_78415.read();
    } else {
        ap_phi_mux_data_594_V_read664_rewind_phi_fu_34199_p6 = data_594_V_read664_rewind_reg_34195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_595_V_read665_phi_phi_fu_78432_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_595_V_read665_phi_phi_fu_78432_p4 = ap_phi_mux_data_595_V_read665_rewind_phi_fu_34213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_595_V_read665_phi_phi_fu_78432_p4 = data_595_V_read.read();
        } else {
            ap_phi_mux_data_595_V_read665_phi_phi_fu_78432_p4 = ap_phi_reg_pp0_iter0_data_595_V_read665_phi_reg_78428.read();
        }
    } else {
        ap_phi_mux_data_595_V_read665_phi_phi_fu_78432_p4 = ap_phi_reg_pp0_iter0_data_595_V_read665_phi_reg_78428.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_595_V_read665_rewind_phi_fu_34213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_595_V_read665_rewind_phi_fu_34213_p6 = data_595_V_read665_phi_reg_78428.read();
    } else {
        ap_phi_mux_data_595_V_read665_rewind_phi_fu_34213_p6 = data_595_V_read665_rewind_reg_34209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_596_V_read666_phi_phi_fu_78445_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_596_V_read666_phi_phi_fu_78445_p4 = ap_phi_mux_data_596_V_read666_rewind_phi_fu_34227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_596_V_read666_phi_phi_fu_78445_p4 = data_596_V_read.read();
        } else {
            ap_phi_mux_data_596_V_read666_phi_phi_fu_78445_p4 = ap_phi_reg_pp0_iter0_data_596_V_read666_phi_reg_78441.read();
        }
    } else {
        ap_phi_mux_data_596_V_read666_phi_phi_fu_78445_p4 = ap_phi_reg_pp0_iter0_data_596_V_read666_phi_reg_78441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_596_V_read666_rewind_phi_fu_34227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_596_V_read666_rewind_phi_fu_34227_p6 = data_596_V_read666_phi_reg_78441.read();
    } else {
        ap_phi_mux_data_596_V_read666_rewind_phi_fu_34227_p6 = data_596_V_read666_rewind_reg_34223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_597_V_read667_phi_phi_fu_78458_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_597_V_read667_phi_phi_fu_78458_p4 = ap_phi_mux_data_597_V_read667_rewind_phi_fu_34241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_597_V_read667_phi_phi_fu_78458_p4 = data_597_V_read.read();
        } else {
            ap_phi_mux_data_597_V_read667_phi_phi_fu_78458_p4 = ap_phi_reg_pp0_iter0_data_597_V_read667_phi_reg_78454.read();
        }
    } else {
        ap_phi_mux_data_597_V_read667_phi_phi_fu_78458_p4 = ap_phi_reg_pp0_iter0_data_597_V_read667_phi_reg_78454.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_597_V_read667_rewind_phi_fu_34241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_597_V_read667_rewind_phi_fu_34241_p6 = data_597_V_read667_phi_reg_78454.read();
    } else {
        ap_phi_mux_data_597_V_read667_rewind_phi_fu_34241_p6 = data_597_V_read667_rewind_reg_34237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_598_V_read668_phi_phi_fu_78471_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_598_V_read668_phi_phi_fu_78471_p4 = ap_phi_mux_data_598_V_read668_rewind_phi_fu_34255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_598_V_read668_phi_phi_fu_78471_p4 = data_598_V_read.read();
        } else {
            ap_phi_mux_data_598_V_read668_phi_phi_fu_78471_p4 = ap_phi_reg_pp0_iter0_data_598_V_read668_phi_reg_78467.read();
        }
    } else {
        ap_phi_mux_data_598_V_read668_phi_phi_fu_78471_p4 = ap_phi_reg_pp0_iter0_data_598_V_read668_phi_reg_78467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_598_V_read668_rewind_phi_fu_34255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_598_V_read668_rewind_phi_fu_34255_p6 = data_598_V_read668_phi_reg_78467.read();
    } else {
        ap_phi_mux_data_598_V_read668_rewind_phi_fu_34255_p6 = data_598_V_read668_rewind_reg_34251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_599_V_read669_phi_phi_fu_78484_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_599_V_read669_phi_phi_fu_78484_p4 = ap_phi_mux_data_599_V_read669_rewind_phi_fu_34269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_599_V_read669_phi_phi_fu_78484_p4 = data_599_V_read.read();
        } else {
            ap_phi_mux_data_599_V_read669_phi_phi_fu_78484_p4 = ap_phi_reg_pp0_iter0_data_599_V_read669_phi_reg_78480.read();
        }
    } else {
        ap_phi_mux_data_599_V_read669_phi_phi_fu_78484_p4 = ap_phi_reg_pp0_iter0_data_599_V_read669_phi_reg_78480.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_599_V_read669_rewind_phi_fu_34269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_599_V_read669_rewind_phi_fu_34269_p6 = data_599_V_read669_phi_reg_78480.read();
    } else {
        ap_phi_mux_data_599_V_read669_rewind_phi_fu_34269_p6 = data_599_V_read669_rewind_reg_34265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_59_V_read129_phi_phi_fu_71464_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_59_V_read129_phi_phi_fu_71464_p4 = ap_phi_mux_data_59_V_read129_rewind_phi_fu_26709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_59_V_read129_phi_phi_fu_71464_p4 = data_59_V_read.read();
        } else {
            ap_phi_mux_data_59_V_read129_phi_phi_fu_71464_p4 = ap_phi_reg_pp0_iter0_data_59_V_read129_phi_reg_71460.read();
        }
    } else {
        ap_phi_mux_data_59_V_read129_phi_phi_fu_71464_p4 = ap_phi_reg_pp0_iter0_data_59_V_read129_phi_reg_71460.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_59_V_read129_rewind_phi_fu_26709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_59_V_read129_rewind_phi_fu_26709_p6 = data_59_V_read129_phi_reg_71460.read();
    } else {
        ap_phi_mux_data_59_V_read129_rewind_phi_fu_26709_p6 = data_59_V_read129_rewind_reg_26705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_5_V_read75_phi_phi_fu_70762_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_5_V_read75_phi_phi_fu_70762_p4 = ap_phi_mux_data_5_V_read75_rewind_phi_fu_25953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_5_V_read75_phi_phi_fu_70762_p4 = data_5_V_read.read();
        } else {
            ap_phi_mux_data_5_V_read75_phi_phi_fu_70762_p4 = ap_phi_reg_pp0_iter0_data_5_V_read75_phi_reg_70758.read();
        }
    } else {
        ap_phi_mux_data_5_V_read75_phi_phi_fu_70762_p4 = ap_phi_reg_pp0_iter0_data_5_V_read75_phi_reg_70758.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_5_V_read75_rewind_phi_fu_25953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_5_V_read75_rewind_phi_fu_25953_p6 = data_5_V_read75_phi_reg_70758.read();
    } else {
        ap_phi_mux_data_5_V_read75_rewind_phi_fu_25953_p6 = data_5_V_read75_rewind_reg_25949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_600_V_read670_phi_phi_fu_78497_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_600_V_read670_phi_phi_fu_78497_p4 = ap_phi_mux_data_600_V_read670_rewind_phi_fu_34283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_600_V_read670_phi_phi_fu_78497_p4 = data_600_V_read.read();
        } else {
            ap_phi_mux_data_600_V_read670_phi_phi_fu_78497_p4 = ap_phi_reg_pp0_iter0_data_600_V_read670_phi_reg_78493.read();
        }
    } else {
        ap_phi_mux_data_600_V_read670_phi_phi_fu_78497_p4 = ap_phi_reg_pp0_iter0_data_600_V_read670_phi_reg_78493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_600_V_read670_rewind_phi_fu_34283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_600_V_read670_rewind_phi_fu_34283_p6 = data_600_V_read670_phi_reg_78493.read();
    } else {
        ap_phi_mux_data_600_V_read670_rewind_phi_fu_34283_p6 = data_600_V_read670_rewind_reg_34279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_601_V_read671_phi_phi_fu_78510_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_601_V_read671_phi_phi_fu_78510_p4 = ap_phi_mux_data_601_V_read671_rewind_phi_fu_34297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_601_V_read671_phi_phi_fu_78510_p4 = data_601_V_read.read();
        } else {
            ap_phi_mux_data_601_V_read671_phi_phi_fu_78510_p4 = ap_phi_reg_pp0_iter0_data_601_V_read671_phi_reg_78506.read();
        }
    } else {
        ap_phi_mux_data_601_V_read671_phi_phi_fu_78510_p4 = ap_phi_reg_pp0_iter0_data_601_V_read671_phi_reg_78506.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_601_V_read671_rewind_phi_fu_34297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_601_V_read671_rewind_phi_fu_34297_p6 = data_601_V_read671_phi_reg_78506.read();
    } else {
        ap_phi_mux_data_601_V_read671_rewind_phi_fu_34297_p6 = data_601_V_read671_rewind_reg_34293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_602_V_read672_phi_phi_fu_78523_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_602_V_read672_phi_phi_fu_78523_p4 = ap_phi_mux_data_602_V_read672_rewind_phi_fu_34311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_602_V_read672_phi_phi_fu_78523_p4 = data_602_V_read.read();
        } else {
            ap_phi_mux_data_602_V_read672_phi_phi_fu_78523_p4 = ap_phi_reg_pp0_iter0_data_602_V_read672_phi_reg_78519.read();
        }
    } else {
        ap_phi_mux_data_602_V_read672_phi_phi_fu_78523_p4 = ap_phi_reg_pp0_iter0_data_602_V_read672_phi_reg_78519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_602_V_read672_rewind_phi_fu_34311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_602_V_read672_rewind_phi_fu_34311_p6 = data_602_V_read672_phi_reg_78519.read();
    } else {
        ap_phi_mux_data_602_V_read672_rewind_phi_fu_34311_p6 = data_602_V_read672_rewind_reg_34307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_603_V_read673_phi_phi_fu_78536_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_603_V_read673_phi_phi_fu_78536_p4 = ap_phi_mux_data_603_V_read673_rewind_phi_fu_34325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_603_V_read673_phi_phi_fu_78536_p4 = data_603_V_read.read();
        } else {
            ap_phi_mux_data_603_V_read673_phi_phi_fu_78536_p4 = ap_phi_reg_pp0_iter0_data_603_V_read673_phi_reg_78532.read();
        }
    } else {
        ap_phi_mux_data_603_V_read673_phi_phi_fu_78536_p4 = ap_phi_reg_pp0_iter0_data_603_V_read673_phi_reg_78532.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_603_V_read673_rewind_phi_fu_34325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_603_V_read673_rewind_phi_fu_34325_p6 = data_603_V_read673_phi_reg_78532.read();
    } else {
        ap_phi_mux_data_603_V_read673_rewind_phi_fu_34325_p6 = data_603_V_read673_rewind_reg_34321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_604_V_read674_phi_phi_fu_78549_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_604_V_read674_phi_phi_fu_78549_p4 = ap_phi_mux_data_604_V_read674_rewind_phi_fu_34339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_604_V_read674_phi_phi_fu_78549_p4 = data_604_V_read.read();
        } else {
            ap_phi_mux_data_604_V_read674_phi_phi_fu_78549_p4 = ap_phi_reg_pp0_iter0_data_604_V_read674_phi_reg_78545.read();
        }
    } else {
        ap_phi_mux_data_604_V_read674_phi_phi_fu_78549_p4 = ap_phi_reg_pp0_iter0_data_604_V_read674_phi_reg_78545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_604_V_read674_rewind_phi_fu_34339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_604_V_read674_rewind_phi_fu_34339_p6 = data_604_V_read674_phi_reg_78545.read();
    } else {
        ap_phi_mux_data_604_V_read674_rewind_phi_fu_34339_p6 = data_604_V_read674_rewind_reg_34335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_605_V_read675_phi_phi_fu_78562_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_605_V_read675_phi_phi_fu_78562_p4 = ap_phi_mux_data_605_V_read675_rewind_phi_fu_34353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_605_V_read675_phi_phi_fu_78562_p4 = data_605_V_read.read();
        } else {
            ap_phi_mux_data_605_V_read675_phi_phi_fu_78562_p4 = ap_phi_reg_pp0_iter0_data_605_V_read675_phi_reg_78558.read();
        }
    } else {
        ap_phi_mux_data_605_V_read675_phi_phi_fu_78562_p4 = ap_phi_reg_pp0_iter0_data_605_V_read675_phi_reg_78558.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_605_V_read675_rewind_phi_fu_34353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_605_V_read675_rewind_phi_fu_34353_p6 = data_605_V_read675_phi_reg_78558.read();
    } else {
        ap_phi_mux_data_605_V_read675_rewind_phi_fu_34353_p6 = data_605_V_read675_rewind_reg_34349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_606_V_read676_phi_phi_fu_78575_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_606_V_read676_phi_phi_fu_78575_p4 = ap_phi_mux_data_606_V_read676_rewind_phi_fu_34367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_606_V_read676_phi_phi_fu_78575_p4 = data_606_V_read.read();
        } else {
            ap_phi_mux_data_606_V_read676_phi_phi_fu_78575_p4 = ap_phi_reg_pp0_iter0_data_606_V_read676_phi_reg_78571.read();
        }
    } else {
        ap_phi_mux_data_606_V_read676_phi_phi_fu_78575_p4 = ap_phi_reg_pp0_iter0_data_606_V_read676_phi_reg_78571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_606_V_read676_rewind_phi_fu_34367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_606_V_read676_rewind_phi_fu_34367_p6 = data_606_V_read676_phi_reg_78571.read();
    } else {
        ap_phi_mux_data_606_V_read676_rewind_phi_fu_34367_p6 = data_606_V_read676_rewind_reg_34363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_607_V_read677_phi_phi_fu_78588_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_607_V_read677_phi_phi_fu_78588_p4 = ap_phi_mux_data_607_V_read677_rewind_phi_fu_34381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_607_V_read677_phi_phi_fu_78588_p4 = data_607_V_read.read();
        } else {
            ap_phi_mux_data_607_V_read677_phi_phi_fu_78588_p4 = ap_phi_reg_pp0_iter0_data_607_V_read677_phi_reg_78584.read();
        }
    } else {
        ap_phi_mux_data_607_V_read677_phi_phi_fu_78588_p4 = ap_phi_reg_pp0_iter0_data_607_V_read677_phi_reg_78584.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_607_V_read677_rewind_phi_fu_34381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_607_V_read677_rewind_phi_fu_34381_p6 = data_607_V_read677_phi_reg_78584.read();
    } else {
        ap_phi_mux_data_607_V_read677_rewind_phi_fu_34381_p6 = data_607_V_read677_rewind_reg_34377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_608_V_read678_phi_phi_fu_78601_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_608_V_read678_phi_phi_fu_78601_p4 = ap_phi_mux_data_608_V_read678_rewind_phi_fu_34395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_608_V_read678_phi_phi_fu_78601_p4 = data_608_V_read.read();
        } else {
            ap_phi_mux_data_608_V_read678_phi_phi_fu_78601_p4 = ap_phi_reg_pp0_iter0_data_608_V_read678_phi_reg_78597.read();
        }
    } else {
        ap_phi_mux_data_608_V_read678_phi_phi_fu_78601_p4 = ap_phi_reg_pp0_iter0_data_608_V_read678_phi_reg_78597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_608_V_read678_rewind_phi_fu_34395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_608_V_read678_rewind_phi_fu_34395_p6 = data_608_V_read678_phi_reg_78597.read();
    } else {
        ap_phi_mux_data_608_V_read678_rewind_phi_fu_34395_p6 = data_608_V_read678_rewind_reg_34391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_609_V_read679_phi_phi_fu_78614_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_609_V_read679_phi_phi_fu_78614_p4 = ap_phi_mux_data_609_V_read679_rewind_phi_fu_34409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_609_V_read679_phi_phi_fu_78614_p4 = data_609_V_read.read();
        } else {
            ap_phi_mux_data_609_V_read679_phi_phi_fu_78614_p4 = ap_phi_reg_pp0_iter0_data_609_V_read679_phi_reg_78610.read();
        }
    } else {
        ap_phi_mux_data_609_V_read679_phi_phi_fu_78614_p4 = ap_phi_reg_pp0_iter0_data_609_V_read679_phi_reg_78610.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_609_V_read679_rewind_phi_fu_34409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_609_V_read679_rewind_phi_fu_34409_p6 = data_609_V_read679_phi_reg_78610.read();
    } else {
        ap_phi_mux_data_609_V_read679_rewind_phi_fu_34409_p6 = data_609_V_read679_rewind_reg_34405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_60_V_read130_phi_phi_fu_71477_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_60_V_read130_phi_phi_fu_71477_p4 = ap_phi_mux_data_60_V_read130_rewind_phi_fu_26723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_60_V_read130_phi_phi_fu_71477_p4 = data_60_V_read.read();
        } else {
            ap_phi_mux_data_60_V_read130_phi_phi_fu_71477_p4 = ap_phi_reg_pp0_iter0_data_60_V_read130_phi_reg_71473.read();
        }
    } else {
        ap_phi_mux_data_60_V_read130_phi_phi_fu_71477_p4 = ap_phi_reg_pp0_iter0_data_60_V_read130_phi_reg_71473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_60_V_read130_rewind_phi_fu_26723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_60_V_read130_rewind_phi_fu_26723_p6 = data_60_V_read130_phi_reg_71473.read();
    } else {
        ap_phi_mux_data_60_V_read130_rewind_phi_fu_26723_p6 = data_60_V_read130_rewind_reg_26719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_610_V_read680_phi_phi_fu_78627_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_610_V_read680_phi_phi_fu_78627_p4 = ap_phi_mux_data_610_V_read680_rewind_phi_fu_34423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_610_V_read680_phi_phi_fu_78627_p4 = data_610_V_read.read();
        } else {
            ap_phi_mux_data_610_V_read680_phi_phi_fu_78627_p4 = ap_phi_reg_pp0_iter0_data_610_V_read680_phi_reg_78623.read();
        }
    } else {
        ap_phi_mux_data_610_V_read680_phi_phi_fu_78627_p4 = ap_phi_reg_pp0_iter0_data_610_V_read680_phi_reg_78623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_610_V_read680_rewind_phi_fu_34423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_610_V_read680_rewind_phi_fu_34423_p6 = data_610_V_read680_phi_reg_78623.read();
    } else {
        ap_phi_mux_data_610_V_read680_rewind_phi_fu_34423_p6 = data_610_V_read680_rewind_reg_34419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_611_V_read681_phi_phi_fu_78640_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_611_V_read681_phi_phi_fu_78640_p4 = ap_phi_mux_data_611_V_read681_rewind_phi_fu_34437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_611_V_read681_phi_phi_fu_78640_p4 = data_611_V_read.read();
        } else {
            ap_phi_mux_data_611_V_read681_phi_phi_fu_78640_p4 = ap_phi_reg_pp0_iter0_data_611_V_read681_phi_reg_78636.read();
        }
    } else {
        ap_phi_mux_data_611_V_read681_phi_phi_fu_78640_p4 = ap_phi_reg_pp0_iter0_data_611_V_read681_phi_reg_78636.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_611_V_read681_rewind_phi_fu_34437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_611_V_read681_rewind_phi_fu_34437_p6 = data_611_V_read681_phi_reg_78636.read();
    } else {
        ap_phi_mux_data_611_V_read681_rewind_phi_fu_34437_p6 = data_611_V_read681_rewind_reg_34433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_612_V_read682_phi_phi_fu_78653_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_612_V_read682_phi_phi_fu_78653_p4 = ap_phi_mux_data_612_V_read682_rewind_phi_fu_34451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_612_V_read682_phi_phi_fu_78653_p4 = data_612_V_read.read();
        } else {
            ap_phi_mux_data_612_V_read682_phi_phi_fu_78653_p4 = ap_phi_reg_pp0_iter0_data_612_V_read682_phi_reg_78649.read();
        }
    } else {
        ap_phi_mux_data_612_V_read682_phi_phi_fu_78653_p4 = ap_phi_reg_pp0_iter0_data_612_V_read682_phi_reg_78649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_612_V_read682_rewind_phi_fu_34451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_612_V_read682_rewind_phi_fu_34451_p6 = data_612_V_read682_phi_reg_78649.read();
    } else {
        ap_phi_mux_data_612_V_read682_rewind_phi_fu_34451_p6 = data_612_V_read682_rewind_reg_34447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_613_V_read683_phi_phi_fu_78666_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_613_V_read683_phi_phi_fu_78666_p4 = ap_phi_mux_data_613_V_read683_rewind_phi_fu_34465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_613_V_read683_phi_phi_fu_78666_p4 = data_613_V_read.read();
        } else {
            ap_phi_mux_data_613_V_read683_phi_phi_fu_78666_p4 = ap_phi_reg_pp0_iter0_data_613_V_read683_phi_reg_78662.read();
        }
    } else {
        ap_phi_mux_data_613_V_read683_phi_phi_fu_78666_p4 = ap_phi_reg_pp0_iter0_data_613_V_read683_phi_reg_78662.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_613_V_read683_rewind_phi_fu_34465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_613_V_read683_rewind_phi_fu_34465_p6 = data_613_V_read683_phi_reg_78662.read();
    } else {
        ap_phi_mux_data_613_V_read683_rewind_phi_fu_34465_p6 = data_613_V_read683_rewind_reg_34461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_614_V_read684_phi_phi_fu_78679_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_614_V_read684_phi_phi_fu_78679_p4 = ap_phi_mux_data_614_V_read684_rewind_phi_fu_34479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_614_V_read684_phi_phi_fu_78679_p4 = data_614_V_read.read();
        } else {
            ap_phi_mux_data_614_V_read684_phi_phi_fu_78679_p4 = ap_phi_reg_pp0_iter0_data_614_V_read684_phi_reg_78675.read();
        }
    } else {
        ap_phi_mux_data_614_V_read684_phi_phi_fu_78679_p4 = ap_phi_reg_pp0_iter0_data_614_V_read684_phi_reg_78675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_614_V_read684_rewind_phi_fu_34479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_614_V_read684_rewind_phi_fu_34479_p6 = data_614_V_read684_phi_reg_78675.read();
    } else {
        ap_phi_mux_data_614_V_read684_rewind_phi_fu_34479_p6 = data_614_V_read684_rewind_reg_34475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_615_V_read685_phi_phi_fu_78692_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_615_V_read685_phi_phi_fu_78692_p4 = ap_phi_mux_data_615_V_read685_rewind_phi_fu_34493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_615_V_read685_phi_phi_fu_78692_p4 = data_615_V_read.read();
        } else {
            ap_phi_mux_data_615_V_read685_phi_phi_fu_78692_p4 = ap_phi_reg_pp0_iter0_data_615_V_read685_phi_reg_78688.read();
        }
    } else {
        ap_phi_mux_data_615_V_read685_phi_phi_fu_78692_p4 = ap_phi_reg_pp0_iter0_data_615_V_read685_phi_reg_78688.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_615_V_read685_rewind_phi_fu_34493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_615_V_read685_rewind_phi_fu_34493_p6 = data_615_V_read685_phi_reg_78688.read();
    } else {
        ap_phi_mux_data_615_V_read685_rewind_phi_fu_34493_p6 = data_615_V_read685_rewind_reg_34489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_616_V_read686_phi_phi_fu_78705_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_616_V_read686_phi_phi_fu_78705_p4 = ap_phi_mux_data_616_V_read686_rewind_phi_fu_34507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_616_V_read686_phi_phi_fu_78705_p4 = data_616_V_read.read();
        } else {
            ap_phi_mux_data_616_V_read686_phi_phi_fu_78705_p4 = ap_phi_reg_pp0_iter0_data_616_V_read686_phi_reg_78701.read();
        }
    } else {
        ap_phi_mux_data_616_V_read686_phi_phi_fu_78705_p4 = ap_phi_reg_pp0_iter0_data_616_V_read686_phi_reg_78701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_616_V_read686_rewind_phi_fu_34507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_616_V_read686_rewind_phi_fu_34507_p6 = data_616_V_read686_phi_reg_78701.read();
    } else {
        ap_phi_mux_data_616_V_read686_rewind_phi_fu_34507_p6 = data_616_V_read686_rewind_reg_34503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_617_V_read687_phi_phi_fu_78718_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_617_V_read687_phi_phi_fu_78718_p4 = ap_phi_mux_data_617_V_read687_rewind_phi_fu_34521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_617_V_read687_phi_phi_fu_78718_p4 = data_617_V_read.read();
        } else {
            ap_phi_mux_data_617_V_read687_phi_phi_fu_78718_p4 = ap_phi_reg_pp0_iter0_data_617_V_read687_phi_reg_78714.read();
        }
    } else {
        ap_phi_mux_data_617_V_read687_phi_phi_fu_78718_p4 = ap_phi_reg_pp0_iter0_data_617_V_read687_phi_reg_78714.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_617_V_read687_rewind_phi_fu_34521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_617_V_read687_rewind_phi_fu_34521_p6 = data_617_V_read687_phi_reg_78714.read();
    } else {
        ap_phi_mux_data_617_V_read687_rewind_phi_fu_34521_p6 = data_617_V_read687_rewind_reg_34517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_618_V_read688_phi_phi_fu_78731_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_618_V_read688_phi_phi_fu_78731_p4 = ap_phi_mux_data_618_V_read688_rewind_phi_fu_34535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_618_V_read688_phi_phi_fu_78731_p4 = data_618_V_read.read();
        } else {
            ap_phi_mux_data_618_V_read688_phi_phi_fu_78731_p4 = ap_phi_reg_pp0_iter0_data_618_V_read688_phi_reg_78727.read();
        }
    } else {
        ap_phi_mux_data_618_V_read688_phi_phi_fu_78731_p4 = ap_phi_reg_pp0_iter0_data_618_V_read688_phi_reg_78727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_618_V_read688_rewind_phi_fu_34535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_618_V_read688_rewind_phi_fu_34535_p6 = data_618_V_read688_phi_reg_78727.read();
    } else {
        ap_phi_mux_data_618_V_read688_rewind_phi_fu_34535_p6 = data_618_V_read688_rewind_reg_34531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_619_V_read689_phi_phi_fu_78744_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_619_V_read689_phi_phi_fu_78744_p4 = ap_phi_mux_data_619_V_read689_rewind_phi_fu_34549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_619_V_read689_phi_phi_fu_78744_p4 = data_619_V_read.read();
        } else {
            ap_phi_mux_data_619_V_read689_phi_phi_fu_78744_p4 = ap_phi_reg_pp0_iter0_data_619_V_read689_phi_reg_78740.read();
        }
    } else {
        ap_phi_mux_data_619_V_read689_phi_phi_fu_78744_p4 = ap_phi_reg_pp0_iter0_data_619_V_read689_phi_reg_78740.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_619_V_read689_rewind_phi_fu_34549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_619_V_read689_rewind_phi_fu_34549_p6 = data_619_V_read689_phi_reg_78740.read();
    } else {
        ap_phi_mux_data_619_V_read689_rewind_phi_fu_34549_p6 = data_619_V_read689_rewind_reg_34545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_61_V_read131_phi_phi_fu_71490_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_61_V_read131_phi_phi_fu_71490_p4 = ap_phi_mux_data_61_V_read131_rewind_phi_fu_26737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_61_V_read131_phi_phi_fu_71490_p4 = data_61_V_read.read();
        } else {
            ap_phi_mux_data_61_V_read131_phi_phi_fu_71490_p4 = ap_phi_reg_pp0_iter0_data_61_V_read131_phi_reg_71486.read();
        }
    } else {
        ap_phi_mux_data_61_V_read131_phi_phi_fu_71490_p4 = ap_phi_reg_pp0_iter0_data_61_V_read131_phi_reg_71486.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_61_V_read131_rewind_phi_fu_26737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_61_V_read131_rewind_phi_fu_26737_p6 = data_61_V_read131_phi_reg_71486.read();
    } else {
        ap_phi_mux_data_61_V_read131_rewind_phi_fu_26737_p6 = data_61_V_read131_rewind_reg_26733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_620_V_read690_phi_phi_fu_78757_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_620_V_read690_phi_phi_fu_78757_p4 = ap_phi_mux_data_620_V_read690_rewind_phi_fu_34563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_620_V_read690_phi_phi_fu_78757_p4 = data_620_V_read.read();
        } else {
            ap_phi_mux_data_620_V_read690_phi_phi_fu_78757_p4 = ap_phi_reg_pp0_iter0_data_620_V_read690_phi_reg_78753.read();
        }
    } else {
        ap_phi_mux_data_620_V_read690_phi_phi_fu_78757_p4 = ap_phi_reg_pp0_iter0_data_620_V_read690_phi_reg_78753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_620_V_read690_rewind_phi_fu_34563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_620_V_read690_rewind_phi_fu_34563_p6 = data_620_V_read690_phi_reg_78753.read();
    } else {
        ap_phi_mux_data_620_V_read690_rewind_phi_fu_34563_p6 = data_620_V_read690_rewind_reg_34559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_621_V_read691_phi_phi_fu_78770_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_621_V_read691_phi_phi_fu_78770_p4 = ap_phi_mux_data_621_V_read691_rewind_phi_fu_34577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_621_V_read691_phi_phi_fu_78770_p4 = data_621_V_read.read();
        } else {
            ap_phi_mux_data_621_V_read691_phi_phi_fu_78770_p4 = ap_phi_reg_pp0_iter0_data_621_V_read691_phi_reg_78766.read();
        }
    } else {
        ap_phi_mux_data_621_V_read691_phi_phi_fu_78770_p4 = ap_phi_reg_pp0_iter0_data_621_V_read691_phi_reg_78766.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_621_V_read691_rewind_phi_fu_34577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_621_V_read691_rewind_phi_fu_34577_p6 = data_621_V_read691_phi_reg_78766.read();
    } else {
        ap_phi_mux_data_621_V_read691_rewind_phi_fu_34577_p6 = data_621_V_read691_rewind_reg_34573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_622_V_read692_phi_phi_fu_78783_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_622_V_read692_phi_phi_fu_78783_p4 = ap_phi_mux_data_622_V_read692_rewind_phi_fu_34591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_622_V_read692_phi_phi_fu_78783_p4 = data_622_V_read.read();
        } else {
            ap_phi_mux_data_622_V_read692_phi_phi_fu_78783_p4 = ap_phi_reg_pp0_iter0_data_622_V_read692_phi_reg_78779.read();
        }
    } else {
        ap_phi_mux_data_622_V_read692_phi_phi_fu_78783_p4 = ap_phi_reg_pp0_iter0_data_622_V_read692_phi_reg_78779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_622_V_read692_rewind_phi_fu_34591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_622_V_read692_rewind_phi_fu_34591_p6 = data_622_V_read692_phi_reg_78779.read();
    } else {
        ap_phi_mux_data_622_V_read692_rewind_phi_fu_34591_p6 = data_622_V_read692_rewind_reg_34587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_623_V_read693_phi_phi_fu_78796_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_623_V_read693_phi_phi_fu_78796_p4 = ap_phi_mux_data_623_V_read693_rewind_phi_fu_34605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_623_V_read693_phi_phi_fu_78796_p4 = data_623_V_read.read();
        } else {
            ap_phi_mux_data_623_V_read693_phi_phi_fu_78796_p4 = ap_phi_reg_pp0_iter0_data_623_V_read693_phi_reg_78792.read();
        }
    } else {
        ap_phi_mux_data_623_V_read693_phi_phi_fu_78796_p4 = ap_phi_reg_pp0_iter0_data_623_V_read693_phi_reg_78792.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_623_V_read693_rewind_phi_fu_34605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_623_V_read693_rewind_phi_fu_34605_p6 = data_623_V_read693_phi_reg_78792.read();
    } else {
        ap_phi_mux_data_623_V_read693_rewind_phi_fu_34605_p6 = data_623_V_read693_rewind_reg_34601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_624_V_read694_phi_phi_fu_78809_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_624_V_read694_phi_phi_fu_78809_p4 = ap_phi_mux_data_624_V_read694_rewind_phi_fu_34619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_624_V_read694_phi_phi_fu_78809_p4 = data_624_V_read.read();
        } else {
            ap_phi_mux_data_624_V_read694_phi_phi_fu_78809_p4 = ap_phi_reg_pp0_iter0_data_624_V_read694_phi_reg_78805.read();
        }
    } else {
        ap_phi_mux_data_624_V_read694_phi_phi_fu_78809_p4 = ap_phi_reg_pp0_iter0_data_624_V_read694_phi_reg_78805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_624_V_read694_rewind_phi_fu_34619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_624_V_read694_rewind_phi_fu_34619_p6 = data_624_V_read694_phi_reg_78805.read();
    } else {
        ap_phi_mux_data_624_V_read694_rewind_phi_fu_34619_p6 = data_624_V_read694_rewind_reg_34615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_625_V_read695_phi_phi_fu_78822_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_625_V_read695_phi_phi_fu_78822_p4 = ap_phi_mux_data_625_V_read695_rewind_phi_fu_34633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_625_V_read695_phi_phi_fu_78822_p4 = data_625_V_read.read();
        } else {
            ap_phi_mux_data_625_V_read695_phi_phi_fu_78822_p4 = ap_phi_reg_pp0_iter0_data_625_V_read695_phi_reg_78818.read();
        }
    } else {
        ap_phi_mux_data_625_V_read695_phi_phi_fu_78822_p4 = ap_phi_reg_pp0_iter0_data_625_V_read695_phi_reg_78818.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_625_V_read695_rewind_phi_fu_34633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_625_V_read695_rewind_phi_fu_34633_p6 = data_625_V_read695_phi_reg_78818.read();
    } else {
        ap_phi_mux_data_625_V_read695_rewind_phi_fu_34633_p6 = data_625_V_read695_rewind_reg_34629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_626_V_read696_phi_phi_fu_78835_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_626_V_read696_phi_phi_fu_78835_p4 = ap_phi_mux_data_626_V_read696_rewind_phi_fu_34647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_626_V_read696_phi_phi_fu_78835_p4 = data_626_V_read.read();
        } else {
            ap_phi_mux_data_626_V_read696_phi_phi_fu_78835_p4 = ap_phi_reg_pp0_iter0_data_626_V_read696_phi_reg_78831.read();
        }
    } else {
        ap_phi_mux_data_626_V_read696_phi_phi_fu_78835_p4 = ap_phi_reg_pp0_iter0_data_626_V_read696_phi_reg_78831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_626_V_read696_rewind_phi_fu_34647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_626_V_read696_rewind_phi_fu_34647_p6 = data_626_V_read696_phi_reg_78831.read();
    } else {
        ap_phi_mux_data_626_V_read696_rewind_phi_fu_34647_p6 = data_626_V_read696_rewind_reg_34643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_627_V_read697_phi_phi_fu_78848_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_627_V_read697_phi_phi_fu_78848_p4 = ap_phi_mux_data_627_V_read697_rewind_phi_fu_34661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_627_V_read697_phi_phi_fu_78848_p4 = data_627_V_read.read();
        } else {
            ap_phi_mux_data_627_V_read697_phi_phi_fu_78848_p4 = ap_phi_reg_pp0_iter0_data_627_V_read697_phi_reg_78844.read();
        }
    } else {
        ap_phi_mux_data_627_V_read697_phi_phi_fu_78848_p4 = ap_phi_reg_pp0_iter0_data_627_V_read697_phi_reg_78844.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_627_V_read697_rewind_phi_fu_34661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_627_V_read697_rewind_phi_fu_34661_p6 = data_627_V_read697_phi_reg_78844.read();
    } else {
        ap_phi_mux_data_627_V_read697_rewind_phi_fu_34661_p6 = data_627_V_read697_rewind_reg_34657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_628_V_read698_phi_phi_fu_78861_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_628_V_read698_phi_phi_fu_78861_p4 = ap_phi_mux_data_628_V_read698_rewind_phi_fu_34675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_628_V_read698_phi_phi_fu_78861_p4 = data_628_V_read.read();
        } else {
            ap_phi_mux_data_628_V_read698_phi_phi_fu_78861_p4 = ap_phi_reg_pp0_iter0_data_628_V_read698_phi_reg_78857.read();
        }
    } else {
        ap_phi_mux_data_628_V_read698_phi_phi_fu_78861_p4 = ap_phi_reg_pp0_iter0_data_628_V_read698_phi_reg_78857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_628_V_read698_rewind_phi_fu_34675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_628_V_read698_rewind_phi_fu_34675_p6 = data_628_V_read698_phi_reg_78857.read();
    } else {
        ap_phi_mux_data_628_V_read698_rewind_phi_fu_34675_p6 = data_628_V_read698_rewind_reg_34671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_629_V_read699_phi_phi_fu_78874_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_629_V_read699_phi_phi_fu_78874_p4 = ap_phi_mux_data_629_V_read699_rewind_phi_fu_34689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_629_V_read699_phi_phi_fu_78874_p4 = data_629_V_read.read();
        } else {
            ap_phi_mux_data_629_V_read699_phi_phi_fu_78874_p4 = ap_phi_reg_pp0_iter0_data_629_V_read699_phi_reg_78870.read();
        }
    } else {
        ap_phi_mux_data_629_V_read699_phi_phi_fu_78874_p4 = ap_phi_reg_pp0_iter0_data_629_V_read699_phi_reg_78870.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_629_V_read699_rewind_phi_fu_34689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_629_V_read699_rewind_phi_fu_34689_p6 = data_629_V_read699_phi_reg_78870.read();
    } else {
        ap_phi_mux_data_629_V_read699_rewind_phi_fu_34689_p6 = data_629_V_read699_rewind_reg_34685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_62_V_read132_phi_phi_fu_71503_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_62_V_read132_phi_phi_fu_71503_p4 = ap_phi_mux_data_62_V_read132_rewind_phi_fu_26751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_62_V_read132_phi_phi_fu_71503_p4 = data_62_V_read.read();
        } else {
            ap_phi_mux_data_62_V_read132_phi_phi_fu_71503_p4 = ap_phi_reg_pp0_iter0_data_62_V_read132_phi_reg_71499.read();
        }
    } else {
        ap_phi_mux_data_62_V_read132_phi_phi_fu_71503_p4 = ap_phi_reg_pp0_iter0_data_62_V_read132_phi_reg_71499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_62_V_read132_rewind_phi_fu_26751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_62_V_read132_rewind_phi_fu_26751_p6 = data_62_V_read132_phi_reg_71499.read();
    } else {
        ap_phi_mux_data_62_V_read132_rewind_phi_fu_26751_p6 = data_62_V_read132_rewind_reg_26747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_630_V_read700_phi_phi_fu_78887_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_630_V_read700_phi_phi_fu_78887_p4 = ap_phi_mux_data_630_V_read700_rewind_phi_fu_34703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_630_V_read700_phi_phi_fu_78887_p4 = data_630_V_read.read();
        } else {
            ap_phi_mux_data_630_V_read700_phi_phi_fu_78887_p4 = ap_phi_reg_pp0_iter0_data_630_V_read700_phi_reg_78883.read();
        }
    } else {
        ap_phi_mux_data_630_V_read700_phi_phi_fu_78887_p4 = ap_phi_reg_pp0_iter0_data_630_V_read700_phi_reg_78883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_630_V_read700_rewind_phi_fu_34703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_630_V_read700_rewind_phi_fu_34703_p6 = data_630_V_read700_phi_reg_78883.read();
    } else {
        ap_phi_mux_data_630_V_read700_rewind_phi_fu_34703_p6 = data_630_V_read700_rewind_reg_34699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_631_V_read701_phi_phi_fu_78900_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_631_V_read701_phi_phi_fu_78900_p4 = ap_phi_mux_data_631_V_read701_rewind_phi_fu_34717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_631_V_read701_phi_phi_fu_78900_p4 = data_631_V_read.read();
        } else {
            ap_phi_mux_data_631_V_read701_phi_phi_fu_78900_p4 = ap_phi_reg_pp0_iter0_data_631_V_read701_phi_reg_78896.read();
        }
    } else {
        ap_phi_mux_data_631_V_read701_phi_phi_fu_78900_p4 = ap_phi_reg_pp0_iter0_data_631_V_read701_phi_reg_78896.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_631_V_read701_rewind_phi_fu_34717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_631_V_read701_rewind_phi_fu_34717_p6 = data_631_V_read701_phi_reg_78896.read();
    } else {
        ap_phi_mux_data_631_V_read701_rewind_phi_fu_34717_p6 = data_631_V_read701_rewind_reg_34713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_632_V_read702_phi_phi_fu_78913_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_632_V_read702_phi_phi_fu_78913_p4 = ap_phi_mux_data_632_V_read702_rewind_phi_fu_34731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_632_V_read702_phi_phi_fu_78913_p4 = data_632_V_read.read();
        } else {
            ap_phi_mux_data_632_V_read702_phi_phi_fu_78913_p4 = ap_phi_reg_pp0_iter0_data_632_V_read702_phi_reg_78909.read();
        }
    } else {
        ap_phi_mux_data_632_V_read702_phi_phi_fu_78913_p4 = ap_phi_reg_pp0_iter0_data_632_V_read702_phi_reg_78909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_632_V_read702_rewind_phi_fu_34731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_632_V_read702_rewind_phi_fu_34731_p6 = data_632_V_read702_phi_reg_78909.read();
    } else {
        ap_phi_mux_data_632_V_read702_rewind_phi_fu_34731_p6 = data_632_V_read702_rewind_reg_34727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_633_V_read703_phi_phi_fu_78926_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_633_V_read703_phi_phi_fu_78926_p4 = ap_phi_mux_data_633_V_read703_rewind_phi_fu_34745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_633_V_read703_phi_phi_fu_78926_p4 = data_633_V_read.read();
        } else {
            ap_phi_mux_data_633_V_read703_phi_phi_fu_78926_p4 = ap_phi_reg_pp0_iter0_data_633_V_read703_phi_reg_78922.read();
        }
    } else {
        ap_phi_mux_data_633_V_read703_phi_phi_fu_78926_p4 = ap_phi_reg_pp0_iter0_data_633_V_read703_phi_reg_78922.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_633_V_read703_rewind_phi_fu_34745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_633_V_read703_rewind_phi_fu_34745_p6 = data_633_V_read703_phi_reg_78922.read();
    } else {
        ap_phi_mux_data_633_V_read703_rewind_phi_fu_34745_p6 = data_633_V_read703_rewind_reg_34741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_634_V_read704_phi_phi_fu_78939_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_634_V_read704_phi_phi_fu_78939_p4 = ap_phi_mux_data_634_V_read704_rewind_phi_fu_34759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_634_V_read704_phi_phi_fu_78939_p4 = data_634_V_read.read();
        } else {
            ap_phi_mux_data_634_V_read704_phi_phi_fu_78939_p4 = ap_phi_reg_pp0_iter0_data_634_V_read704_phi_reg_78935.read();
        }
    } else {
        ap_phi_mux_data_634_V_read704_phi_phi_fu_78939_p4 = ap_phi_reg_pp0_iter0_data_634_V_read704_phi_reg_78935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_634_V_read704_rewind_phi_fu_34759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_634_V_read704_rewind_phi_fu_34759_p6 = data_634_V_read704_phi_reg_78935.read();
    } else {
        ap_phi_mux_data_634_V_read704_rewind_phi_fu_34759_p6 = data_634_V_read704_rewind_reg_34755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_635_V_read705_phi_phi_fu_78952_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_635_V_read705_phi_phi_fu_78952_p4 = ap_phi_mux_data_635_V_read705_rewind_phi_fu_34773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_635_V_read705_phi_phi_fu_78952_p4 = data_635_V_read.read();
        } else {
            ap_phi_mux_data_635_V_read705_phi_phi_fu_78952_p4 = ap_phi_reg_pp0_iter0_data_635_V_read705_phi_reg_78948.read();
        }
    } else {
        ap_phi_mux_data_635_V_read705_phi_phi_fu_78952_p4 = ap_phi_reg_pp0_iter0_data_635_V_read705_phi_reg_78948.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_635_V_read705_rewind_phi_fu_34773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_635_V_read705_rewind_phi_fu_34773_p6 = data_635_V_read705_phi_reg_78948.read();
    } else {
        ap_phi_mux_data_635_V_read705_rewind_phi_fu_34773_p6 = data_635_V_read705_rewind_reg_34769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_636_V_read706_phi_phi_fu_78965_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_636_V_read706_phi_phi_fu_78965_p4 = ap_phi_mux_data_636_V_read706_rewind_phi_fu_34787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_636_V_read706_phi_phi_fu_78965_p4 = data_636_V_read.read();
        } else {
            ap_phi_mux_data_636_V_read706_phi_phi_fu_78965_p4 = ap_phi_reg_pp0_iter0_data_636_V_read706_phi_reg_78961.read();
        }
    } else {
        ap_phi_mux_data_636_V_read706_phi_phi_fu_78965_p4 = ap_phi_reg_pp0_iter0_data_636_V_read706_phi_reg_78961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_636_V_read706_rewind_phi_fu_34787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_636_V_read706_rewind_phi_fu_34787_p6 = data_636_V_read706_phi_reg_78961.read();
    } else {
        ap_phi_mux_data_636_V_read706_rewind_phi_fu_34787_p6 = data_636_V_read706_rewind_reg_34783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_637_V_read707_phi_phi_fu_78978_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_637_V_read707_phi_phi_fu_78978_p4 = ap_phi_mux_data_637_V_read707_rewind_phi_fu_34801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_637_V_read707_phi_phi_fu_78978_p4 = data_637_V_read.read();
        } else {
            ap_phi_mux_data_637_V_read707_phi_phi_fu_78978_p4 = ap_phi_reg_pp0_iter0_data_637_V_read707_phi_reg_78974.read();
        }
    } else {
        ap_phi_mux_data_637_V_read707_phi_phi_fu_78978_p4 = ap_phi_reg_pp0_iter0_data_637_V_read707_phi_reg_78974.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_637_V_read707_rewind_phi_fu_34801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_637_V_read707_rewind_phi_fu_34801_p6 = data_637_V_read707_phi_reg_78974.read();
    } else {
        ap_phi_mux_data_637_V_read707_rewind_phi_fu_34801_p6 = data_637_V_read707_rewind_reg_34797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_638_V_read708_phi_phi_fu_78991_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_638_V_read708_phi_phi_fu_78991_p4 = ap_phi_mux_data_638_V_read708_rewind_phi_fu_34815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_638_V_read708_phi_phi_fu_78991_p4 = data_638_V_read.read();
        } else {
            ap_phi_mux_data_638_V_read708_phi_phi_fu_78991_p4 = ap_phi_reg_pp0_iter0_data_638_V_read708_phi_reg_78987.read();
        }
    } else {
        ap_phi_mux_data_638_V_read708_phi_phi_fu_78991_p4 = ap_phi_reg_pp0_iter0_data_638_V_read708_phi_reg_78987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_638_V_read708_rewind_phi_fu_34815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_638_V_read708_rewind_phi_fu_34815_p6 = data_638_V_read708_phi_reg_78987.read();
    } else {
        ap_phi_mux_data_638_V_read708_rewind_phi_fu_34815_p6 = data_638_V_read708_rewind_reg_34811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_639_V_read709_phi_phi_fu_79004_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_639_V_read709_phi_phi_fu_79004_p4 = ap_phi_mux_data_639_V_read709_rewind_phi_fu_34829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_639_V_read709_phi_phi_fu_79004_p4 = data_639_V_read.read();
        } else {
            ap_phi_mux_data_639_V_read709_phi_phi_fu_79004_p4 = ap_phi_reg_pp0_iter0_data_639_V_read709_phi_reg_79000.read();
        }
    } else {
        ap_phi_mux_data_639_V_read709_phi_phi_fu_79004_p4 = ap_phi_reg_pp0_iter0_data_639_V_read709_phi_reg_79000.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_639_V_read709_rewind_phi_fu_34829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_639_V_read709_rewind_phi_fu_34829_p6 = data_639_V_read709_phi_reg_79000.read();
    } else {
        ap_phi_mux_data_639_V_read709_rewind_phi_fu_34829_p6 = data_639_V_read709_rewind_reg_34825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_63_V_read133_phi_phi_fu_71516_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_63_V_read133_phi_phi_fu_71516_p4 = ap_phi_mux_data_63_V_read133_rewind_phi_fu_26765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_63_V_read133_phi_phi_fu_71516_p4 = data_63_V_read.read();
        } else {
            ap_phi_mux_data_63_V_read133_phi_phi_fu_71516_p4 = ap_phi_reg_pp0_iter0_data_63_V_read133_phi_reg_71512.read();
        }
    } else {
        ap_phi_mux_data_63_V_read133_phi_phi_fu_71516_p4 = ap_phi_reg_pp0_iter0_data_63_V_read133_phi_reg_71512.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_63_V_read133_rewind_phi_fu_26765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_63_V_read133_rewind_phi_fu_26765_p6 = data_63_V_read133_phi_reg_71512.read();
    } else {
        ap_phi_mux_data_63_V_read133_rewind_phi_fu_26765_p6 = data_63_V_read133_rewind_reg_26761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_640_V_read710_phi_phi_fu_79017_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_640_V_read710_phi_phi_fu_79017_p4 = ap_phi_mux_data_640_V_read710_rewind_phi_fu_34843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_640_V_read710_phi_phi_fu_79017_p4 = data_640_V_read.read();
        } else {
            ap_phi_mux_data_640_V_read710_phi_phi_fu_79017_p4 = ap_phi_reg_pp0_iter0_data_640_V_read710_phi_reg_79013.read();
        }
    } else {
        ap_phi_mux_data_640_V_read710_phi_phi_fu_79017_p4 = ap_phi_reg_pp0_iter0_data_640_V_read710_phi_reg_79013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_640_V_read710_rewind_phi_fu_34843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_640_V_read710_rewind_phi_fu_34843_p6 = data_640_V_read710_phi_reg_79013.read();
    } else {
        ap_phi_mux_data_640_V_read710_rewind_phi_fu_34843_p6 = data_640_V_read710_rewind_reg_34839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_641_V_read711_phi_phi_fu_79030_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_641_V_read711_phi_phi_fu_79030_p4 = ap_phi_mux_data_641_V_read711_rewind_phi_fu_34857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_641_V_read711_phi_phi_fu_79030_p4 = data_641_V_read.read();
        } else {
            ap_phi_mux_data_641_V_read711_phi_phi_fu_79030_p4 = ap_phi_reg_pp0_iter0_data_641_V_read711_phi_reg_79026.read();
        }
    } else {
        ap_phi_mux_data_641_V_read711_phi_phi_fu_79030_p4 = ap_phi_reg_pp0_iter0_data_641_V_read711_phi_reg_79026.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_641_V_read711_rewind_phi_fu_34857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_641_V_read711_rewind_phi_fu_34857_p6 = data_641_V_read711_phi_reg_79026.read();
    } else {
        ap_phi_mux_data_641_V_read711_rewind_phi_fu_34857_p6 = data_641_V_read711_rewind_reg_34853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_642_V_read712_phi_phi_fu_79043_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_642_V_read712_phi_phi_fu_79043_p4 = ap_phi_mux_data_642_V_read712_rewind_phi_fu_34871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_642_V_read712_phi_phi_fu_79043_p4 = data_642_V_read.read();
        } else {
            ap_phi_mux_data_642_V_read712_phi_phi_fu_79043_p4 = ap_phi_reg_pp0_iter0_data_642_V_read712_phi_reg_79039.read();
        }
    } else {
        ap_phi_mux_data_642_V_read712_phi_phi_fu_79043_p4 = ap_phi_reg_pp0_iter0_data_642_V_read712_phi_reg_79039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_642_V_read712_rewind_phi_fu_34871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_642_V_read712_rewind_phi_fu_34871_p6 = data_642_V_read712_phi_reg_79039.read();
    } else {
        ap_phi_mux_data_642_V_read712_rewind_phi_fu_34871_p6 = data_642_V_read712_rewind_reg_34867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_643_V_read713_phi_phi_fu_79056_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_643_V_read713_phi_phi_fu_79056_p4 = ap_phi_mux_data_643_V_read713_rewind_phi_fu_34885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_643_V_read713_phi_phi_fu_79056_p4 = data_643_V_read.read();
        } else {
            ap_phi_mux_data_643_V_read713_phi_phi_fu_79056_p4 = ap_phi_reg_pp0_iter0_data_643_V_read713_phi_reg_79052.read();
        }
    } else {
        ap_phi_mux_data_643_V_read713_phi_phi_fu_79056_p4 = ap_phi_reg_pp0_iter0_data_643_V_read713_phi_reg_79052.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_643_V_read713_rewind_phi_fu_34885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_643_V_read713_rewind_phi_fu_34885_p6 = data_643_V_read713_phi_reg_79052.read();
    } else {
        ap_phi_mux_data_643_V_read713_rewind_phi_fu_34885_p6 = data_643_V_read713_rewind_reg_34881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_644_V_read714_phi_phi_fu_79069_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_644_V_read714_phi_phi_fu_79069_p4 = ap_phi_mux_data_644_V_read714_rewind_phi_fu_34899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_644_V_read714_phi_phi_fu_79069_p4 = data_644_V_read.read();
        } else {
            ap_phi_mux_data_644_V_read714_phi_phi_fu_79069_p4 = ap_phi_reg_pp0_iter0_data_644_V_read714_phi_reg_79065.read();
        }
    } else {
        ap_phi_mux_data_644_V_read714_phi_phi_fu_79069_p4 = ap_phi_reg_pp0_iter0_data_644_V_read714_phi_reg_79065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_644_V_read714_rewind_phi_fu_34899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_644_V_read714_rewind_phi_fu_34899_p6 = data_644_V_read714_phi_reg_79065.read();
    } else {
        ap_phi_mux_data_644_V_read714_rewind_phi_fu_34899_p6 = data_644_V_read714_rewind_reg_34895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_645_V_read715_phi_phi_fu_79082_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_645_V_read715_phi_phi_fu_79082_p4 = ap_phi_mux_data_645_V_read715_rewind_phi_fu_34913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_645_V_read715_phi_phi_fu_79082_p4 = data_645_V_read.read();
        } else {
            ap_phi_mux_data_645_V_read715_phi_phi_fu_79082_p4 = ap_phi_reg_pp0_iter0_data_645_V_read715_phi_reg_79078.read();
        }
    } else {
        ap_phi_mux_data_645_V_read715_phi_phi_fu_79082_p4 = ap_phi_reg_pp0_iter0_data_645_V_read715_phi_reg_79078.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_645_V_read715_rewind_phi_fu_34913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_645_V_read715_rewind_phi_fu_34913_p6 = data_645_V_read715_phi_reg_79078.read();
    } else {
        ap_phi_mux_data_645_V_read715_rewind_phi_fu_34913_p6 = data_645_V_read715_rewind_reg_34909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_646_V_read716_phi_phi_fu_79095_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_646_V_read716_phi_phi_fu_79095_p4 = ap_phi_mux_data_646_V_read716_rewind_phi_fu_34927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_646_V_read716_phi_phi_fu_79095_p4 = data_646_V_read.read();
        } else {
            ap_phi_mux_data_646_V_read716_phi_phi_fu_79095_p4 = ap_phi_reg_pp0_iter0_data_646_V_read716_phi_reg_79091.read();
        }
    } else {
        ap_phi_mux_data_646_V_read716_phi_phi_fu_79095_p4 = ap_phi_reg_pp0_iter0_data_646_V_read716_phi_reg_79091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_646_V_read716_rewind_phi_fu_34927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_646_V_read716_rewind_phi_fu_34927_p6 = data_646_V_read716_phi_reg_79091.read();
    } else {
        ap_phi_mux_data_646_V_read716_rewind_phi_fu_34927_p6 = data_646_V_read716_rewind_reg_34923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_647_V_read717_phi_phi_fu_79108_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_647_V_read717_phi_phi_fu_79108_p4 = ap_phi_mux_data_647_V_read717_rewind_phi_fu_34941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_647_V_read717_phi_phi_fu_79108_p4 = data_647_V_read.read();
        } else {
            ap_phi_mux_data_647_V_read717_phi_phi_fu_79108_p4 = ap_phi_reg_pp0_iter0_data_647_V_read717_phi_reg_79104.read();
        }
    } else {
        ap_phi_mux_data_647_V_read717_phi_phi_fu_79108_p4 = ap_phi_reg_pp0_iter0_data_647_V_read717_phi_reg_79104.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_647_V_read717_rewind_phi_fu_34941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_647_V_read717_rewind_phi_fu_34941_p6 = data_647_V_read717_phi_reg_79104.read();
    } else {
        ap_phi_mux_data_647_V_read717_rewind_phi_fu_34941_p6 = data_647_V_read717_rewind_reg_34937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_648_V_read718_phi_phi_fu_79121_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_648_V_read718_phi_phi_fu_79121_p4 = ap_phi_mux_data_648_V_read718_rewind_phi_fu_34955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_648_V_read718_phi_phi_fu_79121_p4 = data_648_V_read.read();
        } else {
            ap_phi_mux_data_648_V_read718_phi_phi_fu_79121_p4 = ap_phi_reg_pp0_iter0_data_648_V_read718_phi_reg_79117.read();
        }
    } else {
        ap_phi_mux_data_648_V_read718_phi_phi_fu_79121_p4 = ap_phi_reg_pp0_iter0_data_648_V_read718_phi_reg_79117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_648_V_read718_rewind_phi_fu_34955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_648_V_read718_rewind_phi_fu_34955_p6 = data_648_V_read718_phi_reg_79117.read();
    } else {
        ap_phi_mux_data_648_V_read718_rewind_phi_fu_34955_p6 = data_648_V_read718_rewind_reg_34951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_649_V_read719_phi_phi_fu_79134_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_649_V_read719_phi_phi_fu_79134_p4 = ap_phi_mux_data_649_V_read719_rewind_phi_fu_34969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_649_V_read719_phi_phi_fu_79134_p4 = data_649_V_read.read();
        } else {
            ap_phi_mux_data_649_V_read719_phi_phi_fu_79134_p4 = ap_phi_reg_pp0_iter0_data_649_V_read719_phi_reg_79130.read();
        }
    } else {
        ap_phi_mux_data_649_V_read719_phi_phi_fu_79134_p4 = ap_phi_reg_pp0_iter0_data_649_V_read719_phi_reg_79130.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_649_V_read719_rewind_phi_fu_34969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_649_V_read719_rewind_phi_fu_34969_p6 = data_649_V_read719_phi_reg_79130.read();
    } else {
        ap_phi_mux_data_649_V_read719_rewind_phi_fu_34969_p6 = data_649_V_read719_rewind_reg_34965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_64_V_read134_phi_phi_fu_71529_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_64_V_read134_phi_phi_fu_71529_p4 = ap_phi_mux_data_64_V_read134_rewind_phi_fu_26779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_64_V_read134_phi_phi_fu_71529_p4 = data_64_V_read.read();
        } else {
            ap_phi_mux_data_64_V_read134_phi_phi_fu_71529_p4 = ap_phi_reg_pp0_iter0_data_64_V_read134_phi_reg_71525.read();
        }
    } else {
        ap_phi_mux_data_64_V_read134_phi_phi_fu_71529_p4 = ap_phi_reg_pp0_iter0_data_64_V_read134_phi_reg_71525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_64_V_read134_rewind_phi_fu_26779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_64_V_read134_rewind_phi_fu_26779_p6 = data_64_V_read134_phi_reg_71525.read();
    } else {
        ap_phi_mux_data_64_V_read134_rewind_phi_fu_26779_p6 = data_64_V_read134_rewind_reg_26775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_650_V_read720_phi_phi_fu_79147_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_650_V_read720_phi_phi_fu_79147_p4 = ap_phi_mux_data_650_V_read720_rewind_phi_fu_34983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_650_V_read720_phi_phi_fu_79147_p4 = data_650_V_read.read();
        } else {
            ap_phi_mux_data_650_V_read720_phi_phi_fu_79147_p4 = ap_phi_reg_pp0_iter0_data_650_V_read720_phi_reg_79143.read();
        }
    } else {
        ap_phi_mux_data_650_V_read720_phi_phi_fu_79147_p4 = ap_phi_reg_pp0_iter0_data_650_V_read720_phi_reg_79143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_650_V_read720_rewind_phi_fu_34983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_650_V_read720_rewind_phi_fu_34983_p6 = data_650_V_read720_phi_reg_79143.read();
    } else {
        ap_phi_mux_data_650_V_read720_rewind_phi_fu_34983_p6 = data_650_V_read720_rewind_reg_34979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_651_V_read721_phi_phi_fu_79160_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_651_V_read721_phi_phi_fu_79160_p4 = ap_phi_mux_data_651_V_read721_rewind_phi_fu_34997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_651_V_read721_phi_phi_fu_79160_p4 = data_651_V_read.read();
        } else {
            ap_phi_mux_data_651_V_read721_phi_phi_fu_79160_p4 = ap_phi_reg_pp0_iter0_data_651_V_read721_phi_reg_79156.read();
        }
    } else {
        ap_phi_mux_data_651_V_read721_phi_phi_fu_79160_p4 = ap_phi_reg_pp0_iter0_data_651_V_read721_phi_reg_79156.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_651_V_read721_rewind_phi_fu_34997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_651_V_read721_rewind_phi_fu_34997_p6 = data_651_V_read721_phi_reg_79156.read();
    } else {
        ap_phi_mux_data_651_V_read721_rewind_phi_fu_34997_p6 = data_651_V_read721_rewind_reg_34993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_652_V_read722_phi_phi_fu_79173_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_652_V_read722_phi_phi_fu_79173_p4 = ap_phi_mux_data_652_V_read722_rewind_phi_fu_35011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_652_V_read722_phi_phi_fu_79173_p4 = data_652_V_read.read();
        } else {
            ap_phi_mux_data_652_V_read722_phi_phi_fu_79173_p4 = ap_phi_reg_pp0_iter0_data_652_V_read722_phi_reg_79169.read();
        }
    } else {
        ap_phi_mux_data_652_V_read722_phi_phi_fu_79173_p4 = ap_phi_reg_pp0_iter0_data_652_V_read722_phi_reg_79169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_652_V_read722_rewind_phi_fu_35011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_652_V_read722_rewind_phi_fu_35011_p6 = data_652_V_read722_phi_reg_79169.read();
    } else {
        ap_phi_mux_data_652_V_read722_rewind_phi_fu_35011_p6 = data_652_V_read722_rewind_reg_35007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_653_V_read723_phi_phi_fu_79186_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_653_V_read723_phi_phi_fu_79186_p4 = ap_phi_mux_data_653_V_read723_rewind_phi_fu_35025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_653_V_read723_phi_phi_fu_79186_p4 = data_653_V_read.read();
        } else {
            ap_phi_mux_data_653_V_read723_phi_phi_fu_79186_p4 = ap_phi_reg_pp0_iter0_data_653_V_read723_phi_reg_79182.read();
        }
    } else {
        ap_phi_mux_data_653_V_read723_phi_phi_fu_79186_p4 = ap_phi_reg_pp0_iter0_data_653_V_read723_phi_reg_79182.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_653_V_read723_rewind_phi_fu_35025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_653_V_read723_rewind_phi_fu_35025_p6 = data_653_V_read723_phi_reg_79182.read();
    } else {
        ap_phi_mux_data_653_V_read723_rewind_phi_fu_35025_p6 = data_653_V_read723_rewind_reg_35021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_654_V_read724_phi_phi_fu_79199_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_654_V_read724_phi_phi_fu_79199_p4 = ap_phi_mux_data_654_V_read724_rewind_phi_fu_35039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_654_V_read724_phi_phi_fu_79199_p4 = data_654_V_read.read();
        } else {
            ap_phi_mux_data_654_V_read724_phi_phi_fu_79199_p4 = ap_phi_reg_pp0_iter0_data_654_V_read724_phi_reg_79195.read();
        }
    } else {
        ap_phi_mux_data_654_V_read724_phi_phi_fu_79199_p4 = ap_phi_reg_pp0_iter0_data_654_V_read724_phi_reg_79195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_654_V_read724_rewind_phi_fu_35039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_654_V_read724_rewind_phi_fu_35039_p6 = data_654_V_read724_phi_reg_79195.read();
    } else {
        ap_phi_mux_data_654_V_read724_rewind_phi_fu_35039_p6 = data_654_V_read724_rewind_reg_35035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_655_V_read725_phi_phi_fu_79212_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_655_V_read725_phi_phi_fu_79212_p4 = ap_phi_mux_data_655_V_read725_rewind_phi_fu_35053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_655_V_read725_phi_phi_fu_79212_p4 = data_655_V_read.read();
        } else {
            ap_phi_mux_data_655_V_read725_phi_phi_fu_79212_p4 = ap_phi_reg_pp0_iter0_data_655_V_read725_phi_reg_79208.read();
        }
    } else {
        ap_phi_mux_data_655_V_read725_phi_phi_fu_79212_p4 = ap_phi_reg_pp0_iter0_data_655_V_read725_phi_reg_79208.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_655_V_read725_rewind_phi_fu_35053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_655_V_read725_rewind_phi_fu_35053_p6 = data_655_V_read725_phi_reg_79208.read();
    } else {
        ap_phi_mux_data_655_V_read725_rewind_phi_fu_35053_p6 = data_655_V_read725_rewind_reg_35049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_656_V_read726_phi_phi_fu_79225_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_656_V_read726_phi_phi_fu_79225_p4 = ap_phi_mux_data_656_V_read726_rewind_phi_fu_35067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_656_V_read726_phi_phi_fu_79225_p4 = data_656_V_read.read();
        } else {
            ap_phi_mux_data_656_V_read726_phi_phi_fu_79225_p4 = ap_phi_reg_pp0_iter0_data_656_V_read726_phi_reg_79221.read();
        }
    } else {
        ap_phi_mux_data_656_V_read726_phi_phi_fu_79225_p4 = ap_phi_reg_pp0_iter0_data_656_V_read726_phi_reg_79221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_656_V_read726_rewind_phi_fu_35067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_656_V_read726_rewind_phi_fu_35067_p6 = data_656_V_read726_phi_reg_79221.read();
    } else {
        ap_phi_mux_data_656_V_read726_rewind_phi_fu_35067_p6 = data_656_V_read726_rewind_reg_35063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_657_V_read727_phi_phi_fu_79238_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_657_V_read727_phi_phi_fu_79238_p4 = ap_phi_mux_data_657_V_read727_rewind_phi_fu_35081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_657_V_read727_phi_phi_fu_79238_p4 = data_657_V_read.read();
        } else {
            ap_phi_mux_data_657_V_read727_phi_phi_fu_79238_p4 = ap_phi_reg_pp0_iter0_data_657_V_read727_phi_reg_79234.read();
        }
    } else {
        ap_phi_mux_data_657_V_read727_phi_phi_fu_79238_p4 = ap_phi_reg_pp0_iter0_data_657_V_read727_phi_reg_79234.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_657_V_read727_rewind_phi_fu_35081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_657_V_read727_rewind_phi_fu_35081_p6 = data_657_V_read727_phi_reg_79234.read();
    } else {
        ap_phi_mux_data_657_V_read727_rewind_phi_fu_35081_p6 = data_657_V_read727_rewind_reg_35077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_658_V_read728_phi_phi_fu_79251_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_658_V_read728_phi_phi_fu_79251_p4 = ap_phi_mux_data_658_V_read728_rewind_phi_fu_35095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_658_V_read728_phi_phi_fu_79251_p4 = data_658_V_read.read();
        } else {
            ap_phi_mux_data_658_V_read728_phi_phi_fu_79251_p4 = ap_phi_reg_pp0_iter0_data_658_V_read728_phi_reg_79247.read();
        }
    } else {
        ap_phi_mux_data_658_V_read728_phi_phi_fu_79251_p4 = ap_phi_reg_pp0_iter0_data_658_V_read728_phi_reg_79247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_658_V_read728_rewind_phi_fu_35095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_658_V_read728_rewind_phi_fu_35095_p6 = data_658_V_read728_phi_reg_79247.read();
    } else {
        ap_phi_mux_data_658_V_read728_rewind_phi_fu_35095_p6 = data_658_V_read728_rewind_reg_35091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_659_V_read729_phi_phi_fu_79264_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_659_V_read729_phi_phi_fu_79264_p4 = ap_phi_mux_data_659_V_read729_rewind_phi_fu_35109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_659_V_read729_phi_phi_fu_79264_p4 = data_659_V_read.read();
        } else {
            ap_phi_mux_data_659_V_read729_phi_phi_fu_79264_p4 = ap_phi_reg_pp0_iter0_data_659_V_read729_phi_reg_79260.read();
        }
    } else {
        ap_phi_mux_data_659_V_read729_phi_phi_fu_79264_p4 = ap_phi_reg_pp0_iter0_data_659_V_read729_phi_reg_79260.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_659_V_read729_rewind_phi_fu_35109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_659_V_read729_rewind_phi_fu_35109_p6 = data_659_V_read729_phi_reg_79260.read();
    } else {
        ap_phi_mux_data_659_V_read729_rewind_phi_fu_35109_p6 = data_659_V_read729_rewind_reg_35105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_65_V_read135_phi_phi_fu_71542_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_65_V_read135_phi_phi_fu_71542_p4 = ap_phi_mux_data_65_V_read135_rewind_phi_fu_26793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_65_V_read135_phi_phi_fu_71542_p4 = data_65_V_read.read();
        } else {
            ap_phi_mux_data_65_V_read135_phi_phi_fu_71542_p4 = ap_phi_reg_pp0_iter0_data_65_V_read135_phi_reg_71538.read();
        }
    } else {
        ap_phi_mux_data_65_V_read135_phi_phi_fu_71542_p4 = ap_phi_reg_pp0_iter0_data_65_V_read135_phi_reg_71538.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_65_V_read135_rewind_phi_fu_26793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_65_V_read135_rewind_phi_fu_26793_p6 = data_65_V_read135_phi_reg_71538.read();
    } else {
        ap_phi_mux_data_65_V_read135_rewind_phi_fu_26793_p6 = data_65_V_read135_rewind_reg_26789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_660_V_read730_phi_phi_fu_79277_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_660_V_read730_phi_phi_fu_79277_p4 = ap_phi_mux_data_660_V_read730_rewind_phi_fu_35123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_660_V_read730_phi_phi_fu_79277_p4 = data_660_V_read.read();
        } else {
            ap_phi_mux_data_660_V_read730_phi_phi_fu_79277_p4 = ap_phi_reg_pp0_iter0_data_660_V_read730_phi_reg_79273.read();
        }
    } else {
        ap_phi_mux_data_660_V_read730_phi_phi_fu_79277_p4 = ap_phi_reg_pp0_iter0_data_660_V_read730_phi_reg_79273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_660_V_read730_rewind_phi_fu_35123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_660_V_read730_rewind_phi_fu_35123_p6 = data_660_V_read730_phi_reg_79273.read();
    } else {
        ap_phi_mux_data_660_V_read730_rewind_phi_fu_35123_p6 = data_660_V_read730_rewind_reg_35119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_661_V_read731_phi_phi_fu_79290_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_661_V_read731_phi_phi_fu_79290_p4 = ap_phi_mux_data_661_V_read731_rewind_phi_fu_35137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_661_V_read731_phi_phi_fu_79290_p4 = data_661_V_read.read();
        } else {
            ap_phi_mux_data_661_V_read731_phi_phi_fu_79290_p4 = ap_phi_reg_pp0_iter0_data_661_V_read731_phi_reg_79286.read();
        }
    } else {
        ap_phi_mux_data_661_V_read731_phi_phi_fu_79290_p4 = ap_phi_reg_pp0_iter0_data_661_V_read731_phi_reg_79286.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_661_V_read731_rewind_phi_fu_35137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_661_V_read731_rewind_phi_fu_35137_p6 = data_661_V_read731_phi_reg_79286.read();
    } else {
        ap_phi_mux_data_661_V_read731_rewind_phi_fu_35137_p6 = data_661_V_read731_rewind_reg_35133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_662_V_read732_phi_phi_fu_79303_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_662_V_read732_phi_phi_fu_79303_p4 = ap_phi_mux_data_662_V_read732_rewind_phi_fu_35151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_662_V_read732_phi_phi_fu_79303_p4 = data_662_V_read.read();
        } else {
            ap_phi_mux_data_662_V_read732_phi_phi_fu_79303_p4 = ap_phi_reg_pp0_iter0_data_662_V_read732_phi_reg_79299.read();
        }
    } else {
        ap_phi_mux_data_662_V_read732_phi_phi_fu_79303_p4 = ap_phi_reg_pp0_iter0_data_662_V_read732_phi_reg_79299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_662_V_read732_rewind_phi_fu_35151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_662_V_read732_rewind_phi_fu_35151_p6 = data_662_V_read732_phi_reg_79299.read();
    } else {
        ap_phi_mux_data_662_V_read732_rewind_phi_fu_35151_p6 = data_662_V_read732_rewind_reg_35147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_663_V_read733_phi_phi_fu_79316_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_663_V_read733_phi_phi_fu_79316_p4 = ap_phi_mux_data_663_V_read733_rewind_phi_fu_35165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_663_V_read733_phi_phi_fu_79316_p4 = data_663_V_read.read();
        } else {
            ap_phi_mux_data_663_V_read733_phi_phi_fu_79316_p4 = ap_phi_reg_pp0_iter0_data_663_V_read733_phi_reg_79312.read();
        }
    } else {
        ap_phi_mux_data_663_V_read733_phi_phi_fu_79316_p4 = ap_phi_reg_pp0_iter0_data_663_V_read733_phi_reg_79312.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_663_V_read733_rewind_phi_fu_35165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_663_V_read733_rewind_phi_fu_35165_p6 = data_663_V_read733_phi_reg_79312.read();
    } else {
        ap_phi_mux_data_663_V_read733_rewind_phi_fu_35165_p6 = data_663_V_read733_rewind_reg_35161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_664_V_read734_phi_phi_fu_79329_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_664_V_read734_phi_phi_fu_79329_p4 = ap_phi_mux_data_664_V_read734_rewind_phi_fu_35179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_664_V_read734_phi_phi_fu_79329_p4 = data_664_V_read.read();
        } else {
            ap_phi_mux_data_664_V_read734_phi_phi_fu_79329_p4 = ap_phi_reg_pp0_iter0_data_664_V_read734_phi_reg_79325.read();
        }
    } else {
        ap_phi_mux_data_664_V_read734_phi_phi_fu_79329_p4 = ap_phi_reg_pp0_iter0_data_664_V_read734_phi_reg_79325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_664_V_read734_rewind_phi_fu_35179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_664_V_read734_rewind_phi_fu_35179_p6 = data_664_V_read734_phi_reg_79325.read();
    } else {
        ap_phi_mux_data_664_V_read734_rewind_phi_fu_35179_p6 = data_664_V_read734_rewind_reg_35175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_665_V_read735_phi_phi_fu_79342_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_665_V_read735_phi_phi_fu_79342_p4 = ap_phi_mux_data_665_V_read735_rewind_phi_fu_35193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_665_V_read735_phi_phi_fu_79342_p4 = data_665_V_read.read();
        } else {
            ap_phi_mux_data_665_V_read735_phi_phi_fu_79342_p4 = ap_phi_reg_pp0_iter0_data_665_V_read735_phi_reg_79338.read();
        }
    } else {
        ap_phi_mux_data_665_V_read735_phi_phi_fu_79342_p4 = ap_phi_reg_pp0_iter0_data_665_V_read735_phi_reg_79338.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_665_V_read735_rewind_phi_fu_35193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_665_V_read735_rewind_phi_fu_35193_p6 = data_665_V_read735_phi_reg_79338.read();
    } else {
        ap_phi_mux_data_665_V_read735_rewind_phi_fu_35193_p6 = data_665_V_read735_rewind_reg_35189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_666_V_read736_phi_phi_fu_79355_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_666_V_read736_phi_phi_fu_79355_p4 = ap_phi_mux_data_666_V_read736_rewind_phi_fu_35207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_666_V_read736_phi_phi_fu_79355_p4 = data_666_V_read.read();
        } else {
            ap_phi_mux_data_666_V_read736_phi_phi_fu_79355_p4 = ap_phi_reg_pp0_iter0_data_666_V_read736_phi_reg_79351.read();
        }
    } else {
        ap_phi_mux_data_666_V_read736_phi_phi_fu_79355_p4 = ap_phi_reg_pp0_iter0_data_666_V_read736_phi_reg_79351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_666_V_read736_rewind_phi_fu_35207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_666_V_read736_rewind_phi_fu_35207_p6 = data_666_V_read736_phi_reg_79351.read();
    } else {
        ap_phi_mux_data_666_V_read736_rewind_phi_fu_35207_p6 = data_666_V_read736_rewind_reg_35203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_667_V_read737_phi_phi_fu_79368_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_667_V_read737_phi_phi_fu_79368_p4 = ap_phi_mux_data_667_V_read737_rewind_phi_fu_35221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_667_V_read737_phi_phi_fu_79368_p4 = data_667_V_read.read();
        } else {
            ap_phi_mux_data_667_V_read737_phi_phi_fu_79368_p4 = ap_phi_reg_pp0_iter0_data_667_V_read737_phi_reg_79364.read();
        }
    } else {
        ap_phi_mux_data_667_V_read737_phi_phi_fu_79368_p4 = ap_phi_reg_pp0_iter0_data_667_V_read737_phi_reg_79364.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_667_V_read737_rewind_phi_fu_35221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_667_V_read737_rewind_phi_fu_35221_p6 = data_667_V_read737_phi_reg_79364.read();
    } else {
        ap_phi_mux_data_667_V_read737_rewind_phi_fu_35221_p6 = data_667_V_read737_rewind_reg_35217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_668_V_read738_phi_phi_fu_79381_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_668_V_read738_phi_phi_fu_79381_p4 = ap_phi_mux_data_668_V_read738_rewind_phi_fu_35235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_668_V_read738_phi_phi_fu_79381_p4 = data_668_V_read.read();
        } else {
            ap_phi_mux_data_668_V_read738_phi_phi_fu_79381_p4 = ap_phi_reg_pp0_iter0_data_668_V_read738_phi_reg_79377.read();
        }
    } else {
        ap_phi_mux_data_668_V_read738_phi_phi_fu_79381_p4 = ap_phi_reg_pp0_iter0_data_668_V_read738_phi_reg_79377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_668_V_read738_rewind_phi_fu_35235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_668_V_read738_rewind_phi_fu_35235_p6 = data_668_V_read738_phi_reg_79377.read();
    } else {
        ap_phi_mux_data_668_V_read738_rewind_phi_fu_35235_p6 = data_668_V_read738_rewind_reg_35231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_669_V_read739_phi_phi_fu_79394_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_669_V_read739_phi_phi_fu_79394_p4 = ap_phi_mux_data_669_V_read739_rewind_phi_fu_35249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_669_V_read739_phi_phi_fu_79394_p4 = data_669_V_read.read();
        } else {
            ap_phi_mux_data_669_V_read739_phi_phi_fu_79394_p4 = ap_phi_reg_pp0_iter0_data_669_V_read739_phi_reg_79390.read();
        }
    } else {
        ap_phi_mux_data_669_V_read739_phi_phi_fu_79394_p4 = ap_phi_reg_pp0_iter0_data_669_V_read739_phi_reg_79390.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_669_V_read739_rewind_phi_fu_35249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_669_V_read739_rewind_phi_fu_35249_p6 = data_669_V_read739_phi_reg_79390.read();
    } else {
        ap_phi_mux_data_669_V_read739_rewind_phi_fu_35249_p6 = data_669_V_read739_rewind_reg_35245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_66_V_read136_phi_phi_fu_71555_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_66_V_read136_phi_phi_fu_71555_p4 = ap_phi_mux_data_66_V_read136_rewind_phi_fu_26807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_66_V_read136_phi_phi_fu_71555_p4 = data_66_V_read.read();
        } else {
            ap_phi_mux_data_66_V_read136_phi_phi_fu_71555_p4 = ap_phi_reg_pp0_iter0_data_66_V_read136_phi_reg_71551.read();
        }
    } else {
        ap_phi_mux_data_66_V_read136_phi_phi_fu_71555_p4 = ap_phi_reg_pp0_iter0_data_66_V_read136_phi_reg_71551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_66_V_read136_rewind_phi_fu_26807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_66_V_read136_rewind_phi_fu_26807_p6 = data_66_V_read136_phi_reg_71551.read();
    } else {
        ap_phi_mux_data_66_V_read136_rewind_phi_fu_26807_p6 = data_66_V_read136_rewind_reg_26803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_670_V_read740_phi_phi_fu_79407_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_670_V_read740_phi_phi_fu_79407_p4 = ap_phi_mux_data_670_V_read740_rewind_phi_fu_35263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_670_V_read740_phi_phi_fu_79407_p4 = data_670_V_read.read();
        } else {
            ap_phi_mux_data_670_V_read740_phi_phi_fu_79407_p4 = ap_phi_reg_pp0_iter0_data_670_V_read740_phi_reg_79403.read();
        }
    } else {
        ap_phi_mux_data_670_V_read740_phi_phi_fu_79407_p4 = ap_phi_reg_pp0_iter0_data_670_V_read740_phi_reg_79403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_670_V_read740_rewind_phi_fu_35263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_670_V_read740_rewind_phi_fu_35263_p6 = data_670_V_read740_phi_reg_79403.read();
    } else {
        ap_phi_mux_data_670_V_read740_rewind_phi_fu_35263_p6 = data_670_V_read740_rewind_reg_35259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_671_V_read741_phi_phi_fu_79420_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_671_V_read741_phi_phi_fu_79420_p4 = ap_phi_mux_data_671_V_read741_rewind_phi_fu_35277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_671_V_read741_phi_phi_fu_79420_p4 = data_671_V_read.read();
        } else {
            ap_phi_mux_data_671_V_read741_phi_phi_fu_79420_p4 = ap_phi_reg_pp0_iter0_data_671_V_read741_phi_reg_79416.read();
        }
    } else {
        ap_phi_mux_data_671_V_read741_phi_phi_fu_79420_p4 = ap_phi_reg_pp0_iter0_data_671_V_read741_phi_reg_79416.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_671_V_read741_rewind_phi_fu_35277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_671_V_read741_rewind_phi_fu_35277_p6 = data_671_V_read741_phi_reg_79416.read();
    } else {
        ap_phi_mux_data_671_V_read741_rewind_phi_fu_35277_p6 = data_671_V_read741_rewind_reg_35273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_672_V_read742_phi_phi_fu_79433_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_672_V_read742_phi_phi_fu_79433_p4 = ap_phi_mux_data_672_V_read742_rewind_phi_fu_35291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_672_V_read742_phi_phi_fu_79433_p4 = data_672_V_read.read();
        } else {
            ap_phi_mux_data_672_V_read742_phi_phi_fu_79433_p4 = ap_phi_reg_pp0_iter0_data_672_V_read742_phi_reg_79429.read();
        }
    } else {
        ap_phi_mux_data_672_V_read742_phi_phi_fu_79433_p4 = ap_phi_reg_pp0_iter0_data_672_V_read742_phi_reg_79429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_672_V_read742_rewind_phi_fu_35291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_672_V_read742_rewind_phi_fu_35291_p6 = data_672_V_read742_phi_reg_79429.read();
    } else {
        ap_phi_mux_data_672_V_read742_rewind_phi_fu_35291_p6 = data_672_V_read742_rewind_reg_35287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_673_V_read743_phi_phi_fu_79446_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_673_V_read743_phi_phi_fu_79446_p4 = ap_phi_mux_data_673_V_read743_rewind_phi_fu_35305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_673_V_read743_phi_phi_fu_79446_p4 = data_673_V_read.read();
        } else {
            ap_phi_mux_data_673_V_read743_phi_phi_fu_79446_p4 = ap_phi_reg_pp0_iter0_data_673_V_read743_phi_reg_79442.read();
        }
    } else {
        ap_phi_mux_data_673_V_read743_phi_phi_fu_79446_p4 = ap_phi_reg_pp0_iter0_data_673_V_read743_phi_reg_79442.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_673_V_read743_rewind_phi_fu_35305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_673_V_read743_rewind_phi_fu_35305_p6 = data_673_V_read743_phi_reg_79442.read();
    } else {
        ap_phi_mux_data_673_V_read743_rewind_phi_fu_35305_p6 = data_673_V_read743_rewind_reg_35301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_674_V_read744_phi_phi_fu_79459_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_674_V_read744_phi_phi_fu_79459_p4 = ap_phi_mux_data_674_V_read744_rewind_phi_fu_35319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_674_V_read744_phi_phi_fu_79459_p4 = data_674_V_read.read();
        } else {
            ap_phi_mux_data_674_V_read744_phi_phi_fu_79459_p4 = ap_phi_reg_pp0_iter0_data_674_V_read744_phi_reg_79455.read();
        }
    } else {
        ap_phi_mux_data_674_V_read744_phi_phi_fu_79459_p4 = ap_phi_reg_pp0_iter0_data_674_V_read744_phi_reg_79455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_674_V_read744_rewind_phi_fu_35319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_674_V_read744_rewind_phi_fu_35319_p6 = data_674_V_read744_phi_reg_79455.read();
    } else {
        ap_phi_mux_data_674_V_read744_rewind_phi_fu_35319_p6 = data_674_V_read744_rewind_reg_35315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_675_V_read745_phi_phi_fu_79472_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_675_V_read745_phi_phi_fu_79472_p4 = ap_phi_mux_data_675_V_read745_rewind_phi_fu_35333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_675_V_read745_phi_phi_fu_79472_p4 = data_675_V_read.read();
        } else {
            ap_phi_mux_data_675_V_read745_phi_phi_fu_79472_p4 = ap_phi_reg_pp0_iter0_data_675_V_read745_phi_reg_79468.read();
        }
    } else {
        ap_phi_mux_data_675_V_read745_phi_phi_fu_79472_p4 = ap_phi_reg_pp0_iter0_data_675_V_read745_phi_reg_79468.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_675_V_read745_rewind_phi_fu_35333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_675_V_read745_rewind_phi_fu_35333_p6 = data_675_V_read745_phi_reg_79468.read();
    } else {
        ap_phi_mux_data_675_V_read745_rewind_phi_fu_35333_p6 = data_675_V_read745_rewind_reg_35329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_676_V_read746_phi_phi_fu_79485_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_676_V_read746_phi_phi_fu_79485_p4 = ap_phi_mux_data_676_V_read746_rewind_phi_fu_35347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_676_V_read746_phi_phi_fu_79485_p4 = data_676_V_read.read();
        } else {
            ap_phi_mux_data_676_V_read746_phi_phi_fu_79485_p4 = ap_phi_reg_pp0_iter0_data_676_V_read746_phi_reg_79481.read();
        }
    } else {
        ap_phi_mux_data_676_V_read746_phi_phi_fu_79485_p4 = ap_phi_reg_pp0_iter0_data_676_V_read746_phi_reg_79481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_676_V_read746_rewind_phi_fu_35347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_676_V_read746_rewind_phi_fu_35347_p6 = data_676_V_read746_phi_reg_79481.read();
    } else {
        ap_phi_mux_data_676_V_read746_rewind_phi_fu_35347_p6 = data_676_V_read746_rewind_reg_35343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_677_V_read747_phi_phi_fu_79498_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_677_V_read747_phi_phi_fu_79498_p4 = ap_phi_mux_data_677_V_read747_rewind_phi_fu_35361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_677_V_read747_phi_phi_fu_79498_p4 = data_677_V_read.read();
        } else {
            ap_phi_mux_data_677_V_read747_phi_phi_fu_79498_p4 = ap_phi_reg_pp0_iter0_data_677_V_read747_phi_reg_79494.read();
        }
    } else {
        ap_phi_mux_data_677_V_read747_phi_phi_fu_79498_p4 = ap_phi_reg_pp0_iter0_data_677_V_read747_phi_reg_79494.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_677_V_read747_rewind_phi_fu_35361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_677_V_read747_rewind_phi_fu_35361_p6 = data_677_V_read747_phi_reg_79494.read();
    } else {
        ap_phi_mux_data_677_V_read747_rewind_phi_fu_35361_p6 = data_677_V_read747_rewind_reg_35357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_678_V_read748_phi_phi_fu_79511_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_678_V_read748_phi_phi_fu_79511_p4 = ap_phi_mux_data_678_V_read748_rewind_phi_fu_35375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_678_V_read748_phi_phi_fu_79511_p4 = data_678_V_read.read();
        } else {
            ap_phi_mux_data_678_V_read748_phi_phi_fu_79511_p4 = ap_phi_reg_pp0_iter0_data_678_V_read748_phi_reg_79507.read();
        }
    } else {
        ap_phi_mux_data_678_V_read748_phi_phi_fu_79511_p4 = ap_phi_reg_pp0_iter0_data_678_V_read748_phi_reg_79507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_678_V_read748_rewind_phi_fu_35375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_678_V_read748_rewind_phi_fu_35375_p6 = data_678_V_read748_phi_reg_79507.read();
    } else {
        ap_phi_mux_data_678_V_read748_rewind_phi_fu_35375_p6 = data_678_V_read748_rewind_reg_35371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_679_V_read749_phi_phi_fu_79524_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_679_V_read749_phi_phi_fu_79524_p4 = ap_phi_mux_data_679_V_read749_rewind_phi_fu_35389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_679_V_read749_phi_phi_fu_79524_p4 = data_679_V_read.read();
        } else {
            ap_phi_mux_data_679_V_read749_phi_phi_fu_79524_p4 = ap_phi_reg_pp0_iter0_data_679_V_read749_phi_reg_79520.read();
        }
    } else {
        ap_phi_mux_data_679_V_read749_phi_phi_fu_79524_p4 = ap_phi_reg_pp0_iter0_data_679_V_read749_phi_reg_79520.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_679_V_read749_rewind_phi_fu_35389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_679_V_read749_rewind_phi_fu_35389_p6 = data_679_V_read749_phi_reg_79520.read();
    } else {
        ap_phi_mux_data_679_V_read749_rewind_phi_fu_35389_p6 = data_679_V_read749_rewind_reg_35385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_67_V_read137_phi_phi_fu_71568_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_67_V_read137_phi_phi_fu_71568_p4 = ap_phi_mux_data_67_V_read137_rewind_phi_fu_26821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_67_V_read137_phi_phi_fu_71568_p4 = data_67_V_read.read();
        } else {
            ap_phi_mux_data_67_V_read137_phi_phi_fu_71568_p4 = ap_phi_reg_pp0_iter0_data_67_V_read137_phi_reg_71564.read();
        }
    } else {
        ap_phi_mux_data_67_V_read137_phi_phi_fu_71568_p4 = ap_phi_reg_pp0_iter0_data_67_V_read137_phi_reg_71564.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_67_V_read137_rewind_phi_fu_26821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_67_V_read137_rewind_phi_fu_26821_p6 = data_67_V_read137_phi_reg_71564.read();
    } else {
        ap_phi_mux_data_67_V_read137_rewind_phi_fu_26821_p6 = data_67_V_read137_rewind_reg_26817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_680_V_read750_phi_phi_fu_79537_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_680_V_read750_phi_phi_fu_79537_p4 = ap_phi_mux_data_680_V_read750_rewind_phi_fu_35403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_680_V_read750_phi_phi_fu_79537_p4 = data_680_V_read.read();
        } else {
            ap_phi_mux_data_680_V_read750_phi_phi_fu_79537_p4 = ap_phi_reg_pp0_iter0_data_680_V_read750_phi_reg_79533.read();
        }
    } else {
        ap_phi_mux_data_680_V_read750_phi_phi_fu_79537_p4 = ap_phi_reg_pp0_iter0_data_680_V_read750_phi_reg_79533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_680_V_read750_rewind_phi_fu_35403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_680_V_read750_rewind_phi_fu_35403_p6 = data_680_V_read750_phi_reg_79533.read();
    } else {
        ap_phi_mux_data_680_V_read750_rewind_phi_fu_35403_p6 = data_680_V_read750_rewind_reg_35399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_681_V_read751_phi_phi_fu_79550_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_681_V_read751_phi_phi_fu_79550_p4 = ap_phi_mux_data_681_V_read751_rewind_phi_fu_35417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_681_V_read751_phi_phi_fu_79550_p4 = data_681_V_read.read();
        } else {
            ap_phi_mux_data_681_V_read751_phi_phi_fu_79550_p4 = ap_phi_reg_pp0_iter0_data_681_V_read751_phi_reg_79546.read();
        }
    } else {
        ap_phi_mux_data_681_V_read751_phi_phi_fu_79550_p4 = ap_phi_reg_pp0_iter0_data_681_V_read751_phi_reg_79546.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_681_V_read751_rewind_phi_fu_35417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_681_V_read751_rewind_phi_fu_35417_p6 = data_681_V_read751_phi_reg_79546.read();
    } else {
        ap_phi_mux_data_681_V_read751_rewind_phi_fu_35417_p6 = data_681_V_read751_rewind_reg_35413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_682_V_read752_phi_phi_fu_79563_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_682_V_read752_phi_phi_fu_79563_p4 = ap_phi_mux_data_682_V_read752_rewind_phi_fu_35431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_682_V_read752_phi_phi_fu_79563_p4 = data_682_V_read.read();
        } else {
            ap_phi_mux_data_682_V_read752_phi_phi_fu_79563_p4 = ap_phi_reg_pp0_iter0_data_682_V_read752_phi_reg_79559.read();
        }
    } else {
        ap_phi_mux_data_682_V_read752_phi_phi_fu_79563_p4 = ap_phi_reg_pp0_iter0_data_682_V_read752_phi_reg_79559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_682_V_read752_rewind_phi_fu_35431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_682_V_read752_rewind_phi_fu_35431_p6 = data_682_V_read752_phi_reg_79559.read();
    } else {
        ap_phi_mux_data_682_V_read752_rewind_phi_fu_35431_p6 = data_682_V_read752_rewind_reg_35427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_683_V_read753_phi_phi_fu_79576_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_683_V_read753_phi_phi_fu_79576_p4 = ap_phi_mux_data_683_V_read753_rewind_phi_fu_35445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_683_V_read753_phi_phi_fu_79576_p4 = data_683_V_read.read();
        } else {
            ap_phi_mux_data_683_V_read753_phi_phi_fu_79576_p4 = ap_phi_reg_pp0_iter0_data_683_V_read753_phi_reg_79572.read();
        }
    } else {
        ap_phi_mux_data_683_V_read753_phi_phi_fu_79576_p4 = ap_phi_reg_pp0_iter0_data_683_V_read753_phi_reg_79572.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_683_V_read753_rewind_phi_fu_35445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_683_V_read753_rewind_phi_fu_35445_p6 = data_683_V_read753_phi_reg_79572.read();
    } else {
        ap_phi_mux_data_683_V_read753_rewind_phi_fu_35445_p6 = data_683_V_read753_rewind_reg_35441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_684_V_read754_phi_phi_fu_79589_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_684_V_read754_phi_phi_fu_79589_p4 = ap_phi_mux_data_684_V_read754_rewind_phi_fu_35459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_684_V_read754_phi_phi_fu_79589_p4 = data_684_V_read.read();
        } else {
            ap_phi_mux_data_684_V_read754_phi_phi_fu_79589_p4 = ap_phi_reg_pp0_iter0_data_684_V_read754_phi_reg_79585.read();
        }
    } else {
        ap_phi_mux_data_684_V_read754_phi_phi_fu_79589_p4 = ap_phi_reg_pp0_iter0_data_684_V_read754_phi_reg_79585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_684_V_read754_rewind_phi_fu_35459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_684_V_read754_rewind_phi_fu_35459_p6 = data_684_V_read754_phi_reg_79585.read();
    } else {
        ap_phi_mux_data_684_V_read754_rewind_phi_fu_35459_p6 = data_684_V_read754_rewind_reg_35455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_685_V_read755_phi_phi_fu_79602_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_685_V_read755_phi_phi_fu_79602_p4 = ap_phi_mux_data_685_V_read755_rewind_phi_fu_35473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_685_V_read755_phi_phi_fu_79602_p4 = data_685_V_read.read();
        } else {
            ap_phi_mux_data_685_V_read755_phi_phi_fu_79602_p4 = ap_phi_reg_pp0_iter0_data_685_V_read755_phi_reg_79598.read();
        }
    } else {
        ap_phi_mux_data_685_V_read755_phi_phi_fu_79602_p4 = ap_phi_reg_pp0_iter0_data_685_V_read755_phi_reg_79598.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_685_V_read755_rewind_phi_fu_35473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_685_V_read755_rewind_phi_fu_35473_p6 = data_685_V_read755_phi_reg_79598.read();
    } else {
        ap_phi_mux_data_685_V_read755_rewind_phi_fu_35473_p6 = data_685_V_read755_rewind_reg_35469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_686_V_read756_phi_phi_fu_79615_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_686_V_read756_phi_phi_fu_79615_p4 = ap_phi_mux_data_686_V_read756_rewind_phi_fu_35487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_686_V_read756_phi_phi_fu_79615_p4 = data_686_V_read.read();
        } else {
            ap_phi_mux_data_686_V_read756_phi_phi_fu_79615_p4 = ap_phi_reg_pp0_iter0_data_686_V_read756_phi_reg_79611.read();
        }
    } else {
        ap_phi_mux_data_686_V_read756_phi_phi_fu_79615_p4 = ap_phi_reg_pp0_iter0_data_686_V_read756_phi_reg_79611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_686_V_read756_rewind_phi_fu_35487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_686_V_read756_rewind_phi_fu_35487_p6 = data_686_V_read756_phi_reg_79611.read();
    } else {
        ap_phi_mux_data_686_V_read756_rewind_phi_fu_35487_p6 = data_686_V_read756_rewind_reg_35483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_687_V_read757_phi_phi_fu_79628_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_687_V_read757_phi_phi_fu_79628_p4 = ap_phi_mux_data_687_V_read757_rewind_phi_fu_35501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_687_V_read757_phi_phi_fu_79628_p4 = data_687_V_read.read();
        } else {
            ap_phi_mux_data_687_V_read757_phi_phi_fu_79628_p4 = ap_phi_reg_pp0_iter0_data_687_V_read757_phi_reg_79624.read();
        }
    } else {
        ap_phi_mux_data_687_V_read757_phi_phi_fu_79628_p4 = ap_phi_reg_pp0_iter0_data_687_V_read757_phi_reg_79624.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_687_V_read757_rewind_phi_fu_35501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_687_V_read757_rewind_phi_fu_35501_p6 = data_687_V_read757_phi_reg_79624.read();
    } else {
        ap_phi_mux_data_687_V_read757_rewind_phi_fu_35501_p6 = data_687_V_read757_rewind_reg_35497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_688_V_read758_phi_phi_fu_79641_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_688_V_read758_phi_phi_fu_79641_p4 = ap_phi_mux_data_688_V_read758_rewind_phi_fu_35515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_688_V_read758_phi_phi_fu_79641_p4 = data_688_V_read.read();
        } else {
            ap_phi_mux_data_688_V_read758_phi_phi_fu_79641_p4 = ap_phi_reg_pp0_iter0_data_688_V_read758_phi_reg_79637.read();
        }
    } else {
        ap_phi_mux_data_688_V_read758_phi_phi_fu_79641_p4 = ap_phi_reg_pp0_iter0_data_688_V_read758_phi_reg_79637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_688_V_read758_rewind_phi_fu_35515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_688_V_read758_rewind_phi_fu_35515_p6 = data_688_V_read758_phi_reg_79637.read();
    } else {
        ap_phi_mux_data_688_V_read758_rewind_phi_fu_35515_p6 = data_688_V_read758_rewind_reg_35511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_689_V_read759_phi_phi_fu_79654_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_689_V_read759_phi_phi_fu_79654_p4 = ap_phi_mux_data_689_V_read759_rewind_phi_fu_35529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_689_V_read759_phi_phi_fu_79654_p4 = data_689_V_read.read();
        } else {
            ap_phi_mux_data_689_V_read759_phi_phi_fu_79654_p4 = ap_phi_reg_pp0_iter0_data_689_V_read759_phi_reg_79650.read();
        }
    } else {
        ap_phi_mux_data_689_V_read759_phi_phi_fu_79654_p4 = ap_phi_reg_pp0_iter0_data_689_V_read759_phi_reg_79650.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_689_V_read759_rewind_phi_fu_35529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_689_V_read759_rewind_phi_fu_35529_p6 = data_689_V_read759_phi_reg_79650.read();
    } else {
        ap_phi_mux_data_689_V_read759_rewind_phi_fu_35529_p6 = data_689_V_read759_rewind_reg_35525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_68_V_read138_phi_phi_fu_71581_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_68_V_read138_phi_phi_fu_71581_p4 = ap_phi_mux_data_68_V_read138_rewind_phi_fu_26835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_68_V_read138_phi_phi_fu_71581_p4 = data_68_V_read.read();
        } else {
            ap_phi_mux_data_68_V_read138_phi_phi_fu_71581_p4 = ap_phi_reg_pp0_iter0_data_68_V_read138_phi_reg_71577.read();
        }
    } else {
        ap_phi_mux_data_68_V_read138_phi_phi_fu_71581_p4 = ap_phi_reg_pp0_iter0_data_68_V_read138_phi_reg_71577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_68_V_read138_rewind_phi_fu_26835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_68_V_read138_rewind_phi_fu_26835_p6 = data_68_V_read138_phi_reg_71577.read();
    } else {
        ap_phi_mux_data_68_V_read138_rewind_phi_fu_26835_p6 = data_68_V_read138_rewind_reg_26831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_690_V_read760_phi_phi_fu_79667_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_690_V_read760_phi_phi_fu_79667_p4 = ap_phi_mux_data_690_V_read760_rewind_phi_fu_35543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_690_V_read760_phi_phi_fu_79667_p4 = data_690_V_read.read();
        } else {
            ap_phi_mux_data_690_V_read760_phi_phi_fu_79667_p4 = ap_phi_reg_pp0_iter0_data_690_V_read760_phi_reg_79663.read();
        }
    } else {
        ap_phi_mux_data_690_V_read760_phi_phi_fu_79667_p4 = ap_phi_reg_pp0_iter0_data_690_V_read760_phi_reg_79663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_690_V_read760_rewind_phi_fu_35543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_690_V_read760_rewind_phi_fu_35543_p6 = data_690_V_read760_phi_reg_79663.read();
    } else {
        ap_phi_mux_data_690_V_read760_rewind_phi_fu_35543_p6 = data_690_V_read760_rewind_reg_35539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_691_V_read761_phi_phi_fu_79680_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_691_V_read761_phi_phi_fu_79680_p4 = ap_phi_mux_data_691_V_read761_rewind_phi_fu_35557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_691_V_read761_phi_phi_fu_79680_p4 = data_691_V_read.read();
        } else {
            ap_phi_mux_data_691_V_read761_phi_phi_fu_79680_p4 = ap_phi_reg_pp0_iter0_data_691_V_read761_phi_reg_79676.read();
        }
    } else {
        ap_phi_mux_data_691_V_read761_phi_phi_fu_79680_p4 = ap_phi_reg_pp0_iter0_data_691_V_read761_phi_reg_79676.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_691_V_read761_rewind_phi_fu_35557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_691_V_read761_rewind_phi_fu_35557_p6 = data_691_V_read761_phi_reg_79676.read();
    } else {
        ap_phi_mux_data_691_V_read761_rewind_phi_fu_35557_p6 = data_691_V_read761_rewind_reg_35553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_692_V_read762_phi_phi_fu_79693_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_692_V_read762_phi_phi_fu_79693_p4 = ap_phi_mux_data_692_V_read762_rewind_phi_fu_35571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_692_V_read762_phi_phi_fu_79693_p4 = data_692_V_read.read();
        } else {
            ap_phi_mux_data_692_V_read762_phi_phi_fu_79693_p4 = ap_phi_reg_pp0_iter0_data_692_V_read762_phi_reg_79689.read();
        }
    } else {
        ap_phi_mux_data_692_V_read762_phi_phi_fu_79693_p4 = ap_phi_reg_pp0_iter0_data_692_V_read762_phi_reg_79689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_692_V_read762_rewind_phi_fu_35571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_692_V_read762_rewind_phi_fu_35571_p6 = data_692_V_read762_phi_reg_79689.read();
    } else {
        ap_phi_mux_data_692_V_read762_rewind_phi_fu_35571_p6 = data_692_V_read762_rewind_reg_35567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_693_V_read763_phi_phi_fu_79706_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_693_V_read763_phi_phi_fu_79706_p4 = ap_phi_mux_data_693_V_read763_rewind_phi_fu_35585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_693_V_read763_phi_phi_fu_79706_p4 = data_693_V_read.read();
        } else {
            ap_phi_mux_data_693_V_read763_phi_phi_fu_79706_p4 = ap_phi_reg_pp0_iter0_data_693_V_read763_phi_reg_79702.read();
        }
    } else {
        ap_phi_mux_data_693_V_read763_phi_phi_fu_79706_p4 = ap_phi_reg_pp0_iter0_data_693_V_read763_phi_reg_79702.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_693_V_read763_rewind_phi_fu_35585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_693_V_read763_rewind_phi_fu_35585_p6 = data_693_V_read763_phi_reg_79702.read();
    } else {
        ap_phi_mux_data_693_V_read763_rewind_phi_fu_35585_p6 = data_693_V_read763_rewind_reg_35581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_694_V_read764_phi_phi_fu_79719_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_694_V_read764_phi_phi_fu_79719_p4 = ap_phi_mux_data_694_V_read764_rewind_phi_fu_35599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_694_V_read764_phi_phi_fu_79719_p4 = data_694_V_read.read();
        } else {
            ap_phi_mux_data_694_V_read764_phi_phi_fu_79719_p4 = ap_phi_reg_pp0_iter0_data_694_V_read764_phi_reg_79715.read();
        }
    } else {
        ap_phi_mux_data_694_V_read764_phi_phi_fu_79719_p4 = ap_phi_reg_pp0_iter0_data_694_V_read764_phi_reg_79715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_694_V_read764_rewind_phi_fu_35599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_694_V_read764_rewind_phi_fu_35599_p6 = data_694_V_read764_phi_reg_79715.read();
    } else {
        ap_phi_mux_data_694_V_read764_rewind_phi_fu_35599_p6 = data_694_V_read764_rewind_reg_35595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_695_V_read765_phi_phi_fu_79732_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_695_V_read765_phi_phi_fu_79732_p4 = ap_phi_mux_data_695_V_read765_rewind_phi_fu_35613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_695_V_read765_phi_phi_fu_79732_p4 = data_695_V_read.read();
        } else {
            ap_phi_mux_data_695_V_read765_phi_phi_fu_79732_p4 = ap_phi_reg_pp0_iter0_data_695_V_read765_phi_reg_79728.read();
        }
    } else {
        ap_phi_mux_data_695_V_read765_phi_phi_fu_79732_p4 = ap_phi_reg_pp0_iter0_data_695_V_read765_phi_reg_79728.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_695_V_read765_rewind_phi_fu_35613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_695_V_read765_rewind_phi_fu_35613_p6 = data_695_V_read765_phi_reg_79728.read();
    } else {
        ap_phi_mux_data_695_V_read765_rewind_phi_fu_35613_p6 = data_695_V_read765_rewind_reg_35609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_696_V_read766_phi_phi_fu_79745_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_696_V_read766_phi_phi_fu_79745_p4 = ap_phi_mux_data_696_V_read766_rewind_phi_fu_35627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_696_V_read766_phi_phi_fu_79745_p4 = data_696_V_read.read();
        } else {
            ap_phi_mux_data_696_V_read766_phi_phi_fu_79745_p4 = ap_phi_reg_pp0_iter0_data_696_V_read766_phi_reg_79741.read();
        }
    } else {
        ap_phi_mux_data_696_V_read766_phi_phi_fu_79745_p4 = ap_phi_reg_pp0_iter0_data_696_V_read766_phi_reg_79741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_696_V_read766_rewind_phi_fu_35627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_696_V_read766_rewind_phi_fu_35627_p6 = data_696_V_read766_phi_reg_79741.read();
    } else {
        ap_phi_mux_data_696_V_read766_rewind_phi_fu_35627_p6 = data_696_V_read766_rewind_reg_35623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_697_V_read767_phi_phi_fu_79758_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_697_V_read767_phi_phi_fu_79758_p4 = ap_phi_mux_data_697_V_read767_rewind_phi_fu_35641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_697_V_read767_phi_phi_fu_79758_p4 = data_697_V_read.read();
        } else {
            ap_phi_mux_data_697_V_read767_phi_phi_fu_79758_p4 = ap_phi_reg_pp0_iter0_data_697_V_read767_phi_reg_79754.read();
        }
    } else {
        ap_phi_mux_data_697_V_read767_phi_phi_fu_79758_p4 = ap_phi_reg_pp0_iter0_data_697_V_read767_phi_reg_79754.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_697_V_read767_rewind_phi_fu_35641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_697_V_read767_rewind_phi_fu_35641_p6 = data_697_V_read767_phi_reg_79754.read();
    } else {
        ap_phi_mux_data_697_V_read767_rewind_phi_fu_35641_p6 = data_697_V_read767_rewind_reg_35637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_698_V_read768_phi_phi_fu_79771_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_698_V_read768_phi_phi_fu_79771_p4 = ap_phi_mux_data_698_V_read768_rewind_phi_fu_35655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_698_V_read768_phi_phi_fu_79771_p4 = data_698_V_read.read();
        } else {
            ap_phi_mux_data_698_V_read768_phi_phi_fu_79771_p4 = ap_phi_reg_pp0_iter0_data_698_V_read768_phi_reg_79767.read();
        }
    } else {
        ap_phi_mux_data_698_V_read768_phi_phi_fu_79771_p4 = ap_phi_reg_pp0_iter0_data_698_V_read768_phi_reg_79767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_698_V_read768_rewind_phi_fu_35655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_698_V_read768_rewind_phi_fu_35655_p6 = data_698_V_read768_phi_reg_79767.read();
    } else {
        ap_phi_mux_data_698_V_read768_rewind_phi_fu_35655_p6 = data_698_V_read768_rewind_reg_35651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_699_V_read769_phi_phi_fu_79784_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_699_V_read769_phi_phi_fu_79784_p4 = ap_phi_mux_data_699_V_read769_rewind_phi_fu_35669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_699_V_read769_phi_phi_fu_79784_p4 = data_699_V_read.read();
        } else {
            ap_phi_mux_data_699_V_read769_phi_phi_fu_79784_p4 = ap_phi_reg_pp0_iter0_data_699_V_read769_phi_reg_79780.read();
        }
    } else {
        ap_phi_mux_data_699_V_read769_phi_phi_fu_79784_p4 = ap_phi_reg_pp0_iter0_data_699_V_read769_phi_reg_79780.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_699_V_read769_rewind_phi_fu_35669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_699_V_read769_rewind_phi_fu_35669_p6 = data_699_V_read769_phi_reg_79780.read();
    } else {
        ap_phi_mux_data_699_V_read769_rewind_phi_fu_35669_p6 = data_699_V_read769_rewind_reg_35665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_69_V_read139_phi_phi_fu_71594_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_69_V_read139_phi_phi_fu_71594_p4 = ap_phi_mux_data_69_V_read139_rewind_phi_fu_26849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_69_V_read139_phi_phi_fu_71594_p4 = data_69_V_read.read();
        } else {
            ap_phi_mux_data_69_V_read139_phi_phi_fu_71594_p4 = ap_phi_reg_pp0_iter0_data_69_V_read139_phi_reg_71590.read();
        }
    } else {
        ap_phi_mux_data_69_V_read139_phi_phi_fu_71594_p4 = ap_phi_reg_pp0_iter0_data_69_V_read139_phi_reg_71590.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_69_V_read139_rewind_phi_fu_26849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_69_V_read139_rewind_phi_fu_26849_p6 = data_69_V_read139_phi_reg_71590.read();
    } else {
        ap_phi_mux_data_69_V_read139_rewind_phi_fu_26849_p6 = data_69_V_read139_rewind_reg_26845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_6_V_read76_phi_phi_fu_70775_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_6_V_read76_phi_phi_fu_70775_p4 = ap_phi_mux_data_6_V_read76_rewind_phi_fu_25967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_6_V_read76_phi_phi_fu_70775_p4 = data_6_V_read.read();
        } else {
            ap_phi_mux_data_6_V_read76_phi_phi_fu_70775_p4 = ap_phi_reg_pp0_iter0_data_6_V_read76_phi_reg_70771.read();
        }
    } else {
        ap_phi_mux_data_6_V_read76_phi_phi_fu_70775_p4 = ap_phi_reg_pp0_iter0_data_6_V_read76_phi_reg_70771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_6_V_read76_rewind_phi_fu_25967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_6_V_read76_rewind_phi_fu_25967_p6 = data_6_V_read76_phi_reg_70771.read();
    } else {
        ap_phi_mux_data_6_V_read76_rewind_phi_fu_25967_p6 = data_6_V_read76_rewind_reg_25963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_700_V_read770_phi_phi_fu_79797_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_700_V_read770_phi_phi_fu_79797_p4 = ap_phi_mux_data_700_V_read770_rewind_phi_fu_35683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_700_V_read770_phi_phi_fu_79797_p4 = data_700_V_read.read();
        } else {
            ap_phi_mux_data_700_V_read770_phi_phi_fu_79797_p4 = ap_phi_reg_pp0_iter0_data_700_V_read770_phi_reg_79793.read();
        }
    } else {
        ap_phi_mux_data_700_V_read770_phi_phi_fu_79797_p4 = ap_phi_reg_pp0_iter0_data_700_V_read770_phi_reg_79793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_700_V_read770_rewind_phi_fu_35683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_700_V_read770_rewind_phi_fu_35683_p6 = data_700_V_read770_phi_reg_79793.read();
    } else {
        ap_phi_mux_data_700_V_read770_rewind_phi_fu_35683_p6 = data_700_V_read770_rewind_reg_35679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_701_V_read771_phi_phi_fu_79810_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_701_V_read771_phi_phi_fu_79810_p4 = ap_phi_mux_data_701_V_read771_rewind_phi_fu_35697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_701_V_read771_phi_phi_fu_79810_p4 = data_701_V_read.read();
        } else {
            ap_phi_mux_data_701_V_read771_phi_phi_fu_79810_p4 = ap_phi_reg_pp0_iter0_data_701_V_read771_phi_reg_79806.read();
        }
    } else {
        ap_phi_mux_data_701_V_read771_phi_phi_fu_79810_p4 = ap_phi_reg_pp0_iter0_data_701_V_read771_phi_reg_79806.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_701_V_read771_rewind_phi_fu_35697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_701_V_read771_rewind_phi_fu_35697_p6 = data_701_V_read771_phi_reg_79806.read();
    } else {
        ap_phi_mux_data_701_V_read771_rewind_phi_fu_35697_p6 = data_701_V_read771_rewind_reg_35693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_702_V_read772_phi_phi_fu_79823_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_702_V_read772_phi_phi_fu_79823_p4 = ap_phi_mux_data_702_V_read772_rewind_phi_fu_35711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_702_V_read772_phi_phi_fu_79823_p4 = data_702_V_read.read();
        } else {
            ap_phi_mux_data_702_V_read772_phi_phi_fu_79823_p4 = ap_phi_reg_pp0_iter0_data_702_V_read772_phi_reg_79819.read();
        }
    } else {
        ap_phi_mux_data_702_V_read772_phi_phi_fu_79823_p4 = ap_phi_reg_pp0_iter0_data_702_V_read772_phi_reg_79819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_702_V_read772_rewind_phi_fu_35711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_702_V_read772_rewind_phi_fu_35711_p6 = data_702_V_read772_phi_reg_79819.read();
    } else {
        ap_phi_mux_data_702_V_read772_rewind_phi_fu_35711_p6 = data_702_V_read772_rewind_reg_35707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_703_V_read773_phi_phi_fu_79836_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_703_V_read773_phi_phi_fu_79836_p4 = ap_phi_mux_data_703_V_read773_rewind_phi_fu_35725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_703_V_read773_phi_phi_fu_79836_p4 = data_703_V_read.read();
        } else {
            ap_phi_mux_data_703_V_read773_phi_phi_fu_79836_p4 = ap_phi_reg_pp0_iter0_data_703_V_read773_phi_reg_79832.read();
        }
    } else {
        ap_phi_mux_data_703_V_read773_phi_phi_fu_79836_p4 = ap_phi_reg_pp0_iter0_data_703_V_read773_phi_reg_79832.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_703_V_read773_rewind_phi_fu_35725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_703_V_read773_rewind_phi_fu_35725_p6 = data_703_V_read773_phi_reg_79832.read();
    } else {
        ap_phi_mux_data_703_V_read773_rewind_phi_fu_35725_p6 = data_703_V_read773_rewind_reg_35721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_704_V_read774_phi_phi_fu_79849_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_704_V_read774_phi_phi_fu_79849_p4 = ap_phi_mux_data_704_V_read774_rewind_phi_fu_35739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_704_V_read774_phi_phi_fu_79849_p4 = data_704_V_read.read();
        } else {
            ap_phi_mux_data_704_V_read774_phi_phi_fu_79849_p4 = ap_phi_reg_pp0_iter0_data_704_V_read774_phi_reg_79845.read();
        }
    } else {
        ap_phi_mux_data_704_V_read774_phi_phi_fu_79849_p4 = ap_phi_reg_pp0_iter0_data_704_V_read774_phi_reg_79845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_704_V_read774_rewind_phi_fu_35739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_704_V_read774_rewind_phi_fu_35739_p6 = data_704_V_read774_phi_reg_79845.read();
    } else {
        ap_phi_mux_data_704_V_read774_rewind_phi_fu_35739_p6 = data_704_V_read774_rewind_reg_35735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_705_V_read775_phi_phi_fu_79862_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_705_V_read775_phi_phi_fu_79862_p4 = ap_phi_mux_data_705_V_read775_rewind_phi_fu_35753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_705_V_read775_phi_phi_fu_79862_p4 = data_705_V_read.read();
        } else {
            ap_phi_mux_data_705_V_read775_phi_phi_fu_79862_p4 = ap_phi_reg_pp0_iter0_data_705_V_read775_phi_reg_79858.read();
        }
    } else {
        ap_phi_mux_data_705_V_read775_phi_phi_fu_79862_p4 = ap_phi_reg_pp0_iter0_data_705_V_read775_phi_reg_79858.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_705_V_read775_rewind_phi_fu_35753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_705_V_read775_rewind_phi_fu_35753_p6 = data_705_V_read775_phi_reg_79858.read();
    } else {
        ap_phi_mux_data_705_V_read775_rewind_phi_fu_35753_p6 = data_705_V_read775_rewind_reg_35749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_706_V_read776_phi_phi_fu_79875_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_706_V_read776_phi_phi_fu_79875_p4 = ap_phi_mux_data_706_V_read776_rewind_phi_fu_35767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_706_V_read776_phi_phi_fu_79875_p4 = data_706_V_read.read();
        } else {
            ap_phi_mux_data_706_V_read776_phi_phi_fu_79875_p4 = ap_phi_reg_pp0_iter0_data_706_V_read776_phi_reg_79871.read();
        }
    } else {
        ap_phi_mux_data_706_V_read776_phi_phi_fu_79875_p4 = ap_phi_reg_pp0_iter0_data_706_V_read776_phi_reg_79871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_706_V_read776_rewind_phi_fu_35767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_706_V_read776_rewind_phi_fu_35767_p6 = data_706_V_read776_phi_reg_79871.read();
    } else {
        ap_phi_mux_data_706_V_read776_rewind_phi_fu_35767_p6 = data_706_V_read776_rewind_reg_35763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_707_V_read777_phi_phi_fu_79888_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_707_V_read777_phi_phi_fu_79888_p4 = ap_phi_mux_data_707_V_read777_rewind_phi_fu_35781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_707_V_read777_phi_phi_fu_79888_p4 = data_707_V_read.read();
        } else {
            ap_phi_mux_data_707_V_read777_phi_phi_fu_79888_p4 = ap_phi_reg_pp0_iter0_data_707_V_read777_phi_reg_79884.read();
        }
    } else {
        ap_phi_mux_data_707_V_read777_phi_phi_fu_79888_p4 = ap_phi_reg_pp0_iter0_data_707_V_read777_phi_reg_79884.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_707_V_read777_rewind_phi_fu_35781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_707_V_read777_rewind_phi_fu_35781_p6 = data_707_V_read777_phi_reg_79884.read();
    } else {
        ap_phi_mux_data_707_V_read777_rewind_phi_fu_35781_p6 = data_707_V_read777_rewind_reg_35777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_708_V_read778_phi_phi_fu_79901_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_708_V_read778_phi_phi_fu_79901_p4 = ap_phi_mux_data_708_V_read778_rewind_phi_fu_35795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_708_V_read778_phi_phi_fu_79901_p4 = data_708_V_read.read();
        } else {
            ap_phi_mux_data_708_V_read778_phi_phi_fu_79901_p4 = ap_phi_reg_pp0_iter0_data_708_V_read778_phi_reg_79897.read();
        }
    } else {
        ap_phi_mux_data_708_V_read778_phi_phi_fu_79901_p4 = ap_phi_reg_pp0_iter0_data_708_V_read778_phi_reg_79897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_708_V_read778_rewind_phi_fu_35795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_708_V_read778_rewind_phi_fu_35795_p6 = data_708_V_read778_phi_reg_79897.read();
    } else {
        ap_phi_mux_data_708_V_read778_rewind_phi_fu_35795_p6 = data_708_V_read778_rewind_reg_35791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_709_V_read779_phi_phi_fu_79914_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_709_V_read779_phi_phi_fu_79914_p4 = ap_phi_mux_data_709_V_read779_rewind_phi_fu_35809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_709_V_read779_phi_phi_fu_79914_p4 = data_709_V_read.read();
        } else {
            ap_phi_mux_data_709_V_read779_phi_phi_fu_79914_p4 = ap_phi_reg_pp0_iter0_data_709_V_read779_phi_reg_79910.read();
        }
    } else {
        ap_phi_mux_data_709_V_read779_phi_phi_fu_79914_p4 = ap_phi_reg_pp0_iter0_data_709_V_read779_phi_reg_79910.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_709_V_read779_rewind_phi_fu_35809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_709_V_read779_rewind_phi_fu_35809_p6 = data_709_V_read779_phi_reg_79910.read();
    } else {
        ap_phi_mux_data_709_V_read779_rewind_phi_fu_35809_p6 = data_709_V_read779_rewind_reg_35805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_70_V_read140_phi_phi_fu_71607_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_70_V_read140_phi_phi_fu_71607_p4 = ap_phi_mux_data_70_V_read140_rewind_phi_fu_26863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_70_V_read140_phi_phi_fu_71607_p4 = data_70_V_read.read();
        } else {
            ap_phi_mux_data_70_V_read140_phi_phi_fu_71607_p4 = ap_phi_reg_pp0_iter0_data_70_V_read140_phi_reg_71603.read();
        }
    } else {
        ap_phi_mux_data_70_V_read140_phi_phi_fu_71607_p4 = ap_phi_reg_pp0_iter0_data_70_V_read140_phi_reg_71603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_70_V_read140_rewind_phi_fu_26863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_70_V_read140_rewind_phi_fu_26863_p6 = data_70_V_read140_phi_reg_71603.read();
    } else {
        ap_phi_mux_data_70_V_read140_rewind_phi_fu_26863_p6 = data_70_V_read140_rewind_reg_26859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_710_V_read780_phi_phi_fu_79927_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_710_V_read780_phi_phi_fu_79927_p4 = ap_phi_mux_data_710_V_read780_rewind_phi_fu_35823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_710_V_read780_phi_phi_fu_79927_p4 = data_710_V_read.read();
        } else {
            ap_phi_mux_data_710_V_read780_phi_phi_fu_79927_p4 = ap_phi_reg_pp0_iter0_data_710_V_read780_phi_reg_79923.read();
        }
    } else {
        ap_phi_mux_data_710_V_read780_phi_phi_fu_79927_p4 = ap_phi_reg_pp0_iter0_data_710_V_read780_phi_reg_79923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_710_V_read780_rewind_phi_fu_35823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_710_V_read780_rewind_phi_fu_35823_p6 = data_710_V_read780_phi_reg_79923.read();
    } else {
        ap_phi_mux_data_710_V_read780_rewind_phi_fu_35823_p6 = data_710_V_read780_rewind_reg_35819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_711_V_read781_phi_phi_fu_79940_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_711_V_read781_phi_phi_fu_79940_p4 = ap_phi_mux_data_711_V_read781_rewind_phi_fu_35837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_711_V_read781_phi_phi_fu_79940_p4 = data_711_V_read.read();
        } else {
            ap_phi_mux_data_711_V_read781_phi_phi_fu_79940_p4 = ap_phi_reg_pp0_iter0_data_711_V_read781_phi_reg_79936.read();
        }
    } else {
        ap_phi_mux_data_711_V_read781_phi_phi_fu_79940_p4 = ap_phi_reg_pp0_iter0_data_711_V_read781_phi_reg_79936.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_711_V_read781_rewind_phi_fu_35837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_711_V_read781_rewind_phi_fu_35837_p6 = data_711_V_read781_phi_reg_79936.read();
    } else {
        ap_phi_mux_data_711_V_read781_rewind_phi_fu_35837_p6 = data_711_V_read781_rewind_reg_35833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_712_V_read782_phi_phi_fu_79953_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_712_V_read782_phi_phi_fu_79953_p4 = ap_phi_mux_data_712_V_read782_rewind_phi_fu_35851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_712_V_read782_phi_phi_fu_79953_p4 = data_712_V_read.read();
        } else {
            ap_phi_mux_data_712_V_read782_phi_phi_fu_79953_p4 = ap_phi_reg_pp0_iter0_data_712_V_read782_phi_reg_79949.read();
        }
    } else {
        ap_phi_mux_data_712_V_read782_phi_phi_fu_79953_p4 = ap_phi_reg_pp0_iter0_data_712_V_read782_phi_reg_79949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_712_V_read782_rewind_phi_fu_35851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_712_V_read782_rewind_phi_fu_35851_p6 = data_712_V_read782_phi_reg_79949.read();
    } else {
        ap_phi_mux_data_712_V_read782_rewind_phi_fu_35851_p6 = data_712_V_read782_rewind_reg_35847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_713_V_read783_phi_phi_fu_79966_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_713_V_read783_phi_phi_fu_79966_p4 = ap_phi_mux_data_713_V_read783_rewind_phi_fu_35865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_713_V_read783_phi_phi_fu_79966_p4 = data_713_V_read.read();
        } else {
            ap_phi_mux_data_713_V_read783_phi_phi_fu_79966_p4 = ap_phi_reg_pp0_iter0_data_713_V_read783_phi_reg_79962.read();
        }
    } else {
        ap_phi_mux_data_713_V_read783_phi_phi_fu_79966_p4 = ap_phi_reg_pp0_iter0_data_713_V_read783_phi_reg_79962.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_713_V_read783_rewind_phi_fu_35865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_713_V_read783_rewind_phi_fu_35865_p6 = data_713_V_read783_phi_reg_79962.read();
    } else {
        ap_phi_mux_data_713_V_read783_rewind_phi_fu_35865_p6 = data_713_V_read783_rewind_reg_35861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_714_V_read784_phi_phi_fu_79979_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_714_V_read784_phi_phi_fu_79979_p4 = ap_phi_mux_data_714_V_read784_rewind_phi_fu_35879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_714_V_read784_phi_phi_fu_79979_p4 = data_714_V_read.read();
        } else {
            ap_phi_mux_data_714_V_read784_phi_phi_fu_79979_p4 = ap_phi_reg_pp0_iter0_data_714_V_read784_phi_reg_79975.read();
        }
    } else {
        ap_phi_mux_data_714_V_read784_phi_phi_fu_79979_p4 = ap_phi_reg_pp0_iter0_data_714_V_read784_phi_reg_79975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_714_V_read784_rewind_phi_fu_35879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_714_V_read784_rewind_phi_fu_35879_p6 = data_714_V_read784_phi_reg_79975.read();
    } else {
        ap_phi_mux_data_714_V_read784_rewind_phi_fu_35879_p6 = data_714_V_read784_rewind_reg_35875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_715_V_read785_phi_phi_fu_79992_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_715_V_read785_phi_phi_fu_79992_p4 = ap_phi_mux_data_715_V_read785_rewind_phi_fu_35893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_715_V_read785_phi_phi_fu_79992_p4 = data_715_V_read.read();
        } else {
            ap_phi_mux_data_715_V_read785_phi_phi_fu_79992_p4 = ap_phi_reg_pp0_iter0_data_715_V_read785_phi_reg_79988.read();
        }
    } else {
        ap_phi_mux_data_715_V_read785_phi_phi_fu_79992_p4 = ap_phi_reg_pp0_iter0_data_715_V_read785_phi_reg_79988.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_715_V_read785_rewind_phi_fu_35893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_715_V_read785_rewind_phi_fu_35893_p6 = data_715_V_read785_phi_reg_79988.read();
    } else {
        ap_phi_mux_data_715_V_read785_rewind_phi_fu_35893_p6 = data_715_V_read785_rewind_reg_35889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_716_V_read786_phi_phi_fu_80005_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_716_V_read786_phi_phi_fu_80005_p4 = ap_phi_mux_data_716_V_read786_rewind_phi_fu_35907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_716_V_read786_phi_phi_fu_80005_p4 = data_716_V_read.read();
        } else {
            ap_phi_mux_data_716_V_read786_phi_phi_fu_80005_p4 = ap_phi_reg_pp0_iter0_data_716_V_read786_phi_reg_80001.read();
        }
    } else {
        ap_phi_mux_data_716_V_read786_phi_phi_fu_80005_p4 = ap_phi_reg_pp0_iter0_data_716_V_read786_phi_reg_80001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_716_V_read786_rewind_phi_fu_35907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_716_V_read786_rewind_phi_fu_35907_p6 = data_716_V_read786_phi_reg_80001.read();
    } else {
        ap_phi_mux_data_716_V_read786_rewind_phi_fu_35907_p6 = data_716_V_read786_rewind_reg_35903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_717_V_read787_phi_phi_fu_80018_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_717_V_read787_phi_phi_fu_80018_p4 = ap_phi_mux_data_717_V_read787_rewind_phi_fu_35921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_717_V_read787_phi_phi_fu_80018_p4 = data_717_V_read.read();
        } else {
            ap_phi_mux_data_717_V_read787_phi_phi_fu_80018_p4 = ap_phi_reg_pp0_iter0_data_717_V_read787_phi_reg_80014.read();
        }
    } else {
        ap_phi_mux_data_717_V_read787_phi_phi_fu_80018_p4 = ap_phi_reg_pp0_iter0_data_717_V_read787_phi_reg_80014.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_717_V_read787_rewind_phi_fu_35921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_717_V_read787_rewind_phi_fu_35921_p6 = data_717_V_read787_phi_reg_80014.read();
    } else {
        ap_phi_mux_data_717_V_read787_rewind_phi_fu_35921_p6 = data_717_V_read787_rewind_reg_35917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_718_V_read788_phi_phi_fu_80031_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_718_V_read788_phi_phi_fu_80031_p4 = ap_phi_mux_data_718_V_read788_rewind_phi_fu_35935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_718_V_read788_phi_phi_fu_80031_p4 = data_718_V_read.read();
        } else {
            ap_phi_mux_data_718_V_read788_phi_phi_fu_80031_p4 = ap_phi_reg_pp0_iter0_data_718_V_read788_phi_reg_80027.read();
        }
    } else {
        ap_phi_mux_data_718_V_read788_phi_phi_fu_80031_p4 = ap_phi_reg_pp0_iter0_data_718_V_read788_phi_reg_80027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_718_V_read788_rewind_phi_fu_35935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_718_V_read788_rewind_phi_fu_35935_p6 = data_718_V_read788_phi_reg_80027.read();
    } else {
        ap_phi_mux_data_718_V_read788_rewind_phi_fu_35935_p6 = data_718_V_read788_rewind_reg_35931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_719_V_read789_phi_phi_fu_80044_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_719_V_read789_phi_phi_fu_80044_p4 = ap_phi_mux_data_719_V_read789_rewind_phi_fu_35949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_719_V_read789_phi_phi_fu_80044_p4 = data_719_V_read.read();
        } else {
            ap_phi_mux_data_719_V_read789_phi_phi_fu_80044_p4 = ap_phi_reg_pp0_iter0_data_719_V_read789_phi_reg_80040.read();
        }
    } else {
        ap_phi_mux_data_719_V_read789_phi_phi_fu_80044_p4 = ap_phi_reg_pp0_iter0_data_719_V_read789_phi_reg_80040.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_719_V_read789_rewind_phi_fu_35949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_719_V_read789_rewind_phi_fu_35949_p6 = data_719_V_read789_phi_reg_80040.read();
    } else {
        ap_phi_mux_data_719_V_read789_rewind_phi_fu_35949_p6 = data_719_V_read789_rewind_reg_35945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_71_V_read141_phi_phi_fu_71620_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_71_V_read141_phi_phi_fu_71620_p4 = ap_phi_mux_data_71_V_read141_rewind_phi_fu_26877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_71_V_read141_phi_phi_fu_71620_p4 = data_71_V_read.read();
        } else {
            ap_phi_mux_data_71_V_read141_phi_phi_fu_71620_p4 = ap_phi_reg_pp0_iter0_data_71_V_read141_phi_reg_71616.read();
        }
    } else {
        ap_phi_mux_data_71_V_read141_phi_phi_fu_71620_p4 = ap_phi_reg_pp0_iter0_data_71_V_read141_phi_reg_71616.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_71_V_read141_rewind_phi_fu_26877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_71_V_read141_rewind_phi_fu_26877_p6 = data_71_V_read141_phi_reg_71616.read();
    } else {
        ap_phi_mux_data_71_V_read141_rewind_phi_fu_26877_p6 = data_71_V_read141_rewind_reg_26873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_720_V_read790_phi_phi_fu_80057_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_720_V_read790_phi_phi_fu_80057_p4 = ap_phi_mux_data_720_V_read790_rewind_phi_fu_35963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_720_V_read790_phi_phi_fu_80057_p4 = data_720_V_read.read();
        } else {
            ap_phi_mux_data_720_V_read790_phi_phi_fu_80057_p4 = ap_phi_reg_pp0_iter0_data_720_V_read790_phi_reg_80053.read();
        }
    } else {
        ap_phi_mux_data_720_V_read790_phi_phi_fu_80057_p4 = ap_phi_reg_pp0_iter0_data_720_V_read790_phi_reg_80053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_720_V_read790_rewind_phi_fu_35963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_720_V_read790_rewind_phi_fu_35963_p6 = data_720_V_read790_phi_reg_80053.read();
    } else {
        ap_phi_mux_data_720_V_read790_rewind_phi_fu_35963_p6 = data_720_V_read790_rewind_reg_35959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_721_V_read791_phi_phi_fu_80070_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_721_V_read791_phi_phi_fu_80070_p4 = ap_phi_mux_data_721_V_read791_rewind_phi_fu_35977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_721_V_read791_phi_phi_fu_80070_p4 = data_721_V_read.read();
        } else {
            ap_phi_mux_data_721_V_read791_phi_phi_fu_80070_p4 = ap_phi_reg_pp0_iter0_data_721_V_read791_phi_reg_80066.read();
        }
    } else {
        ap_phi_mux_data_721_V_read791_phi_phi_fu_80070_p4 = ap_phi_reg_pp0_iter0_data_721_V_read791_phi_reg_80066.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_721_V_read791_rewind_phi_fu_35977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_721_V_read791_rewind_phi_fu_35977_p6 = data_721_V_read791_phi_reg_80066.read();
    } else {
        ap_phi_mux_data_721_V_read791_rewind_phi_fu_35977_p6 = data_721_V_read791_rewind_reg_35973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_722_V_read792_phi_phi_fu_80083_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_722_V_read792_phi_phi_fu_80083_p4 = ap_phi_mux_data_722_V_read792_rewind_phi_fu_35991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_722_V_read792_phi_phi_fu_80083_p4 = data_722_V_read.read();
        } else {
            ap_phi_mux_data_722_V_read792_phi_phi_fu_80083_p4 = ap_phi_reg_pp0_iter0_data_722_V_read792_phi_reg_80079.read();
        }
    } else {
        ap_phi_mux_data_722_V_read792_phi_phi_fu_80083_p4 = ap_phi_reg_pp0_iter0_data_722_V_read792_phi_reg_80079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_722_V_read792_rewind_phi_fu_35991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_722_V_read792_rewind_phi_fu_35991_p6 = data_722_V_read792_phi_reg_80079.read();
    } else {
        ap_phi_mux_data_722_V_read792_rewind_phi_fu_35991_p6 = data_722_V_read792_rewind_reg_35987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_723_V_read793_phi_phi_fu_80096_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_723_V_read793_phi_phi_fu_80096_p4 = ap_phi_mux_data_723_V_read793_rewind_phi_fu_36005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_723_V_read793_phi_phi_fu_80096_p4 = data_723_V_read.read();
        } else {
            ap_phi_mux_data_723_V_read793_phi_phi_fu_80096_p4 = ap_phi_reg_pp0_iter0_data_723_V_read793_phi_reg_80092.read();
        }
    } else {
        ap_phi_mux_data_723_V_read793_phi_phi_fu_80096_p4 = ap_phi_reg_pp0_iter0_data_723_V_read793_phi_reg_80092.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_723_V_read793_rewind_phi_fu_36005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_723_V_read793_rewind_phi_fu_36005_p6 = data_723_V_read793_phi_reg_80092.read();
    } else {
        ap_phi_mux_data_723_V_read793_rewind_phi_fu_36005_p6 = data_723_V_read793_rewind_reg_36001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_724_V_read794_phi_phi_fu_80109_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_724_V_read794_phi_phi_fu_80109_p4 = ap_phi_mux_data_724_V_read794_rewind_phi_fu_36019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_724_V_read794_phi_phi_fu_80109_p4 = data_724_V_read.read();
        } else {
            ap_phi_mux_data_724_V_read794_phi_phi_fu_80109_p4 = ap_phi_reg_pp0_iter0_data_724_V_read794_phi_reg_80105.read();
        }
    } else {
        ap_phi_mux_data_724_V_read794_phi_phi_fu_80109_p4 = ap_phi_reg_pp0_iter0_data_724_V_read794_phi_reg_80105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_724_V_read794_rewind_phi_fu_36019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_724_V_read794_rewind_phi_fu_36019_p6 = data_724_V_read794_phi_reg_80105.read();
    } else {
        ap_phi_mux_data_724_V_read794_rewind_phi_fu_36019_p6 = data_724_V_read794_rewind_reg_36015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_725_V_read795_phi_phi_fu_80122_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_725_V_read795_phi_phi_fu_80122_p4 = ap_phi_mux_data_725_V_read795_rewind_phi_fu_36033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_725_V_read795_phi_phi_fu_80122_p4 = data_725_V_read.read();
        } else {
            ap_phi_mux_data_725_V_read795_phi_phi_fu_80122_p4 = ap_phi_reg_pp0_iter0_data_725_V_read795_phi_reg_80118.read();
        }
    } else {
        ap_phi_mux_data_725_V_read795_phi_phi_fu_80122_p4 = ap_phi_reg_pp0_iter0_data_725_V_read795_phi_reg_80118.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_725_V_read795_rewind_phi_fu_36033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_725_V_read795_rewind_phi_fu_36033_p6 = data_725_V_read795_phi_reg_80118.read();
    } else {
        ap_phi_mux_data_725_V_read795_rewind_phi_fu_36033_p6 = data_725_V_read795_rewind_reg_36029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_726_V_read796_phi_phi_fu_80135_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_726_V_read796_phi_phi_fu_80135_p4 = ap_phi_mux_data_726_V_read796_rewind_phi_fu_36047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_726_V_read796_phi_phi_fu_80135_p4 = data_726_V_read.read();
        } else {
            ap_phi_mux_data_726_V_read796_phi_phi_fu_80135_p4 = ap_phi_reg_pp0_iter0_data_726_V_read796_phi_reg_80131.read();
        }
    } else {
        ap_phi_mux_data_726_V_read796_phi_phi_fu_80135_p4 = ap_phi_reg_pp0_iter0_data_726_V_read796_phi_reg_80131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_726_V_read796_rewind_phi_fu_36047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_726_V_read796_rewind_phi_fu_36047_p6 = data_726_V_read796_phi_reg_80131.read();
    } else {
        ap_phi_mux_data_726_V_read796_rewind_phi_fu_36047_p6 = data_726_V_read796_rewind_reg_36043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_727_V_read797_phi_phi_fu_80148_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_727_V_read797_phi_phi_fu_80148_p4 = ap_phi_mux_data_727_V_read797_rewind_phi_fu_36061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_727_V_read797_phi_phi_fu_80148_p4 = data_727_V_read.read();
        } else {
            ap_phi_mux_data_727_V_read797_phi_phi_fu_80148_p4 = ap_phi_reg_pp0_iter0_data_727_V_read797_phi_reg_80144.read();
        }
    } else {
        ap_phi_mux_data_727_V_read797_phi_phi_fu_80148_p4 = ap_phi_reg_pp0_iter0_data_727_V_read797_phi_reg_80144.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_727_V_read797_rewind_phi_fu_36061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_727_V_read797_rewind_phi_fu_36061_p6 = data_727_V_read797_phi_reg_80144.read();
    } else {
        ap_phi_mux_data_727_V_read797_rewind_phi_fu_36061_p6 = data_727_V_read797_rewind_reg_36057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_728_V_read798_phi_phi_fu_80161_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_728_V_read798_phi_phi_fu_80161_p4 = ap_phi_mux_data_728_V_read798_rewind_phi_fu_36075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_728_V_read798_phi_phi_fu_80161_p4 = data_728_V_read.read();
        } else {
            ap_phi_mux_data_728_V_read798_phi_phi_fu_80161_p4 = ap_phi_reg_pp0_iter0_data_728_V_read798_phi_reg_80157.read();
        }
    } else {
        ap_phi_mux_data_728_V_read798_phi_phi_fu_80161_p4 = ap_phi_reg_pp0_iter0_data_728_V_read798_phi_reg_80157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_728_V_read798_rewind_phi_fu_36075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_728_V_read798_rewind_phi_fu_36075_p6 = data_728_V_read798_phi_reg_80157.read();
    } else {
        ap_phi_mux_data_728_V_read798_rewind_phi_fu_36075_p6 = data_728_V_read798_rewind_reg_36071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_729_V_read799_phi_phi_fu_80174_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_729_V_read799_phi_phi_fu_80174_p4 = ap_phi_mux_data_729_V_read799_rewind_phi_fu_36089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_729_V_read799_phi_phi_fu_80174_p4 = data_729_V_read.read();
        } else {
            ap_phi_mux_data_729_V_read799_phi_phi_fu_80174_p4 = ap_phi_reg_pp0_iter0_data_729_V_read799_phi_reg_80170.read();
        }
    } else {
        ap_phi_mux_data_729_V_read799_phi_phi_fu_80174_p4 = ap_phi_reg_pp0_iter0_data_729_V_read799_phi_reg_80170.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_729_V_read799_rewind_phi_fu_36089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_729_V_read799_rewind_phi_fu_36089_p6 = data_729_V_read799_phi_reg_80170.read();
    } else {
        ap_phi_mux_data_729_V_read799_rewind_phi_fu_36089_p6 = data_729_V_read799_rewind_reg_36085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_72_V_read142_phi_phi_fu_71633_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_72_V_read142_phi_phi_fu_71633_p4 = ap_phi_mux_data_72_V_read142_rewind_phi_fu_26891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_72_V_read142_phi_phi_fu_71633_p4 = data_72_V_read.read();
        } else {
            ap_phi_mux_data_72_V_read142_phi_phi_fu_71633_p4 = ap_phi_reg_pp0_iter0_data_72_V_read142_phi_reg_71629.read();
        }
    } else {
        ap_phi_mux_data_72_V_read142_phi_phi_fu_71633_p4 = ap_phi_reg_pp0_iter0_data_72_V_read142_phi_reg_71629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_72_V_read142_rewind_phi_fu_26891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_72_V_read142_rewind_phi_fu_26891_p6 = data_72_V_read142_phi_reg_71629.read();
    } else {
        ap_phi_mux_data_72_V_read142_rewind_phi_fu_26891_p6 = data_72_V_read142_rewind_reg_26887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_730_V_read800_phi_phi_fu_80187_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_730_V_read800_phi_phi_fu_80187_p4 = ap_phi_mux_data_730_V_read800_rewind_phi_fu_36103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_730_V_read800_phi_phi_fu_80187_p4 = data_730_V_read.read();
        } else {
            ap_phi_mux_data_730_V_read800_phi_phi_fu_80187_p4 = ap_phi_reg_pp0_iter0_data_730_V_read800_phi_reg_80183.read();
        }
    } else {
        ap_phi_mux_data_730_V_read800_phi_phi_fu_80187_p4 = ap_phi_reg_pp0_iter0_data_730_V_read800_phi_reg_80183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_730_V_read800_rewind_phi_fu_36103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_730_V_read800_rewind_phi_fu_36103_p6 = data_730_V_read800_phi_reg_80183.read();
    } else {
        ap_phi_mux_data_730_V_read800_rewind_phi_fu_36103_p6 = data_730_V_read800_rewind_reg_36099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_731_V_read801_phi_phi_fu_80200_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_731_V_read801_phi_phi_fu_80200_p4 = ap_phi_mux_data_731_V_read801_rewind_phi_fu_36117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_731_V_read801_phi_phi_fu_80200_p4 = data_731_V_read.read();
        } else {
            ap_phi_mux_data_731_V_read801_phi_phi_fu_80200_p4 = ap_phi_reg_pp0_iter0_data_731_V_read801_phi_reg_80196.read();
        }
    } else {
        ap_phi_mux_data_731_V_read801_phi_phi_fu_80200_p4 = ap_phi_reg_pp0_iter0_data_731_V_read801_phi_reg_80196.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_731_V_read801_rewind_phi_fu_36117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_731_V_read801_rewind_phi_fu_36117_p6 = data_731_V_read801_phi_reg_80196.read();
    } else {
        ap_phi_mux_data_731_V_read801_rewind_phi_fu_36117_p6 = data_731_V_read801_rewind_reg_36113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_732_V_read802_phi_phi_fu_80213_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_732_V_read802_phi_phi_fu_80213_p4 = ap_phi_mux_data_732_V_read802_rewind_phi_fu_36131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_732_V_read802_phi_phi_fu_80213_p4 = data_732_V_read.read();
        } else {
            ap_phi_mux_data_732_V_read802_phi_phi_fu_80213_p4 = ap_phi_reg_pp0_iter0_data_732_V_read802_phi_reg_80209.read();
        }
    } else {
        ap_phi_mux_data_732_V_read802_phi_phi_fu_80213_p4 = ap_phi_reg_pp0_iter0_data_732_V_read802_phi_reg_80209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_732_V_read802_rewind_phi_fu_36131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_732_V_read802_rewind_phi_fu_36131_p6 = data_732_V_read802_phi_reg_80209.read();
    } else {
        ap_phi_mux_data_732_V_read802_rewind_phi_fu_36131_p6 = data_732_V_read802_rewind_reg_36127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_733_V_read803_phi_phi_fu_80226_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_733_V_read803_phi_phi_fu_80226_p4 = ap_phi_mux_data_733_V_read803_rewind_phi_fu_36145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_733_V_read803_phi_phi_fu_80226_p4 = data_733_V_read.read();
        } else {
            ap_phi_mux_data_733_V_read803_phi_phi_fu_80226_p4 = ap_phi_reg_pp0_iter0_data_733_V_read803_phi_reg_80222.read();
        }
    } else {
        ap_phi_mux_data_733_V_read803_phi_phi_fu_80226_p4 = ap_phi_reg_pp0_iter0_data_733_V_read803_phi_reg_80222.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_733_V_read803_rewind_phi_fu_36145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_733_V_read803_rewind_phi_fu_36145_p6 = data_733_V_read803_phi_reg_80222.read();
    } else {
        ap_phi_mux_data_733_V_read803_rewind_phi_fu_36145_p6 = data_733_V_read803_rewind_reg_36141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_734_V_read804_phi_phi_fu_80239_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_734_V_read804_phi_phi_fu_80239_p4 = ap_phi_mux_data_734_V_read804_rewind_phi_fu_36159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_734_V_read804_phi_phi_fu_80239_p4 = data_734_V_read.read();
        } else {
            ap_phi_mux_data_734_V_read804_phi_phi_fu_80239_p4 = ap_phi_reg_pp0_iter0_data_734_V_read804_phi_reg_80235.read();
        }
    } else {
        ap_phi_mux_data_734_V_read804_phi_phi_fu_80239_p4 = ap_phi_reg_pp0_iter0_data_734_V_read804_phi_reg_80235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_734_V_read804_rewind_phi_fu_36159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_734_V_read804_rewind_phi_fu_36159_p6 = data_734_V_read804_phi_reg_80235.read();
    } else {
        ap_phi_mux_data_734_V_read804_rewind_phi_fu_36159_p6 = data_734_V_read804_rewind_reg_36155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_735_V_read805_phi_phi_fu_80252_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_735_V_read805_phi_phi_fu_80252_p4 = ap_phi_mux_data_735_V_read805_rewind_phi_fu_36173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_735_V_read805_phi_phi_fu_80252_p4 = data_735_V_read.read();
        } else {
            ap_phi_mux_data_735_V_read805_phi_phi_fu_80252_p4 = ap_phi_reg_pp0_iter0_data_735_V_read805_phi_reg_80248.read();
        }
    } else {
        ap_phi_mux_data_735_V_read805_phi_phi_fu_80252_p4 = ap_phi_reg_pp0_iter0_data_735_V_read805_phi_reg_80248.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_735_V_read805_rewind_phi_fu_36173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_735_V_read805_rewind_phi_fu_36173_p6 = data_735_V_read805_phi_reg_80248.read();
    } else {
        ap_phi_mux_data_735_V_read805_rewind_phi_fu_36173_p6 = data_735_V_read805_rewind_reg_36169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_736_V_read806_phi_phi_fu_80265_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_736_V_read806_phi_phi_fu_80265_p4 = ap_phi_mux_data_736_V_read806_rewind_phi_fu_36187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_736_V_read806_phi_phi_fu_80265_p4 = data_736_V_read.read();
        } else {
            ap_phi_mux_data_736_V_read806_phi_phi_fu_80265_p4 = ap_phi_reg_pp0_iter0_data_736_V_read806_phi_reg_80261.read();
        }
    } else {
        ap_phi_mux_data_736_V_read806_phi_phi_fu_80265_p4 = ap_phi_reg_pp0_iter0_data_736_V_read806_phi_reg_80261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_736_V_read806_rewind_phi_fu_36187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_736_V_read806_rewind_phi_fu_36187_p6 = data_736_V_read806_phi_reg_80261.read();
    } else {
        ap_phi_mux_data_736_V_read806_rewind_phi_fu_36187_p6 = data_736_V_read806_rewind_reg_36183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_737_V_read807_phi_phi_fu_80278_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_737_V_read807_phi_phi_fu_80278_p4 = ap_phi_mux_data_737_V_read807_rewind_phi_fu_36201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_737_V_read807_phi_phi_fu_80278_p4 = data_737_V_read.read();
        } else {
            ap_phi_mux_data_737_V_read807_phi_phi_fu_80278_p4 = ap_phi_reg_pp0_iter0_data_737_V_read807_phi_reg_80274.read();
        }
    } else {
        ap_phi_mux_data_737_V_read807_phi_phi_fu_80278_p4 = ap_phi_reg_pp0_iter0_data_737_V_read807_phi_reg_80274.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_737_V_read807_rewind_phi_fu_36201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_737_V_read807_rewind_phi_fu_36201_p6 = data_737_V_read807_phi_reg_80274.read();
    } else {
        ap_phi_mux_data_737_V_read807_rewind_phi_fu_36201_p6 = data_737_V_read807_rewind_reg_36197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_738_V_read808_phi_phi_fu_80291_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_738_V_read808_phi_phi_fu_80291_p4 = ap_phi_mux_data_738_V_read808_rewind_phi_fu_36215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_738_V_read808_phi_phi_fu_80291_p4 = data_738_V_read.read();
        } else {
            ap_phi_mux_data_738_V_read808_phi_phi_fu_80291_p4 = ap_phi_reg_pp0_iter0_data_738_V_read808_phi_reg_80287.read();
        }
    } else {
        ap_phi_mux_data_738_V_read808_phi_phi_fu_80291_p4 = ap_phi_reg_pp0_iter0_data_738_V_read808_phi_reg_80287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_738_V_read808_rewind_phi_fu_36215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_738_V_read808_rewind_phi_fu_36215_p6 = data_738_V_read808_phi_reg_80287.read();
    } else {
        ap_phi_mux_data_738_V_read808_rewind_phi_fu_36215_p6 = data_738_V_read808_rewind_reg_36211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_739_V_read809_phi_phi_fu_80304_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_739_V_read809_phi_phi_fu_80304_p4 = ap_phi_mux_data_739_V_read809_rewind_phi_fu_36229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_739_V_read809_phi_phi_fu_80304_p4 = data_739_V_read.read();
        } else {
            ap_phi_mux_data_739_V_read809_phi_phi_fu_80304_p4 = ap_phi_reg_pp0_iter0_data_739_V_read809_phi_reg_80300.read();
        }
    } else {
        ap_phi_mux_data_739_V_read809_phi_phi_fu_80304_p4 = ap_phi_reg_pp0_iter0_data_739_V_read809_phi_reg_80300.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_739_V_read809_rewind_phi_fu_36229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_739_V_read809_rewind_phi_fu_36229_p6 = data_739_V_read809_phi_reg_80300.read();
    } else {
        ap_phi_mux_data_739_V_read809_rewind_phi_fu_36229_p6 = data_739_V_read809_rewind_reg_36225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_73_V_read143_phi_phi_fu_71646_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_73_V_read143_phi_phi_fu_71646_p4 = ap_phi_mux_data_73_V_read143_rewind_phi_fu_26905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_73_V_read143_phi_phi_fu_71646_p4 = data_73_V_read.read();
        } else {
            ap_phi_mux_data_73_V_read143_phi_phi_fu_71646_p4 = ap_phi_reg_pp0_iter0_data_73_V_read143_phi_reg_71642.read();
        }
    } else {
        ap_phi_mux_data_73_V_read143_phi_phi_fu_71646_p4 = ap_phi_reg_pp0_iter0_data_73_V_read143_phi_reg_71642.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_73_V_read143_rewind_phi_fu_26905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_73_V_read143_rewind_phi_fu_26905_p6 = data_73_V_read143_phi_reg_71642.read();
    } else {
        ap_phi_mux_data_73_V_read143_rewind_phi_fu_26905_p6 = data_73_V_read143_rewind_reg_26901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_740_V_read810_phi_phi_fu_80317_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_740_V_read810_phi_phi_fu_80317_p4 = ap_phi_mux_data_740_V_read810_rewind_phi_fu_36243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_740_V_read810_phi_phi_fu_80317_p4 = data_740_V_read.read();
        } else {
            ap_phi_mux_data_740_V_read810_phi_phi_fu_80317_p4 = ap_phi_reg_pp0_iter0_data_740_V_read810_phi_reg_80313.read();
        }
    } else {
        ap_phi_mux_data_740_V_read810_phi_phi_fu_80317_p4 = ap_phi_reg_pp0_iter0_data_740_V_read810_phi_reg_80313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_740_V_read810_rewind_phi_fu_36243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_740_V_read810_rewind_phi_fu_36243_p6 = data_740_V_read810_phi_reg_80313.read();
    } else {
        ap_phi_mux_data_740_V_read810_rewind_phi_fu_36243_p6 = data_740_V_read810_rewind_reg_36239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_741_V_read811_phi_phi_fu_80330_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_741_V_read811_phi_phi_fu_80330_p4 = ap_phi_mux_data_741_V_read811_rewind_phi_fu_36257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_741_V_read811_phi_phi_fu_80330_p4 = data_741_V_read.read();
        } else {
            ap_phi_mux_data_741_V_read811_phi_phi_fu_80330_p4 = ap_phi_reg_pp0_iter0_data_741_V_read811_phi_reg_80326.read();
        }
    } else {
        ap_phi_mux_data_741_V_read811_phi_phi_fu_80330_p4 = ap_phi_reg_pp0_iter0_data_741_V_read811_phi_reg_80326.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_741_V_read811_rewind_phi_fu_36257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_741_V_read811_rewind_phi_fu_36257_p6 = data_741_V_read811_phi_reg_80326.read();
    } else {
        ap_phi_mux_data_741_V_read811_rewind_phi_fu_36257_p6 = data_741_V_read811_rewind_reg_36253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_742_V_read812_phi_phi_fu_80343_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_742_V_read812_phi_phi_fu_80343_p4 = ap_phi_mux_data_742_V_read812_rewind_phi_fu_36271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_742_V_read812_phi_phi_fu_80343_p4 = data_742_V_read.read();
        } else {
            ap_phi_mux_data_742_V_read812_phi_phi_fu_80343_p4 = ap_phi_reg_pp0_iter0_data_742_V_read812_phi_reg_80339.read();
        }
    } else {
        ap_phi_mux_data_742_V_read812_phi_phi_fu_80343_p4 = ap_phi_reg_pp0_iter0_data_742_V_read812_phi_reg_80339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_742_V_read812_rewind_phi_fu_36271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_742_V_read812_rewind_phi_fu_36271_p6 = data_742_V_read812_phi_reg_80339.read();
    } else {
        ap_phi_mux_data_742_V_read812_rewind_phi_fu_36271_p6 = data_742_V_read812_rewind_reg_36267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_743_V_read813_phi_phi_fu_80356_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_743_V_read813_phi_phi_fu_80356_p4 = ap_phi_mux_data_743_V_read813_rewind_phi_fu_36285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_743_V_read813_phi_phi_fu_80356_p4 = data_743_V_read.read();
        } else {
            ap_phi_mux_data_743_V_read813_phi_phi_fu_80356_p4 = ap_phi_reg_pp0_iter0_data_743_V_read813_phi_reg_80352.read();
        }
    } else {
        ap_phi_mux_data_743_V_read813_phi_phi_fu_80356_p4 = ap_phi_reg_pp0_iter0_data_743_V_read813_phi_reg_80352.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_743_V_read813_rewind_phi_fu_36285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_743_V_read813_rewind_phi_fu_36285_p6 = data_743_V_read813_phi_reg_80352.read();
    } else {
        ap_phi_mux_data_743_V_read813_rewind_phi_fu_36285_p6 = data_743_V_read813_rewind_reg_36281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_744_V_read814_phi_phi_fu_80369_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_744_V_read814_phi_phi_fu_80369_p4 = ap_phi_mux_data_744_V_read814_rewind_phi_fu_36299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_744_V_read814_phi_phi_fu_80369_p4 = data_744_V_read.read();
        } else {
            ap_phi_mux_data_744_V_read814_phi_phi_fu_80369_p4 = ap_phi_reg_pp0_iter0_data_744_V_read814_phi_reg_80365.read();
        }
    } else {
        ap_phi_mux_data_744_V_read814_phi_phi_fu_80369_p4 = ap_phi_reg_pp0_iter0_data_744_V_read814_phi_reg_80365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_744_V_read814_rewind_phi_fu_36299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_744_V_read814_rewind_phi_fu_36299_p6 = data_744_V_read814_phi_reg_80365.read();
    } else {
        ap_phi_mux_data_744_V_read814_rewind_phi_fu_36299_p6 = data_744_V_read814_rewind_reg_36295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_745_V_read815_phi_phi_fu_80382_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_745_V_read815_phi_phi_fu_80382_p4 = ap_phi_mux_data_745_V_read815_rewind_phi_fu_36313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_745_V_read815_phi_phi_fu_80382_p4 = data_745_V_read.read();
        } else {
            ap_phi_mux_data_745_V_read815_phi_phi_fu_80382_p4 = ap_phi_reg_pp0_iter0_data_745_V_read815_phi_reg_80378.read();
        }
    } else {
        ap_phi_mux_data_745_V_read815_phi_phi_fu_80382_p4 = ap_phi_reg_pp0_iter0_data_745_V_read815_phi_reg_80378.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_745_V_read815_rewind_phi_fu_36313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_745_V_read815_rewind_phi_fu_36313_p6 = data_745_V_read815_phi_reg_80378.read();
    } else {
        ap_phi_mux_data_745_V_read815_rewind_phi_fu_36313_p6 = data_745_V_read815_rewind_reg_36309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_746_V_read816_phi_phi_fu_80395_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_746_V_read816_phi_phi_fu_80395_p4 = ap_phi_mux_data_746_V_read816_rewind_phi_fu_36327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_746_V_read816_phi_phi_fu_80395_p4 = data_746_V_read.read();
        } else {
            ap_phi_mux_data_746_V_read816_phi_phi_fu_80395_p4 = ap_phi_reg_pp0_iter0_data_746_V_read816_phi_reg_80391.read();
        }
    } else {
        ap_phi_mux_data_746_V_read816_phi_phi_fu_80395_p4 = ap_phi_reg_pp0_iter0_data_746_V_read816_phi_reg_80391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_746_V_read816_rewind_phi_fu_36327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_746_V_read816_rewind_phi_fu_36327_p6 = data_746_V_read816_phi_reg_80391.read();
    } else {
        ap_phi_mux_data_746_V_read816_rewind_phi_fu_36327_p6 = data_746_V_read816_rewind_reg_36323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_747_V_read817_phi_phi_fu_80408_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_747_V_read817_phi_phi_fu_80408_p4 = ap_phi_mux_data_747_V_read817_rewind_phi_fu_36341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_747_V_read817_phi_phi_fu_80408_p4 = data_747_V_read.read();
        } else {
            ap_phi_mux_data_747_V_read817_phi_phi_fu_80408_p4 = ap_phi_reg_pp0_iter0_data_747_V_read817_phi_reg_80404.read();
        }
    } else {
        ap_phi_mux_data_747_V_read817_phi_phi_fu_80408_p4 = ap_phi_reg_pp0_iter0_data_747_V_read817_phi_reg_80404.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_747_V_read817_rewind_phi_fu_36341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_747_V_read817_rewind_phi_fu_36341_p6 = data_747_V_read817_phi_reg_80404.read();
    } else {
        ap_phi_mux_data_747_V_read817_rewind_phi_fu_36341_p6 = data_747_V_read817_rewind_reg_36337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_748_V_read818_phi_phi_fu_80421_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_748_V_read818_phi_phi_fu_80421_p4 = ap_phi_mux_data_748_V_read818_rewind_phi_fu_36355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_748_V_read818_phi_phi_fu_80421_p4 = data_748_V_read.read();
        } else {
            ap_phi_mux_data_748_V_read818_phi_phi_fu_80421_p4 = ap_phi_reg_pp0_iter0_data_748_V_read818_phi_reg_80417.read();
        }
    } else {
        ap_phi_mux_data_748_V_read818_phi_phi_fu_80421_p4 = ap_phi_reg_pp0_iter0_data_748_V_read818_phi_reg_80417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_748_V_read818_rewind_phi_fu_36355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_748_V_read818_rewind_phi_fu_36355_p6 = data_748_V_read818_phi_reg_80417.read();
    } else {
        ap_phi_mux_data_748_V_read818_rewind_phi_fu_36355_p6 = data_748_V_read818_rewind_reg_36351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_749_V_read819_phi_phi_fu_80434_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_749_V_read819_phi_phi_fu_80434_p4 = ap_phi_mux_data_749_V_read819_rewind_phi_fu_36369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_749_V_read819_phi_phi_fu_80434_p4 = data_749_V_read.read();
        } else {
            ap_phi_mux_data_749_V_read819_phi_phi_fu_80434_p4 = ap_phi_reg_pp0_iter0_data_749_V_read819_phi_reg_80430.read();
        }
    } else {
        ap_phi_mux_data_749_V_read819_phi_phi_fu_80434_p4 = ap_phi_reg_pp0_iter0_data_749_V_read819_phi_reg_80430.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_749_V_read819_rewind_phi_fu_36369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_749_V_read819_rewind_phi_fu_36369_p6 = data_749_V_read819_phi_reg_80430.read();
    } else {
        ap_phi_mux_data_749_V_read819_rewind_phi_fu_36369_p6 = data_749_V_read819_rewind_reg_36365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_74_V_read144_phi_phi_fu_71659_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_74_V_read144_phi_phi_fu_71659_p4 = ap_phi_mux_data_74_V_read144_rewind_phi_fu_26919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_74_V_read144_phi_phi_fu_71659_p4 = data_74_V_read.read();
        } else {
            ap_phi_mux_data_74_V_read144_phi_phi_fu_71659_p4 = ap_phi_reg_pp0_iter0_data_74_V_read144_phi_reg_71655.read();
        }
    } else {
        ap_phi_mux_data_74_V_read144_phi_phi_fu_71659_p4 = ap_phi_reg_pp0_iter0_data_74_V_read144_phi_reg_71655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_74_V_read144_rewind_phi_fu_26919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_74_V_read144_rewind_phi_fu_26919_p6 = data_74_V_read144_phi_reg_71655.read();
    } else {
        ap_phi_mux_data_74_V_read144_rewind_phi_fu_26919_p6 = data_74_V_read144_rewind_reg_26915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_750_V_read820_phi_phi_fu_80447_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_750_V_read820_phi_phi_fu_80447_p4 = ap_phi_mux_data_750_V_read820_rewind_phi_fu_36383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_750_V_read820_phi_phi_fu_80447_p4 = data_750_V_read.read();
        } else {
            ap_phi_mux_data_750_V_read820_phi_phi_fu_80447_p4 = ap_phi_reg_pp0_iter0_data_750_V_read820_phi_reg_80443.read();
        }
    } else {
        ap_phi_mux_data_750_V_read820_phi_phi_fu_80447_p4 = ap_phi_reg_pp0_iter0_data_750_V_read820_phi_reg_80443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_750_V_read820_rewind_phi_fu_36383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_750_V_read820_rewind_phi_fu_36383_p6 = data_750_V_read820_phi_reg_80443.read();
    } else {
        ap_phi_mux_data_750_V_read820_rewind_phi_fu_36383_p6 = data_750_V_read820_rewind_reg_36379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_751_V_read821_phi_phi_fu_80460_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_751_V_read821_phi_phi_fu_80460_p4 = ap_phi_mux_data_751_V_read821_rewind_phi_fu_36397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_751_V_read821_phi_phi_fu_80460_p4 = data_751_V_read.read();
        } else {
            ap_phi_mux_data_751_V_read821_phi_phi_fu_80460_p4 = ap_phi_reg_pp0_iter0_data_751_V_read821_phi_reg_80456.read();
        }
    } else {
        ap_phi_mux_data_751_V_read821_phi_phi_fu_80460_p4 = ap_phi_reg_pp0_iter0_data_751_V_read821_phi_reg_80456.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_751_V_read821_rewind_phi_fu_36397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_751_V_read821_rewind_phi_fu_36397_p6 = data_751_V_read821_phi_reg_80456.read();
    } else {
        ap_phi_mux_data_751_V_read821_rewind_phi_fu_36397_p6 = data_751_V_read821_rewind_reg_36393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_752_V_read822_phi_phi_fu_80473_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_752_V_read822_phi_phi_fu_80473_p4 = ap_phi_mux_data_752_V_read822_rewind_phi_fu_36411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_752_V_read822_phi_phi_fu_80473_p4 = data_752_V_read.read();
        } else {
            ap_phi_mux_data_752_V_read822_phi_phi_fu_80473_p4 = ap_phi_reg_pp0_iter0_data_752_V_read822_phi_reg_80469.read();
        }
    } else {
        ap_phi_mux_data_752_V_read822_phi_phi_fu_80473_p4 = ap_phi_reg_pp0_iter0_data_752_V_read822_phi_reg_80469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_752_V_read822_rewind_phi_fu_36411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_752_V_read822_rewind_phi_fu_36411_p6 = data_752_V_read822_phi_reg_80469.read();
    } else {
        ap_phi_mux_data_752_V_read822_rewind_phi_fu_36411_p6 = data_752_V_read822_rewind_reg_36407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_753_V_read823_phi_phi_fu_80486_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_753_V_read823_phi_phi_fu_80486_p4 = ap_phi_mux_data_753_V_read823_rewind_phi_fu_36425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_753_V_read823_phi_phi_fu_80486_p4 = data_753_V_read.read();
        } else {
            ap_phi_mux_data_753_V_read823_phi_phi_fu_80486_p4 = ap_phi_reg_pp0_iter0_data_753_V_read823_phi_reg_80482.read();
        }
    } else {
        ap_phi_mux_data_753_V_read823_phi_phi_fu_80486_p4 = ap_phi_reg_pp0_iter0_data_753_V_read823_phi_reg_80482.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_753_V_read823_rewind_phi_fu_36425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_753_V_read823_rewind_phi_fu_36425_p6 = data_753_V_read823_phi_reg_80482.read();
    } else {
        ap_phi_mux_data_753_V_read823_rewind_phi_fu_36425_p6 = data_753_V_read823_rewind_reg_36421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_754_V_read824_phi_phi_fu_80499_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_754_V_read824_phi_phi_fu_80499_p4 = ap_phi_mux_data_754_V_read824_rewind_phi_fu_36439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_754_V_read824_phi_phi_fu_80499_p4 = data_754_V_read.read();
        } else {
            ap_phi_mux_data_754_V_read824_phi_phi_fu_80499_p4 = ap_phi_reg_pp0_iter0_data_754_V_read824_phi_reg_80495.read();
        }
    } else {
        ap_phi_mux_data_754_V_read824_phi_phi_fu_80499_p4 = ap_phi_reg_pp0_iter0_data_754_V_read824_phi_reg_80495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_754_V_read824_rewind_phi_fu_36439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_754_V_read824_rewind_phi_fu_36439_p6 = data_754_V_read824_phi_reg_80495.read();
    } else {
        ap_phi_mux_data_754_V_read824_rewind_phi_fu_36439_p6 = data_754_V_read824_rewind_reg_36435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_755_V_read825_phi_phi_fu_80512_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_755_V_read825_phi_phi_fu_80512_p4 = ap_phi_mux_data_755_V_read825_rewind_phi_fu_36453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_755_V_read825_phi_phi_fu_80512_p4 = data_755_V_read.read();
        } else {
            ap_phi_mux_data_755_V_read825_phi_phi_fu_80512_p4 = ap_phi_reg_pp0_iter0_data_755_V_read825_phi_reg_80508.read();
        }
    } else {
        ap_phi_mux_data_755_V_read825_phi_phi_fu_80512_p4 = ap_phi_reg_pp0_iter0_data_755_V_read825_phi_reg_80508.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_755_V_read825_rewind_phi_fu_36453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_755_V_read825_rewind_phi_fu_36453_p6 = data_755_V_read825_phi_reg_80508.read();
    } else {
        ap_phi_mux_data_755_V_read825_rewind_phi_fu_36453_p6 = data_755_V_read825_rewind_reg_36449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_756_V_read826_phi_phi_fu_80525_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_756_V_read826_phi_phi_fu_80525_p4 = ap_phi_mux_data_756_V_read826_rewind_phi_fu_36467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_756_V_read826_phi_phi_fu_80525_p4 = data_756_V_read.read();
        } else {
            ap_phi_mux_data_756_V_read826_phi_phi_fu_80525_p4 = ap_phi_reg_pp0_iter0_data_756_V_read826_phi_reg_80521.read();
        }
    } else {
        ap_phi_mux_data_756_V_read826_phi_phi_fu_80525_p4 = ap_phi_reg_pp0_iter0_data_756_V_read826_phi_reg_80521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_756_V_read826_rewind_phi_fu_36467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_756_V_read826_rewind_phi_fu_36467_p6 = data_756_V_read826_phi_reg_80521.read();
    } else {
        ap_phi_mux_data_756_V_read826_rewind_phi_fu_36467_p6 = data_756_V_read826_rewind_reg_36463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_757_V_read827_phi_phi_fu_80538_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_757_V_read827_phi_phi_fu_80538_p4 = ap_phi_mux_data_757_V_read827_rewind_phi_fu_36481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_757_V_read827_phi_phi_fu_80538_p4 = data_757_V_read.read();
        } else {
            ap_phi_mux_data_757_V_read827_phi_phi_fu_80538_p4 = ap_phi_reg_pp0_iter0_data_757_V_read827_phi_reg_80534.read();
        }
    } else {
        ap_phi_mux_data_757_V_read827_phi_phi_fu_80538_p4 = ap_phi_reg_pp0_iter0_data_757_V_read827_phi_reg_80534.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_757_V_read827_rewind_phi_fu_36481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_757_V_read827_rewind_phi_fu_36481_p6 = data_757_V_read827_phi_reg_80534.read();
    } else {
        ap_phi_mux_data_757_V_read827_rewind_phi_fu_36481_p6 = data_757_V_read827_rewind_reg_36477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_758_V_read828_phi_phi_fu_80551_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_758_V_read828_phi_phi_fu_80551_p4 = ap_phi_mux_data_758_V_read828_rewind_phi_fu_36495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_758_V_read828_phi_phi_fu_80551_p4 = data_758_V_read.read();
        } else {
            ap_phi_mux_data_758_V_read828_phi_phi_fu_80551_p4 = ap_phi_reg_pp0_iter0_data_758_V_read828_phi_reg_80547.read();
        }
    } else {
        ap_phi_mux_data_758_V_read828_phi_phi_fu_80551_p4 = ap_phi_reg_pp0_iter0_data_758_V_read828_phi_reg_80547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_758_V_read828_rewind_phi_fu_36495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_758_V_read828_rewind_phi_fu_36495_p6 = data_758_V_read828_phi_reg_80547.read();
    } else {
        ap_phi_mux_data_758_V_read828_rewind_phi_fu_36495_p6 = data_758_V_read828_rewind_reg_36491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_759_V_read829_phi_phi_fu_80564_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_759_V_read829_phi_phi_fu_80564_p4 = ap_phi_mux_data_759_V_read829_rewind_phi_fu_36509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_759_V_read829_phi_phi_fu_80564_p4 = data_759_V_read.read();
        } else {
            ap_phi_mux_data_759_V_read829_phi_phi_fu_80564_p4 = ap_phi_reg_pp0_iter0_data_759_V_read829_phi_reg_80560.read();
        }
    } else {
        ap_phi_mux_data_759_V_read829_phi_phi_fu_80564_p4 = ap_phi_reg_pp0_iter0_data_759_V_read829_phi_reg_80560.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_759_V_read829_rewind_phi_fu_36509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_759_V_read829_rewind_phi_fu_36509_p6 = data_759_V_read829_phi_reg_80560.read();
    } else {
        ap_phi_mux_data_759_V_read829_rewind_phi_fu_36509_p6 = data_759_V_read829_rewind_reg_36505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_75_V_read145_phi_phi_fu_71672_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_75_V_read145_phi_phi_fu_71672_p4 = ap_phi_mux_data_75_V_read145_rewind_phi_fu_26933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_75_V_read145_phi_phi_fu_71672_p4 = data_75_V_read.read();
        } else {
            ap_phi_mux_data_75_V_read145_phi_phi_fu_71672_p4 = ap_phi_reg_pp0_iter0_data_75_V_read145_phi_reg_71668.read();
        }
    } else {
        ap_phi_mux_data_75_V_read145_phi_phi_fu_71672_p4 = ap_phi_reg_pp0_iter0_data_75_V_read145_phi_reg_71668.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_75_V_read145_rewind_phi_fu_26933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_75_V_read145_rewind_phi_fu_26933_p6 = data_75_V_read145_phi_reg_71668.read();
    } else {
        ap_phi_mux_data_75_V_read145_rewind_phi_fu_26933_p6 = data_75_V_read145_rewind_reg_26929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_760_V_read830_phi_phi_fu_80577_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_760_V_read830_phi_phi_fu_80577_p4 = ap_phi_mux_data_760_V_read830_rewind_phi_fu_36523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_760_V_read830_phi_phi_fu_80577_p4 = data_760_V_read.read();
        } else {
            ap_phi_mux_data_760_V_read830_phi_phi_fu_80577_p4 = ap_phi_reg_pp0_iter0_data_760_V_read830_phi_reg_80573.read();
        }
    } else {
        ap_phi_mux_data_760_V_read830_phi_phi_fu_80577_p4 = ap_phi_reg_pp0_iter0_data_760_V_read830_phi_reg_80573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_760_V_read830_rewind_phi_fu_36523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_760_V_read830_rewind_phi_fu_36523_p6 = data_760_V_read830_phi_reg_80573.read();
    } else {
        ap_phi_mux_data_760_V_read830_rewind_phi_fu_36523_p6 = data_760_V_read830_rewind_reg_36519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_761_V_read831_phi_phi_fu_80590_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_761_V_read831_phi_phi_fu_80590_p4 = ap_phi_mux_data_761_V_read831_rewind_phi_fu_36537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_761_V_read831_phi_phi_fu_80590_p4 = data_761_V_read.read();
        } else {
            ap_phi_mux_data_761_V_read831_phi_phi_fu_80590_p4 = ap_phi_reg_pp0_iter0_data_761_V_read831_phi_reg_80586.read();
        }
    } else {
        ap_phi_mux_data_761_V_read831_phi_phi_fu_80590_p4 = ap_phi_reg_pp0_iter0_data_761_V_read831_phi_reg_80586.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_761_V_read831_rewind_phi_fu_36537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_761_V_read831_rewind_phi_fu_36537_p6 = data_761_V_read831_phi_reg_80586.read();
    } else {
        ap_phi_mux_data_761_V_read831_rewind_phi_fu_36537_p6 = data_761_V_read831_rewind_reg_36533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_762_V_read832_phi_phi_fu_80603_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_762_V_read832_phi_phi_fu_80603_p4 = ap_phi_mux_data_762_V_read832_rewind_phi_fu_36551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_762_V_read832_phi_phi_fu_80603_p4 = data_762_V_read.read();
        } else {
            ap_phi_mux_data_762_V_read832_phi_phi_fu_80603_p4 = ap_phi_reg_pp0_iter0_data_762_V_read832_phi_reg_80599.read();
        }
    } else {
        ap_phi_mux_data_762_V_read832_phi_phi_fu_80603_p4 = ap_phi_reg_pp0_iter0_data_762_V_read832_phi_reg_80599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_762_V_read832_rewind_phi_fu_36551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_762_V_read832_rewind_phi_fu_36551_p6 = data_762_V_read832_phi_reg_80599.read();
    } else {
        ap_phi_mux_data_762_V_read832_rewind_phi_fu_36551_p6 = data_762_V_read832_rewind_reg_36547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_763_V_read833_phi_phi_fu_80616_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_763_V_read833_phi_phi_fu_80616_p4 = ap_phi_mux_data_763_V_read833_rewind_phi_fu_36565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_763_V_read833_phi_phi_fu_80616_p4 = data_763_V_read.read();
        } else {
            ap_phi_mux_data_763_V_read833_phi_phi_fu_80616_p4 = ap_phi_reg_pp0_iter0_data_763_V_read833_phi_reg_80612.read();
        }
    } else {
        ap_phi_mux_data_763_V_read833_phi_phi_fu_80616_p4 = ap_phi_reg_pp0_iter0_data_763_V_read833_phi_reg_80612.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_763_V_read833_rewind_phi_fu_36565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_763_V_read833_rewind_phi_fu_36565_p6 = data_763_V_read833_phi_reg_80612.read();
    } else {
        ap_phi_mux_data_763_V_read833_rewind_phi_fu_36565_p6 = data_763_V_read833_rewind_reg_36561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_764_V_read834_phi_phi_fu_80629_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_764_V_read834_phi_phi_fu_80629_p4 = ap_phi_mux_data_764_V_read834_rewind_phi_fu_36579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_764_V_read834_phi_phi_fu_80629_p4 = data_764_V_read.read();
        } else {
            ap_phi_mux_data_764_V_read834_phi_phi_fu_80629_p4 = ap_phi_reg_pp0_iter0_data_764_V_read834_phi_reg_80625.read();
        }
    } else {
        ap_phi_mux_data_764_V_read834_phi_phi_fu_80629_p4 = ap_phi_reg_pp0_iter0_data_764_V_read834_phi_reg_80625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_764_V_read834_rewind_phi_fu_36579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_764_V_read834_rewind_phi_fu_36579_p6 = data_764_V_read834_phi_reg_80625.read();
    } else {
        ap_phi_mux_data_764_V_read834_rewind_phi_fu_36579_p6 = data_764_V_read834_rewind_reg_36575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_765_V_read835_phi_phi_fu_80642_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_765_V_read835_phi_phi_fu_80642_p4 = ap_phi_mux_data_765_V_read835_rewind_phi_fu_36593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_765_V_read835_phi_phi_fu_80642_p4 = data_765_V_read.read();
        } else {
            ap_phi_mux_data_765_V_read835_phi_phi_fu_80642_p4 = ap_phi_reg_pp0_iter0_data_765_V_read835_phi_reg_80638.read();
        }
    } else {
        ap_phi_mux_data_765_V_read835_phi_phi_fu_80642_p4 = ap_phi_reg_pp0_iter0_data_765_V_read835_phi_reg_80638.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_765_V_read835_rewind_phi_fu_36593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_765_V_read835_rewind_phi_fu_36593_p6 = data_765_V_read835_phi_reg_80638.read();
    } else {
        ap_phi_mux_data_765_V_read835_rewind_phi_fu_36593_p6 = data_765_V_read835_rewind_reg_36589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_766_V_read836_phi_phi_fu_80655_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_766_V_read836_phi_phi_fu_80655_p4 = ap_phi_mux_data_766_V_read836_rewind_phi_fu_36607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_766_V_read836_phi_phi_fu_80655_p4 = data_766_V_read.read();
        } else {
            ap_phi_mux_data_766_V_read836_phi_phi_fu_80655_p4 = ap_phi_reg_pp0_iter0_data_766_V_read836_phi_reg_80651.read();
        }
    } else {
        ap_phi_mux_data_766_V_read836_phi_phi_fu_80655_p4 = ap_phi_reg_pp0_iter0_data_766_V_read836_phi_reg_80651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_766_V_read836_rewind_phi_fu_36607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_766_V_read836_rewind_phi_fu_36607_p6 = data_766_V_read836_phi_reg_80651.read();
    } else {
        ap_phi_mux_data_766_V_read836_rewind_phi_fu_36607_p6 = data_766_V_read836_rewind_reg_36603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_767_V_read837_phi_phi_fu_80668_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_767_V_read837_phi_phi_fu_80668_p4 = ap_phi_mux_data_767_V_read837_rewind_phi_fu_36621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_767_V_read837_phi_phi_fu_80668_p4 = data_767_V_read.read();
        } else {
            ap_phi_mux_data_767_V_read837_phi_phi_fu_80668_p4 = ap_phi_reg_pp0_iter0_data_767_V_read837_phi_reg_80664.read();
        }
    } else {
        ap_phi_mux_data_767_V_read837_phi_phi_fu_80668_p4 = ap_phi_reg_pp0_iter0_data_767_V_read837_phi_reg_80664.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_767_V_read837_rewind_phi_fu_36621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_767_V_read837_rewind_phi_fu_36621_p6 = data_767_V_read837_phi_reg_80664.read();
    } else {
        ap_phi_mux_data_767_V_read837_rewind_phi_fu_36621_p6 = data_767_V_read837_rewind_reg_36617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_768_V_read838_phi_phi_fu_80681_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_768_V_read838_phi_phi_fu_80681_p4 = ap_phi_mux_data_768_V_read838_rewind_phi_fu_36635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_768_V_read838_phi_phi_fu_80681_p4 = data_768_V_read.read();
        } else {
            ap_phi_mux_data_768_V_read838_phi_phi_fu_80681_p4 = ap_phi_reg_pp0_iter0_data_768_V_read838_phi_reg_80677.read();
        }
    } else {
        ap_phi_mux_data_768_V_read838_phi_phi_fu_80681_p4 = ap_phi_reg_pp0_iter0_data_768_V_read838_phi_reg_80677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_768_V_read838_rewind_phi_fu_36635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_768_V_read838_rewind_phi_fu_36635_p6 = data_768_V_read838_phi_reg_80677.read();
    } else {
        ap_phi_mux_data_768_V_read838_rewind_phi_fu_36635_p6 = data_768_V_read838_rewind_reg_36631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_769_V_read839_phi_phi_fu_80694_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_769_V_read839_phi_phi_fu_80694_p4 = ap_phi_mux_data_769_V_read839_rewind_phi_fu_36649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_769_V_read839_phi_phi_fu_80694_p4 = data_769_V_read.read();
        } else {
            ap_phi_mux_data_769_V_read839_phi_phi_fu_80694_p4 = ap_phi_reg_pp0_iter0_data_769_V_read839_phi_reg_80690.read();
        }
    } else {
        ap_phi_mux_data_769_V_read839_phi_phi_fu_80694_p4 = ap_phi_reg_pp0_iter0_data_769_V_read839_phi_reg_80690.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_769_V_read839_rewind_phi_fu_36649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_769_V_read839_rewind_phi_fu_36649_p6 = data_769_V_read839_phi_reg_80690.read();
    } else {
        ap_phi_mux_data_769_V_read839_rewind_phi_fu_36649_p6 = data_769_V_read839_rewind_reg_36645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_76_V_read146_phi_phi_fu_71685_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_76_V_read146_phi_phi_fu_71685_p4 = ap_phi_mux_data_76_V_read146_rewind_phi_fu_26947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_76_V_read146_phi_phi_fu_71685_p4 = data_76_V_read.read();
        } else {
            ap_phi_mux_data_76_V_read146_phi_phi_fu_71685_p4 = ap_phi_reg_pp0_iter0_data_76_V_read146_phi_reg_71681.read();
        }
    } else {
        ap_phi_mux_data_76_V_read146_phi_phi_fu_71685_p4 = ap_phi_reg_pp0_iter0_data_76_V_read146_phi_reg_71681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_76_V_read146_rewind_phi_fu_26947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_76_V_read146_rewind_phi_fu_26947_p6 = data_76_V_read146_phi_reg_71681.read();
    } else {
        ap_phi_mux_data_76_V_read146_rewind_phi_fu_26947_p6 = data_76_V_read146_rewind_reg_26943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_770_V_read840_phi_phi_fu_80707_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_770_V_read840_phi_phi_fu_80707_p4 = ap_phi_mux_data_770_V_read840_rewind_phi_fu_36663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_770_V_read840_phi_phi_fu_80707_p4 = data_770_V_read.read();
        } else {
            ap_phi_mux_data_770_V_read840_phi_phi_fu_80707_p4 = ap_phi_reg_pp0_iter0_data_770_V_read840_phi_reg_80703.read();
        }
    } else {
        ap_phi_mux_data_770_V_read840_phi_phi_fu_80707_p4 = ap_phi_reg_pp0_iter0_data_770_V_read840_phi_reg_80703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_770_V_read840_rewind_phi_fu_36663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_770_V_read840_rewind_phi_fu_36663_p6 = data_770_V_read840_phi_reg_80703.read();
    } else {
        ap_phi_mux_data_770_V_read840_rewind_phi_fu_36663_p6 = data_770_V_read840_rewind_reg_36659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_771_V_read841_phi_phi_fu_80720_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_771_V_read841_phi_phi_fu_80720_p4 = ap_phi_mux_data_771_V_read841_rewind_phi_fu_36677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_771_V_read841_phi_phi_fu_80720_p4 = data_771_V_read.read();
        } else {
            ap_phi_mux_data_771_V_read841_phi_phi_fu_80720_p4 = ap_phi_reg_pp0_iter0_data_771_V_read841_phi_reg_80716.read();
        }
    } else {
        ap_phi_mux_data_771_V_read841_phi_phi_fu_80720_p4 = ap_phi_reg_pp0_iter0_data_771_V_read841_phi_reg_80716.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_771_V_read841_rewind_phi_fu_36677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_771_V_read841_rewind_phi_fu_36677_p6 = data_771_V_read841_phi_reg_80716.read();
    } else {
        ap_phi_mux_data_771_V_read841_rewind_phi_fu_36677_p6 = data_771_V_read841_rewind_reg_36673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_772_V_read842_phi_phi_fu_80733_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_772_V_read842_phi_phi_fu_80733_p4 = ap_phi_mux_data_772_V_read842_rewind_phi_fu_36691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_772_V_read842_phi_phi_fu_80733_p4 = data_772_V_read.read();
        } else {
            ap_phi_mux_data_772_V_read842_phi_phi_fu_80733_p4 = ap_phi_reg_pp0_iter0_data_772_V_read842_phi_reg_80729.read();
        }
    } else {
        ap_phi_mux_data_772_V_read842_phi_phi_fu_80733_p4 = ap_phi_reg_pp0_iter0_data_772_V_read842_phi_reg_80729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_772_V_read842_rewind_phi_fu_36691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_772_V_read842_rewind_phi_fu_36691_p6 = data_772_V_read842_phi_reg_80729.read();
    } else {
        ap_phi_mux_data_772_V_read842_rewind_phi_fu_36691_p6 = data_772_V_read842_rewind_reg_36687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_773_V_read843_phi_phi_fu_80746_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_773_V_read843_phi_phi_fu_80746_p4 = ap_phi_mux_data_773_V_read843_rewind_phi_fu_36705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_773_V_read843_phi_phi_fu_80746_p4 = data_773_V_read.read();
        } else {
            ap_phi_mux_data_773_V_read843_phi_phi_fu_80746_p4 = ap_phi_reg_pp0_iter0_data_773_V_read843_phi_reg_80742.read();
        }
    } else {
        ap_phi_mux_data_773_V_read843_phi_phi_fu_80746_p4 = ap_phi_reg_pp0_iter0_data_773_V_read843_phi_reg_80742.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_773_V_read843_rewind_phi_fu_36705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_773_V_read843_rewind_phi_fu_36705_p6 = data_773_V_read843_phi_reg_80742.read();
    } else {
        ap_phi_mux_data_773_V_read843_rewind_phi_fu_36705_p6 = data_773_V_read843_rewind_reg_36701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_774_V_read844_phi_phi_fu_80759_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_774_V_read844_phi_phi_fu_80759_p4 = ap_phi_mux_data_774_V_read844_rewind_phi_fu_36719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_774_V_read844_phi_phi_fu_80759_p4 = data_774_V_read.read();
        } else {
            ap_phi_mux_data_774_V_read844_phi_phi_fu_80759_p4 = ap_phi_reg_pp0_iter0_data_774_V_read844_phi_reg_80755.read();
        }
    } else {
        ap_phi_mux_data_774_V_read844_phi_phi_fu_80759_p4 = ap_phi_reg_pp0_iter0_data_774_V_read844_phi_reg_80755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_774_V_read844_rewind_phi_fu_36719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_774_V_read844_rewind_phi_fu_36719_p6 = data_774_V_read844_phi_reg_80755.read();
    } else {
        ap_phi_mux_data_774_V_read844_rewind_phi_fu_36719_p6 = data_774_V_read844_rewind_reg_36715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_775_V_read845_phi_phi_fu_80772_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_775_V_read845_phi_phi_fu_80772_p4 = ap_phi_mux_data_775_V_read845_rewind_phi_fu_36733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_775_V_read845_phi_phi_fu_80772_p4 = data_775_V_read.read();
        } else {
            ap_phi_mux_data_775_V_read845_phi_phi_fu_80772_p4 = ap_phi_reg_pp0_iter0_data_775_V_read845_phi_reg_80768.read();
        }
    } else {
        ap_phi_mux_data_775_V_read845_phi_phi_fu_80772_p4 = ap_phi_reg_pp0_iter0_data_775_V_read845_phi_reg_80768.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_775_V_read845_rewind_phi_fu_36733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_775_V_read845_rewind_phi_fu_36733_p6 = data_775_V_read845_phi_reg_80768.read();
    } else {
        ap_phi_mux_data_775_V_read845_rewind_phi_fu_36733_p6 = data_775_V_read845_rewind_reg_36729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_776_V_read846_phi_phi_fu_80785_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_776_V_read846_phi_phi_fu_80785_p4 = ap_phi_mux_data_776_V_read846_rewind_phi_fu_36747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_776_V_read846_phi_phi_fu_80785_p4 = data_776_V_read.read();
        } else {
            ap_phi_mux_data_776_V_read846_phi_phi_fu_80785_p4 = ap_phi_reg_pp0_iter0_data_776_V_read846_phi_reg_80781.read();
        }
    } else {
        ap_phi_mux_data_776_V_read846_phi_phi_fu_80785_p4 = ap_phi_reg_pp0_iter0_data_776_V_read846_phi_reg_80781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_776_V_read846_rewind_phi_fu_36747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_776_V_read846_rewind_phi_fu_36747_p6 = data_776_V_read846_phi_reg_80781.read();
    } else {
        ap_phi_mux_data_776_V_read846_rewind_phi_fu_36747_p6 = data_776_V_read846_rewind_reg_36743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_777_V_read847_phi_phi_fu_80798_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_777_V_read847_phi_phi_fu_80798_p4 = ap_phi_mux_data_777_V_read847_rewind_phi_fu_36761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_777_V_read847_phi_phi_fu_80798_p4 = data_777_V_read.read();
        } else {
            ap_phi_mux_data_777_V_read847_phi_phi_fu_80798_p4 = ap_phi_reg_pp0_iter0_data_777_V_read847_phi_reg_80794.read();
        }
    } else {
        ap_phi_mux_data_777_V_read847_phi_phi_fu_80798_p4 = ap_phi_reg_pp0_iter0_data_777_V_read847_phi_reg_80794.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_777_V_read847_rewind_phi_fu_36761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_777_V_read847_rewind_phi_fu_36761_p6 = data_777_V_read847_phi_reg_80794.read();
    } else {
        ap_phi_mux_data_777_V_read847_rewind_phi_fu_36761_p6 = data_777_V_read847_rewind_reg_36757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_778_V_read848_phi_phi_fu_80811_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_778_V_read848_phi_phi_fu_80811_p4 = ap_phi_mux_data_778_V_read848_rewind_phi_fu_36775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_778_V_read848_phi_phi_fu_80811_p4 = data_778_V_read.read();
        } else {
            ap_phi_mux_data_778_V_read848_phi_phi_fu_80811_p4 = ap_phi_reg_pp0_iter0_data_778_V_read848_phi_reg_80807.read();
        }
    } else {
        ap_phi_mux_data_778_V_read848_phi_phi_fu_80811_p4 = ap_phi_reg_pp0_iter0_data_778_V_read848_phi_reg_80807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_778_V_read848_rewind_phi_fu_36775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_778_V_read848_rewind_phi_fu_36775_p6 = data_778_V_read848_phi_reg_80807.read();
    } else {
        ap_phi_mux_data_778_V_read848_rewind_phi_fu_36775_p6 = data_778_V_read848_rewind_reg_36771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_779_V_read849_phi_phi_fu_80824_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_779_V_read849_phi_phi_fu_80824_p4 = ap_phi_mux_data_779_V_read849_rewind_phi_fu_36789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_779_V_read849_phi_phi_fu_80824_p4 = data_779_V_read.read();
        } else {
            ap_phi_mux_data_779_V_read849_phi_phi_fu_80824_p4 = ap_phi_reg_pp0_iter0_data_779_V_read849_phi_reg_80820.read();
        }
    } else {
        ap_phi_mux_data_779_V_read849_phi_phi_fu_80824_p4 = ap_phi_reg_pp0_iter0_data_779_V_read849_phi_reg_80820.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_779_V_read849_rewind_phi_fu_36789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_779_V_read849_rewind_phi_fu_36789_p6 = data_779_V_read849_phi_reg_80820.read();
    } else {
        ap_phi_mux_data_779_V_read849_rewind_phi_fu_36789_p6 = data_779_V_read849_rewind_reg_36785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_77_V_read147_phi_phi_fu_71698_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_77_V_read147_phi_phi_fu_71698_p4 = ap_phi_mux_data_77_V_read147_rewind_phi_fu_26961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_77_V_read147_phi_phi_fu_71698_p4 = data_77_V_read.read();
        } else {
            ap_phi_mux_data_77_V_read147_phi_phi_fu_71698_p4 = ap_phi_reg_pp0_iter0_data_77_V_read147_phi_reg_71694.read();
        }
    } else {
        ap_phi_mux_data_77_V_read147_phi_phi_fu_71698_p4 = ap_phi_reg_pp0_iter0_data_77_V_read147_phi_reg_71694.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_77_V_read147_rewind_phi_fu_26961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_77_V_read147_rewind_phi_fu_26961_p6 = data_77_V_read147_phi_reg_71694.read();
    } else {
        ap_phi_mux_data_77_V_read147_rewind_phi_fu_26961_p6 = data_77_V_read147_rewind_reg_26957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_780_V_read850_phi_phi_fu_80837_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_780_V_read850_phi_phi_fu_80837_p4 = ap_phi_mux_data_780_V_read850_rewind_phi_fu_36803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_780_V_read850_phi_phi_fu_80837_p4 = data_780_V_read.read();
        } else {
            ap_phi_mux_data_780_V_read850_phi_phi_fu_80837_p4 = ap_phi_reg_pp0_iter0_data_780_V_read850_phi_reg_80833.read();
        }
    } else {
        ap_phi_mux_data_780_V_read850_phi_phi_fu_80837_p4 = ap_phi_reg_pp0_iter0_data_780_V_read850_phi_reg_80833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_780_V_read850_rewind_phi_fu_36803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_780_V_read850_rewind_phi_fu_36803_p6 = data_780_V_read850_phi_reg_80833.read();
    } else {
        ap_phi_mux_data_780_V_read850_rewind_phi_fu_36803_p6 = data_780_V_read850_rewind_reg_36799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_781_V_read851_phi_phi_fu_80850_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_781_V_read851_phi_phi_fu_80850_p4 = ap_phi_mux_data_781_V_read851_rewind_phi_fu_36817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_781_V_read851_phi_phi_fu_80850_p4 = data_781_V_read.read();
        } else {
            ap_phi_mux_data_781_V_read851_phi_phi_fu_80850_p4 = ap_phi_reg_pp0_iter0_data_781_V_read851_phi_reg_80846.read();
        }
    } else {
        ap_phi_mux_data_781_V_read851_phi_phi_fu_80850_p4 = ap_phi_reg_pp0_iter0_data_781_V_read851_phi_reg_80846.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_781_V_read851_rewind_phi_fu_36817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_781_V_read851_rewind_phi_fu_36817_p6 = data_781_V_read851_phi_reg_80846.read();
    } else {
        ap_phi_mux_data_781_V_read851_rewind_phi_fu_36817_p6 = data_781_V_read851_rewind_reg_36813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_782_V_read852_phi_phi_fu_80863_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_782_V_read852_phi_phi_fu_80863_p4 = ap_phi_mux_data_782_V_read852_rewind_phi_fu_36831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_782_V_read852_phi_phi_fu_80863_p4 = data_782_V_read.read();
        } else {
            ap_phi_mux_data_782_V_read852_phi_phi_fu_80863_p4 = ap_phi_reg_pp0_iter0_data_782_V_read852_phi_reg_80859.read();
        }
    } else {
        ap_phi_mux_data_782_V_read852_phi_phi_fu_80863_p4 = ap_phi_reg_pp0_iter0_data_782_V_read852_phi_reg_80859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_782_V_read852_rewind_phi_fu_36831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_782_V_read852_rewind_phi_fu_36831_p6 = data_782_V_read852_phi_reg_80859.read();
    } else {
        ap_phi_mux_data_782_V_read852_rewind_phi_fu_36831_p6 = data_782_V_read852_rewind_reg_36827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_783_V_read853_phi_phi_fu_80876_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_783_V_read853_phi_phi_fu_80876_p4 = ap_phi_mux_data_783_V_read853_rewind_phi_fu_36845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_783_V_read853_phi_phi_fu_80876_p4 = data_783_V_read.read();
        } else {
            ap_phi_mux_data_783_V_read853_phi_phi_fu_80876_p4 = ap_phi_reg_pp0_iter0_data_783_V_read853_phi_reg_80872.read();
        }
    } else {
        ap_phi_mux_data_783_V_read853_phi_phi_fu_80876_p4 = ap_phi_reg_pp0_iter0_data_783_V_read853_phi_reg_80872.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_783_V_read853_rewind_phi_fu_36845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_783_V_read853_rewind_phi_fu_36845_p6 = data_783_V_read853_phi_reg_80872.read();
    } else {
        ap_phi_mux_data_783_V_read853_rewind_phi_fu_36845_p6 = data_783_V_read853_rewind_reg_36841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_784_V_read854_phi_phi_fu_80889_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_784_V_read854_phi_phi_fu_80889_p4 = ap_phi_mux_data_784_V_read854_rewind_phi_fu_36859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_784_V_read854_phi_phi_fu_80889_p4 = data_784_V_read.read();
        } else {
            ap_phi_mux_data_784_V_read854_phi_phi_fu_80889_p4 = ap_phi_reg_pp0_iter0_data_784_V_read854_phi_reg_80885.read();
        }
    } else {
        ap_phi_mux_data_784_V_read854_phi_phi_fu_80889_p4 = ap_phi_reg_pp0_iter0_data_784_V_read854_phi_reg_80885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_784_V_read854_rewind_phi_fu_36859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_784_V_read854_rewind_phi_fu_36859_p6 = data_784_V_read854_phi_reg_80885.read();
    } else {
        ap_phi_mux_data_784_V_read854_rewind_phi_fu_36859_p6 = data_784_V_read854_rewind_reg_36855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_785_V_read855_phi_phi_fu_80902_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_785_V_read855_phi_phi_fu_80902_p4 = ap_phi_mux_data_785_V_read855_rewind_phi_fu_36873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_785_V_read855_phi_phi_fu_80902_p4 = data_785_V_read.read();
        } else {
            ap_phi_mux_data_785_V_read855_phi_phi_fu_80902_p4 = ap_phi_reg_pp0_iter0_data_785_V_read855_phi_reg_80898.read();
        }
    } else {
        ap_phi_mux_data_785_V_read855_phi_phi_fu_80902_p4 = ap_phi_reg_pp0_iter0_data_785_V_read855_phi_reg_80898.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_785_V_read855_rewind_phi_fu_36873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_785_V_read855_rewind_phi_fu_36873_p6 = data_785_V_read855_phi_reg_80898.read();
    } else {
        ap_phi_mux_data_785_V_read855_rewind_phi_fu_36873_p6 = data_785_V_read855_rewind_reg_36869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_786_V_read856_phi_phi_fu_80915_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_786_V_read856_phi_phi_fu_80915_p4 = ap_phi_mux_data_786_V_read856_rewind_phi_fu_36887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_786_V_read856_phi_phi_fu_80915_p4 = data_786_V_read.read();
        } else {
            ap_phi_mux_data_786_V_read856_phi_phi_fu_80915_p4 = ap_phi_reg_pp0_iter0_data_786_V_read856_phi_reg_80911.read();
        }
    } else {
        ap_phi_mux_data_786_V_read856_phi_phi_fu_80915_p4 = ap_phi_reg_pp0_iter0_data_786_V_read856_phi_reg_80911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_786_V_read856_rewind_phi_fu_36887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_786_V_read856_rewind_phi_fu_36887_p6 = data_786_V_read856_phi_reg_80911.read();
    } else {
        ap_phi_mux_data_786_V_read856_rewind_phi_fu_36887_p6 = data_786_V_read856_rewind_reg_36883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_787_V_read857_phi_phi_fu_80928_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_787_V_read857_phi_phi_fu_80928_p4 = ap_phi_mux_data_787_V_read857_rewind_phi_fu_36901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_787_V_read857_phi_phi_fu_80928_p4 = data_787_V_read.read();
        } else {
            ap_phi_mux_data_787_V_read857_phi_phi_fu_80928_p4 = ap_phi_reg_pp0_iter0_data_787_V_read857_phi_reg_80924.read();
        }
    } else {
        ap_phi_mux_data_787_V_read857_phi_phi_fu_80928_p4 = ap_phi_reg_pp0_iter0_data_787_V_read857_phi_reg_80924.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_787_V_read857_rewind_phi_fu_36901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_787_V_read857_rewind_phi_fu_36901_p6 = data_787_V_read857_phi_reg_80924.read();
    } else {
        ap_phi_mux_data_787_V_read857_rewind_phi_fu_36901_p6 = data_787_V_read857_rewind_reg_36897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_788_V_read858_phi_phi_fu_80941_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_788_V_read858_phi_phi_fu_80941_p4 = ap_phi_mux_data_788_V_read858_rewind_phi_fu_36915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_788_V_read858_phi_phi_fu_80941_p4 = data_788_V_read.read();
        } else {
            ap_phi_mux_data_788_V_read858_phi_phi_fu_80941_p4 = ap_phi_reg_pp0_iter0_data_788_V_read858_phi_reg_80937.read();
        }
    } else {
        ap_phi_mux_data_788_V_read858_phi_phi_fu_80941_p4 = ap_phi_reg_pp0_iter0_data_788_V_read858_phi_reg_80937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_788_V_read858_rewind_phi_fu_36915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_788_V_read858_rewind_phi_fu_36915_p6 = data_788_V_read858_phi_reg_80937.read();
    } else {
        ap_phi_mux_data_788_V_read858_rewind_phi_fu_36915_p6 = data_788_V_read858_rewind_reg_36911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_789_V_read859_phi_phi_fu_80954_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_789_V_read859_phi_phi_fu_80954_p4 = ap_phi_mux_data_789_V_read859_rewind_phi_fu_36929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_789_V_read859_phi_phi_fu_80954_p4 = data_789_V_read.read();
        } else {
            ap_phi_mux_data_789_V_read859_phi_phi_fu_80954_p4 = ap_phi_reg_pp0_iter0_data_789_V_read859_phi_reg_80950.read();
        }
    } else {
        ap_phi_mux_data_789_V_read859_phi_phi_fu_80954_p4 = ap_phi_reg_pp0_iter0_data_789_V_read859_phi_reg_80950.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_789_V_read859_rewind_phi_fu_36929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_789_V_read859_rewind_phi_fu_36929_p6 = data_789_V_read859_phi_reg_80950.read();
    } else {
        ap_phi_mux_data_789_V_read859_rewind_phi_fu_36929_p6 = data_789_V_read859_rewind_reg_36925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_78_V_read148_phi_phi_fu_71711_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_78_V_read148_phi_phi_fu_71711_p4 = ap_phi_mux_data_78_V_read148_rewind_phi_fu_26975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_78_V_read148_phi_phi_fu_71711_p4 = data_78_V_read.read();
        } else {
            ap_phi_mux_data_78_V_read148_phi_phi_fu_71711_p4 = ap_phi_reg_pp0_iter0_data_78_V_read148_phi_reg_71707.read();
        }
    } else {
        ap_phi_mux_data_78_V_read148_phi_phi_fu_71711_p4 = ap_phi_reg_pp0_iter0_data_78_V_read148_phi_reg_71707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_78_V_read148_rewind_phi_fu_26975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_78_V_read148_rewind_phi_fu_26975_p6 = data_78_V_read148_phi_reg_71707.read();
    } else {
        ap_phi_mux_data_78_V_read148_rewind_phi_fu_26975_p6 = data_78_V_read148_rewind_reg_26971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_790_V_read860_phi_phi_fu_80967_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_790_V_read860_phi_phi_fu_80967_p4 = ap_phi_mux_data_790_V_read860_rewind_phi_fu_36943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_790_V_read860_phi_phi_fu_80967_p4 = data_790_V_read.read();
        } else {
            ap_phi_mux_data_790_V_read860_phi_phi_fu_80967_p4 = ap_phi_reg_pp0_iter0_data_790_V_read860_phi_reg_80963.read();
        }
    } else {
        ap_phi_mux_data_790_V_read860_phi_phi_fu_80967_p4 = ap_phi_reg_pp0_iter0_data_790_V_read860_phi_reg_80963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_790_V_read860_rewind_phi_fu_36943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_790_V_read860_rewind_phi_fu_36943_p6 = data_790_V_read860_phi_reg_80963.read();
    } else {
        ap_phi_mux_data_790_V_read860_rewind_phi_fu_36943_p6 = data_790_V_read860_rewind_reg_36939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_791_V_read861_phi_phi_fu_80980_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_791_V_read861_phi_phi_fu_80980_p4 = ap_phi_mux_data_791_V_read861_rewind_phi_fu_36957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_791_V_read861_phi_phi_fu_80980_p4 = data_791_V_read.read();
        } else {
            ap_phi_mux_data_791_V_read861_phi_phi_fu_80980_p4 = ap_phi_reg_pp0_iter0_data_791_V_read861_phi_reg_80976.read();
        }
    } else {
        ap_phi_mux_data_791_V_read861_phi_phi_fu_80980_p4 = ap_phi_reg_pp0_iter0_data_791_V_read861_phi_reg_80976.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_791_V_read861_rewind_phi_fu_36957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_791_V_read861_rewind_phi_fu_36957_p6 = data_791_V_read861_phi_reg_80976.read();
    } else {
        ap_phi_mux_data_791_V_read861_rewind_phi_fu_36957_p6 = data_791_V_read861_rewind_reg_36953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_792_V_read862_phi_phi_fu_80993_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_792_V_read862_phi_phi_fu_80993_p4 = ap_phi_mux_data_792_V_read862_rewind_phi_fu_36971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_792_V_read862_phi_phi_fu_80993_p4 = data_792_V_read.read();
        } else {
            ap_phi_mux_data_792_V_read862_phi_phi_fu_80993_p4 = ap_phi_reg_pp0_iter0_data_792_V_read862_phi_reg_80989.read();
        }
    } else {
        ap_phi_mux_data_792_V_read862_phi_phi_fu_80993_p4 = ap_phi_reg_pp0_iter0_data_792_V_read862_phi_reg_80989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_792_V_read862_rewind_phi_fu_36971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_792_V_read862_rewind_phi_fu_36971_p6 = data_792_V_read862_phi_reg_80989.read();
    } else {
        ap_phi_mux_data_792_V_read862_rewind_phi_fu_36971_p6 = data_792_V_read862_rewind_reg_36967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_793_V_read863_phi_phi_fu_81006_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_793_V_read863_phi_phi_fu_81006_p4 = ap_phi_mux_data_793_V_read863_rewind_phi_fu_36985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_793_V_read863_phi_phi_fu_81006_p4 = data_793_V_read.read();
        } else {
            ap_phi_mux_data_793_V_read863_phi_phi_fu_81006_p4 = ap_phi_reg_pp0_iter0_data_793_V_read863_phi_reg_81002.read();
        }
    } else {
        ap_phi_mux_data_793_V_read863_phi_phi_fu_81006_p4 = ap_phi_reg_pp0_iter0_data_793_V_read863_phi_reg_81002.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_793_V_read863_rewind_phi_fu_36985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_793_V_read863_rewind_phi_fu_36985_p6 = data_793_V_read863_phi_reg_81002.read();
    } else {
        ap_phi_mux_data_793_V_read863_rewind_phi_fu_36985_p6 = data_793_V_read863_rewind_reg_36981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_794_V_read864_phi_phi_fu_81019_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_794_V_read864_phi_phi_fu_81019_p4 = ap_phi_mux_data_794_V_read864_rewind_phi_fu_36999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_794_V_read864_phi_phi_fu_81019_p4 = data_794_V_read.read();
        } else {
            ap_phi_mux_data_794_V_read864_phi_phi_fu_81019_p4 = ap_phi_reg_pp0_iter0_data_794_V_read864_phi_reg_81015.read();
        }
    } else {
        ap_phi_mux_data_794_V_read864_phi_phi_fu_81019_p4 = ap_phi_reg_pp0_iter0_data_794_V_read864_phi_reg_81015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_794_V_read864_rewind_phi_fu_36999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_794_V_read864_rewind_phi_fu_36999_p6 = data_794_V_read864_phi_reg_81015.read();
    } else {
        ap_phi_mux_data_794_V_read864_rewind_phi_fu_36999_p6 = data_794_V_read864_rewind_reg_36995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_795_V_read865_phi_phi_fu_81032_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_795_V_read865_phi_phi_fu_81032_p4 = ap_phi_mux_data_795_V_read865_rewind_phi_fu_37013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_795_V_read865_phi_phi_fu_81032_p4 = data_795_V_read.read();
        } else {
            ap_phi_mux_data_795_V_read865_phi_phi_fu_81032_p4 = ap_phi_reg_pp0_iter0_data_795_V_read865_phi_reg_81028.read();
        }
    } else {
        ap_phi_mux_data_795_V_read865_phi_phi_fu_81032_p4 = ap_phi_reg_pp0_iter0_data_795_V_read865_phi_reg_81028.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_795_V_read865_rewind_phi_fu_37013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_795_V_read865_rewind_phi_fu_37013_p6 = data_795_V_read865_phi_reg_81028.read();
    } else {
        ap_phi_mux_data_795_V_read865_rewind_phi_fu_37013_p6 = data_795_V_read865_rewind_reg_37009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_796_V_read866_phi_phi_fu_81045_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_796_V_read866_phi_phi_fu_81045_p4 = ap_phi_mux_data_796_V_read866_rewind_phi_fu_37027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_796_V_read866_phi_phi_fu_81045_p4 = data_796_V_read.read();
        } else {
            ap_phi_mux_data_796_V_read866_phi_phi_fu_81045_p4 = ap_phi_reg_pp0_iter0_data_796_V_read866_phi_reg_81041.read();
        }
    } else {
        ap_phi_mux_data_796_V_read866_phi_phi_fu_81045_p4 = ap_phi_reg_pp0_iter0_data_796_V_read866_phi_reg_81041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_796_V_read866_rewind_phi_fu_37027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_796_V_read866_rewind_phi_fu_37027_p6 = data_796_V_read866_phi_reg_81041.read();
    } else {
        ap_phi_mux_data_796_V_read866_rewind_phi_fu_37027_p6 = data_796_V_read866_rewind_reg_37023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_797_V_read867_phi_phi_fu_81058_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_797_V_read867_phi_phi_fu_81058_p4 = ap_phi_mux_data_797_V_read867_rewind_phi_fu_37041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_797_V_read867_phi_phi_fu_81058_p4 = data_797_V_read.read();
        } else {
            ap_phi_mux_data_797_V_read867_phi_phi_fu_81058_p4 = ap_phi_reg_pp0_iter0_data_797_V_read867_phi_reg_81054.read();
        }
    } else {
        ap_phi_mux_data_797_V_read867_phi_phi_fu_81058_p4 = ap_phi_reg_pp0_iter0_data_797_V_read867_phi_reg_81054.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_797_V_read867_rewind_phi_fu_37041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_797_V_read867_rewind_phi_fu_37041_p6 = data_797_V_read867_phi_reg_81054.read();
    } else {
        ap_phi_mux_data_797_V_read867_rewind_phi_fu_37041_p6 = data_797_V_read867_rewind_reg_37037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_798_V_read868_phi_phi_fu_81071_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_798_V_read868_phi_phi_fu_81071_p4 = ap_phi_mux_data_798_V_read868_rewind_phi_fu_37055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_798_V_read868_phi_phi_fu_81071_p4 = data_798_V_read.read();
        } else {
            ap_phi_mux_data_798_V_read868_phi_phi_fu_81071_p4 = ap_phi_reg_pp0_iter0_data_798_V_read868_phi_reg_81067.read();
        }
    } else {
        ap_phi_mux_data_798_V_read868_phi_phi_fu_81071_p4 = ap_phi_reg_pp0_iter0_data_798_V_read868_phi_reg_81067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_798_V_read868_rewind_phi_fu_37055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_798_V_read868_rewind_phi_fu_37055_p6 = data_798_V_read868_phi_reg_81067.read();
    } else {
        ap_phi_mux_data_798_V_read868_rewind_phi_fu_37055_p6 = data_798_V_read868_rewind_reg_37051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_799_V_read869_phi_phi_fu_81084_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_799_V_read869_phi_phi_fu_81084_p4 = ap_phi_mux_data_799_V_read869_rewind_phi_fu_37069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_799_V_read869_phi_phi_fu_81084_p4 = data_799_V_read.read();
        } else {
            ap_phi_mux_data_799_V_read869_phi_phi_fu_81084_p4 = ap_phi_reg_pp0_iter0_data_799_V_read869_phi_reg_81080.read();
        }
    } else {
        ap_phi_mux_data_799_V_read869_phi_phi_fu_81084_p4 = ap_phi_reg_pp0_iter0_data_799_V_read869_phi_reg_81080.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_799_V_read869_rewind_phi_fu_37069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_799_V_read869_rewind_phi_fu_37069_p6 = data_799_V_read869_phi_reg_81080.read();
    } else {
        ap_phi_mux_data_799_V_read869_rewind_phi_fu_37069_p6 = data_799_V_read869_rewind_reg_37065.read();
    }
}

}

