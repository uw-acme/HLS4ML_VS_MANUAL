#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1982_V_read2052_phi_phi_fu_99785_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1982_V_read2052_phi_phi_fu_99785_p4 = ap_phi_mux_data_1982_V_read2052_rewind_phi_fu_56953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1982_V_read2052_phi_phi_fu_99785_p4 = data_1982_V_read.read();
        } else {
            ap_phi_mux_data_1982_V_read2052_phi_phi_fu_99785_p4 = ap_phi_reg_pp0_iter0_data_1982_V_read2052_phi_reg_99781.read();
        }
    } else {
        ap_phi_mux_data_1982_V_read2052_phi_phi_fu_99785_p4 = ap_phi_reg_pp0_iter0_data_1982_V_read2052_phi_reg_99781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1982_V_read2052_rewind_phi_fu_56953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1982_V_read2052_rewind_phi_fu_56953_p6 = data_1982_V_read2052_phi_reg_99781.read();
    } else {
        ap_phi_mux_data_1982_V_read2052_rewind_phi_fu_56953_p6 = data_1982_V_read2052_rewind_reg_56949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1983_V_read2053_phi_phi_fu_99798_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1983_V_read2053_phi_phi_fu_99798_p4 = ap_phi_mux_data_1983_V_read2053_rewind_phi_fu_56967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1983_V_read2053_phi_phi_fu_99798_p4 = data_1983_V_read.read();
        } else {
            ap_phi_mux_data_1983_V_read2053_phi_phi_fu_99798_p4 = ap_phi_reg_pp0_iter0_data_1983_V_read2053_phi_reg_99794.read();
        }
    } else {
        ap_phi_mux_data_1983_V_read2053_phi_phi_fu_99798_p4 = ap_phi_reg_pp0_iter0_data_1983_V_read2053_phi_reg_99794.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1983_V_read2053_rewind_phi_fu_56967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1983_V_read2053_rewind_phi_fu_56967_p6 = data_1983_V_read2053_phi_reg_99794.read();
    } else {
        ap_phi_mux_data_1983_V_read2053_rewind_phi_fu_56967_p6 = data_1983_V_read2053_rewind_reg_56963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1984_V_read2054_phi_phi_fu_99811_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1984_V_read2054_phi_phi_fu_99811_p4 = ap_phi_mux_data_1984_V_read2054_rewind_phi_fu_56981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1984_V_read2054_phi_phi_fu_99811_p4 = data_1984_V_read.read();
        } else {
            ap_phi_mux_data_1984_V_read2054_phi_phi_fu_99811_p4 = ap_phi_reg_pp0_iter0_data_1984_V_read2054_phi_reg_99807.read();
        }
    } else {
        ap_phi_mux_data_1984_V_read2054_phi_phi_fu_99811_p4 = ap_phi_reg_pp0_iter0_data_1984_V_read2054_phi_reg_99807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1984_V_read2054_rewind_phi_fu_56981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1984_V_read2054_rewind_phi_fu_56981_p6 = data_1984_V_read2054_phi_reg_99807.read();
    } else {
        ap_phi_mux_data_1984_V_read2054_rewind_phi_fu_56981_p6 = data_1984_V_read2054_rewind_reg_56977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1985_V_read2055_phi_phi_fu_99824_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1985_V_read2055_phi_phi_fu_99824_p4 = ap_phi_mux_data_1985_V_read2055_rewind_phi_fu_56995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1985_V_read2055_phi_phi_fu_99824_p4 = data_1985_V_read.read();
        } else {
            ap_phi_mux_data_1985_V_read2055_phi_phi_fu_99824_p4 = ap_phi_reg_pp0_iter0_data_1985_V_read2055_phi_reg_99820.read();
        }
    } else {
        ap_phi_mux_data_1985_V_read2055_phi_phi_fu_99824_p4 = ap_phi_reg_pp0_iter0_data_1985_V_read2055_phi_reg_99820.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1985_V_read2055_rewind_phi_fu_56995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1985_V_read2055_rewind_phi_fu_56995_p6 = data_1985_V_read2055_phi_reg_99820.read();
    } else {
        ap_phi_mux_data_1985_V_read2055_rewind_phi_fu_56995_p6 = data_1985_V_read2055_rewind_reg_56991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1986_V_read2056_phi_phi_fu_99837_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1986_V_read2056_phi_phi_fu_99837_p4 = ap_phi_mux_data_1986_V_read2056_rewind_phi_fu_57009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1986_V_read2056_phi_phi_fu_99837_p4 = data_1986_V_read.read();
        } else {
            ap_phi_mux_data_1986_V_read2056_phi_phi_fu_99837_p4 = ap_phi_reg_pp0_iter0_data_1986_V_read2056_phi_reg_99833.read();
        }
    } else {
        ap_phi_mux_data_1986_V_read2056_phi_phi_fu_99837_p4 = ap_phi_reg_pp0_iter0_data_1986_V_read2056_phi_reg_99833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1986_V_read2056_rewind_phi_fu_57009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1986_V_read2056_rewind_phi_fu_57009_p6 = data_1986_V_read2056_phi_reg_99833.read();
    } else {
        ap_phi_mux_data_1986_V_read2056_rewind_phi_fu_57009_p6 = data_1986_V_read2056_rewind_reg_57005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1987_V_read2057_phi_phi_fu_99850_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1987_V_read2057_phi_phi_fu_99850_p4 = ap_phi_mux_data_1987_V_read2057_rewind_phi_fu_57023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1987_V_read2057_phi_phi_fu_99850_p4 = data_1987_V_read.read();
        } else {
            ap_phi_mux_data_1987_V_read2057_phi_phi_fu_99850_p4 = ap_phi_reg_pp0_iter0_data_1987_V_read2057_phi_reg_99846.read();
        }
    } else {
        ap_phi_mux_data_1987_V_read2057_phi_phi_fu_99850_p4 = ap_phi_reg_pp0_iter0_data_1987_V_read2057_phi_reg_99846.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1987_V_read2057_rewind_phi_fu_57023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1987_V_read2057_rewind_phi_fu_57023_p6 = data_1987_V_read2057_phi_reg_99846.read();
    } else {
        ap_phi_mux_data_1987_V_read2057_rewind_phi_fu_57023_p6 = data_1987_V_read2057_rewind_reg_57019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1988_V_read2058_phi_phi_fu_99863_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1988_V_read2058_phi_phi_fu_99863_p4 = ap_phi_mux_data_1988_V_read2058_rewind_phi_fu_57037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1988_V_read2058_phi_phi_fu_99863_p4 = data_1988_V_read.read();
        } else {
            ap_phi_mux_data_1988_V_read2058_phi_phi_fu_99863_p4 = ap_phi_reg_pp0_iter0_data_1988_V_read2058_phi_reg_99859.read();
        }
    } else {
        ap_phi_mux_data_1988_V_read2058_phi_phi_fu_99863_p4 = ap_phi_reg_pp0_iter0_data_1988_V_read2058_phi_reg_99859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1988_V_read2058_rewind_phi_fu_57037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1988_V_read2058_rewind_phi_fu_57037_p6 = data_1988_V_read2058_phi_reg_99859.read();
    } else {
        ap_phi_mux_data_1988_V_read2058_rewind_phi_fu_57037_p6 = data_1988_V_read2058_rewind_reg_57033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1989_V_read2059_phi_phi_fu_99876_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1989_V_read2059_phi_phi_fu_99876_p4 = ap_phi_mux_data_1989_V_read2059_rewind_phi_fu_57051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1989_V_read2059_phi_phi_fu_99876_p4 = data_1989_V_read.read();
        } else {
            ap_phi_mux_data_1989_V_read2059_phi_phi_fu_99876_p4 = ap_phi_reg_pp0_iter0_data_1989_V_read2059_phi_reg_99872.read();
        }
    } else {
        ap_phi_mux_data_1989_V_read2059_phi_phi_fu_99876_p4 = ap_phi_reg_pp0_iter0_data_1989_V_read2059_phi_reg_99872.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1989_V_read2059_rewind_phi_fu_57051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1989_V_read2059_rewind_phi_fu_57051_p6 = data_1989_V_read2059_phi_reg_99872.read();
    } else {
        ap_phi_mux_data_1989_V_read2059_rewind_phi_fu_57051_p6 = data_1989_V_read2059_rewind_reg_57047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_198_V_read268_phi_phi_fu_76593_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_198_V_read268_phi_phi_fu_76593_p4 = ap_phi_mux_data_198_V_read268_rewind_phi_fu_31977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_198_V_read268_phi_phi_fu_76593_p4 = data_198_V_read.read();
        } else {
            ap_phi_mux_data_198_V_read268_phi_phi_fu_76593_p4 = ap_phi_reg_pp0_iter0_data_198_V_read268_phi_reg_76589.read();
        }
    } else {
        ap_phi_mux_data_198_V_read268_phi_phi_fu_76593_p4 = ap_phi_reg_pp0_iter0_data_198_V_read268_phi_reg_76589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_198_V_read268_rewind_phi_fu_31977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_198_V_read268_rewind_phi_fu_31977_p6 = data_198_V_read268_phi_reg_76589.read();
    } else {
        ap_phi_mux_data_198_V_read268_rewind_phi_fu_31977_p6 = data_198_V_read268_rewind_reg_31973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1990_V_read2060_phi_phi_fu_99889_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1990_V_read2060_phi_phi_fu_99889_p4 = ap_phi_mux_data_1990_V_read2060_rewind_phi_fu_57065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1990_V_read2060_phi_phi_fu_99889_p4 = data_1990_V_read.read();
        } else {
            ap_phi_mux_data_1990_V_read2060_phi_phi_fu_99889_p4 = ap_phi_reg_pp0_iter0_data_1990_V_read2060_phi_reg_99885.read();
        }
    } else {
        ap_phi_mux_data_1990_V_read2060_phi_phi_fu_99889_p4 = ap_phi_reg_pp0_iter0_data_1990_V_read2060_phi_reg_99885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1990_V_read2060_rewind_phi_fu_57065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1990_V_read2060_rewind_phi_fu_57065_p6 = data_1990_V_read2060_phi_reg_99885.read();
    } else {
        ap_phi_mux_data_1990_V_read2060_rewind_phi_fu_57065_p6 = data_1990_V_read2060_rewind_reg_57061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1991_V_read2061_phi_phi_fu_99902_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1991_V_read2061_phi_phi_fu_99902_p4 = ap_phi_mux_data_1991_V_read2061_rewind_phi_fu_57079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1991_V_read2061_phi_phi_fu_99902_p4 = data_1991_V_read.read();
        } else {
            ap_phi_mux_data_1991_V_read2061_phi_phi_fu_99902_p4 = ap_phi_reg_pp0_iter0_data_1991_V_read2061_phi_reg_99898.read();
        }
    } else {
        ap_phi_mux_data_1991_V_read2061_phi_phi_fu_99902_p4 = ap_phi_reg_pp0_iter0_data_1991_V_read2061_phi_reg_99898.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1991_V_read2061_rewind_phi_fu_57079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1991_V_read2061_rewind_phi_fu_57079_p6 = data_1991_V_read2061_phi_reg_99898.read();
    } else {
        ap_phi_mux_data_1991_V_read2061_rewind_phi_fu_57079_p6 = data_1991_V_read2061_rewind_reg_57075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1992_V_read2062_phi_phi_fu_99915_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1992_V_read2062_phi_phi_fu_99915_p4 = ap_phi_mux_data_1992_V_read2062_rewind_phi_fu_57093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1992_V_read2062_phi_phi_fu_99915_p4 = data_1992_V_read.read();
        } else {
            ap_phi_mux_data_1992_V_read2062_phi_phi_fu_99915_p4 = ap_phi_reg_pp0_iter0_data_1992_V_read2062_phi_reg_99911.read();
        }
    } else {
        ap_phi_mux_data_1992_V_read2062_phi_phi_fu_99915_p4 = ap_phi_reg_pp0_iter0_data_1992_V_read2062_phi_reg_99911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1992_V_read2062_rewind_phi_fu_57093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1992_V_read2062_rewind_phi_fu_57093_p6 = data_1992_V_read2062_phi_reg_99911.read();
    } else {
        ap_phi_mux_data_1992_V_read2062_rewind_phi_fu_57093_p6 = data_1992_V_read2062_rewind_reg_57089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1993_V_read2063_phi_phi_fu_99928_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1993_V_read2063_phi_phi_fu_99928_p4 = ap_phi_mux_data_1993_V_read2063_rewind_phi_fu_57107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1993_V_read2063_phi_phi_fu_99928_p4 = data_1993_V_read.read();
        } else {
            ap_phi_mux_data_1993_V_read2063_phi_phi_fu_99928_p4 = ap_phi_reg_pp0_iter0_data_1993_V_read2063_phi_reg_99924.read();
        }
    } else {
        ap_phi_mux_data_1993_V_read2063_phi_phi_fu_99928_p4 = ap_phi_reg_pp0_iter0_data_1993_V_read2063_phi_reg_99924.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1993_V_read2063_rewind_phi_fu_57107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1993_V_read2063_rewind_phi_fu_57107_p6 = data_1993_V_read2063_phi_reg_99924.read();
    } else {
        ap_phi_mux_data_1993_V_read2063_rewind_phi_fu_57107_p6 = data_1993_V_read2063_rewind_reg_57103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1994_V_read2064_phi_phi_fu_99941_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1994_V_read2064_phi_phi_fu_99941_p4 = ap_phi_mux_data_1994_V_read2064_rewind_phi_fu_57121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1994_V_read2064_phi_phi_fu_99941_p4 = data_1994_V_read.read();
        } else {
            ap_phi_mux_data_1994_V_read2064_phi_phi_fu_99941_p4 = ap_phi_reg_pp0_iter0_data_1994_V_read2064_phi_reg_99937.read();
        }
    } else {
        ap_phi_mux_data_1994_V_read2064_phi_phi_fu_99941_p4 = ap_phi_reg_pp0_iter0_data_1994_V_read2064_phi_reg_99937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1994_V_read2064_rewind_phi_fu_57121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1994_V_read2064_rewind_phi_fu_57121_p6 = data_1994_V_read2064_phi_reg_99937.read();
    } else {
        ap_phi_mux_data_1994_V_read2064_rewind_phi_fu_57121_p6 = data_1994_V_read2064_rewind_reg_57117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1995_V_read2065_phi_phi_fu_99954_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1995_V_read2065_phi_phi_fu_99954_p4 = ap_phi_mux_data_1995_V_read2065_rewind_phi_fu_57135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1995_V_read2065_phi_phi_fu_99954_p4 = data_1995_V_read.read();
        } else {
            ap_phi_mux_data_1995_V_read2065_phi_phi_fu_99954_p4 = ap_phi_reg_pp0_iter0_data_1995_V_read2065_phi_reg_99950.read();
        }
    } else {
        ap_phi_mux_data_1995_V_read2065_phi_phi_fu_99954_p4 = ap_phi_reg_pp0_iter0_data_1995_V_read2065_phi_reg_99950.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1995_V_read2065_rewind_phi_fu_57135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1995_V_read2065_rewind_phi_fu_57135_p6 = data_1995_V_read2065_phi_reg_99950.read();
    } else {
        ap_phi_mux_data_1995_V_read2065_rewind_phi_fu_57135_p6 = data_1995_V_read2065_rewind_reg_57131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1996_V_read2066_phi_phi_fu_99967_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1996_V_read2066_phi_phi_fu_99967_p4 = ap_phi_mux_data_1996_V_read2066_rewind_phi_fu_57149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1996_V_read2066_phi_phi_fu_99967_p4 = data_1996_V_read.read();
        } else {
            ap_phi_mux_data_1996_V_read2066_phi_phi_fu_99967_p4 = ap_phi_reg_pp0_iter0_data_1996_V_read2066_phi_reg_99963.read();
        }
    } else {
        ap_phi_mux_data_1996_V_read2066_phi_phi_fu_99967_p4 = ap_phi_reg_pp0_iter0_data_1996_V_read2066_phi_reg_99963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1996_V_read2066_rewind_phi_fu_57149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1996_V_read2066_rewind_phi_fu_57149_p6 = data_1996_V_read2066_phi_reg_99963.read();
    } else {
        ap_phi_mux_data_1996_V_read2066_rewind_phi_fu_57149_p6 = data_1996_V_read2066_rewind_reg_57145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1997_V_read2067_phi_phi_fu_99980_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1997_V_read2067_phi_phi_fu_99980_p4 = ap_phi_mux_data_1997_V_read2067_rewind_phi_fu_57163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1997_V_read2067_phi_phi_fu_99980_p4 = data_1997_V_read.read();
        } else {
            ap_phi_mux_data_1997_V_read2067_phi_phi_fu_99980_p4 = ap_phi_reg_pp0_iter0_data_1997_V_read2067_phi_reg_99976.read();
        }
    } else {
        ap_phi_mux_data_1997_V_read2067_phi_phi_fu_99980_p4 = ap_phi_reg_pp0_iter0_data_1997_V_read2067_phi_reg_99976.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1997_V_read2067_rewind_phi_fu_57163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1997_V_read2067_rewind_phi_fu_57163_p6 = data_1997_V_read2067_phi_reg_99976.read();
    } else {
        ap_phi_mux_data_1997_V_read2067_rewind_phi_fu_57163_p6 = data_1997_V_read2067_rewind_reg_57159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1998_V_read2068_phi_phi_fu_99993_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1998_V_read2068_phi_phi_fu_99993_p4 = ap_phi_mux_data_1998_V_read2068_rewind_phi_fu_57177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1998_V_read2068_phi_phi_fu_99993_p4 = data_1998_V_read.read();
        } else {
            ap_phi_mux_data_1998_V_read2068_phi_phi_fu_99993_p4 = ap_phi_reg_pp0_iter0_data_1998_V_read2068_phi_reg_99989.read();
        }
    } else {
        ap_phi_mux_data_1998_V_read2068_phi_phi_fu_99993_p4 = ap_phi_reg_pp0_iter0_data_1998_V_read2068_phi_reg_99989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1998_V_read2068_rewind_phi_fu_57177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1998_V_read2068_rewind_phi_fu_57177_p6 = data_1998_V_read2068_phi_reg_99989.read();
    } else {
        ap_phi_mux_data_1998_V_read2068_rewind_phi_fu_57177_p6 = data_1998_V_read2068_rewind_reg_57173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1999_V_read2069_phi_phi_fu_100006_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1999_V_read2069_phi_phi_fu_100006_p4 = ap_phi_mux_data_1999_V_read2069_rewind_phi_fu_57191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1999_V_read2069_phi_phi_fu_100006_p4 = data_1999_V_read.read();
        } else {
            ap_phi_mux_data_1999_V_read2069_phi_phi_fu_100006_p4 = ap_phi_reg_pp0_iter0_data_1999_V_read2069_phi_reg_100002.read();
        }
    } else {
        ap_phi_mux_data_1999_V_read2069_phi_phi_fu_100006_p4 = ap_phi_reg_pp0_iter0_data_1999_V_read2069_phi_reg_100002.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1999_V_read2069_rewind_phi_fu_57191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1999_V_read2069_rewind_phi_fu_57191_p6 = data_1999_V_read2069_phi_reg_100002.read();
    } else {
        ap_phi_mux_data_1999_V_read2069_rewind_phi_fu_57191_p6 = data_1999_V_read2069_rewind_reg_57187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_199_V_read269_phi_phi_fu_76606_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_199_V_read269_phi_phi_fu_76606_p4 = ap_phi_mux_data_199_V_read269_rewind_phi_fu_31991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_199_V_read269_phi_phi_fu_76606_p4 = data_199_V_read.read();
        } else {
            ap_phi_mux_data_199_V_read269_phi_phi_fu_76606_p4 = ap_phi_reg_pp0_iter0_data_199_V_read269_phi_reg_76602.read();
        }
    } else {
        ap_phi_mux_data_199_V_read269_phi_phi_fu_76606_p4 = ap_phi_reg_pp0_iter0_data_199_V_read269_phi_reg_76602.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_199_V_read269_rewind_phi_fu_31991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_199_V_read269_rewind_phi_fu_31991_p6 = data_199_V_read269_phi_reg_76602.read();
    } else {
        ap_phi_mux_data_199_V_read269_rewind_phi_fu_31991_p6 = data_199_V_read269_rewind_reg_31987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_19_V_read89_phi_phi_fu_74266_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_19_V_read89_phi_phi_fu_74266_p4 = ap_phi_mux_data_19_V_read89_rewind_phi_fu_29471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_19_V_read89_phi_phi_fu_74266_p4 = data_19_V_read.read();
        } else {
            ap_phi_mux_data_19_V_read89_phi_phi_fu_74266_p4 = ap_phi_reg_pp0_iter0_data_19_V_read89_phi_reg_74262.read();
        }
    } else {
        ap_phi_mux_data_19_V_read89_phi_phi_fu_74266_p4 = ap_phi_reg_pp0_iter0_data_19_V_read89_phi_reg_74262.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_19_V_read89_rewind_phi_fu_29471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_19_V_read89_rewind_phi_fu_29471_p6 = data_19_V_read89_phi_reg_74262.read();
    } else {
        ap_phi_mux_data_19_V_read89_rewind_phi_fu_29471_p6 = data_19_V_read89_rewind_reg_29467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1_V_read71_phi_phi_fu_74032_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1_V_read71_phi_phi_fu_74032_p4 = ap_phi_mux_data_1_V_read71_rewind_phi_fu_29219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1_V_read71_phi_phi_fu_74032_p4 = data_1_V_read.read();
        } else {
            ap_phi_mux_data_1_V_read71_phi_phi_fu_74032_p4 = ap_phi_reg_pp0_iter0_data_1_V_read71_phi_reg_74028.read();
        }
    } else {
        ap_phi_mux_data_1_V_read71_phi_phi_fu_74032_p4 = ap_phi_reg_pp0_iter0_data_1_V_read71_phi_reg_74028.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1_V_read71_rewind_phi_fu_29219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1_V_read71_rewind_phi_fu_29219_p6 = data_1_V_read71_phi_reg_74028.read();
    } else {
        ap_phi_mux_data_1_V_read71_rewind_phi_fu_29219_p6 = data_1_V_read71_rewind_reg_29215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2000_V_read2070_phi_phi_fu_100019_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2000_V_read2070_phi_phi_fu_100019_p4 = ap_phi_mux_data_2000_V_read2070_rewind_phi_fu_57205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2000_V_read2070_phi_phi_fu_100019_p4 = data_2000_V_read.read();
        } else {
            ap_phi_mux_data_2000_V_read2070_phi_phi_fu_100019_p4 = ap_phi_reg_pp0_iter0_data_2000_V_read2070_phi_reg_100015.read();
        }
    } else {
        ap_phi_mux_data_2000_V_read2070_phi_phi_fu_100019_p4 = ap_phi_reg_pp0_iter0_data_2000_V_read2070_phi_reg_100015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2000_V_read2070_rewind_phi_fu_57205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2000_V_read2070_rewind_phi_fu_57205_p6 = data_2000_V_read2070_phi_reg_100015.read();
    } else {
        ap_phi_mux_data_2000_V_read2070_rewind_phi_fu_57205_p6 = data_2000_V_read2070_rewind_reg_57201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2001_V_read2071_phi_phi_fu_100032_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2001_V_read2071_phi_phi_fu_100032_p4 = ap_phi_mux_data_2001_V_read2071_rewind_phi_fu_57219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2001_V_read2071_phi_phi_fu_100032_p4 = data_2001_V_read.read();
        } else {
            ap_phi_mux_data_2001_V_read2071_phi_phi_fu_100032_p4 = ap_phi_reg_pp0_iter0_data_2001_V_read2071_phi_reg_100028.read();
        }
    } else {
        ap_phi_mux_data_2001_V_read2071_phi_phi_fu_100032_p4 = ap_phi_reg_pp0_iter0_data_2001_V_read2071_phi_reg_100028.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2001_V_read2071_rewind_phi_fu_57219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2001_V_read2071_rewind_phi_fu_57219_p6 = data_2001_V_read2071_phi_reg_100028.read();
    } else {
        ap_phi_mux_data_2001_V_read2071_rewind_phi_fu_57219_p6 = data_2001_V_read2071_rewind_reg_57215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2002_V_read2072_phi_phi_fu_100045_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2002_V_read2072_phi_phi_fu_100045_p4 = ap_phi_mux_data_2002_V_read2072_rewind_phi_fu_57233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2002_V_read2072_phi_phi_fu_100045_p4 = data_2002_V_read.read();
        } else {
            ap_phi_mux_data_2002_V_read2072_phi_phi_fu_100045_p4 = ap_phi_reg_pp0_iter0_data_2002_V_read2072_phi_reg_100041.read();
        }
    } else {
        ap_phi_mux_data_2002_V_read2072_phi_phi_fu_100045_p4 = ap_phi_reg_pp0_iter0_data_2002_V_read2072_phi_reg_100041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2002_V_read2072_rewind_phi_fu_57233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2002_V_read2072_rewind_phi_fu_57233_p6 = data_2002_V_read2072_phi_reg_100041.read();
    } else {
        ap_phi_mux_data_2002_V_read2072_rewind_phi_fu_57233_p6 = data_2002_V_read2072_rewind_reg_57229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2003_V_read2073_phi_phi_fu_100058_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2003_V_read2073_phi_phi_fu_100058_p4 = ap_phi_mux_data_2003_V_read2073_rewind_phi_fu_57247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2003_V_read2073_phi_phi_fu_100058_p4 = data_2003_V_read.read();
        } else {
            ap_phi_mux_data_2003_V_read2073_phi_phi_fu_100058_p4 = ap_phi_reg_pp0_iter0_data_2003_V_read2073_phi_reg_100054.read();
        }
    } else {
        ap_phi_mux_data_2003_V_read2073_phi_phi_fu_100058_p4 = ap_phi_reg_pp0_iter0_data_2003_V_read2073_phi_reg_100054.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2003_V_read2073_rewind_phi_fu_57247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2003_V_read2073_rewind_phi_fu_57247_p6 = data_2003_V_read2073_phi_reg_100054.read();
    } else {
        ap_phi_mux_data_2003_V_read2073_rewind_phi_fu_57247_p6 = data_2003_V_read2073_rewind_reg_57243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2004_V_read2074_phi_phi_fu_100071_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2004_V_read2074_phi_phi_fu_100071_p4 = ap_phi_mux_data_2004_V_read2074_rewind_phi_fu_57261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2004_V_read2074_phi_phi_fu_100071_p4 = data_2004_V_read.read();
        } else {
            ap_phi_mux_data_2004_V_read2074_phi_phi_fu_100071_p4 = ap_phi_reg_pp0_iter0_data_2004_V_read2074_phi_reg_100067.read();
        }
    } else {
        ap_phi_mux_data_2004_V_read2074_phi_phi_fu_100071_p4 = ap_phi_reg_pp0_iter0_data_2004_V_read2074_phi_reg_100067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2004_V_read2074_rewind_phi_fu_57261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2004_V_read2074_rewind_phi_fu_57261_p6 = data_2004_V_read2074_phi_reg_100067.read();
    } else {
        ap_phi_mux_data_2004_V_read2074_rewind_phi_fu_57261_p6 = data_2004_V_read2074_rewind_reg_57257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2005_V_read2075_phi_phi_fu_100084_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2005_V_read2075_phi_phi_fu_100084_p4 = ap_phi_mux_data_2005_V_read2075_rewind_phi_fu_57275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2005_V_read2075_phi_phi_fu_100084_p4 = data_2005_V_read.read();
        } else {
            ap_phi_mux_data_2005_V_read2075_phi_phi_fu_100084_p4 = ap_phi_reg_pp0_iter0_data_2005_V_read2075_phi_reg_100080.read();
        }
    } else {
        ap_phi_mux_data_2005_V_read2075_phi_phi_fu_100084_p4 = ap_phi_reg_pp0_iter0_data_2005_V_read2075_phi_reg_100080.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2005_V_read2075_rewind_phi_fu_57275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2005_V_read2075_rewind_phi_fu_57275_p6 = data_2005_V_read2075_phi_reg_100080.read();
    } else {
        ap_phi_mux_data_2005_V_read2075_rewind_phi_fu_57275_p6 = data_2005_V_read2075_rewind_reg_57271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2006_V_read2076_phi_phi_fu_100097_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2006_V_read2076_phi_phi_fu_100097_p4 = ap_phi_mux_data_2006_V_read2076_rewind_phi_fu_57289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2006_V_read2076_phi_phi_fu_100097_p4 = data_2006_V_read.read();
        } else {
            ap_phi_mux_data_2006_V_read2076_phi_phi_fu_100097_p4 = ap_phi_reg_pp0_iter0_data_2006_V_read2076_phi_reg_100093.read();
        }
    } else {
        ap_phi_mux_data_2006_V_read2076_phi_phi_fu_100097_p4 = ap_phi_reg_pp0_iter0_data_2006_V_read2076_phi_reg_100093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2006_V_read2076_rewind_phi_fu_57289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2006_V_read2076_rewind_phi_fu_57289_p6 = data_2006_V_read2076_phi_reg_100093.read();
    } else {
        ap_phi_mux_data_2006_V_read2076_rewind_phi_fu_57289_p6 = data_2006_V_read2076_rewind_reg_57285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2007_V_read2077_phi_phi_fu_100110_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2007_V_read2077_phi_phi_fu_100110_p4 = ap_phi_mux_data_2007_V_read2077_rewind_phi_fu_57303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2007_V_read2077_phi_phi_fu_100110_p4 = data_2007_V_read.read();
        } else {
            ap_phi_mux_data_2007_V_read2077_phi_phi_fu_100110_p4 = ap_phi_reg_pp0_iter0_data_2007_V_read2077_phi_reg_100106.read();
        }
    } else {
        ap_phi_mux_data_2007_V_read2077_phi_phi_fu_100110_p4 = ap_phi_reg_pp0_iter0_data_2007_V_read2077_phi_reg_100106.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2007_V_read2077_rewind_phi_fu_57303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2007_V_read2077_rewind_phi_fu_57303_p6 = data_2007_V_read2077_phi_reg_100106.read();
    } else {
        ap_phi_mux_data_2007_V_read2077_rewind_phi_fu_57303_p6 = data_2007_V_read2077_rewind_reg_57299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2008_V_read2078_phi_phi_fu_100123_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2008_V_read2078_phi_phi_fu_100123_p4 = ap_phi_mux_data_2008_V_read2078_rewind_phi_fu_57317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2008_V_read2078_phi_phi_fu_100123_p4 = data_2008_V_read.read();
        } else {
            ap_phi_mux_data_2008_V_read2078_phi_phi_fu_100123_p4 = ap_phi_reg_pp0_iter0_data_2008_V_read2078_phi_reg_100119.read();
        }
    } else {
        ap_phi_mux_data_2008_V_read2078_phi_phi_fu_100123_p4 = ap_phi_reg_pp0_iter0_data_2008_V_read2078_phi_reg_100119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2008_V_read2078_rewind_phi_fu_57317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2008_V_read2078_rewind_phi_fu_57317_p6 = data_2008_V_read2078_phi_reg_100119.read();
    } else {
        ap_phi_mux_data_2008_V_read2078_rewind_phi_fu_57317_p6 = data_2008_V_read2078_rewind_reg_57313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2009_V_read2079_phi_phi_fu_100136_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2009_V_read2079_phi_phi_fu_100136_p4 = ap_phi_mux_data_2009_V_read2079_rewind_phi_fu_57331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2009_V_read2079_phi_phi_fu_100136_p4 = data_2009_V_read.read();
        } else {
            ap_phi_mux_data_2009_V_read2079_phi_phi_fu_100136_p4 = ap_phi_reg_pp0_iter0_data_2009_V_read2079_phi_reg_100132.read();
        }
    } else {
        ap_phi_mux_data_2009_V_read2079_phi_phi_fu_100136_p4 = ap_phi_reg_pp0_iter0_data_2009_V_read2079_phi_reg_100132.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2009_V_read2079_rewind_phi_fu_57331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2009_V_read2079_rewind_phi_fu_57331_p6 = data_2009_V_read2079_phi_reg_100132.read();
    } else {
        ap_phi_mux_data_2009_V_read2079_rewind_phi_fu_57331_p6 = data_2009_V_read2079_rewind_reg_57327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_200_V_read270_phi_phi_fu_76619_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_200_V_read270_phi_phi_fu_76619_p4 = ap_phi_mux_data_200_V_read270_rewind_phi_fu_32005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_200_V_read270_phi_phi_fu_76619_p4 = data_200_V_read.read();
        } else {
            ap_phi_mux_data_200_V_read270_phi_phi_fu_76619_p4 = ap_phi_reg_pp0_iter0_data_200_V_read270_phi_reg_76615.read();
        }
    } else {
        ap_phi_mux_data_200_V_read270_phi_phi_fu_76619_p4 = ap_phi_reg_pp0_iter0_data_200_V_read270_phi_reg_76615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_200_V_read270_rewind_phi_fu_32005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_200_V_read270_rewind_phi_fu_32005_p6 = data_200_V_read270_phi_reg_76615.read();
    } else {
        ap_phi_mux_data_200_V_read270_rewind_phi_fu_32005_p6 = data_200_V_read270_rewind_reg_32001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2010_V_read2080_phi_phi_fu_100149_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2010_V_read2080_phi_phi_fu_100149_p4 = ap_phi_mux_data_2010_V_read2080_rewind_phi_fu_57345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2010_V_read2080_phi_phi_fu_100149_p4 = data_2010_V_read.read();
        } else {
            ap_phi_mux_data_2010_V_read2080_phi_phi_fu_100149_p4 = ap_phi_reg_pp0_iter0_data_2010_V_read2080_phi_reg_100145.read();
        }
    } else {
        ap_phi_mux_data_2010_V_read2080_phi_phi_fu_100149_p4 = ap_phi_reg_pp0_iter0_data_2010_V_read2080_phi_reg_100145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2010_V_read2080_rewind_phi_fu_57345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2010_V_read2080_rewind_phi_fu_57345_p6 = data_2010_V_read2080_phi_reg_100145.read();
    } else {
        ap_phi_mux_data_2010_V_read2080_rewind_phi_fu_57345_p6 = data_2010_V_read2080_rewind_reg_57341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2011_V_read2081_phi_phi_fu_100162_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2011_V_read2081_phi_phi_fu_100162_p4 = ap_phi_mux_data_2011_V_read2081_rewind_phi_fu_57359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2011_V_read2081_phi_phi_fu_100162_p4 = data_2011_V_read.read();
        } else {
            ap_phi_mux_data_2011_V_read2081_phi_phi_fu_100162_p4 = ap_phi_reg_pp0_iter0_data_2011_V_read2081_phi_reg_100158.read();
        }
    } else {
        ap_phi_mux_data_2011_V_read2081_phi_phi_fu_100162_p4 = ap_phi_reg_pp0_iter0_data_2011_V_read2081_phi_reg_100158.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2011_V_read2081_rewind_phi_fu_57359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2011_V_read2081_rewind_phi_fu_57359_p6 = data_2011_V_read2081_phi_reg_100158.read();
    } else {
        ap_phi_mux_data_2011_V_read2081_rewind_phi_fu_57359_p6 = data_2011_V_read2081_rewind_reg_57355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2012_V_read2082_phi_phi_fu_100175_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2012_V_read2082_phi_phi_fu_100175_p4 = ap_phi_mux_data_2012_V_read2082_rewind_phi_fu_57373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2012_V_read2082_phi_phi_fu_100175_p4 = data_2012_V_read.read();
        } else {
            ap_phi_mux_data_2012_V_read2082_phi_phi_fu_100175_p4 = ap_phi_reg_pp0_iter0_data_2012_V_read2082_phi_reg_100171.read();
        }
    } else {
        ap_phi_mux_data_2012_V_read2082_phi_phi_fu_100175_p4 = ap_phi_reg_pp0_iter0_data_2012_V_read2082_phi_reg_100171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2012_V_read2082_rewind_phi_fu_57373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2012_V_read2082_rewind_phi_fu_57373_p6 = data_2012_V_read2082_phi_reg_100171.read();
    } else {
        ap_phi_mux_data_2012_V_read2082_rewind_phi_fu_57373_p6 = data_2012_V_read2082_rewind_reg_57369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2013_V_read2083_phi_phi_fu_100188_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2013_V_read2083_phi_phi_fu_100188_p4 = ap_phi_mux_data_2013_V_read2083_rewind_phi_fu_57387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2013_V_read2083_phi_phi_fu_100188_p4 = data_2013_V_read.read();
        } else {
            ap_phi_mux_data_2013_V_read2083_phi_phi_fu_100188_p4 = ap_phi_reg_pp0_iter0_data_2013_V_read2083_phi_reg_100184.read();
        }
    } else {
        ap_phi_mux_data_2013_V_read2083_phi_phi_fu_100188_p4 = ap_phi_reg_pp0_iter0_data_2013_V_read2083_phi_reg_100184.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2013_V_read2083_rewind_phi_fu_57387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2013_V_read2083_rewind_phi_fu_57387_p6 = data_2013_V_read2083_phi_reg_100184.read();
    } else {
        ap_phi_mux_data_2013_V_read2083_rewind_phi_fu_57387_p6 = data_2013_V_read2083_rewind_reg_57383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2014_V_read2084_phi_phi_fu_100201_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2014_V_read2084_phi_phi_fu_100201_p4 = ap_phi_mux_data_2014_V_read2084_rewind_phi_fu_57401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2014_V_read2084_phi_phi_fu_100201_p4 = data_2014_V_read.read();
        } else {
            ap_phi_mux_data_2014_V_read2084_phi_phi_fu_100201_p4 = ap_phi_reg_pp0_iter0_data_2014_V_read2084_phi_reg_100197.read();
        }
    } else {
        ap_phi_mux_data_2014_V_read2084_phi_phi_fu_100201_p4 = ap_phi_reg_pp0_iter0_data_2014_V_read2084_phi_reg_100197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2014_V_read2084_rewind_phi_fu_57401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2014_V_read2084_rewind_phi_fu_57401_p6 = data_2014_V_read2084_phi_reg_100197.read();
    } else {
        ap_phi_mux_data_2014_V_read2084_rewind_phi_fu_57401_p6 = data_2014_V_read2084_rewind_reg_57397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2015_V_read2085_phi_phi_fu_100214_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2015_V_read2085_phi_phi_fu_100214_p4 = ap_phi_mux_data_2015_V_read2085_rewind_phi_fu_57415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2015_V_read2085_phi_phi_fu_100214_p4 = data_2015_V_read.read();
        } else {
            ap_phi_mux_data_2015_V_read2085_phi_phi_fu_100214_p4 = ap_phi_reg_pp0_iter0_data_2015_V_read2085_phi_reg_100210.read();
        }
    } else {
        ap_phi_mux_data_2015_V_read2085_phi_phi_fu_100214_p4 = ap_phi_reg_pp0_iter0_data_2015_V_read2085_phi_reg_100210.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2015_V_read2085_rewind_phi_fu_57415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2015_V_read2085_rewind_phi_fu_57415_p6 = data_2015_V_read2085_phi_reg_100210.read();
    } else {
        ap_phi_mux_data_2015_V_read2085_rewind_phi_fu_57415_p6 = data_2015_V_read2085_rewind_reg_57411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2016_V_read2086_phi_phi_fu_100227_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2016_V_read2086_phi_phi_fu_100227_p4 = ap_phi_mux_data_2016_V_read2086_rewind_phi_fu_57429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2016_V_read2086_phi_phi_fu_100227_p4 = data_2016_V_read.read();
        } else {
            ap_phi_mux_data_2016_V_read2086_phi_phi_fu_100227_p4 = ap_phi_reg_pp0_iter0_data_2016_V_read2086_phi_reg_100223.read();
        }
    } else {
        ap_phi_mux_data_2016_V_read2086_phi_phi_fu_100227_p4 = ap_phi_reg_pp0_iter0_data_2016_V_read2086_phi_reg_100223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2016_V_read2086_rewind_phi_fu_57429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2016_V_read2086_rewind_phi_fu_57429_p6 = data_2016_V_read2086_phi_reg_100223.read();
    } else {
        ap_phi_mux_data_2016_V_read2086_rewind_phi_fu_57429_p6 = data_2016_V_read2086_rewind_reg_57425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2017_V_read2087_phi_phi_fu_100240_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2017_V_read2087_phi_phi_fu_100240_p4 = ap_phi_mux_data_2017_V_read2087_rewind_phi_fu_57443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2017_V_read2087_phi_phi_fu_100240_p4 = data_2017_V_read.read();
        } else {
            ap_phi_mux_data_2017_V_read2087_phi_phi_fu_100240_p4 = ap_phi_reg_pp0_iter0_data_2017_V_read2087_phi_reg_100236.read();
        }
    } else {
        ap_phi_mux_data_2017_V_read2087_phi_phi_fu_100240_p4 = ap_phi_reg_pp0_iter0_data_2017_V_read2087_phi_reg_100236.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2017_V_read2087_rewind_phi_fu_57443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2017_V_read2087_rewind_phi_fu_57443_p6 = data_2017_V_read2087_phi_reg_100236.read();
    } else {
        ap_phi_mux_data_2017_V_read2087_rewind_phi_fu_57443_p6 = data_2017_V_read2087_rewind_reg_57439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2018_V_read2088_phi_phi_fu_100253_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2018_V_read2088_phi_phi_fu_100253_p4 = ap_phi_mux_data_2018_V_read2088_rewind_phi_fu_57457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2018_V_read2088_phi_phi_fu_100253_p4 = data_2018_V_read.read();
        } else {
            ap_phi_mux_data_2018_V_read2088_phi_phi_fu_100253_p4 = ap_phi_reg_pp0_iter0_data_2018_V_read2088_phi_reg_100249.read();
        }
    } else {
        ap_phi_mux_data_2018_V_read2088_phi_phi_fu_100253_p4 = ap_phi_reg_pp0_iter0_data_2018_V_read2088_phi_reg_100249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2018_V_read2088_rewind_phi_fu_57457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2018_V_read2088_rewind_phi_fu_57457_p6 = data_2018_V_read2088_phi_reg_100249.read();
    } else {
        ap_phi_mux_data_2018_V_read2088_rewind_phi_fu_57457_p6 = data_2018_V_read2088_rewind_reg_57453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2019_V_read2089_phi_phi_fu_100266_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2019_V_read2089_phi_phi_fu_100266_p4 = ap_phi_mux_data_2019_V_read2089_rewind_phi_fu_57471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2019_V_read2089_phi_phi_fu_100266_p4 = data_2019_V_read.read();
        } else {
            ap_phi_mux_data_2019_V_read2089_phi_phi_fu_100266_p4 = ap_phi_reg_pp0_iter0_data_2019_V_read2089_phi_reg_100262.read();
        }
    } else {
        ap_phi_mux_data_2019_V_read2089_phi_phi_fu_100266_p4 = ap_phi_reg_pp0_iter0_data_2019_V_read2089_phi_reg_100262.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2019_V_read2089_rewind_phi_fu_57471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2019_V_read2089_rewind_phi_fu_57471_p6 = data_2019_V_read2089_phi_reg_100262.read();
    } else {
        ap_phi_mux_data_2019_V_read2089_rewind_phi_fu_57471_p6 = data_2019_V_read2089_rewind_reg_57467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_201_V_read271_phi_phi_fu_76632_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_201_V_read271_phi_phi_fu_76632_p4 = ap_phi_mux_data_201_V_read271_rewind_phi_fu_32019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_201_V_read271_phi_phi_fu_76632_p4 = data_201_V_read.read();
        } else {
            ap_phi_mux_data_201_V_read271_phi_phi_fu_76632_p4 = ap_phi_reg_pp0_iter0_data_201_V_read271_phi_reg_76628.read();
        }
    } else {
        ap_phi_mux_data_201_V_read271_phi_phi_fu_76632_p4 = ap_phi_reg_pp0_iter0_data_201_V_read271_phi_reg_76628.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_201_V_read271_rewind_phi_fu_32019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_201_V_read271_rewind_phi_fu_32019_p6 = data_201_V_read271_phi_reg_76628.read();
    } else {
        ap_phi_mux_data_201_V_read271_rewind_phi_fu_32019_p6 = data_201_V_read271_rewind_reg_32015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2020_V_read2090_phi_phi_fu_100279_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2020_V_read2090_phi_phi_fu_100279_p4 = ap_phi_mux_data_2020_V_read2090_rewind_phi_fu_57485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2020_V_read2090_phi_phi_fu_100279_p4 = data_2020_V_read.read();
        } else {
            ap_phi_mux_data_2020_V_read2090_phi_phi_fu_100279_p4 = ap_phi_reg_pp0_iter0_data_2020_V_read2090_phi_reg_100275.read();
        }
    } else {
        ap_phi_mux_data_2020_V_read2090_phi_phi_fu_100279_p4 = ap_phi_reg_pp0_iter0_data_2020_V_read2090_phi_reg_100275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2020_V_read2090_rewind_phi_fu_57485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2020_V_read2090_rewind_phi_fu_57485_p6 = data_2020_V_read2090_phi_reg_100275.read();
    } else {
        ap_phi_mux_data_2020_V_read2090_rewind_phi_fu_57485_p6 = data_2020_V_read2090_rewind_reg_57481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2021_V_read2091_phi_phi_fu_100292_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2021_V_read2091_phi_phi_fu_100292_p4 = ap_phi_mux_data_2021_V_read2091_rewind_phi_fu_57499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2021_V_read2091_phi_phi_fu_100292_p4 = data_2021_V_read.read();
        } else {
            ap_phi_mux_data_2021_V_read2091_phi_phi_fu_100292_p4 = ap_phi_reg_pp0_iter0_data_2021_V_read2091_phi_reg_100288.read();
        }
    } else {
        ap_phi_mux_data_2021_V_read2091_phi_phi_fu_100292_p4 = ap_phi_reg_pp0_iter0_data_2021_V_read2091_phi_reg_100288.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2021_V_read2091_rewind_phi_fu_57499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2021_V_read2091_rewind_phi_fu_57499_p6 = data_2021_V_read2091_phi_reg_100288.read();
    } else {
        ap_phi_mux_data_2021_V_read2091_rewind_phi_fu_57499_p6 = data_2021_V_read2091_rewind_reg_57495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2022_V_read2092_phi_phi_fu_100305_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2022_V_read2092_phi_phi_fu_100305_p4 = ap_phi_mux_data_2022_V_read2092_rewind_phi_fu_57513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2022_V_read2092_phi_phi_fu_100305_p4 = data_2022_V_read.read();
        } else {
            ap_phi_mux_data_2022_V_read2092_phi_phi_fu_100305_p4 = ap_phi_reg_pp0_iter0_data_2022_V_read2092_phi_reg_100301.read();
        }
    } else {
        ap_phi_mux_data_2022_V_read2092_phi_phi_fu_100305_p4 = ap_phi_reg_pp0_iter0_data_2022_V_read2092_phi_reg_100301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2022_V_read2092_rewind_phi_fu_57513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2022_V_read2092_rewind_phi_fu_57513_p6 = data_2022_V_read2092_phi_reg_100301.read();
    } else {
        ap_phi_mux_data_2022_V_read2092_rewind_phi_fu_57513_p6 = data_2022_V_read2092_rewind_reg_57509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2023_V_read2093_phi_phi_fu_100318_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2023_V_read2093_phi_phi_fu_100318_p4 = ap_phi_mux_data_2023_V_read2093_rewind_phi_fu_57527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2023_V_read2093_phi_phi_fu_100318_p4 = data_2023_V_read.read();
        } else {
            ap_phi_mux_data_2023_V_read2093_phi_phi_fu_100318_p4 = ap_phi_reg_pp0_iter0_data_2023_V_read2093_phi_reg_100314.read();
        }
    } else {
        ap_phi_mux_data_2023_V_read2093_phi_phi_fu_100318_p4 = ap_phi_reg_pp0_iter0_data_2023_V_read2093_phi_reg_100314.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2023_V_read2093_rewind_phi_fu_57527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2023_V_read2093_rewind_phi_fu_57527_p6 = data_2023_V_read2093_phi_reg_100314.read();
    } else {
        ap_phi_mux_data_2023_V_read2093_rewind_phi_fu_57527_p6 = data_2023_V_read2093_rewind_reg_57523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2024_V_read2094_phi_phi_fu_100331_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2024_V_read2094_phi_phi_fu_100331_p4 = ap_phi_mux_data_2024_V_read2094_rewind_phi_fu_57541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2024_V_read2094_phi_phi_fu_100331_p4 = data_2024_V_read.read();
        } else {
            ap_phi_mux_data_2024_V_read2094_phi_phi_fu_100331_p4 = ap_phi_reg_pp0_iter0_data_2024_V_read2094_phi_reg_100327.read();
        }
    } else {
        ap_phi_mux_data_2024_V_read2094_phi_phi_fu_100331_p4 = ap_phi_reg_pp0_iter0_data_2024_V_read2094_phi_reg_100327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2024_V_read2094_rewind_phi_fu_57541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2024_V_read2094_rewind_phi_fu_57541_p6 = data_2024_V_read2094_phi_reg_100327.read();
    } else {
        ap_phi_mux_data_2024_V_read2094_rewind_phi_fu_57541_p6 = data_2024_V_read2094_rewind_reg_57537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2025_V_read2095_phi_phi_fu_100344_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2025_V_read2095_phi_phi_fu_100344_p4 = ap_phi_mux_data_2025_V_read2095_rewind_phi_fu_57555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2025_V_read2095_phi_phi_fu_100344_p4 = data_2025_V_read.read();
        } else {
            ap_phi_mux_data_2025_V_read2095_phi_phi_fu_100344_p4 = ap_phi_reg_pp0_iter0_data_2025_V_read2095_phi_reg_100340.read();
        }
    } else {
        ap_phi_mux_data_2025_V_read2095_phi_phi_fu_100344_p4 = ap_phi_reg_pp0_iter0_data_2025_V_read2095_phi_reg_100340.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2025_V_read2095_rewind_phi_fu_57555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2025_V_read2095_rewind_phi_fu_57555_p6 = data_2025_V_read2095_phi_reg_100340.read();
    } else {
        ap_phi_mux_data_2025_V_read2095_rewind_phi_fu_57555_p6 = data_2025_V_read2095_rewind_reg_57551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2026_V_read2096_phi_phi_fu_100357_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2026_V_read2096_phi_phi_fu_100357_p4 = ap_phi_mux_data_2026_V_read2096_rewind_phi_fu_57569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2026_V_read2096_phi_phi_fu_100357_p4 = data_2026_V_read.read();
        } else {
            ap_phi_mux_data_2026_V_read2096_phi_phi_fu_100357_p4 = ap_phi_reg_pp0_iter0_data_2026_V_read2096_phi_reg_100353.read();
        }
    } else {
        ap_phi_mux_data_2026_V_read2096_phi_phi_fu_100357_p4 = ap_phi_reg_pp0_iter0_data_2026_V_read2096_phi_reg_100353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2026_V_read2096_rewind_phi_fu_57569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2026_V_read2096_rewind_phi_fu_57569_p6 = data_2026_V_read2096_phi_reg_100353.read();
    } else {
        ap_phi_mux_data_2026_V_read2096_rewind_phi_fu_57569_p6 = data_2026_V_read2096_rewind_reg_57565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2027_V_read2097_phi_phi_fu_100370_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2027_V_read2097_phi_phi_fu_100370_p4 = ap_phi_mux_data_2027_V_read2097_rewind_phi_fu_57583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2027_V_read2097_phi_phi_fu_100370_p4 = data_2027_V_read.read();
        } else {
            ap_phi_mux_data_2027_V_read2097_phi_phi_fu_100370_p4 = ap_phi_reg_pp0_iter0_data_2027_V_read2097_phi_reg_100366.read();
        }
    } else {
        ap_phi_mux_data_2027_V_read2097_phi_phi_fu_100370_p4 = ap_phi_reg_pp0_iter0_data_2027_V_read2097_phi_reg_100366.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2027_V_read2097_rewind_phi_fu_57583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2027_V_read2097_rewind_phi_fu_57583_p6 = data_2027_V_read2097_phi_reg_100366.read();
    } else {
        ap_phi_mux_data_2027_V_read2097_rewind_phi_fu_57583_p6 = data_2027_V_read2097_rewind_reg_57579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2028_V_read2098_phi_phi_fu_100383_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2028_V_read2098_phi_phi_fu_100383_p4 = ap_phi_mux_data_2028_V_read2098_rewind_phi_fu_57597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2028_V_read2098_phi_phi_fu_100383_p4 = data_2028_V_read.read();
        } else {
            ap_phi_mux_data_2028_V_read2098_phi_phi_fu_100383_p4 = ap_phi_reg_pp0_iter0_data_2028_V_read2098_phi_reg_100379.read();
        }
    } else {
        ap_phi_mux_data_2028_V_read2098_phi_phi_fu_100383_p4 = ap_phi_reg_pp0_iter0_data_2028_V_read2098_phi_reg_100379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2028_V_read2098_rewind_phi_fu_57597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2028_V_read2098_rewind_phi_fu_57597_p6 = data_2028_V_read2098_phi_reg_100379.read();
    } else {
        ap_phi_mux_data_2028_V_read2098_rewind_phi_fu_57597_p6 = data_2028_V_read2098_rewind_reg_57593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2029_V_read2099_phi_phi_fu_100396_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2029_V_read2099_phi_phi_fu_100396_p4 = ap_phi_mux_data_2029_V_read2099_rewind_phi_fu_57611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2029_V_read2099_phi_phi_fu_100396_p4 = data_2029_V_read.read();
        } else {
            ap_phi_mux_data_2029_V_read2099_phi_phi_fu_100396_p4 = ap_phi_reg_pp0_iter0_data_2029_V_read2099_phi_reg_100392.read();
        }
    } else {
        ap_phi_mux_data_2029_V_read2099_phi_phi_fu_100396_p4 = ap_phi_reg_pp0_iter0_data_2029_V_read2099_phi_reg_100392.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2029_V_read2099_rewind_phi_fu_57611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2029_V_read2099_rewind_phi_fu_57611_p6 = data_2029_V_read2099_phi_reg_100392.read();
    } else {
        ap_phi_mux_data_2029_V_read2099_rewind_phi_fu_57611_p6 = data_2029_V_read2099_rewind_reg_57607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_202_V_read272_phi_phi_fu_76645_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_202_V_read272_phi_phi_fu_76645_p4 = ap_phi_mux_data_202_V_read272_rewind_phi_fu_32033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_202_V_read272_phi_phi_fu_76645_p4 = data_202_V_read.read();
        } else {
            ap_phi_mux_data_202_V_read272_phi_phi_fu_76645_p4 = ap_phi_reg_pp0_iter0_data_202_V_read272_phi_reg_76641.read();
        }
    } else {
        ap_phi_mux_data_202_V_read272_phi_phi_fu_76645_p4 = ap_phi_reg_pp0_iter0_data_202_V_read272_phi_reg_76641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_202_V_read272_rewind_phi_fu_32033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_202_V_read272_rewind_phi_fu_32033_p6 = data_202_V_read272_phi_reg_76641.read();
    } else {
        ap_phi_mux_data_202_V_read272_rewind_phi_fu_32033_p6 = data_202_V_read272_rewind_reg_32029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2030_V_read2100_phi_phi_fu_100409_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2030_V_read2100_phi_phi_fu_100409_p4 = ap_phi_mux_data_2030_V_read2100_rewind_phi_fu_57625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2030_V_read2100_phi_phi_fu_100409_p4 = data_2030_V_read.read();
        } else {
            ap_phi_mux_data_2030_V_read2100_phi_phi_fu_100409_p4 = ap_phi_reg_pp0_iter0_data_2030_V_read2100_phi_reg_100405.read();
        }
    } else {
        ap_phi_mux_data_2030_V_read2100_phi_phi_fu_100409_p4 = ap_phi_reg_pp0_iter0_data_2030_V_read2100_phi_reg_100405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2030_V_read2100_rewind_phi_fu_57625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2030_V_read2100_rewind_phi_fu_57625_p6 = data_2030_V_read2100_phi_reg_100405.read();
    } else {
        ap_phi_mux_data_2030_V_read2100_rewind_phi_fu_57625_p6 = data_2030_V_read2100_rewind_reg_57621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2031_V_read2101_phi_phi_fu_100422_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2031_V_read2101_phi_phi_fu_100422_p4 = ap_phi_mux_data_2031_V_read2101_rewind_phi_fu_57639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2031_V_read2101_phi_phi_fu_100422_p4 = data_2031_V_read.read();
        } else {
            ap_phi_mux_data_2031_V_read2101_phi_phi_fu_100422_p4 = ap_phi_reg_pp0_iter0_data_2031_V_read2101_phi_reg_100418.read();
        }
    } else {
        ap_phi_mux_data_2031_V_read2101_phi_phi_fu_100422_p4 = ap_phi_reg_pp0_iter0_data_2031_V_read2101_phi_reg_100418.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2031_V_read2101_rewind_phi_fu_57639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2031_V_read2101_rewind_phi_fu_57639_p6 = data_2031_V_read2101_phi_reg_100418.read();
    } else {
        ap_phi_mux_data_2031_V_read2101_rewind_phi_fu_57639_p6 = data_2031_V_read2101_rewind_reg_57635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2032_V_read2102_phi_phi_fu_100435_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2032_V_read2102_phi_phi_fu_100435_p4 = ap_phi_mux_data_2032_V_read2102_rewind_phi_fu_57653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2032_V_read2102_phi_phi_fu_100435_p4 = data_2032_V_read.read();
        } else {
            ap_phi_mux_data_2032_V_read2102_phi_phi_fu_100435_p4 = ap_phi_reg_pp0_iter0_data_2032_V_read2102_phi_reg_100431.read();
        }
    } else {
        ap_phi_mux_data_2032_V_read2102_phi_phi_fu_100435_p4 = ap_phi_reg_pp0_iter0_data_2032_V_read2102_phi_reg_100431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2032_V_read2102_rewind_phi_fu_57653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2032_V_read2102_rewind_phi_fu_57653_p6 = data_2032_V_read2102_phi_reg_100431.read();
    } else {
        ap_phi_mux_data_2032_V_read2102_rewind_phi_fu_57653_p6 = data_2032_V_read2102_rewind_reg_57649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2033_V_read2103_phi_phi_fu_100448_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2033_V_read2103_phi_phi_fu_100448_p4 = ap_phi_mux_data_2033_V_read2103_rewind_phi_fu_57667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2033_V_read2103_phi_phi_fu_100448_p4 = data_2033_V_read.read();
        } else {
            ap_phi_mux_data_2033_V_read2103_phi_phi_fu_100448_p4 = ap_phi_reg_pp0_iter0_data_2033_V_read2103_phi_reg_100444.read();
        }
    } else {
        ap_phi_mux_data_2033_V_read2103_phi_phi_fu_100448_p4 = ap_phi_reg_pp0_iter0_data_2033_V_read2103_phi_reg_100444.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2033_V_read2103_rewind_phi_fu_57667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2033_V_read2103_rewind_phi_fu_57667_p6 = data_2033_V_read2103_phi_reg_100444.read();
    } else {
        ap_phi_mux_data_2033_V_read2103_rewind_phi_fu_57667_p6 = data_2033_V_read2103_rewind_reg_57663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2034_V_read2104_phi_phi_fu_100461_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2034_V_read2104_phi_phi_fu_100461_p4 = ap_phi_mux_data_2034_V_read2104_rewind_phi_fu_57681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2034_V_read2104_phi_phi_fu_100461_p4 = data_2034_V_read.read();
        } else {
            ap_phi_mux_data_2034_V_read2104_phi_phi_fu_100461_p4 = ap_phi_reg_pp0_iter0_data_2034_V_read2104_phi_reg_100457.read();
        }
    } else {
        ap_phi_mux_data_2034_V_read2104_phi_phi_fu_100461_p4 = ap_phi_reg_pp0_iter0_data_2034_V_read2104_phi_reg_100457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2034_V_read2104_rewind_phi_fu_57681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2034_V_read2104_rewind_phi_fu_57681_p6 = data_2034_V_read2104_phi_reg_100457.read();
    } else {
        ap_phi_mux_data_2034_V_read2104_rewind_phi_fu_57681_p6 = data_2034_V_read2104_rewind_reg_57677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2035_V_read2105_phi_phi_fu_100474_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2035_V_read2105_phi_phi_fu_100474_p4 = ap_phi_mux_data_2035_V_read2105_rewind_phi_fu_57695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2035_V_read2105_phi_phi_fu_100474_p4 = data_2035_V_read.read();
        } else {
            ap_phi_mux_data_2035_V_read2105_phi_phi_fu_100474_p4 = ap_phi_reg_pp0_iter0_data_2035_V_read2105_phi_reg_100470.read();
        }
    } else {
        ap_phi_mux_data_2035_V_read2105_phi_phi_fu_100474_p4 = ap_phi_reg_pp0_iter0_data_2035_V_read2105_phi_reg_100470.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2035_V_read2105_rewind_phi_fu_57695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2035_V_read2105_rewind_phi_fu_57695_p6 = data_2035_V_read2105_phi_reg_100470.read();
    } else {
        ap_phi_mux_data_2035_V_read2105_rewind_phi_fu_57695_p6 = data_2035_V_read2105_rewind_reg_57691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2036_V_read2106_phi_phi_fu_100487_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2036_V_read2106_phi_phi_fu_100487_p4 = ap_phi_mux_data_2036_V_read2106_rewind_phi_fu_57709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2036_V_read2106_phi_phi_fu_100487_p4 = data_2036_V_read.read();
        } else {
            ap_phi_mux_data_2036_V_read2106_phi_phi_fu_100487_p4 = ap_phi_reg_pp0_iter0_data_2036_V_read2106_phi_reg_100483.read();
        }
    } else {
        ap_phi_mux_data_2036_V_read2106_phi_phi_fu_100487_p4 = ap_phi_reg_pp0_iter0_data_2036_V_read2106_phi_reg_100483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2036_V_read2106_rewind_phi_fu_57709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2036_V_read2106_rewind_phi_fu_57709_p6 = data_2036_V_read2106_phi_reg_100483.read();
    } else {
        ap_phi_mux_data_2036_V_read2106_rewind_phi_fu_57709_p6 = data_2036_V_read2106_rewind_reg_57705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2037_V_read2107_phi_phi_fu_100500_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2037_V_read2107_phi_phi_fu_100500_p4 = ap_phi_mux_data_2037_V_read2107_rewind_phi_fu_57723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2037_V_read2107_phi_phi_fu_100500_p4 = data_2037_V_read.read();
        } else {
            ap_phi_mux_data_2037_V_read2107_phi_phi_fu_100500_p4 = ap_phi_reg_pp0_iter0_data_2037_V_read2107_phi_reg_100496.read();
        }
    } else {
        ap_phi_mux_data_2037_V_read2107_phi_phi_fu_100500_p4 = ap_phi_reg_pp0_iter0_data_2037_V_read2107_phi_reg_100496.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2037_V_read2107_rewind_phi_fu_57723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2037_V_read2107_rewind_phi_fu_57723_p6 = data_2037_V_read2107_phi_reg_100496.read();
    } else {
        ap_phi_mux_data_2037_V_read2107_rewind_phi_fu_57723_p6 = data_2037_V_read2107_rewind_reg_57719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2038_V_read2108_phi_phi_fu_100513_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2038_V_read2108_phi_phi_fu_100513_p4 = ap_phi_mux_data_2038_V_read2108_rewind_phi_fu_57737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2038_V_read2108_phi_phi_fu_100513_p4 = data_2038_V_read.read();
        } else {
            ap_phi_mux_data_2038_V_read2108_phi_phi_fu_100513_p4 = ap_phi_reg_pp0_iter0_data_2038_V_read2108_phi_reg_100509.read();
        }
    } else {
        ap_phi_mux_data_2038_V_read2108_phi_phi_fu_100513_p4 = ap_phi_reg_pp0_iter0_data_2038_V_read2108_phi_reg_100509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2038_V_read2108_rewind_phi_fu_57737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2038_V_read2108_rewind_phi_fu_57737_p6 = data_2038_V_read2108_phi_reg_100509.read();
    } else {
        ap_phi_mux_data_2038_V_read2108_rewind_phi_fu_57737_p6 = data_2038_V_read2108_rewind_reg_57733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2039_V_read2109_phi_phi_fu_100526_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2039_V_read2109_phi_phi_fu_100526_p4 = ap_phi_mux_data_2039_V_read2109_rewind_phi_fu_57751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2039_V_read2109_phi_phi_fu_100526_p4 = data_2039_V_read.read();
        } else {
            ap_phi_mux_data_2039_V_read2109_phi_phi_fu_100526_p4 = ap_phi_reg_pp0_iter0_data_2039_V_read2109_phi_reg_100522.read();
        }
    } else {
        ap_phi_mux_data_2039_V_read2109_phi_phi_fu_100526_p4 = ap_phi_reg_pp0_iter0_data_2039_V_read2109_phi_reg_100522.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2039_V_read2109_rewind_phi_fu_57751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2039_V_read2109_rewind_phi_fu_57751_p6 = data_2039_V_read2109_phi_reg_100522.read();
    } else {
        ap_phi_mux_data_2039_V_read2109_rewind_phi_fu_57751_p6 = data_2039_V_read2109_rewind_reg_57747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_203_V_read273_phi_phi_fu_76658_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_203_V_read273_phi_phi_fu_76658_p4 = ap_phi_mux_data_203_V_read273_rewind_phi_fu_32047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_203_V_read273_phi_phi_fu_76658_p4 = data_203_V_read.read();
        } else {
            ap_phi_mux_data_203_V_read273_phi_phi_fu_76658_p4 = ap_phi_reg_pp0_iter0_data_203_V_read273_phi_reg_76654.read();
        }
    } else {
        ap_phi_mux_data_203_V_read273_phi_phi_fu_76658_p4 = ap_phi_reg_pp0_iter0_data_203_V_read273_phi_reg_76654.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_203_V_read273_rewind_phi_fu_32047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_203_V_read273_rewind_phi_fu_32047_p6 = data_203_V_read273_phi_reg_76654.read();
    } else {
        ap_phi_mux_data_203_V_read273_rewind_phi_fu_32047_p6 = data_203_V_read273_rewind_reg_32043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2040_V_read2110_phi_phi_fu_100539_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2040_V_read2110_phi_phi_fu_100539_p4 = ap_phi_mux_data_2040_V_read2110_rewind_phi_fu_57765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2040_V_read2110_phi_phi_fu_100539_p4 = data_2040_V_read.read();
        } else {
            ap_phi_mux_data_2040_V_read2110_phi_phi_fu_100539_p4 = ap_phi_reg_pp0_iter0_data_2040_V_read2110_phi_reg_100535.read();
        }
    } else {
        ap_phi_mux_data_2040_V_read2110_phi_phi_fu_100539_p4 = ap_phi_reg_pp0_iter0_data_2040_V_read2110_phi_reg_100535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2040_V_read2110_rewind_phi_fu_57765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2040_V_read2110_rewind_phi_fu_57765_p6 = data_2040_V_read2110_phi_reg_100535.read();
    } else {
        ap_phi_mux_data_2040_V_read2110_rewind_phi_fu_57765_p6 = data_2040_V_read2110_rewind_reg_57761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2041_V_read2111_phi_phi_fu_100552_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2041_V_read2111_phi_phi_fu_100552_p4 = ap_phi_mux_data_2041_V_read2111_rewind_phi_fu_57779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2041_V_read2111_phi_phi_fu_100552_p4 = data_2041_V_read.read();
        } else {
            ap_phi_mux_data_2041_V_read2111_phi_phi_fu_100552_p4 = ap_phi_reg_pp0_iter0_data_2041_V_read2111_phi_reg_100548.read();
        }
    } else {
        ap_phi_mux_data_2041_V_read2111_phi_phi_fu_100552_p4 = ap_phi_reg_pp0_iter0_data_2041_V_read2111_phi_reg_100548.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2041_V_read2111_rewind_phi_fu_57779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2041_V_read2111_rewind_phi_fu_57779_p6 = data_2041_V_read2111_phi_reg_100548.read();
    } else {
        ap_phi_mux_data_2041_V_read2111_rewind_phi_fu_57779_p6 = data_2041_V_read2111_rewind_reg_57775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2042_V_read2112_phi_phi_fu_100565_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2042_V_read2112_phi_phi_fu_100565_p4 = ap_phi_mux_data_2042_V_read2112_rewind_phi_fu_57793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2042_V_read2112_phi_phi_fu_100565_p4 = data_2042_V_read.read();
        } else {
            ap_phi_mux_data_2042_V_read2112_phi_phi_fu_100565_p4 = ap_phi_reg_pp0_iter0_data_2042_V_read2112_phi_reg_100561.read();
        }
    } else {
        ap_phi_mux_data_2042_V_read2112_phi_phi_fu_100565_p4 = ap_phi_reg_pp0_iter0_data_2042_V_read2112_phi_reg_100561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2042_V_read2112_rewind_phi_fu_57793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2042_V_read2112_rewind_phi_fu_57793_p6 = data_2042_V_read2112_phi_reg_100561.read();
    } else {
        ap_phi_mux_data_2042_V_read2112_rewind_phi_fu_57793_p6 = data_2042_V_read2112_rewind_reg_57789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2043_V_read2113_phi_phi_fu_100578_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2043_V_read2113_phi_phi_fu_100578_p4 = ap_phi_mux_data_2043_V_read2113_rewind_phi_fu_57807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2043_V_read2113_phi_phi_fu_100578_p4 = data_2043_V_read.read();
        } else {
            ap_phi_mux_data_2043_V_read2113_phi_phi_fu_100578_p4 = ap_phi_reg_pp0_iter0_data_2043_V_read2113_phi_reg_100574.read();
        }
    } else {
        ap_phi_mux_data_2043_V_read2113_phi_phi_fu_100578_p4 = ap_phi_reg_pp0_iter0_data_2043_V_read2113_phi_reg_100574.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2043_V_read2113_rewind_phi_fu_57807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2043_V_read2113_rewind_phi_fu_57807_p6 = data_2043_V_read2113_phi_reg_100574.read();
    } else {
        ap_phi_mux_data_2043_V_read2113_rewind_phi_fu_57807_p6 = data_2043_V_read2113_rewind_reg_57803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2044_V_read2114_phi_phi_fu_100591_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2044_V_read2114_phi_phi_fu_100591_p4 = ap_phi_mux_data_2044_V_read2114_rewind_phi_fu_57821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2044_V_read2114_phi_phi_fu_100591_p4 = data_2044_V_read.read();
        } else {
            ap_phi_mux_data_2044_V_read2114_phi_phi_fu_100591_p4 = ap_phi_reg_pp0_iter0_data_2044_V_read2114_phi_reg_100587.read();
        }
    } else {
        ap_phi_mux_data_2044_V_read2114_phi_phi_fu_100591_p4 = ap_phi_reg_pp0_iter0_data_2044_V_read2114_phi_reg_100587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2044_V_read2114_rewind_phi_fu_57821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2044_V_read2114_rewind_phi_fu_57821_p6 = data_2044_V_read2114_phi_reg_100587.read();
    } else {
        ap_phi_mux_data_2044_V_read2114_rewind_phi_fu_57821_p6 = data_2044_V_read2114_rewind_reg_57817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2045_V_read2115_phi_phi_fu_100604_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2045_V_read2115_phi_phi_fu_100604_p4 = ap_phi_mux_data_2045_V_read2115_rewind_phi_fu_57835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2045_V_read2115_phi_phi_fu_100604_p4 = data_2045_V_read.read();
        } else {
            ap_phi_mux_data_2045_V_read2115_phi_phi_fu_100604_p4 = ap_phi_reg_pp0_iter0_data_2045_V_read2115_phi_reg_100600.read();
        }
    } else {
        ap_phi_mux_data_2045_V_read2115_phi_phi_fu_100604_p4 = ap_phi_reg_pp0_iter0_data_2045_V_read2115_phi_reg_100600.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2045_V_read2115_rewind_phi_fu_57835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2045_V_read2115_rewind_phi_fu_57835_p6 = data_2045_V_read2115_phi_reg_100600.read();
    } else {
        ap_phi_mux_data_2045_V_read2115_rewind_phi_fu_57835_p6 = data_2045_V_read2115_rewind_reg_57831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2046_V_read2116_phi_phi_fu_100617_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2046_V_read2116_phi_phi_fu_100617_p4 = ap_phi_mux_data_2046_V_read2116_rewind_phi_fu_57849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2046_V_read2116_phi_phi_fu_100617_p4 = data_2046_V_read.read();
        } else {
            ap_phi_mux_data_2046_V_read2116_phi_phi_fu_100617_p4 = ap_phi_reg_pp0_iter0_data_2046_V_read2116_phi_reg_100613.read();
        }
    } else {
        ap_phi_mux_data_2046_V_read2116_phi_phi_fu_100617_p4 = ap_phi_reg_pp0_iter0_data_2046_V_read2116_phi_reg_100613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2046_V_read2116_rewind_phi_fu_57849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2046_V_read2116_rewind_phi_fu_57849_p6 = data_2046_V_read2116_phi_reg_100613.read();
    } else {
        ap_phi_mux_data_2046_V_read2116_rewind_phi_fu_57849_p6 = data_2046_V_read2116_rewind_reg_57845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2047_V_read2117_phi_phi_fu_100630_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2047_V_read2117_phi_phi_fu_100630_p4 = ap_phi_mux_data_2047_V_read2117_rewind_phi_fu_57863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2047_V_read2117_phi_phi_fu_100630_p4 = data_2047_V_read.read();
        } else {
            ap_phi_mux_data_2047_V_read2117_phi_phi_fu_100630_p4 = ap_phi_reg_pp0_iter0_data_2047_V_read2117_phi_reg_100626.read();
        }
    } else {
        ap_phi_mux_data_2047_V_read2117_phi_phi_fu_100630_p4 = ap_phi_reg_pp0_iter0_data_2047_V_read2117_phi_reg_100626.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2047_V_read2117_rewind_phi_fu_57863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2047_V_read2117_rewind_phi_fu_57863_p6 = data_2047_V_read2117_phi_reg_100626.read();
    } else {
        ap_phi_mux_data_2047_V_read2117_rewind_phi_fu_57863_p6 = data_2047_V_read2117_rewind_reg_57859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2048_V_read2118_phi_phi_fu_100643_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2048_V_read2118_phi_phi_fu_100643_p4 = ap_phi_mux_data_2048_V_read2118_rewind_phi_fu_57877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2048_V_read2118_phi_phi_fu_100643_p4 = data_2048_V_read.read();
        } else {
            ap_phi_mux_data_2048_V_read2118_phi_phi_fu_100643_p4 = ap_phi_reg_pp0_iter0_data_2048_V_read2118_phi_reg_100639.read();
        }
    } else {
        ap_phi_mux_data_2048_V_read2118_phi_phi_fu_100643_p4 = ap_phi_reg_pp0_iter0_data_2048_V_read2118_phi_reg_100639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2048_V_read2118_rewind_phi_fu_57877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2048_V_read2118_rewind_phi_fu_57877_p6 = data_2048_V_read2118_phi_reg_100639.read();
    } else {
        ap_phi_mux_data_2048_V_read2118_rewind_phi_fu_57877_p6 = data_2048_V_read2118_rewind_reg_57873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2049_V_read2119_phi_phi_fu_100656_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2049_V_read2119_phi_phi_fu_100656_p4 = ap_phi_mux_data_2049_V_read2119_rewind_phi_fu_57891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2049_V_read2119_phi_phi_fu_100656_p4 = data_2049_V_read.read();
        } else {
            ap_phi_mux_data_2049_V_read2119_phi_phi_fu_100656_p4 = ap_phi_reg_pp0_iter0_data_2049_V_read2119_phi_reg_100652.read();
        }
    } else {
        ap_phi_mux_data_2049_V_read2119_phi_phi_fu_100656_p4 = ap_phi_reg_pp0_iter0_data_2049_V_read2119_phi_reg_100652.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2049_V_read2119_rewind_phi_fu_57891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2049_V_read2119_rewind_phi_fu_57891_p6 = data_2049_V_read2119_phi_reg_100652.read();
    } else {
        ap_phi_mux_data_2049_V_read2119_rewind_phi_fu_57891_p6 = data_2049_V_read2119_rewind_reg_57887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_204_V_read274_phi_phi_fu_76671_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_204_V_read274_phi_phi_fu_76671_p4 = ap_phi_mux_data_204_V_read274_rewind_phi_fu_32061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_204_V_read274_phi_phi_fu_76671_p4 = data_204_V_read.read();
        } else {
            ap_phi_mux_data_204_V_read274_phi_phi_fu_76671_p4 = ap_phi_reg_pp0_iter0_data_204_V_read274_phi_reg_76667.read();
        }
    } else {
        ap_phi_mux_data_204_V_read274_phi_phi_fu_76671_p4 = ap_phi_reg_pp0_iter0_data_204_V_read274_phi_reg_76667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_204_V_read274_rewind_phi_fu_32061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_204_V_read274_rewind_phi_fu_32061_p6 = data_204_V_read274_phi_reg_76667.read();
    } else {
        ap_phi_mux_data_204_V_read274_rewind_phi_fu_32061_p6 = data_204_V_read274_rewind_reg_32057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2050_V_read2120_phi_phi_fu_100669_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2050_V_read2120_phi_phi_fu_100669_p4 = ap_phi_mux_data_2050_V_read2120_rewind_phi_fu_57905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2050_V_read2120_phi_phi_fu_100669_p4 = data_2050_V_read.read();
        } else {
            ap_phi_mux_data_2050_V_read2120_phi_phi_fu_100669_p4 = ap_phi_reg_pp0_iter0_data_2050_V_read2120_phi_reg_100665.read();
        }
    } else {
        ap_phi_mux_data_2050_V_read2120_phi_phi_fu_100669_p4 = ap_phi_reg_pp0_iter0_data_2050_V_read2120_phi_reg_100665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2050_V_read2120_rewind_phi_fu_57905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2050_V_read2120_rewind_phi_fu_57905_p6 = data_2050_V_read2120_phi_reg_100665.read();
    } else {
        ap_phi_mux_data_2050_V_read2120_rewind_phi_fu_57905_p6 = data_2050_V_read2120_rewind_reg_57901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2051_V_read2121_phi_phi_fu_100682_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2051_V_read2121_phi_phi_fu_100682_p4 = ap_phi_mux_data_2051_V_read2121_rewind_phi_fu_57919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2051_V_read2121_phi_phi_fu_100682_p4 = data_2051_V_read.read();
        } else {
            ap_phi_mux_data_2051_V_read2121_phi_phi_fu_100682_p4 = ap_phi_reg_pp0_iter0_data_2051_V_read2121_phi_reg_100678.read();
        }
    } else {
        ap_phi_mux_data_2051_V_read2121_phi_phi_fu_100682_p4 = ap_phi_reg_pp0_iter0_data_2051_V_read2121_phi_reg_100678.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2051_V_read2121_rewind_phi_fu_57919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2051_V_read2121_rewind_phi_fu_57919_p6 = data_2051_V_read2121_phi_reg_100678.read();
    } else {
        ap_phi_mux_data_2051_V_read2121_rewind_phi_fu_57919_p6 = data_2051_V_read2121_rewind_reg_57915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2052_V_read2122_phi_phi_fu_100695_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2052_V_read2122_phi_phi_fu_100695_p4 = ap_phi_mux_data_2052_V_read2122_rewind_phi_fu_57933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2052_V_read2122_phi_phi_fu_100695_p4 = data_2052_V_read.read();
        } else {
            ap_phi_mux_data_2052_V_read2122_phi_phi_fu_100695_p4 = ap_phi_reg_pp0_iter0_data_2052_V_read2122_phi_reg_100691.read();
        }
    } else {
        ap_phi_mux_data_2052_V_read2122_phi_phi_fu_100695_p4 = ap_phi_reg_pp0_iter0_data_2052_V_read2122_phi_reg_100691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2052_V_read2122_rewind_phi_fu_57933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2052_V_read2122_rewind_phi_fu_57933_p6 = data_2052_V_read2122_phi_reg_100691.read();
    } else {
        ap_phi_mux_data_2052_V_read2122_rewind_phi_fu_57933_p6 = data_2052_V_read2122_rewind_reg_57929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2053_V_read2123_phi_phi_fu_100708_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2053_V_read2123_phi_phi_fu_100708_p4 = ap_phi_mux_data_2053_V_read2123_rewind_phi_fu_57947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2053_V_read2123_phi_phi_fu_100708_p4 = data_2053_V_read.read();
        } else {
            ap_phi_mux_data_2053_V_read2123_phi_phi_fu_100708_p4 = ap_phi_reg_pp0_iter0_data_2053_V_read2123_phi_reg_100704.read();
        }
    } else {
        ap_phi_mux_data_2053_V_read2123_phi_phi_fu_100708_p4 = ap_phi_reg_pp0_iter0_data_2053_V_read2123_phi_reg_100704.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2053_V_read2123_rewind_phi_fu_57947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2053_V_read2123_rewind_phi_fu_57947_p6 = data_2053_V_read2123_phi_reg_100704.read();
    } else {
        ap_phi_mux_data_2053_V_read2123_rewind_phi_fu_57947_p6 = data_2053_V_read2123_rewind_reg_57943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2054_V_read2124_phi_phi_fu_100721_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2054_V_read2124_phi_phi_fu_100721_p4 = ap_phi_mux_data_2054_V_read2124_rewind_phi_fu_57961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2054_V_read2124_phi_phi_fu_100721_p4 = data_2054_V_read.read();
        } else {
            ap_phi_mux_data_2054_V_read2124_phi_phi_fu_100721_p4 = ap_phi_reg_pp0_iter0_data_2054_V_read2124_phi_reg_100717.read();
        }
    } else {
        ap_phi_mux_data_2054_V_read2124_phi_phi_fu_100721_p4 = ap_phi_reg_pp0_iter0_data_2054_V_read2124_phi_reg_100717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2054_V_read2124_rewind_phi_fu_57961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2054_V_read2124_rewind_phi_fu_57961_p6 = data_2054_V_read2124_phi_reg_100717.read();
    } else {
        ap_phi_mux_data_2054_V_read2124_rewind_phi_fu_57961_p6 = data_2054_V_read2124_rewind_reg_57957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2055_V_read2125_phi_phi_fu_100734_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2055_V_read2125_phi_phi_fu_100734_p4 = ap_phi_mux_data_2055_V_read2125_rewind_phi_fu_57975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2055_V_read2125_phi_phi_fu_100734_p4 = data_2055_V_read.read();
        } else {
            ap_phi_mux_data_2055_V_read2125_phi_phi_fu_100734_p4 = ap_phi_reg_pp0_iter0_data_2055_V_read2125_phi_reg_100730.read();
        }
    } else {
        ap_phi_mux_data_2055_V_read2125_phi_phi_fu_100734_p4 = ap_phi_reg_pp0_iter0_data_2055_V_read2125_phi_reg_100730.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2055_V_read2125_rewind_phi_fu_57975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2055_V_read2125_rewind_phi_fu_57975_p6 = data_2055_V_read2125_phi_reg_100730.read();
    } else {
        ap_phi_mux_data_2055_V_read2125_rewind_phi_fu_57975_p6 = data_2055_V_read2125_rewind_reg_57971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2056_V_read2126_phi_phi_fu_100747_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2056_V_read2126_phi_phi_fu_100747_p4 = ap_phi_mux_data_2056_V_read2126_rewind_phi_fu_57989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2056_V_read2126_phi_phi_fu_100747_p4 = data_2056_V_read.read();
        } else {
            ap_phi_mux_data_2056_V_read2126_phi_phi_fu_100747_p4 = ap_phi_reg_pp0_iter0_data_2056_V_read2126_phi_reg_100743.read();
        }
    } else {
        ap_phi_mux_data_2056_V_read2126_phi_phi_fu_100747_p4 = ap_phi_reg_pp0_iter0_data_2056_V_read2126_phi_reg_100743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2056_V_read2126_rewind_phi_fu_57989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2056_V_read2126_rewind_phi_fu_57989_p6 = data_2056_V_read2126_phi_reg_100743.read();
    } else {
        ap_phi_mux_data_2056_V_read2126_rewind_phi_fu_57989_p6 = data_2056_V_read2126_rewind_reg_57985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2057_V_read2127_phi_phi_fu_100760_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2057_V_read2127_phi_phi_fu_100760_p4 = ap_phi_mux_data_2057_V_read2127_rewind_phi_fu_58003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2057_V_read2127_phi_phi_fu_100760_p4 = data_2057_V_read.read();
        } else {
            ap_phi_mux_data_2057_V_read2127_phi_phi_fu_100760_p4 = ap_phi_reg_pp0_iter0_data_2057_V_read2127_phi_reg_100756.read();
        }
    } else {
        ap_phi_mux_data_2057_V_read2127_phi_phi_fu_100760_p4 = ap_phi_reg_pp0_iter0_data_2057_V_read2127_phi_reg_100756.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2057_V_read2127_rewind_phi_fu_58003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2057_V_read2127_rewind_phi_fu_58003_p6 = data_2057_V_read2127_phi_reg_100756.read();
    } else {
        ap_phi_mux_data_2057_V_read2127_rewind_phi_fu_58003_p6 = data_2057_V_read2127_rewind_reg_57999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2058_V_read2128_phi_phi_fu_100773_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2058_V_read2128_phi_phi_fu_100773_p4 = ap_phi_mux_data_2058_V_read2128_rewind_phi_fu_58017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2058_V_read2128_phi_phi_fu_100773_p4 = data_2058_V_read.read();
        } else {
            ap_phi_mux_data_2058_V_read2128_phi_phi_fu_100773_p4 = ap_phi_reg_pp0_iter0_data_2058_V_read2128_phi_reg_100769.read();
        }
    } else {
        ap_phi_mux_data_2058_V_read2128_phi_phi_fu_100773_p4 = ap_phi_reg_pp0_iter0_data_2058_V_read2128_phi_reg_100769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2058_V_read2128_rewind_phi_fu_58017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2058_V_read2128_rewind_phi_fu_58017_p6 = data_2058_V_read2128_phi_reg_100769.read();
    } else {
        ap_phi_mux_data_2058_V_read2128_rewind_phi_fu_58017_p6 = data_2058_V_read2128_rewind_reg_58013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2059_V_read2129_phi_phi_fu_100786_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2059_V_read2129_phi_phi_fu_100786_p4 = ap_phi_mux_data_2059_V_read2129_rewind_phi_fu_58031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2059_V_read2129_phi_phi_fu_100786_p4 = data_2059_V_read.read();
        } else {
            ap_phi_mux_data_2059_V_read2129_phi_phi_fu_100786_p4 = ap_phi_reg_pp0_iter0_data_2059_V_read2129_phi_reg_100782.read();
        }
    } else {
        ap_phi_mux_data_2059_V_read2129_phi_phi_fu_100786_p4 = ap_phi_reg_pp0_iter0_data_2059_V_read2129_phi_reg_100782.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2059_V_read2129_rewind_phi_fu_58031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2059_V_read2129_rewind_phi_fu_58031_p6 = data_2059_V_read2129_phi_reg_100782.read();
    } else {
        ap_phi_mux_data_2059_V_read2129_rewind_phi_fu_58031_p6 = data_2059_V_read2129_rewind_reg_58027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_205_V_read275_phi_phi_fu_76684_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_205_V_read275_phi_phi_fu_76684_p4 = ap_phi_mux_data_205_V_read275_rewind_phi_fu_32075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_205_V_read275_phi_phi_fu_76684_p4 = data_205_V_read.read();
        } else {
            ap_phi_mux_data_205_V_read275_phi_phi_fu_76684_p4 = ap_phi_reg_pp0_iter0_data_205_V_read275_phi_reg_76680.read();
        }
    } else {
        ap_phi_mux_data_205_V_read275_phi_phi_fu_76684_p4 = ap_phi_reg_pp0_iter0_data_205_V_read275_phi_reg_76680.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_205_V_read275_rewind_phi_fu_32075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_205_V_read275_rewind_phi_fu_32075_p6 = data_205_V_read275_phi_reg_76680.read();
    } else {
        ap_phi_mux_data_205_V_read275_rewind_phi_fu_32075_p6 = data_205_V_read275_rewind_reg_32071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2060_V_read2130_phi_phi_fu_100799_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2060_V_read2130_phi_phi_fu_100799_p4 = ap_phi_mux_data_2060_V_read2130_rewind_phi_fu_58045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2060_V_read2130_phi_phi_fu_100799_p4 = data_2060_V_read.read();
        } else {
            ap_phi_mux_data_2060_V_read2130_phi_phi_fu_100799_p4 = ap_phi_reg_pp0_iter0_data_2060_V_read2130_phi_reg_100795.read();
        }
    } else {
        ap_phi_mux_data_2060_V_read2130_phi_phi_fu_100799_p4 = ap_phi_reg_pp0_iter0_data_2060_V_read2130_phi_reg_100795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2060_V_read2130_rewind_phi_fu_58045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2060_V_read2130_rewind_phi_fu_58045_p6 = data_2060_V_read2130_phi_reg_100795.read();
    } else {
        ap_phi_mux_data_2060_V_read2130_rewind_phi_fu_58045_p6 = data_2060_V_read2130_rewind_reg_58041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2061_V_read2131_phi_phi_fu_100812_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2061_V_read2131_phi_phi_fu_100812_p4 = ap_phi_mux_data_2061_V_read2131_rewind_phi_fu_58059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2061_V_read2131_phi_phi_fu_100812_p4 = data_2061_V_read.read();
        } else {
            ap_phi_mux_data_2061_V_read2131_phi_phi_fu_100812_p4 = ap_phi_reg_pp0_iter0_data_2061_V_read2131_phi_reg_100808.read();
        }
    } else {
        ap_phi_mux_data_2061_V_read2131_phi_phi_fu_100812_p4 = ap_phi_reg_pp0_iter0_data_2061_V_read2131_phi_reg_100808.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2061_V_read2131_rewind_phi_fu_58059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2061_V_read2131_rewind_phi_fu_58059_p6 = data_2061_V_read2131_phi_reg_100808.read();
    } else {
        ap_phi_mux_data_2061_V_read2131_rewind_phi_fu_58059_p6 = data_2061_V_read2131_rewind_reg_58055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2062_V_read2132_phi_phi_fu_100825_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2062_V_read2132_phi_phi_fu_100825_p4 = ap_phi_mux_data_2062_V_read2132_rewind_phi_fu_58073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2062_V_read2132_phi_phi_fu_100825_p4 = data_2062_V_read.read();
        } else {
            ap_phi_mux_data_2062_V_read2132_phi_phi_fu_100825_p4 = ap_phi_reg_pp0_iter0_data_2062_V_read2132_phi_reg_100821.read();
        }
    } else {
        ap_phi_mux_data_2062_V_read2132_phi_phi_fu_100825_p4 = ap_phi_reg_pp0_iter0_data_2062_V_read2132_phi_reg_100821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2062_V_read2132_rewind_phi_fu_58073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2062_V_read2132_rewind_phi_fu_58073_p6 = data_2062_V_read2132_phi_reg_100821.read();
    } else {
        ap_phi_mux_data_2062_V_read2132_rewind_phi_fu_58073_p6 = data_2062_V_read2132_rewind_reg_58069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2063_V_read2133_phi_phi_fu_100838_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2063_V_read2133_phi_phi_fu_100838_p4 = ap_phi_mux_data_2063_V_read2133_rewind_phi_fu_58087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2063_V_read2133_phi_phi_fu_100838_p4 = data_2063_V_read.read();
        } else {
            ap_phi_mux_data_2063_V_read2133_phi_phi_fu_100838_p4 = ap_phi_reg_pp0_iter0_data_2063_V_read2133_phi_reg_100834.read();
        }
    } else {
        ap_phi_mux_data_2063_V_read2133_phi_phi_fu_100838_p4 = ap_phi_reg_pp0_iter0_data_2063_V_read2133_phi_reg_100834.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2063_V_read2133_rewind_phi_fu_58087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2063_V_read2133_rewind_phi_fu_58087_p6 = data_2063_V_read2133_phi_reg_100834.read();
    } else {
        ap_phi_mux_data_2063_V_read2133_rewind_phi_fu_58087_p6 = data_2063_V_read2133_rewind_reg_58083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2064_V_read2134_phi_phi_fu_100851_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2064_V_read2134_phi_phi_fu_100851_p4 = ap_phi_mux_data_2064_V_read2134_rewind_phi_fu_58101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2064_V_read2134_phi_phi_fu_100851_p4 = data_2064_V_read.read();
        } else {
            ap_phi_mux_data_2064_V_read2134_phi_phi_fu_100851_p4 = ap_phi_reg_pp0_iter0_data_2064_V_read2134_phi_reg_100847.read();
        }
    } else {
        ap_phi_mux_data_2064_V_read2134_phi_phi_fu_100851_p4 = ap_phi_reg_pp0_iter0_data_2064_V_read2134_phi_reg_100847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2064_V_read2134_rewind_phi_fu_58101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2064_V_read2134_rewind_phi_fu_58101_p6 = data_2064_V_read2134_phi_reg_100847.read();
    } else {
        ap_phi_mux_data_2064_V_read2134_rewind_phi_fu_58101_p6 = data_2064_V_read2134_rewind_reg_58097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2065_V_read2135_phi_phi_fu_100864_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2065_V_read2135_phi_phi_fu_100864_p4 = ap_phi_mux_data_2065_V_read2135_rewind_phi_fu_58115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2065_V_read2135_phi_phi_fu_100864_p4 = data_2065_V_read.read();
        } else {
            ap_phi_mux_data_2065_V_read2135_phi_phi_fu_100864_p4 = ap_phi_reg_pp0_iter0_data_2065_V_read2135_phi_reg_100860.read();
        }
    } else {
        ap_phi_mux_data_2065_V_read2135_phi_phi_fu_100864_p4 = ap_phi_reg_pp0_iter0_data_2065_V_read2135_phi_reg_100860.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2065_V_read2135_rewind_phi_fu_58115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2065_V_read2135_rewind_phi_fu_58115_p6 = data_2065_V_read2135_phi_reg_100860.read();
    } else {
        ap_phi_mux_data_2065_V_read2135_rewind_phi_fu_58115_p6 = data_2065_V_read2135_rewind_reg_58111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2066_V_read2136_phi_phi_fu_100877_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2066_V_read2136_phi_phi_fu_100877_p4 = ap_phi_mux_data_2066_V_read2136_rewind_phi_fu_58129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2066_V_read2136_phi_phi_fu_100877_p4 = data_2066_V_read.read();
        } else {
            ap_phi_mux_data_2066_V_read2136_phi_phi_fu_100877_p4 = ap_phi_reg_pp0_iter0_data_2066_V_read2136_phi_reg_100873.read();
        }
    } else {
        ap_phi_mux_data_2066_V_read2136_phi_phi_fu_100877_p4 = ap_phi_reg_pp0_iter0_data_2066_V_read2136_phi_reg_100873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2066_V_read2136_rewind_phi_fu_58129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2066_V_read2136_rewind_phi_fu_58129_p6 = data_2066_V_read2136_phi_reg_100873.read();
    } else {
        ap_phi_mux_data_2066_V_read2136_rewind_phi_fu_58129_p6 = data_2066_V_read2136_rewind_reg_58125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2067_V_read2137_phi_phi_fu_100890_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2067_V_read2137_phi_phi_fu_100890_p4 = ap_phi_mux_data_2067_V_read2137_rewind_phi_fu_58143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2067_V_read2137_phi_phi_fu_100890_p4 = data_2067_V_read.read();
        } else {
            ap_phi_mux_data_2067_V_read2137_phi_phi_fu_100890_p4 = ap_phi_reg_pp0_iter0_data_2067_V_read2137_phi_reg_100886.read();
        }
    } else {
        ap_phi_mux_data_2067_V_read2137_phi_phi_fu_100890_p4 = ap_phi_reg_pp0_iter0_data_2067_V_read2137_phi_reg_100886.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2067_V_read2137_rewind_phi_fu_58143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2067_V_read2137_rewind_phi_fu_58143_p6 = data_2067_V_read2137_phi_reg_100886.read();
    } else {
        ap_phi_mux_data_2067_V_read2137_rewind_phi_fu_58143_p6 = data_2067_V_read2137_rewind_reg_58139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2068_V_read2138_phi_phi_fu_100903_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2068_V_read2138_phi_phi_fu_100903_p4 = ap_phi_mux_data_2068_V_read2138_rewind_phi_fu_58157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2068_V_read2138_phi_phi_fu_100903_p4 = data_2068_V_read.read();
        } else {
            ap_phi_mux_data_2068_V_read2138_phi_phi_fu_100903_p4 = ap_phi_reg_pp0_iter0_data_2068_V_read2138_phi_reg_100899.read();
        }
    } else {
        ap_phi_mux_data_2068_V_read2138_phi_phi_fu_100903_p4 = ap_phi_reg_pp0_iter0_data_2068_V_read2138_phi_reg_100899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2068_V_read2138_rewind_phi_fu_58157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2068_V_read2138_rewind_phi_fu_58157_p6 = data_2068_V_read2138_phi_reg_100899.read();
    } else {
        ap_phi_mux_data_2068_V_read2138_rewind_phi_fu_58157_p6 = data_2068_V_read2138_rewind_reg_58153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2069_V_read2139_phi_phi_fu_100916_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2069_V_read2139_phi_phi_fu_100916_p4 = ap_phi_mux_data_2069_V_read2139_rewind_phi_fu_58171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2069_V_read2139_phi_phi_fu_100916_p4 = data_2069_V_read.read();
        } else {
            ap_phi_mux_data_2069_V_read2139_phi_phi_fu_100916_p4 = ap_phi_reg_pp0_iter0_data_2069_V_read2139_phi_reg_100912.read();
        }
    } else {
        ap_phi_mux_data_2069_V_read2139_phi_phi_fu_100916_p4 = ap_phi_reg_pp0_iter0_data_2069_V_read2139_phi_reg_100912.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2069_V_read2139_rewind_phi_fu_58171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2069_V_read2139_rewind_phi_fu_58171_p6 = data_2069_V_read2139_phi_reg_100912.read();
    } else {
        ap_phi_mux_data_2069_V_read2139_rewind_phi_fu_58171_p6 = data_2069_V_read2139_rewind_reg_58167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_206_V_read276_phi_phi_fu_76697_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_206_V_read276_phi_phi_fu_76697_p4 = ap_phi_mux_data_206_V_read276_rewind_phi_fu_32089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_206_V_read276_phi_phi_fu_76697_p4 = data_206_V_read.read();
        } else {
            ap_phi_mux_data_206_V_read276_phi_phi_fu_76697_p4 = ap_phi_reg_pp0_iter0_data_206_V_read276_phi_reg_76693.read();
        }
    } else {
        ap_phi_mux_data_206_V_read276_phi_phi_fu_76697_p4 = ap_phi_reg_pp0_iter0_data_206_V_read276_phi_reg_76693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_206_V_read276_rewind_phi_fu_32089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_206_V_read276_rewind_phi_fu_32089_p6 = data_206_V_read276_phi_reg_76693.read();
    } else {
        ap_phi_mux_data_206_V_read276_rewind_phi_fu_32089_p6 = data_206_V_read276_rewind_reg_32085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2070_V_read2140_phi_phi_fu_100929_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2070_V_read2140_phi_phi_fu_100929_p4 = ap_phi_mux_data_2070_V_read2140_rewind_phi_fu_58185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2070_V_read2140_phi_phi_fu_100929_p4 = data_2070_V_read.read();
        } else {
            ap_phi_mux_data_2070_V_read2140_phi_phi_fu_100929_p4 = ap_phi_reg_pp0_iter0_data_2070_V_read2140_phi_reg_100925.read();
        }
    } else {
        ap_phi_mux_data_2070_V_read2140_phi_phi_fu_100929_p4 = ap_phi_reg_pp0_iter0_data_2070_V_read2140_phi_reg_100925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2070_V_read2140_rewind_phi_fu_58185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2070_V_read2140_rewind_phi_fu_58185_p6 = data_2070_V_read2140_phi_reg_100925.read();
    } else {
        ap_phi_mux_data_2070_V_read2140_rewind_phi_fu_58185_p6 = data_2070_V_read2140_rewind_reg_58181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2071_V_read2141_phi_phi_fu_100942_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2071_V_read2141_phi_phi_fu_100942_p4 = ap_phi_mux_data_2071_V_read2141_rewind_phi_fu_58199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2071_V_read2141_phi_phi_fu_100942_p4 = data_2071_V_read.read();
        } else {
            ap_phi_mux_data_2071_V_read2141_phi_phi_fu_100942_p4 = ap_phi_reg_pp0_iter0_data_2071_V_read2141_phi_reg_100938.read();
        }
    } else {
        ap_phi_mux_data_2071_V_read2141_phi_phi_fu_100942_p4 = ap_phi_reg_pp0_iter0_data_2071_V_read2141_phi_reg_100938.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2071_V_read2141_rewind_phi_fu_58199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2071_V_read2141_rewind_phi_fu_58199_p6 = data_2071_V_read2141_phi_reg_100938.read();
    } else {
        ap_phi_mux_data_2071_V_read2141_rewind_phi_fu_58199_p6 = data_2071_V_read2141_rewind_reg_58195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2072_V_read2142_phi_phi_fu_100955_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2072_V_read2142_phi_phi_fu_100955_p4 = ap_phi_mux_data_2072_V_read2142_rewind_phi_fu_58213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2072_V_read2142_phi_phi_fu_100955_p4 = data_2072_V_read.read();
        } else {
            ap_phi_mux_data_2072_V_read2142_phi_phi_fu_100955_p4 = ap_phi_reg_pp0_iter0_data_2072_V_read2142_phi_reg_100951.read();
        }
    } else {
        ap_phi_mux_data_2072_V_read2142_phi_phi_fu_100955_p4 = ap_phi_reg_pp0_iter0_data_2072_V_read2142_phi_reg_100951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2072_V_read2142_rewind_phi_fu_58213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2072_V_read2142_rewind_phi_fu_58213_p6 = data_2072_V_read2142_phi_reg_100951.read();
    } else {
        ap_phi_mux_data_2072_V_read2142_rewind_phi_fu_58213_p6 = data_2072_V_read2142_rewind_reg_58209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2073_V_read2143_phi_phi_fu_100968_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2073_V_read2143_phi_phi_fu_100968_p4 = ap_phi_mux_data_2073_V_read2143_rewind_phi_fu_58227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2073_V_read2143_phi_phi_fu_100968_p4 = data_2073_V_read.read();
        } else {
            ap_phi_mux_data_2073_V_read2143_phi_phi_fu_100968_p4 = ap_phi_reg_pp0_iter0_data_2073_V_read2143_phi_reg_100964.read();
        }
    } else {
        ap_phi_mux_data_2073_V_read2143_phi_phi_fu_100968_p4 = ap_phi_reg_pp0_iter0_data_2073_V_read2143_phi_reg_100964.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2073_V_read2143_rewind_phi_fu_58227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2073_V_read2143_rewind_phi_fu_58227_p6 = data_2073_V_read2143_phi_reg_100964.read();
    } else {
        ap_phi_mux_data_2073_V_read2143_rewind_phi_fu_58227_p6 = data_2073_V_read2143_rewind_reg_58223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2074_V_read2144_phi_phi_fu_100981_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2074_V_read2144_phi_phi_fu_100981_p4 = ap_phi_mux_data_2074_V_read2144_rewind_phi_fu_58241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2074_V_read2144_phi_phi_fu_100981_p4 = data_2074_V_read.read();
        } else {
            ap_phi_mux_data_2074_V_read2144_phi_phi_fu_100981_p4 = ap_phi_reg_pp0_iter0_data_2074_V_read2144_phi_reg_100977.read();
        }
    } else {
        ap_phi_mux_data_2074_V_read2144_phi_phi_fu_100981_p4 = ap_phi_reg_pp0_iter0_data_2074_V_read2144_phi_reg_100977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2074_V_read2144_rewind_phi_fu_58241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2074_V_read2144_rewind_phi_fu_58241_p6 = data_2074_V_read2144_phi_reg_100977.read();
    } else {
        ap_phi_mux_data_2074_V_read2144_rewind_phi_fu_58241_p6 = data_2074_V_read2144_rewind_reg_58237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2075_V_read2145_phi_phi_fu_100994_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2075_V_read2145_phi_phi_fu_100994_p4 = ap_phi_mux_data_2075_V_read2145_rewind_phi_fu_58255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2075_V_read2145_phi_phi_fu_100994_p4 = data_2075_V_read.read();
        } else {
            ap_phi_mux_data_2075_V_read2145_phi_phi_fu_100994_p4 = ap_phi_reg_pp0_iter0_data_2075_V_read2145_phi_reg_100990.read();
        }
    } else {
        ap_phi_mux_data_2075_V_read2145_phi_phi_fu_100994_p4 = ap_phi_reg_pp0_iter0_data_2075_V_read2145_phi_reg_100990.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2075_V_read2145_rewind_phi_fu_58255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2075_V_read2145_rewind_phi_fu_58255_p6 = data_2075_V_read2145_phi_reg_100990.read();
    } else {
        ap_phi_mux_data_2075_V_read2145_rewind_phi_fu_58255_p6 = data_2075_V_read2145_rewind_reg_58251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2076_V_read2146_phi_phi_fu_101007_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2076_V_read2146_phi_phi_fu_101007_p4 = ap_phi_mux_data_2076_V_read2146_rewind_phi_fu_58269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2076_V_read2146_phi_phi_fu_101007_p4 = data_2076_V_read.read();
        } else {
            ap_phi_mux_data_2076_V_read2146_phi_phi_fu_101007_p4 = ap_phi_reg_pp0_iter0_data_2076_V_read2146_phi_reg_101003.read();
        }
    } else {
        ap_phi_mux_data_2076_V_read2146_phi_phi_fu_101007_p4 = ap_phi_reg_pp0_iter0_data_2076_V_read2146_phi_reg_101003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2076_V_read2146_rewind_phi_fu_58269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2076_V_read2146_rewind_phi_fu_58269_p6 = data_2076_V_read2146_phi_reg_101003.read();
    } else {
        ap_phi_mux_data_2076_V_read2146_rewind_phi_fu_58269_p6 = data_2076_V_read2146_rewind_reg_58265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2077_V_read2147_phi_phi_fu_101020_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2077_V_read2147_phi_phi_fu_101020_p4 = ap_phi_mux_data_2077_V_read2147_rewind_phi_fu_58283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2077_V_read2147_phi_phi_fu_101020_p4 = data_2077_V_read.read();
        } else {
            ap_phi_mux_data_2077_V_read2147_phi_phi_fu_101020_p4 = ap_phi_reg_pp0_iter0_data_2077_V_read2147_phi_reg_101016.read();
        }
    } else {
        ap_phi_mux_data_2077_V_read2147_phi_phi_fu_101020_p4 = ap_phi_reg_pp0_iter0_data_2077_V_read2147_phi_reg_101016.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2077_V_read2147_rewind_phi_fu_58283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2077_V_read2147_rewind_phi_fu_58283_p6 = data_2077_V_read2147_phi_reg_101016.read();
    } else {
        ap_phi_mux_data_2077_V_read2147_rewind_phi_fu_58283_p6 = data_2077_V_read2147_rewind_reg_58279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2078_V_read2148_phi_phi_fu_101033_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2078_V_read2148_phi_phi_fu_101033_p4 = ap_phi_mux_data_2078_V_read2148_rewind_phi_fu_58297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2078_V_read2148_phi_phi_fu_101033_p4 = data_2078_V_read.read();
        } else {
            ap_phi_mux_data_2078_V_read2148_phi_phi_fu_101033_p4 = ap_phi_reg_pp0_iter0_data_2078_V_read2148_phi_reg_101029.read();
        }
    } else {
        ap_phi_mux_data_2078_V_read2148_phi_phi_fu_101033_p4 = ap_phi_reg_pp0_iter0_data_2078_V_read2148_phi_reg_101029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2078_V_read2148_rewind_phi_fu_58297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2078_V_read2148_rewind_phi_fu_58297_p6 = data_2078_V_read2148_phi_reg_101029.read();
    } else {
        ap_phi_mux_data_2078_V_read2148_rewind_phi_fu_58297_p6 = data_2078_V_read2148_rewind_reg_58293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2079_V_read2149_phi_phi_fu_101046_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2079_V_read2149_phi_phi_fu_101046_p4 = ap_phi_mux_data_2079_V_read2149_rewind_phi_fu_58311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2079_V_read2149_phi_phi_fu_101046_p4 = data_2079_V_read.read();
        } else {
            ap_phi_mux_data_2079_V_read2149_phi_phi_fu_101046_p4 = ap_phi_reg_pp0_iter0_data_2079_V_read2149_phi_reg_101042.read();
        }
    } else {
        ap_phi_mux_data_2079_V_read2149_phi_phi_fu_101046_p4 = ap_phi_reg_pp0_iter0_data_2079_V_read2149_phi_reg_101042.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2079_V_read2149_rewind_phi_fu_58311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2079_V_read2149_rewind_phi_fu_58311_p6 = data_2079_V_read2149_phi_reg_101042.read();
    } else {
        ap_phi_mux_data_2079_V_read2149_rewind_phi_fu_58311_p6 = data_2079_V_read2149_rewind_reg_58307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_207_V_read277_phi_phi_fu_76710_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_207_V_read277_phi_phi_fu_76710_p4 = ap_phi_mux_data_207_V_read277_rewind_phi_fu_32103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_207_V_read277_phi_phi_fu_76710_p4 = data_207_V_read.read();
        } else {
            ap_phi_mux_data_207_V_read277_phi_phi_fu_76710_p4 = ap_phi_reg_pp0_iter0_data_207_V_read277_phi_reg_76706.read();
        }
    } else {
        ap_phi_mux_data_207_V_read277_phi_phi_fu_76710_p4 = ap_phi_reg_pp0_iter0_data_207_V_read277_phi_reg_76706.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_207_V_read277_rewind_phi_fu_32103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_207_V_read277_rewind_phi_fu_32103_p6 = data_207_V_read277_phi_reg_76706.read();
    } else {
        ap_phi_mux_data_207_V_read277_rewind_phi_fu_32103_p6 = data_207_V_read277_rewind_reg_32099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2080_V_read2150_phi_phi_fu_101059_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2080_V_read2150_phi_phi_fu_101059_p4 = ap_phi_mux_data_2080_V_read2150_rewind_phi_fu_58325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2080_V_read2150_phi_phi_fu_101059_p4 = data_2080_V_read.read();
        } else {
            ap_phi_mux_data_2080_V_read2150_phi_phi_fu_101059_p4 = ap_phi_reg_pp0_iter0_data_2080_V_read2150_phi_reg_101055.read();
        }
    } else {
        ap_phi_mux_data_2080_V_read2150_phi_phi_fu_101059_p4 = ap_phi_reg_pp0_iter0_data_2080_V_read2150_phi_reg_101055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2080_V_read2150_rewind_phi_fu_58325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2080_V_read2150_rewind_phi_fu_58325_p6 = data_2080_V_read2150_phi_reg_101055.read();
    } else {
        ap_phi_mux_data_2080_V_read2150_rewind_phi_fu_58325_p6 = data_2080_V_read2150_rewind_reg_58321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2081_V_read2151_phi_phi_fu_101072_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2081_V_read2151_phi_phi_fu_101072_p4 = ap_phi_mux_data_2081_V_read2151_rewind_phi_fu_58339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2081_V_read2151_phi_phi_fu_101072_p4 = data_2081_V_read.read();
        } else {
            ap_phi_mux_data_2081_V_read2151_phi_phi_fu_101072_p4 = ap_phi_reg_pp0_iter0_data_2081_V_read2151_phi_reg_101068.read();
        }
    } else {
        ap_phi_mux_data_2081_V_read2151_phi_phi_fu_101072_p4 = ap_phi_reg_pp0_iter0_data_2081_V_read2151_phi_reg_101068.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2081_V_read2151_rewind_phi_fu_58339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2081_V_read2151_rewind_phi_fu_58339_p6 = data_2081_V_read2151_phi_reg_101068.read();
    } else {
        ap_phi_mux_data_2081_V_read2151_rewind_phi_fu_58339_p6 = data_2081_V_read2151_rewind_reg_58335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2082_V_read2152_phi_phi_fu_101085_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2082_V_read2152_phi_phi_fu_101085_p4 = ap_phi_mux_data_2082_V_read2152_rewind_phi_fu_58353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2082_V_read2152_phi_phi_fu_101085_p4 = data_2082_V_read.read();
        } else {
            ap_phi_mux_data_2082_V_read2152_phi_phi_fu_101085_p4 = ap_phi_reg_pp0_iter0_data_2082_V_read2152_phi_reg_101081.read();
        }
    } else {
        ap_phi_mux_data_2082_V_read2152_phi_phi_fu_101085_p4 = ap_phi_reg_pp0_iter0_data_2082_V_read2152_phi_reg_101081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2082_V_read2152_rewind_phi_fu_58353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2082_V_read2152_rewind_phi_fu_58353_p6 = data_2082_V_read2152_phi_reg_101081.read();
    } else {
        ap_phi_mux_data_2082_V_read2152_rewind_phi_fu_58353_p6 = data_2082_V_read2152_rewind_reg_58349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2083_V_read2153_phi_phi_fu_101098_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2083_V_read2153_phi_phi_fu_101098_p4 = ap_phi_mux_data_2083_V_read2153_rewind_phi_fu_58367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2083_V_read2153_phi_phi_fu_101098_p4 = data_2083_V_read.read();
        } else {
            ap_phi_mux_data_2083_V_read2153_phi_phi_fu_101098_p4 = ap_phi_reg_pp0_iter0_data_2083_V_read2153_phi_reg_101094.read();
        }
    } else {
        ap_phi_mux_data_2083_V_read2153_phi_phi_fu_101098_p4 = ap_phi_reg_pp0_iter0_data_2083_V_read2153_phi_reg_101094.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2083_V_read2153_rewind_phi_fu_58367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2083_V_read2153_rewind_phi_fu_58367_p6 = data_2083_V_read2153_phi_reg_101094.read();
    } else {
        ap_phi_mux_data_2083_V_read2153_rewind_phi_fu_58367_p6 = data_2083_V_read2153_rewind_reg_58363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2084_V_read2154_phi_phi_fu_101111_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2084_V_read2154_phi_phi_fu_101111_p4 = ap_phi_mux_data_2084_V_read2154_rewind_phi_fu_58381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2084_V_read2154_phi_phi_fu_101111_p4 = data_2084_V_read.read();
        } else {
            ap_phi_mux_data_2084_V_read2154_phi_phi_fu_101111_p4 = ap_phi_reg_pp0_iter0_data_2084_V_read2154_phi_reg_101107.read();
        }
    } else {
        ap_phi_mux_data_2084_V_read2154_phi_phi_fu_101111_p4 = ap_phi_reg_pp0_iter0_data_2084_V_read2154_phi_reg_101107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2084_V_read2154_rewind_phi_fu_58381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2084_V_read2154_rewind_phi_fu_58381_p6 = data_2084_V_read2154_phi_reg_101107.read();
    } else {
        ap_phi_mux_data_2084_V_read2154_rewind_phi_fu_58381_p6 = data_2084_V_read2154_rewind_reg_58377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2085_V_read2155_phi_phi_fu_101124_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2085_V_read2155_phi_phi_fu_101124_p4 = ap_phi_mux_data_2085_V_read2155_rewind_phi_fu_58395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2085_V_read2155_phi_phi_fu_101124_p4 = data_2085_V_read.read();
        } else {
            ap_phi_mux_data_2085_V_read2155_phi_phi_fu_101124_p4 = ap_phi_reg_pp0_iter0_data_2085_V_read2155_phi_reg_101120.read();
        }
    } else {
        ap_phi_mux_data_2085_V_read2155_phi_phi_fu_101124_p4 = ap_phi_reg_pp0_iter0_data_2085_V_read2155_phi_reg_101120.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2085_V_read2155_rewind_phi_fu_58395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2085_V_read2155_rewind_phi_fu_58395_p6 = data_2085_V_read2155_phi_reg_101120.read();
    } else {
        ap_phi_mux_data_2085_V_read2155_rewind_phi_fu_58395_p6 = data_2085_V_read2155_rewind_reg_58391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2086_V_read2156_phi_phi_fu_101137_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2086_V_read2156_phi_phi_fu_101137_p4 = ap_phi_mux_data_2086_V_read2156_rewind_phi_fu_58409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2086_V_read2156_phi_phi_fu_101137_p4 = data_2086_V_read.read();
        } else {
            ap_phi_mux_data_2086_V_read2156_phi_phi_fu_101137_p4 = ap_phi_reg_pp0_iter0_data_2086_V_read2156_phi_reg_101133.read();
        }
    } else {
        ap_phi_mux_data_2086_V_read2156_phi_phi_fu_101137_p4 = ap_phi_reg_pp0_iter0_data_2086_V_read2156_phi_reg_101133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2086_V_read2156_rewind_phi_fu_58409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2086_V_read2156_rewind_phi_fu_58409_p6 = data_2086_V_read2156_phi_reg_101133.read();
    } else {
        ap_phi_mux_data_2086_V_read2156_rewind_phi_fu_58409_p6 = data_2086_V_read2156_rewind_reg_58405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2087_V_read2157_phi_phi_fu_101150_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2087_V_read2157_phi_phi_fu_101150_p4 = ap_phi_mux_data_2087_V_read2157_rewind_phi_fu_58423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2087_V_read2157_phi_phi_fu_101150_p4 = data_2087_V_read.read();
        } else {
            ap_phi_mux_data_2087_V_read2157_phi_phi_fu_101150_p4 = ap_phi_reg_pp0_iter0_data_2087_V_read2157_phi_reg_101146.read();
        }
    } else {
        ap_phi_mux_data_2087_V_read2157_phi_phi_fu_101150_p4 = ap_phi_reg_pp0_iter0_data_2087_V_read2157_phi_reg_101146.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2087_V_read2157_rewind_phi_fu_58423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2087_V_read2157_rewind_phi_fu_58423_p6 = data_2087_V_read2157_phi_reg_101146.read();
    } else {
        ap_phi_mux_data_2087_V_read2157_rewind_phi_fu_58423_p6 = data_2087_V_read2157_rewind_reg_58419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2088_V_read2158_phi_phi_fu_101163_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2088_V_read2158_phi_phi_fu_101163_p4 = ap_phi_mux_data_2088_V_read2158_rewind_phi_fu_58437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2088_V_read2158_phi_phi_fu_101163_p4 = data_2088_V_read.read();
        } else {
            ap_phi_mux_data_2088_V_read2158_phi_phi_fu_101163_p4 = ap_phi_reg_pp0_iter0_data_2088_V_read2158_phi_reg_101159.read();
        }
    } else {
        ap_phi_mux_data_2088_V_read2158_phi_phi_fu_101163_p4 = ap_phi_reg_pp0_iter0_data_2088_V_read2158_phi_reg_101159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2088_V_read2158_rewind_phi_fu_58437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2088_V_read2158_rewind_phi_fu_58437_p6 = data_2088_V_read2158_phi_reg_101159.read();
    } else {
        ap_phi_mux_data_2088_V_read2158_rewind_phi_fu_58437_p6 = data_2088_V_read2158_rewind_reg_58433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2089_V_read2159_phi_phi_fu_101176_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2089_V_read2159_phi_phi_fu_101176_p4 = ap_phi_mux_data_2089_V_read2159_rewind_phi_fu_58451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2089_V_read2159_phi_phi_fu_101176_p4 = data_2089_V_read.read();
        } else {
            ap_phi_mux_data_2089_V_read2159_phi_phi_fu_101176_p4 = ap_phi_reg_pp0_iter0_data_2089_V_read2159_phi_reg_101172.read();
        }
    } else {
        ap_phi_mux_data_2089_V_read2159_phi_phi_fu_101176_p4 = ap_phi_reg_pp0_iter0_data_2089_V_read2159_phi_reg_101172.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2089_V_read2159_rewind_phi_fu_58451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2089_V_read2159_rewind_phi_fu_58451_p6 = data_2089_V_read2159_phi_reg_101172.read();
    } else {
        ap_phi_mux_data_2089_V_read2159_rewind_phi_fu_58451_p6 = data_2089_V_read2159_rewind_reg_58447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_208_V_read278_phi_phi_fu_76723_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_208_V_read278_phi_phi_fu_76723_p4 = ap_phi_mux_data_208_V_read278_rewind_phi_fu_32117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_208_V_read278_phi_phi_fu_76723_p4 = data_208_V_read.read();
        } else {
            ap_phi_mux_data_208_V_read278_phi_phi_fu_76723_p4 = ap_phi_reg_pp0_iter0_data_208_V_read278_phi_reg_76719.read();
        }
    } else {
        ap_phi_mux_data_208_V_read278_phi_phi_fu_76723_p4 = ap_phi_reg_pp0_iter0_data_208_V_read278_phi_reg_76719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_208_V_read278_rewind_phi_fu_32117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_208_V_read278_rewind_phi_fu_32117_p6 = data_208_V_read278_phi_reg_76719.read();
    } else {
        ap_phi_mux_data_208_V_read278_rewind_phi_fu_32117_p6 = data_208_V_read278_rewind_reg_32113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2090_V_read2160_phi_phi_fu_101189_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2090_V_read2160_phi_phi_fu_101189_p4 = ap_phi_mux_data_2090_V_read2160_rewind_phi_fu_58465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2090_V_read2160_phi_phi_fu_101189_p4 = data_2090_V_read.read();
        } else {
            ap_phi_mux_data_2090_V_read2160_phi_phi_fu_101189_p4 = ap_phi_reg_pp0_iter0_data_2090_V_read2160_phi_reg_101185.read();
        }
    } else {
        ap_phi_mux_data_2090_V_read2160_phi_phi_fu_101189_p4 = ap_phi_reg_pp0_iter0_data_2090_V_read2160_phi_reg_101185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2090_V_read2160_rewind_phi_fu_58465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2090_V_read2160_rewind_phi_fu_58465_p6 = data_2090_V_read2160_phi_reg_101185.read();
    } else {
        ap_phi_mux_data_2090_V_read2160_rewind_phi_fu_58465_p6 = data_2090_V_read2160_rewind_reg_58461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2091_V_read2161_phi_phi_fu_101202_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2091_V_read2161_phi_phi_fu_101202_p4 = ap_phi_mux_data_2091_V_read2161_rewind_phi_fu_58479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2091_V_read2161_phi_phi_fu_101202_p4 = data_2091_V_read.read();
        } else {
            ap_phi_mux_data_2091_V_read2161_phi_phi_fu_101202_p4 = ap_phi_reg_pp0_iter0_data_2091_V_read2161_phi_reg_101198.read();
        }
    } else {
        ap_phi_mux_data_2091_V_read2161_phi_phi_fu_101202_p4 = ap_phi_reg_pp0_iter0_data_2091_V_read2161_phi_reg_101198.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2091_V_read2161_rewind_phi_fu_58479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2091_V_read2161_rewind_phi_fu_58479_p6 = data_2091_V_read2161_phi_reg_101198.read();
    } else {
        ap_phi_mux_data_2091_V_read2161_rewind_phi_fu_58479_p6 = data_2091_V_read2161_rewind_reg_58475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2092_V_read2162_phi_phi_fu_101215_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2092_V_read2162_phi_phi_fu_101215_p4 = ap_phi_mux_data_2092_V_read2162_rewind_phi_fu_58493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2092_V_read2162_phi_phi_fu_101215_p4 = data_2092_V_read.read();
        } else {
            ap_phi_mux_data_2092_V_read2162_phi_phi_fu_101215_p4 = ap_phi_reg_pp0_iter0_data_2092_V_read2162_phi_reg_101211.read();
        }
    } else {
        ap_phi_mux_data_2092_V_read2162_phi_phi_fu_101215_p4 = ap_phi_reg_pp0_iter0_data_2092_V_read2162_phi_reg_101211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2092_V_read2162_rewind_phi_fu_58493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2092_V_read2162_rewind_phi_fu_58493_p6 = data_2092_V_read2162_phi_reg_101211.read();
    } else {
        ap_phi_mux_data_2092_V_read2162_rewind_phi_fu_58493_p6 = data_2092_V_read2162_rewind_reg_58489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2093_V_read2163_phi_phi_fu_101228_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2093_V_read2163_phi_phi_fu_101228_p4 = ap_phi_mux_data_2093_V_read2163_rewind_phi_fu_58507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2093_V_read2163_phi_phi_fu_101228_p4 = data_2093_V_read.read();
        } else {
            ap_phi_mux_data_2093_V_read2163_phi_phi_fu_101228_p4 = ap_phi_reg_pp0_iter0_data_2093_V_read2163_phi_reg_101224.read();
        }
    } else {
        ap_phi_mux_data_2093_V_read2163_phi_phi_fu_101228_p4 = ap_phi_reg_pp0_iter0_data_2093_V_read2163_phi_reg_101224.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2093_V_read2163_rewind_phi_fu_58507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2093_V_read2163_rewind_phi_fu_58507_p6 = data_2093_V_read2163_phi_reg_101224.read();
    } else {
        ap_phi_mux_data_2093_V_read2163_rewind_phi_fu_58507_p6 = data_2093_V_read2163_rewind_reg_58503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2094_V_read2164_phi_phi_fu_101241_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2094_V_read2164_phi_phi_fu_101241_p4 = ap_phi_mux_data_2094_V_read2164_rewind_phi_fu_58521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2094_V_read2164_phi_phi_fu_101241_p4 = data_2094_V_read.read();
        } else {
            ap_phi_mux_data_2094_V_read2164_phi_phi_fu_101241_p4 = ap_phi_reg_pp0_iter0_data_2094_V_read2164_phi_reg_101237.read();
        }
    } else {
        ap_phi_mux_data_2094_V_read2164_phi_phi_fu_101241_p4 = ap_phi_reg_pp0_iter0_data_2094_V_read2164_phi_reg_101237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2094_V_read2164_rewind_phi_fu_58521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2094_V_read2164_rewind_phi_fu_58521_p6 = data_2094_V_read2164_phi_reg_101237.read();
    } else {
        ap_phi_mux_data_2094_V_read2164_rewind_phi_fu_58521_p6 = data_2094_V_read2164_rewind_reg_58517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2095_V_read2165_phi_phi_fu_101254_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2095_V_read2165_phi_phi_fu_101254_p4 = ap_phi_mux_data_2095_V_read2165_rewind_phi_fu_58535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2095_V_read2165_phi_phi_fu_101254_p4 = data_2095_V_read.read();
        } else {
            ap_phi_mux_data_2095_V_read2165_phi_phi_fu_101254_p4 = ap_phi_reg_pp0_iter0_data_2095_V_read2165_phi_reg_101250.read();
        }
    } else {
        ap_phi_mux_data_2095_V_read2165_phi_phi_fu_101254_p4 = ap_phi_reg_pp0_iter0_data_2095_V_read2165_phi_reg_101250.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2095_V_read2165_rewind_phi_fu_58535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2095_V_read2165_rewind_phi_fu_58535_p6 = data_2095_V_read2165_phi_reg_101250.read();
    } else {
        ap_phi_mux_data_2095_V_read2165_rewind_phi_fu_58535_p6 = data_2095_V_read2165_rewind_reg_58531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2096_V_read2166_phi_phi_fu_101267_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2096_V_read2166_phi_phi_fu_101267_p4 = ap_phi_mux_data_2096_V_read2166_rewind_phi_fu_58549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2096_V_read2166_phi_phi_fu_101267_p4 = data_2096_V_read.read();
        } else {
            ap_phi_mux_data_2096_V_read2166_phi_phi_fu_101267_p4 = ap_phi_reg_pp0_iter0_data_2096_V_read2166_phi_reg_101263.read();
        }
    } else {
        ap_phi_mux_data_2096_V_read2166_phi_phi_fu_101267_p4 = ap_phi_reg_pp0_iter0_data_2096_V_read2166_phi_reg_101263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2096_V_read2166_rewind_phi_fu_58549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2096_V_read2166_rewind_phi_fu_58549_p6 = data_2096_V_read2166_phi_reg_101263.read();
    } else {
        ap_phi_mux_data_2096_V_read2166_rewind_phi_fu_58549_p6 = data_2096_V_read2166_rewind_reg_58545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2097_V_read2167_phi_phi_fu_101280_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2097_V_read2167_phi_phi_fu_101280_p4 = ap_phi_mux_data_2097_V_read2167_rewind_phi_fu_58563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2097_V_read2167_phi_phi_fu_101280_p4 = data_2097_V_read.read();
        } else {
            ap_phi_mux_data_2097_V_read2167_phi_phi_fu_101280_p4 = ap_phi_reg_pp0_iter0_data_2097_V_read2167_phi_reg_101276.read();
        }
    } else {
        ap_phi_mux_data_2097_V_read2167_phi_phi_fu_101280_p4 = ap_phi_reg_pp0_iter0_data_2097_V_read2167_phi_reg_101276.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2097_V_read2167_rewind_phi_fu_58563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2097_V_read2167_rewind_phi_fu_58563_p6 = data_2097_V_read2167_phi_reg_101276.read();
    } else {
        ap_phi_mux_data_2097_V_read2167_rewind_phi_fu_58563_p6 = data_2097_V_read2167_rewind_reg_58559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2098_V_read2168_phi_phi_fu_101293_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2098_V_read2168_phi_phi_fu_101293_p4 = ap_phi_mux_data_2098_V_read2168_rewind_phi_fu_58577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2098_V_read2168_phi_phi_fu_101293_p4 = data_2098_V_read.read();
        } else {
            ap_phi_mux_data_2098_V_read2168_phi_phi_fu_101293_p4 = ap_phi_reg_pp0_iter0_data_2098_V_read2168_phi_reg_101289.read();
        }
    } else {
        ap_phi_mux_data_2098_V_read2168_phi_phi_fu_101293_p4 = ap_phi_reg_pp0_iter0_data_2098_V_read2168_phi_reg_101289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2098_V_read2168_rewind_phi_fu_58577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2098_V_read2168_rewind_phi_fu_58577_p6 = data_2098_V_read2168_phi_reg_101289.read();
    } else {
        ap_phi_mux_data_2098_V_read2168_rewind_phi_fu_58577_p6 = data_2098_V_read2168_rewind_reg_58573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2099_V_read2169_phi_phi_fu_101306_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2099_V_read2169_phi_phi_fu_101306_p4 = ap_phi_mux_data_2099_V_read2169_rewind_phi_fu_58591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2099_V_read2169_phi_phi_fu_101306_p4 = data_2099_V_read.read();
        } else {
            ap_phi_mux_data_2099_V_read2169_phi_phi_fu_101306_p4 = ap_phi_reg_pp0_iter0_data_2099_V_read2169_phi_reg_101302.read();
        }
    } else {
        ap_phi_mux_data_2099_V_read2169_phi_phi_fu_101306_p4 = ap_phi_reg_pp0_iter0_data_2099_V_read2169_phi_reg_101302.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2099_V_read2169_rewind_phi_fu_58591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2099_V_read2169_rewind_phi_fu_58591_p6 = data_2099_V_read2169_phi_reg_101302.read();
    } else {
        ap_phi_mux_data_2099_V_read2169_rewind_phi_fu_58591_p6 = data_2099_V_read2169_rewind_reg_58587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_209_V_read279_phi_phi_fu_76736_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_209_V_read279_phi_phi_fu_76736_p4 = ap_phi_mux_data_209_V_read279_rewind_phi_fu_32131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_209_V_read279_phi_phi_fu_76736_p4 = data_209_V_read.read();
        } else {
            ap_phi_mux_data_209_V_read279_phi_phi_fu_76736_p4 = ap_phi_reg_pp0_iter0_data_209_V_read279_phi_reg_76732.read();
        }
    } else {
        ap_phi_mux_data_209_V_read279_phi_phi_fu_76736_p4 = ap_phi_reg_pp0_iter0_data_209_V_read279_phi_reg_76732.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_209_V_read279_rewind_phi_fu_32131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_209_V_read279_rewind_phi_fu_32131_p6 = data_209_V_read279_phi_reg_76732.read();
    } else {
        ap_phi_mux_data_209_V_read279_rewind_phi_fu_32131_p6 = data_209_V_read279_rewind_reg_32127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_20_V_read90_phi_phi_fu_74279_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_20_V_read90_phi_phi_fu_74279_p4 = ap_phi_mux_data_20_V_read90_rewind_phi_fu_29485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_20_V_read90_phi_phi_fu_74279_p4 = data_20_V_read.read();
        } else {
            ap_phi_mux_data_20_V_read90_phi_phi_fu_74279_p4 = ap_phi_reg_pp0_iter0_data_20_V_read90_phi_reg_74275.read();
        }
    } else {
        ap_phi_mux_data_20_V_read90_phi_phi_fu_74279_p4 = ap_phi_reg_pp0_iter0_data_20_V_read90_phi_reg_74275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_20_V_read90_rewind_phi_fu_29485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_20_V_read90_rewind_phi_fu_29485_p6 = data_20_V_read90_phi_reg_74275.read();
    } else {
        ap_phi_mux_data_20_V_read90_rewind_phi_fu_29485_p6 = data_20_V_read90_rewind_reg_29481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2100_V_read2170_phi_phi_fu_101319_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2100_V_read2170_phi_phi_fu_101319_p4 = ap_phi_mux_data_2100_V_read2170_rewind_phi_fu_58605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2100_V_read2170_phi_phi_fu_101319_p4 = data_2100_V_read.read();
        } else {
            ap_phi_mux_data_2100_V_read2170_phi_phi_fu_101319_p4 = ap_phi_reg_pp0_iter0_data_2100_V_read2170_phi_reg_101315.read();
        }
    } else {
        ap_phi_mux_data_2100_V_read2170_phi_phi_fu_101319_p4 = ap_phi_reg_pp0_iter0_data_2100_V_read2170_phi_reg_101315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2100_V_read2170_rewind_phi_fu_58605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2100_V_read2170_rewind_phi_fu_58605_p6 = data_2100_V_read2170_phi_reg_101315.read();
    } else {
        ap_phi_mux_data_2100_V_read2170_rewind_phi_fu_58605_p6 = data_2100_V_read2170_rewind_reg_58601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2101_V_read2171_phi_phi_fu_101332_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2101_V_read2171_phi_phi_fu_101332_p4 = ap_phi_mux_data_2101_V_read2171_rewind_phi_fu_58619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2101_V_read2171_phi_phi_fu_101332_p4 = data_2101_V_read.read();
        } else {
            ap_phi_mux_data_2101_V_read2171_phi_phi_fu_101332_p4 = ap_phi_reg_pp0_iter0_data_2101_V_read2171_phi_reg_101328.read();
        }
    } else {
        ap_phi_mux_data_2101_V_read2171_phi_phi_fu_101332_p4 = ap_phi_reg_pp0_iter0_data_2101_V_read2171_phi_reg_101328.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2101_V_read2171_rewind_phi_fu_58619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2101_V_read2171_rewind_phi_fu_58619_p6 = data_2101_V_read2171_phi_reg_101328.read();
    } else {
        ap_phi_mux_data_2101_V_read2171_rewind_phi_fu_58619_p6 = data_2101_V_read2171_rewind_reg_58615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2102_V_read2172_phi_phi_fu_101345_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2102_V_read2172_phi_phi_fu_101345_p4 = ap_phi_mux_data_2102_V_read2172_rewind_phi_fu_58633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2102_V_read2172_phi_phi_fu_101345_p4 = data_2102_V_read.read();
        } else {
            ap_phi_mux_data_2102_V_read2172_phi_phi_fu_101345_p4 = ap_phi_reg_pp0_iter0_data_2102_V_read2172_phi_reg_101341.read();
        }
    } else {
        ap_phi_mux_data_2102_V_read2172_phi_phi_fu_101345_p4 = ap_phi_reg_pp0_iter0_data_2102_V_read2172_phi_reg_101341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2102_V_read2172_rewind_phi_fu_58633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2102_V_read2172_rewind_phi_fu_58633_p6 = data_2102_V_read2172_phi_reg_101341.read();
    } else {
        ap_phi_mux_data_2102_V_read2172_rewind_phi_fu_58633_p6 = data_2102_V_read2172_rewind_reg_58629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2103_V_read2173_phi_phi_fu_101358_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2103_V_read2173_phi_phi_fu_101358_p4 = ap_phi_mux_data_2103_V_read2173_rewind_phi_fu_58647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2103_V_read2173_phi_phi_fu_101358_p4 = data_2103_V_read.read();
        } else {
            ap_phi_mux_data_2103_V_read2173_phi_phi_fu_101358_p4 = ap_phi_reg_pp0_iter0_data_2103_V_read2173_phi_reg_101354.read();
        }
    } else {
        ap_phi_mux_data_2103_V_read2173_phi_phi_fu_101358_p4 = ap_phi_reg_pp0_iter0_data_2103_V_read2173_phi_reg_101354.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2103_V_read2173_rewind_phi_fu_58647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2103_V_read2173_rewind_phi_fu_58647_p6 = data_2103_V_read2173_phi_reg_101354.read();
    } else {
        ap_phi_mux_data_2103_V_read2173_rewind_phi_fu_58647_p6 = data_2103_V_read2173_rewind_reg_58643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2104_V_read2174_phi_phi_fu_101371_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2104_V_read2174_phi_phi_fu_101371_p4 = ap_phi_mux_data_2104_V_read2174_rewind_phi_fu_58661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2104_V_read2174_phi_phi_fu_101371_p4 = data_2104_V_read.read();
        } else {
            ap_phi_mux_data_2104_V_read2174_phi_phi_fu_101371_p4 = ap_phi_reg_pp0_iter0_data_2104_V_read2174_phi_reg_101367.read();
        }
    } else {
        ap_phi_mux_data_2104_V_read2174_phi_phi_fu_101371_p4 = ap_phi_reg_pp0_iter0_data_2104_V_read2174_phi_reg_101367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2104_V_read2174_rewind_phi_fu_58661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2104_V_read2174_rewind_phi_fu_58661_p6 = data_2104_V_read2174_phi_reg_101367.read();
    } else {
        ap_phi_mux_data_2104_V_read2174_rewind_phi_fu_58661_p6 = data_2104_V_read2174_rewind_reg_58657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2105_V_read2175_phi_phi_fu_101384_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2105_V_read2175_phi_phi_fu_101384_p4 = ap_phi_mux_data_2105_V_read2175_rewind_phi_fu_58675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2105_V_read2175_phi_phi_fu_101384_p4 = data_2105_V_read.read();
        } else {
            ap_phi_mux_data_2105_V_read2175_phi_phi_fu_101384_p4 = ap_phi_reg_pp0_iter0_data_2105_V_read2175_phi_reg_101380.read();
        }
    } else {
        ap_phi_mux_data_2105_V_read2175_phi_phi_fu_101384_p4 = ap_phi_reg_pp0_iter0_data_2105_V_read2175_phi_reg_101380.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2105_V_read2175_rewind_phi_fu_58675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2105_V_read2175_rewind_phi_fu_58675_p6 = data_2105_V_read2175_phi_reg_101380.read();
    } else {
        ap_phi_mux_data_2105_V_read2175_rewind_phi_fu_58675_p6 = data_2105_V_read2175_rewind_reg_58671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2106_V_read2176_phi_phi_fu_101397_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2106_V_read2176_phi_phi_fu_101397_p4 = ap_phi_mux_data_2106_V_read2176_rewind_phi_fu_58689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2106_V_read2176_phi_phi_fu_101397_p4 = data_2106_V_read.read();
        } else {
            ap_phi_mux_data_2106_V_read2176_phi_phi_fu_101397_p4 = ap_phi_reg_pp0_iter0_data_2106_V_read2176_phi_reg_101393.read();
        }
    } else {
        ap_phi_mux_data_2106_V_read2176_phi_phi_fu_101397_p4 = ap_phi_reg_pp0_iter0_data_2106_V_read2176_phi_reg_101393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2106_V_read2176_rewind_phi_fu_58689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2106_V_read2176_rewind_phi_fu_58689_p6 = data_2106_V_read2176_phi_reg_101393.read();
    } else {
        ap_phi_mux_data_2106_V_read2176_rewind_phi_fu_58689_p6 = data_2106_V_read2176_rewind_reg_58685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2107_V_read2177_phi_phi_fu_101410_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2107_V_read2177_phi_phi_fu_101410_p4 = ap_phi_mux_data_2107_V_read2177_rewind_phi_fu_58703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2107_V_read2177_phi_phi_fu_101410_p4 = data_2107_V_read.read();
        } else {
            ap_phi_mux_data_2107_V_read2177_phi_phi_fu_101410_p4 = ap_phi_reg_pp0_iter0_data_2107_V_read2177_phi_reg_101406.read();
        }
    } else {
        ap_phi_mux_data_2107_V_read2177_phi_phi_fu_101410_p4 = ap_phi_reg_pp0_iter0_data_2107_V_read2177_phi_reg_101406.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2107_V_read2177_rewind_phi_fu_58703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2107_V_read2177_rewind_phi_fu_58703_p6 = data_2107_V_read2177_phi_reg_101406.read();
    } else {
        ap_phi_mux_data_2107_V_read2177_rewind_phi_fu_58703_p6 = data_2107_V_read2177_rewind_reg_58699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2108_V_read2178_phi_phi_fu_101423_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2108_V_read2178_phi_phi_fu_101423_p4 = ap_phi_mux_data_2108_V_read2178_rewind_phi_fu_58717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2108_V_read2178_phi_phi_fu_101423_p4 = data_2108_V_read.read();
        } else {
            ap_phi_mux_data_2108_V_read2178_phi_phi_fu_101423_p4 = ap_phi_reg_pp0_iter0_data_2108_V_read2178_phi_reg_101419.read();
        }
    } else {
        ap_phi_mux_data_2108_V_read2178_phi_phi_fu_101423_p4 = ap_phi_reg_pp0_iter0_data_2108_V_read2178_phi_reg_101419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2108_V_read2178_rewind_phi_fu_58717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2108_V_read2178_rewind_phi_fu_58717_p6 = data_2108_V_read2178_phi_reg_101419.read();
    } else {
        ap_phi_mux_data_2108_V_read2178_rewind_phi_fu_58717_p6 = data_2108_V_read2178_rewind_reg_58713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2109_V_read2179_phi_phi_fu_101436_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2109_V_read2179_phi_phi_fu_101436_p4 = ap_phi_mux_data_2109_V_read2179_rewind_phi_fu_58731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2109_V_read2179_phi_phi_fu_101436_p4 = data_2109_V_read.read();
        } else {
            ap_phi_mux_data_2109_V_read2179_phi_phi_fu_101436_p4 = ap_phi_reg_pp0_iter0_data_2109_V_read2179_phi_reg_101432.read();
        }
    } else {
        ap_phi_mux_data_2109_V_read2179_phi_phi_fu_101436_p4 = ap_phi_reg_pp0_iter0_data_2109_V_read2179_phi_reg_101432.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2109_V_read2179_rewind_phi_fu_58731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2109_V_read2179_rewind_phi_fu_58731_p6 = data_2109_V_read2179_phi_reg_101432.read();
    } else {
        ap_phi_mux_data_2109_V_read2179_rewind_phi_fu_58731_p6 = data_2109_V_read2179_rewind_reg_58727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_210_V_read280_phi_phi_fu_76749_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_210_V_read280_phi_phi_fu_76749_p4 = ap_phi_mux_data_210_V_read280_rewind_phi_fu_32145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_210_V_read280_phi_phi_fu_76749_p4 = data_210_V_read.read();
        } else {
            ap_phi_mux_data_210_V_read280_phi_phi_fu_76749_p4 = ap_phi_reg_pp0_iter0_data_210_V_read280_phi_reg_76745.read();
        }
    } else {
        ap_phi_mux_data_210_V_read280_phi_phi_fu_76749_p4 = ap_phi_reg_pp0_iter0_data_210_V_read280_phi_reg_76745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_210_V_read280_rewind_phi_fu_32145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_210_V_read280_rewind_phi_fu_32145_p6 = data_210_V_read280_phi_reg_76745.read();
    } else {
        ap_phi_mux_data_210_V_read280_rewind_phi_fu_32145_p6 = data_210_V_read280_rewind_reg_32141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2110_V_read2180_phi_phi_fu_101449_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2110_V_read2180_phi_phi_fu_101449_p4 = ap_phi_mux_data_2110_V_read2180_rewind_phi_fu_58745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2110_V_read2180_phi_phi_fu_101449_p4 = data_2110_V_read.read();
        } else {
            ap_phi_mux_data_2110_V_read2180_phi_phi_fu_101449_p4 = ap_phi_reg_pp0_iter0_data_2110_V_read2180_phi_reg_101445.read();
        }
    } else {
        ap_phi_mux_data_2110_V_read2180_phi_phi_fu_101449_p4 = ap_phi_reg_pp0_iter0_data_2110_V_read2180_phi_reg_101445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2110_V_read2180_rewind_phi_fu_58745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2110_V_read2180_rewind_phi_fu_58745_p6 = data_2110_V_read2180_phi_reg_101445.read();
    } else {
        ap_phi_mux_data_2110_V_read2180_rewind_phi_fu_58745_p6 = data_2110_V_read2180_rewind_reg_58741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2111_V_read2181_phi_phi_fu_101462_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2111_V_read2181_phi_phi_fu_101462_p4 = ap_phi_mux_data_2111_V_read2181_rewind_phi_fu_58759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2111_V_read2181_phi_phi_fu_101462_p4 = data_2111_V_read.read();
        } else {
            ap_phi_mux_data_2111_V_read2181_phi_phi_fu_101462_p4 = ap_phi_reg_pp0_iter0_data_2111_V_read2181_phi_reg_101458.read();
        }
    } else {
        ap_phi_mux_data_2111_V_read2181_phi_phi_fu_101462_p4 = ap_phi_reg_pp0_iter0_data_2111_V_read2181_phi_reg_101458.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2111_V_read2181_rewind_phi_fu_58759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2111_V_read2181_rewind_phi_fu_58759_p6 = data_2111_V_read2181_phi_reg_101458.read();
    } else {
        ap_phi_mux_data_2111_V_read2181_rewind_phi_fu_58759_p6 = data_2111_V_read2181_rewind_reg_58755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2112_V_read2182_phi_phi_fu_101475_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2112_V_read2182_phi_phi_fu_101475_p4 = ap_phi_mux_data_2112_V_read2182_rewind_phi_fu_58773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2112_V_read2182_phi_phi_fu_101475_p4 = data_2112_V_read.read();
        } else {
            ap_phi_mux_data_2112_V_read2182_phi_phi_fu_101475_p4 = ap_phi_reg_pp0_iter0_data_2112_V_read2182_phi_reg_101471.read();
        }
    } else {
        ap_phi_mux_data_2112_V_read2182_phi_phi_fu_101475_p4 = ap_phi_reg_pp0_iter0_data_2112_V_read2182_phi_reg_101471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2112_V_read2182_rewind_phi_fu_58773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2112_V_read2182_rewind_phi_fu_58773_p6 = data_2112_V_read2182_phi_reg_101471.read();
    } else {
        ap_phi_mux_data_2112_V_read2182_rewind_phi_fu_58773_p6 = data_2112_V_read2182_rewind_reg_58769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2113_V_read2183_phi_phi_fu_101488_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2113_V_read2183_phi_phi_fu_101488_p4 = ap_phi_mux_data_2113_V_read2183_rewind_phi_fu_58787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2113_V_read2183_phi_phi_fu_101488_p4 = data_2113_V_read.read();
        } else {
            ap_phi_mux_data_2113_V_read2183_phi_phi_fu_101488_p4 = ap_phi_reg_pp0_iter0_data_2113_V_read2183_phi_reg_101484.read();
        }
    } else {
        ap_phi_mux_data_2113_V_read2183_phi_phi_fu_101488_p4 = ap_phi_reg_pp0_iter0_data_2113_V_read2183_phi_reg_101484.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2113_V_read2183_rewind_phi_fu_58787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2113_V_read2183_rewind_phi_fu_58787_p6 = data_2113_V_read2183_phi_reg_101484.read();
    } else {
        ap_phi_mux_data_2113_V_read2183_rewind_phi_fu_58787_p6 = data_2113_V_read2183_rewind_reg_58783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2114_V_read2184_phi_phi_fu_101501_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2114_V_read2184_phi_phi_fu_101501_p4 = ap_phi_mux_data_2114_V_read2184_rewind_phi_fu_58801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2114_V_read2184_phi_phi_fu_101501_p4 = data_2114_V_read.read();
        } else {
            ap_phi_mux_data_2114_V_read2184_phi_phi_fu_101501_p4 = ap_phi_reg_pp0_iter0_data_2114_V_read2184_phi_reg_101497.read();
        }
    } else {
        ap_phi_mux_data_2114_V_read2184_phi_phi_fu_101501_p4 = ap_phi_reg_pp0_iter0_data_2114_V_read2184_phi_reg_101497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2114_V_read2184_rewind_phi_fu_58801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2114_V_read2184_rewind_phi_fu_58801_p6 = data_2114_V_read2184_phi_reg_101497.read();
    } else {
        ap_phi_mux_data_2114_V_read2184_rewind_phi_fu_58801_p6 = data_2114_V_read2184_rewind_reg_58797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2115_V_read2185_phi_phi_fu_101514_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2115_V_read2185_phi_phi_fu_101514_p4 = ap_phi_mux_data_2115_V_read2185_rewind_phi_fu_58815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2115_V_read2185_phi_phi_fu_101514_p4 = data_2115_V_read.read();
        } else {
            ap_phi_mux_data_2115_V_read2185_phi_phi_fu_101514_p4 = ap_phi_reg_pp0_iter0_data_2115_V_read2185_phi_reg_101510.read();
        }
    } else {
        ap_phi_mux_data_2115_V_read2185_phi_phi_fu_101514_p4 = ap_phi_reg_pp0_iter0_data_2115_V_read2185_phi_reg_101510.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2115_V_read2185_rewind_phi_fu_58815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2115_V_read2185_rewind_phi_fu_58815_p6 = data_2115_V_read2185_phi_reg_101510.read();
    } else {
        ap_phi_mux_data_2115_V_read2185_rewind_phi_fu_58815_p6 = data_2115_V_read2185_rewind_reg_58811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2116_V_read2186_phi_phi_fu_101527_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2116_V_read2186_phi_phi_fu_101527_p4 = ap_phi_mux_data_2116_V_read2186_rewind_phi_fu_58829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2116_V_read2186_phi_phi_fu_101527_p4 = data_2116_V_read.read();
        } else {
            ap_phi_mux_data_2116_V_read2186_phi_phi_fu_101527_p4 = ap_phi_reg_pp0_iter0_data_2116_V_read2186_phi_reg_101523.read();
        }
    } else {
        ap_phi_mux_data_2116_V_read2186_phi_phi_fu_101527_p4 = ap_phi_reg_pp0_iter0_data_2116_V_read2186_phi_reg_101523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2116_V_read2186_rewind_phi_fu_58829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2116_V_read2186_rewind_phi_fu_58829_p6 = data_2116_V_read2186_phi_reg_101523.read();
    } else {
        ap_phi_mux_data_2116_V_read2186_rewind_phi_fu_58829_p6 = data_2116_V_read2186_rewind_reg_58825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2117_V_read2187_phi_phi_fu_101540_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2117_V_read2187_phi_phi_fu_101540_p4 = ap_phi_mux_data_2117_V_read2187_rewind_phi_fu_58843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2117_V_read2187_phi_phi_fu_101540_p4 = data_2117_V_read.read();
        } else {
            ap_phi_mux_data_2117_V_read2187_phi_phi_fu_101540_p4 = ap_phi_reg_pp0_iter0_data_2117_V_read2187_phi_reg_101536.read();
        }
    } else {
        ap_phi_mux_data_2117_V_read2187_phi_phi_fu_101540_p4 = ap_phi_reg_pp0_iter0_data_2117_V_read2187_phi_reg_101536.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2117_V_read2187_rewind_phi_fu_58843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2117_V_read2187_rewind_phi_fu_58843_p6 = data_2117_V_read2187_phi_reg_101536.read();
    } else {
        ap_phi_mux_data_2117_V_read2187_rewind_phi_fu_58843_p6 = data_2117_V_read2187_rewind_reg_58839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2118_V_read2188_phi_phi_fu_101553_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2118_V_read2188_phi_phi_fu_101553_p4 = ap_phi_mux_data_2118_V_read2188_rewind_phi_fu_58857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2118_V_read2188_phi_phi_fu_101553_p4 = data_2118_V_read.read();
        } else {
            ap_phi_mux_data_2118_V_read2188_phi_phi_fu_101553_p4 = ap_phi_reg_pp0_iter0_data_2118_V_read2188_phi_reg_101549.read();
        }
    } else {
        ap_phi_mux_data_2118_V_read2188_phi_phi_fu_101553_p4 = ap_phi_reg_pp0_iter0_data_2118_V_read2188_phi_reg_101549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2118_V_read2188_rewind_phi_fu_58857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2118_V_read2188_rewind_phi_fu_58857_p6 = data_2118_V_read2188_phi_reg_101549.read();
    } else {
        ap_phi_mux_data_2118_V_read2188_rewind_phi_fu_58857_p6 = data_2118_V_read2188_rewind_reg_58853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2119_V_read2189_phi_phi_fu_101566_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2119_V_read2189_phi_phi_fu_101566_p4 = ap_phi_mux_data_2119_V_read2189_rewind_phi_fu_58871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2119_V_read2189_phi_phi_fu_101566_p4 = data_2119_V_read.read();
        } else {
            ap_phi_mux_data_2119_V_read2189_phi_phi_fu_101566_p4 = ap_phi_reg_pp0_iter0_data_2119_V_read2189_phi_reg_101562.read();
        }
    } else {
        ap_phi_mux_data_2119_V_read2189_phi_phi_fu_101566_p4 = ap_phi_reg_pp0_iter0_data_2119_V_read2189_phi_reg_101562.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2119_V_read2189_rewind_phi_fu_58871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2119_V_read2189_rewind_phi_fu_58871_p6 = data_2119_V_read2189_phi_reg_101562.read();
    } else {
        ap_phi_mux_data_2119_V_read2189_rewind_phi_fu_58871_p6 = data_2119_V_read2189_rewind_reg_58867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_211_V_read281_phi_phi_fu_76762_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_211_V_read281_phi_phi_fu_76762_p4 = ap_phi_mux_data_211_V_read281_rewind_phi_fu_32159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_211_V_read281_phi_phi_fu_76762_p4 = data_211_V_read.read();
        } else {
            ap_phi_mux_data_211_V_read281_phi_phi_fu_76762_p4 = ap_phi_reg_pp0_iter0_data_211_V_read281_phi_reg_76758.read();
        }
    } else {
        ap_phi_mux_data_211_V_read281_phi_phi_fu_76762_p4 = ap_phi_reg_pp0_iter0_data_211_V_read281_phi_reg_76758.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_211_V_read281_rewind_phi_fu_32159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_211_V_read281_rewind_phi_fu_32159_p6 = data_211_V_read281_phi_reg_76758.read();
    } else {
        ap_phi_mux_data_211_V_read281_rewind_phi_fu_32159_p6 = data_211_V_read281_rewind_reg_32155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2120_V_read2190_phi_phi_fu_101579_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2120_V_read2190_phi_phi_fu_101579_p4 = ap_phi_mux_data_2120_V_read2190_rewind_phi_fu_58885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2120_V_read2190_phi_phi_fu_101579_p4 = data_2120_V_read.read();
        } else {
            ap_phi_mux_data_2120_V_read2190_phi_phi_fu_101579_p4 = ap_phi_reg_pp0_iter0_data_2120_V_read2190_phi_reg_101575.read();
        }
    } else {
        ap_phi_mux_data_2120_V_read2190_phi_phi_fu_101579_p4 = ap_phi_reg_pp0_iter0_data_2120_V_read2190_phi_reg_101575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2120_V_read2190_rewind_phi_fu_58885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2120_V_read2190_rewind_phi_fu_58885_p6 = data_2120_V_read2190_phi_reg_101575.read();
    } else {
        ap_phi_mux_data_2120_V_read2190_rewind_phi_fu_58885_p6 = data_2120_V_read2190_rewind_reg_58881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2121_V_read2191_phi_phi_fu_101592_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2121_V_read2191_phi_phi_fu_101592_p4 = ap_phi_mux_data_2121_V_read2191_rewind_phi_fu_58899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2121_V_read2191_phi_phi_fu_101592_p4 = data_2121_V_read.read();
        } else {
            ap_phi_mux_data_2121_V_read2191_phi_phi_fu_101592_p4 = ap_phi_reg_pp0_iter0_data_2121_V_read2191_phi_reg_101588.read();
        }
    } else {
        ap_phi_mux_data_2121_V_read2191_phi_phi_fu_101592_p4 = ap_phi_reg_pp0_iter0_data_2121_V_read2191_phi_reg_101588.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2121_V_read2191_rewind_phi_fu_58899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2121_V_read2191_rewind_phi_fu_58899_p6 = data_2121_V_read2191_phi_reg_101588.read();
    } else {
        ap_phi_mux_data_2121_V_read2191_rewind_phi_fu_58899_p6 = data_2121_V_read2191_rewind_reg_58895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2122_V_read2192_phi_phi_fu_101605_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2122_V_read2192_phi_phi_fu_101605_p4 = ap_phi_mux_data_2122_V_read2192_rewind_phi_fu_58913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2122_V_read2192_phi_phi_fu_101605_p4 = data_2122_V_read.read();
        } else {
            ap_phi_mux_data_2122_V_read2192_phi_phi_fu_101605_p4 = ap_phi_reg_pp0_iter0_data_2122_V_read2192_phi_reg_101601.read();
        }
    } else {
        ap_phi_mux_data_2122_V_read2192_phi_phi_fu_101605_p4 = ap_phi_reg_pp0_iter0_data_2122_V_read2192_phi_reg_101601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2122_V_read2192_rewind_phi_fu_58913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2122_V_read2192_rewind_phi_fu_58913_p6 = data_2122_V_read2192_phi_reg_101601.read();
    } else {
        ap_phi_mux_data_2122_V_read2192_rewind_phi_fu_58913_p6 = data_2122_V_read2192_rewind_reg_58909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2123_V_read2193_phi_phi_fu_101618_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2123_V_read2193_phi_phi_fu_101618_p4 = ap_phi_mux_data_2123_V_read2193_rewind_phi_fu_58927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2123_V_read2193_phi_phi_fu_101618_p4 = data_2123_V_read.read();
        } else {
            ap_phi_mux_data_2123_V_read2193_phi_phi_fu_101618_p4 = ap_phi_reg_pp0_iter0_data_2123_V_read2193_phi_reg_101614.read();
        }
    } else {
        ap_phi_mux_data_2123_V_read2193_phi_phi_fu_101618_p4 = ap_phi_reg_pp0_iter0_data_2123_V_read2193_phi_reg_101614.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2123_V_read2193_rewind_phi_fu_58927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2123_V_read2193_rewind_phi_fu_58927_p6 = data_2123_V_read2193_phi_reg_101614.read();
    } else {
        ap_phi_mux_data_2123_V_read2193_rewind_phi_fu_58927_p6 = data_2123_V_read2193_rewind_reg_58923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2124_V_read2194_phi_phi_fu_101631_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2124_V_read2194_phi_phi_fu_101631_p4 = ap_phi_mux_data_2124_V_read2194_rewind_phi_fu_58941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2124_V_read2194_phi_phi_fu_101631_p4 = data_2124_V_read.read();
        } else {
            ap_phi_mux_data_2124_V_read2194_phi_phi_fu_101631_p4 = ap_phi_reg_pp0_iter0_data_2124_V_read2194_phi_reg_101627.read();
        }
    } else {
        ap_phi_mux_data_2124_V_read2194_phi_phi_fu_101631_p4 = ap_phi_reg_pp0_iter0_data_2124_V_read2194_phi_reg_101627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2124_V_read2194_rewind_phi_fu_58941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2124_V_read2194_rewind_phi_fu_58941_p6 = data_2124_V_read2194_phi_reg_101627.read();
    } else {
        ap_phi_mux_data_2124_V_read2194_rewind_phi_fu_58941_p6 = data_2124_V_read2194_rewind_reg_58937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2125_V_read2195_phi_phi_fu_101644_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2125_V_read2195_phi_phi_fu_101644_p4 = ap_phi_mux_data_2125_V_read2195_rewind_phi_fu_58955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2125_V_read2195_phi_phi_fu_101644_p4 = data_2125_V_read.read();
        } else {
            ap_phi_mux_data_2125_V_read2195_phi_phi_fu_101644_p4 = ap_phi_reg_pp0_iter0_data_2125_V_read2195_phi_reg_101640.read();
        }
    } else {
        ap_phi_mux_data_2125_V_read2195_phi_phi_fu_101644_p4 = ap_phi_reg_pp0_iter0_data_2125_V_read2195_phi_reg_101640.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2125_V_read2195_rewind_phi_fu_58955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2125_V_read2195_rewind_phi_fu_58955_p6 = data_2125_V_read2195_phi_reg_101640.read();
    } else {
        ap_phi_mux_data_2125_V_read2195_rewind_phi_fu_58955_p6 = data_2125_V_read2195_rewind_reg_58951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2126_V_read2196_phi_phi_fu_101657_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2126_V_read2196_phi_phi_fu_101657_p4 = ap_phi_mux_data_2126_V_read2196_rewind_phi_fu_58969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2126_V_read2196_phi_phi_fu_101657_p4 = data_2126_V_read.read();
        } else {
            ap_phi_mux_data_2126_V_read2196_phi_phi_fu_101657_p4 = ap_phi_reg_pp0_iter0_data_2126_V_read2196_phi_reg_101653.read();
        }
    } else {
        ap_phi_mux_data_2126_V_read2196_phi_phi_fu_101657_p4 = ap_phi_reg_pp0_iter0_data_2126_V_read2196_phi_reg_101653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2126_V_read2196_rewind_phi_fu_58969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2126_V_read2196_rewind_phi_fu_58969_p6 = data_2126_V_read2196_phi_reg_101653.read();
    } else {
        ap_phi_mux_data_2126_V_read2196_rewind_phi_fu_58969_p6 = data_2126_V_read2196_rewind_reg_58965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2127_V_read2197_phi_phi_fu_101670_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2127_V_read2197_phi_phi_fu_101670_p4 = ap_phi_mux_data_2127_V_read2197_rewind_phi_fu_58983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2127_V_read2197_phi_phi_fu_101670_p4 = data_2127_V_read.read();
        } else {
            ap_phi_mux_data_2127_V_read2197_phi_phi_fu_101670_p4 = ap_phi_reg_pp0_iter0_data_2127_V_read2197_phi_reg_101666.read();
        }
    } else {
        ap_phi_mux_data_2127_V_read2197_phi_phi_fu_101670_p4 = ap_phi_reg_pp0_iter0_data_2127_V_read2197_phi_reg_101666.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2127_V_read2197_rewind_phi_fu_58983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2127_V_read2197_rewind_phi_fu_58983_p6 = data_2127_V_read2197_phi_reg_101666.read();
    } else {
        ap_phi_mux_data_2127_V_read2197_rewind_phi_fu_58983_p6 = data_2127_V_read2197_rewind_reg_58979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2128_V_read2198_phi_phi_fu_101683_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2128_V_read2198_phi_phi_fu_101683_p4 = ap_phi_mux_data_2128_V_read2198_rewind_phi_fu_58997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2128_V_read2198_phi_phi_fu_101683_p4 = data_2128_V_read.read();
        } else {
            ap_phi_mux_data_2128_V_read2198_phi_phi_fu_101683_p4 = ap_phi_reg_pp0_iter0_data_2128_V_read2198_phi_reg_101679.read();
        }
    } else {
        ap_phi_mux_data_2128_V_read2198_phi_phi_fu_101683_p4 = ap_phi_reg_pp0_iter0_data_2128_V_read2198_phi_reg_101679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2128_V_read2198_rewind_phi_fu_58997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2128_V_read2198_rewind_phi_fu_58997_p6 = data_2128_V_read2198_phi_reg_101679.read();
    } else {
        ap_phi_mux_data_2128_V_read2198_rewind_phi_fu_58997_p6 = data_2128_V_read2198_rewind_reg_58993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2129_V_read2199_phi_phi_fu_101696_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2129_V_read2199_phi_phi_fu_101696_p4 = ap_phi_mux_data_2129_V_read2199_rewind_phi_fu_59011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2129_V_read2199_phi_phi_fu_101696_p4 = data_2129_V_read.read();
        } else {
            ap_phi_mux_data_2129_V_read2199_phi_phi_fu_101696_p4 = ap_phi_reg_pp0_iter0_data_2129_V_read2199_phi_reg_101692.read();
        }
    } else {
        ap_phi_mux_data_2129_V_read2199_phi_phi_fu_101696_p4 = ap_phi_reg_pp0_iter0_data_2129_V_read2199_phi_reg_101692.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2129_V_read2199_rewind_phi_fu_59011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2129_V_read2199_rewind_phi_fu_59011_p6 = data_2129_V_read2199_phi_reg_101692.read();
    } else {
        ap_phi_mux_data_2129_V_read2199_rewind_phi_fu_59011_p6 = data_2129_V_read2199_rewind_reg_59007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_212_V_read282_phi_phi_fu_76775_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_212_V_read282_phi_phi_fu_76775_p4 = ap_phi_mux_data_212_V_read282_rewind_phi_fu_32173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_212_V_read282_phi_phi_fu_76775_p4 = data_212_V_read.read();
        } else {
            ap_phi_mux_data_212_V_read282_phi_phi_fu_76775_p4 = ap_phi_reg_pp0_iter0_data_212_V_read282_phi_reg_76771.read();
        }
    } else {
        ap_phi_mux_data_212_V_read282_phi_phi_fu_76775_p4 = ap_phi_reg_pp0_iter0_data_212_V_read282_phi_reg_76771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_212_V_read282_rewind_phi_fu_32173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_212_V_read282_rewind_phi_fu_32173_p6 = data_212_V_read282_phi_reg_76771.read();
    } else {
        ap_phi_mux_data_212_V_read282_rewind_phi_fu_32173_p6 = data_212_V_read282_rewind_reg_32169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2130_V_read2200_phi_phi_fu_101709_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2130_V_read2200_phi_phi_fu_101709_p4 = ap_phi_mux_data_2130_V_read2200_rewind_phi_fu_59025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2130_V_read2200_phi_phi_fu_101709_p4 = data_2130_V_read.read();
        } else {
            ap_phi_mux_data_2130_V_read2200_phi_phi_fu_101709_p4 = ap_phi_reg_pp0_iter0_data_2130_V_read2200_phi_reg_101705.read();
        }
    } else {
        ap_phi_mux_data_2130_V_read2200_phi_phi_fu_101709_p4 = ap_phi_reg_pp0_iter0_data_2130_V_read2200_phi_reg_101705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2130_V_read2200_rewind_phi_fu_59025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2130_V_read2200_rewind_phi_fu_59025_p6 = data_2130_V_read2200_phi_reg_101705.read();
    } else {
        ap_phi_mux_data_2130_V_read2200_rewind_phi_fu_59025_p6 = data_2130_V_read2200_rewind_reg_59021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2131_V_read2201_phi_phi_fu_101722_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2131_V_read2201_phi_phi_fu_101722_p4 = ap_phi_mux_data_2131_V_read2201_rewind_phi_fu_59039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2131_V_read2201_phi_phi_fu_101722_p4 = data_2131_V_read.read();
        } else {
            ap_phi_mux_data_2131_V_read2201_phi_phi_fu_101722_p4 = ap_phi_reg_pp0_iter0_data_2131_V_read2201_phi_reg_101718.read();
        }
    } else {
        ap_phi_mux_data_2131_V_read2201_phi_phi_fu_101722_p4 = ap_phi_reg_pp0_iter0_data_2131_V_read2201_phi_reg_101718.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2131_V_read2201_rewind_phi_fu_59039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2131_V_read2201_rewind_phi_fu_59039_p6 = data_2131_V_read2201_phi_reg_101718.read();
    } else {
        ap_phi_mux_data_2131_V_read2201_rewind_phi_fu_59039_p6 = data_2131_V_read2201_rewind_reg_59035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2132_V_read2202_phi_phi_fu_101735_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2132_V_read2202_phi_phi_fu_101735_p4 = ap_phi_mux_data_2132_V_read2202_rewind_phi_fu_59053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2132_V_read2202_phi_phi_fu_101735_p4 = data_2132_V_read.read();
        } else {
            ap_phi_mux_data_2132_V_read2202_phi_phi_fu_101735_p4 = ap_phi_reg_pp0_iter0_data_2132_V_read2202_phi_reg_101731.read();
        }
    } else {
        ap_phi_mux_data_2132_V_read2202_phi_phi_fu_101735_p4 = ap_phi_reg_pp0_iter0_data_2132_V_read2202_phi_reg_101731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2132_V_read2202_rewind_phi_fu_59053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2132_V_read2202_rewind_phi_fu_59053_p6 = data_2132_V_read2202_phi_reg_101731.read();
    } else {
        ap_phi_mux_data_2132_V_read2202_rewind_phi_fu_59053_p6 = data_2132_V_read2202_rewind_reg_59049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2133_V_read2203_phi_phi_fu_101748_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2133_V_read2203_phi_phi_fu_101748_p4 = ap_phi_mux_data_2133_V_read2203_rewind_phi_fu_59067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2133_V_read2203_phi_phi_fu_101748_p4 = data_2133_V_read.read();
        } else {
            ap_phi_mux_data_2133_V_read2203_phi_phi_fu_101748_p4 = ap_phi_reg_pp0_iter0_data_2133_V_read2203_phi_reg_101744.read();
        }
    } else {
        ap_phi_mux_data_2133_V_read2203_phi_phi_fu_101748_p4 = ap_phi_reg_pp0_iter0_data_2133_V_read2203_phi_reg_101744.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2133_V_read2203_rewind_phi_fu_59067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2133_V_read2203_rewind_phi_fu_59067_p6 = data_2133_V_read2203_phi_reg_101744.read();
    } else {
        ap_phi_mux_data_2133_V_read2203_rewind_phi_fu_59067_p6 = data_2133_V_read2203_rewind_reg_59063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2134_V_read2204_phi_phi_fu_101761_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2134_V_read2204_phi_phi_fu_101761_p4 = ap_phi_mux_data_2134_V_read2204_rewind_phi_fu_59081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2134_V_read2204_phi_phi_fu_101761_p4 = data_2134_V_read.read();
        } else {
            ap_phi_mux_data_2134_V_read2204_phi_phi_fu_101761_p4 = ap_phi_reg_pp0_iter0_data_2134_V_read2204_phi_reg_101757.read();
        }
    } else {
        ap_phi_mux_data_2134_V_read2204_phi_phi_fu_101761_p4 = ap_phi_reg_pp0_iter0_data_2134_V_read2204_phi_reg_101757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2134_V_read2204_rewind_phi_fu_59081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2134_V_read2204_rewind_phi_fu_59081_p6 = data_2134_V_read2204_phi_reg_101757.read();
    } else {
        ap_phi_mux_data_2134_V_read2204_rewind_phi_fu_59081_p6 = data_2134_V_read2204_rewind_reg_59077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2135_V_read2205_phi_phi_fu_101774_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2135_V_read2205_phi_phi_fu_101774_p4 = ap_phi_mux_data_2135_V_read2205_rewind_phi_fu_59095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2135_V_read2205_phi_phi_fu_101774_p4 = data_2135_V_read.read();
        } else {
            ap_phi_mux_data_2135_V_read2205_phi_phi_fu_101774_p4 = ap_phi_reg_pp0_iter0_data_2135_V_read2205_phi_reg_101770.read();
        }
    } else {
        ap_phi_mux_data_2135_V_read2205_phi_phi_fu_101774_p4 = ap_phi_reg_pp0_iter0_data_2135_V_read2205_phi_reg_101770.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2135_V_read2205_rewind_phi_fu_59095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2135_V_read2205_rewind_phi_fu_59095_p6 = data_2135_V_read2205_phi_reg_101770.read();
    } else {
        ap_phi_mux_data_2135_V_read2205_rewind_phi_fu_59095_p6 = data_2135_V_read2205_rewind_reg_59091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2136_V_read2206_phi_phi_fu_101787_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2136_V_read2206_phi_phi_fu_101787_p4 = ap_phi_mux_data_2136_V_read2206_rewind_phi_fu_59109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2136_V_read2206_phi_phi_fu_101787_p4 = data_2136_V_read.read();
        } else {
            ap_phi_mux_data_2136_V_read2206_phi_phi_fu_101787_p4 = ap_phi_reg_pp0_iter0_data_2136_V_read2206_phi_reg_101783.read();
        }
    } else {
        ap_phi_mux_data_2136_V_read2206_phi_phi_fu_101787_p4 = ap_phi_reg_pp0_iter0_data_2136_V_read2206_phi_reg_101783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2136_V_read2206_rewind_phi_fu_59109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2136_V_read2206_rewind_phi_fu_59109_p6 = data_2136_V_read2206_phi_reg_101783.read();
    } else {
        ap_phi_mux_data_2136_V_read2206_rewind_phi_fu_59109_p6 = data_2136_V_read2206_rewind_reg_59105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2137_V_read2207_phi_phi_fu_101800_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2137_V_read2207_phi_phi_fu_101800_p4 = ap_phi_mux_data_2137_V_read2207_rewind_phi_fu_59123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2137_V_read2207_phi_phi_fu_101800_p4 = data_2137_V_read.read();
        } else {
            ap_phi_mux_data_2137_V_read2207_phi_phi_fu_101800_p4 = ap_phi_reg_pp0_iter0_data_2137_V_read2207_phi_reg_101796.read();
        }
    } else {
        ap_phi_mux_data_2137_V_read2207_phi_phi_fu_101800_p4 = ap_phi_reg_pp0_iter0_data_2137_V_read2207_phi_reg_101796.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2137_V_read2207_rewind_phi_fu_59123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2137_V_read2207_rewind_phi_fu_59123_p6 = data_2137_V_read2207_phi_reg_101796.read();
    } else {
        ap_phi_mux_data_2137_V_read2207_rewind_phi_fu_59123_p6 = data_2137_V_read2207_rewind_reg_59119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2138_V_read2208_phi_phi_fu_101813_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2138_V_read2208_phi_phi_fu_101813_p4 = ap_phi_mux_data_2138_V_read2208_rewind_phi_fu_59137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2138_V_read2208_phi_phi_fu_101813_p4 = data_2138_V_read.read();
        } else {
            ap_phi_mux_data_2138_V_read2208_phi_phi_fu_101813_p4 = ap_phi_reg_pp0_iter0_data_2138_V_read2208_phi_reg_101809.read();
        }
    } else {
        ap_phi_mux_data_2138_V_read2208_phi_phi_fu_101813_p4 = ap_phi_reg_pp0_iter0_data_2138_V_read2208_phi_reg_101809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2138_V_read2208_rewind_phi_fu_59137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2138_V_read2208_rewind_phi_fu_59137_p6 = data_2138_V_read2208_phi_reg_101809.read();
    } else {
        ap_phi_mux_data_2138_V_read2208_rewind_phi_fu_59137_p6 = data_2138_V_read2208_rewind_reg_59133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2139_V_read2209_phi_phi_fu_101826_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2139_V_read2209_phi_phi_fu_101826_p4 = ap_phi_mux_data_2139_V_read2209_rewind_phi_fu_59151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2139_V_read2209_phi_phi_fu_101826_p4 = data_2139_V_read.read();
        } else {
            ap_phi_mux_data_2139_V_read2209_phi_phi_fu_101826_p4 = ap_phi_reg_pp0_iter0_data_2139_V_read2209_phi_reg_101822.read();
        }
    } else {
        ap_phi_mux_data_2139_V_read2209_phi_phi_fu_101826_p4 = ap_phi_reg_pp0_iter0_data_2139_V_read2209_phi_reg_101822.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2139_V_read2209_rewind_phi_fu_59151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2139_V_read2209_rewind_phi_fu_59151_p6 = data_2139_V_read2209_phi_reg_101822.read();
    } else {
        ap_phi_mux_data_2139_V_read2209_rewind_phi_fu_59151_p6 = data_2139_V_read2209_rewind_reg_59147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_213_V_read283_phi_phi_fu_76788_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_213_V_read283_phi_phi_fu_76788_p4 = ap_phi_mux_data_213_V_read283_rewind_phi_fu_32187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_213_V_read283_phi_phi_fu_76788_p4 = data_213_V_read.read();
        } else {
            ap_phi_mux_data_213_V_read283_phi_phi_fu_76788_p4 = ap_phi_reg_pp0_iter0_data_213_V_read283_phi_reg_76784.read();
        }
    } else {
        ap_phi_mux_data_213_V_read283_phi_phi_fu_76788_p4 = ap_phi_reg_pp0_iter0_data_213_V_read283_phi_reg_76784.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_213_V_read283_rewind_phi_fu_32187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_213_V_read283_rewind_phi_fu_32187_p6 = data_213_V_read283_phi_reg_76784.read();
    } else {
        ap_phi_mux_data_213_V_read283_rewind_phi_fu_32187_p6 = data_213_V_read283_rewind_reg_32183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2140_V_read2210_phi_phi_fu_101839_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2140_V_read2210_phi_phi_fu_101839_p4 = ap_phi_mux_data_2140_V_read2210_rewind_phi_fu_59165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2140_V_read2210_phi_phi_fu_101839_p4 = data_2140_V_read.read();
        } else {
            ap_phi_mux_data_2140_V_read2210_phi_phi_fu_101839_p4 = ap_phi_reg_pp0_iter0_data_2140_V_read2210_phi_reg_101835.read();
        }
    } else {
        ap_phi_mux_data_2140_V_read2210_phi_phi_fu_101839_p4 = ap_phi_reg_pp0_iter0_data_2140_V_read2210_phi_reg_101835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2140_V_read2210_rewind_phi_fu_59165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2140_V_read2210_rewind_phi_fu_59165_p6 = data_2140_V_read2210_phi_reg_101835.read();
    } else {
        ap_phi_mux_data_2140_V_read2210_rewind_phi_fu_59165_p6 = data_2140_V_read2210_rewind_reg_59161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2141_V_read2211_phi_phi_fu_101852_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2141_V_read2211_phi_phi_fu_101852_p4 = ap_phi_mux_data_2141_V_read2211_rewind_phi_fu_59179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2141_V_read2211_phi_phi_fu_101852_p4 = data_2141_V_read.read();
        } else {
            ap_phi_mux_data_2141_V_read2211_phi_phi_fu_101852_p4 = ap_phi_reg_pp0_iter0_data_2141_V_read2211_phi_reg_101848.read();
        }
    } else {
        ap_phi_mux_data_2141_V_read2211_phi_phi_fu_101852_p4 = ap_phi_reg_pp0_iter0_data_2141_V_read2211_phi_reg_101848.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2141_V_read2211_rewind_phi_fu_59179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2141_V_read2211_rewind_phi_fu_59179_p6 = data_2141_V_read2211_phi_reg_101848.read();
    } else {
        ap_phi_mux_data_2141_V_read2211_rewind_phi_fu_59179_p6 = data_2141_V_read2211_rewind_reg_59175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2142_V_read2212_phi_phi_fu_101865_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2142_V_read2212_phi_phi_fu_101865_p4 = ap_phi_mux_data_2142_V_read2212_rewind_phi_fu_59193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2142_V_read2212_phi_phi_fu_101865_p4 = data_2142_V_read.read();
        } else {
            ap_phi_mux_data_2142_V_read2212_phi_phi_fu_101865_p4 = ap_phi_reg_pp0_iter0_data_2142_V_read2212_phi_reg_101861.read();
        }
    } else {
        ap_phi_mux_data_2142_V_read2212_phi_phi_fu_101865_p4 = ap_phi_reg_pp0_iter0_data_2142_V_read2212_phi_reg_101861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2142_V_read2212_rewind_phi_fu_59193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2142_V_read2212_rewind_phi_fu_59193_p6 = data_2142_V_read2212_phi_reg_101861.read();
    } else {
        ap_phi_mux_data_2142_V_read2212_rewind_phi_fu_59193_p6 = data_2142_V_read2212_rewind_reg_59189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2143_V_read2213_phi_phi_fu_101878_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2143_V_read2213_phi_phi_fu_101878_p4 = ap_phi_mux_data_2143_V_read2213_rewind_phi_fu_59207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2143_V_read2213_phi_phi_fu_101878_p4 = data_2143_V_read.read();
        } else {
            ap_phi_mux_data_2143_V_read2213_phi_phi_fu_101878_p4 = ap_phi_reg_pp0_iter0_data_2143_V_read2213_phi_reg_101874.read();
        }
    } else {
        ap_phi_mux_data_2143_V_read2213_phi_phi_fu_101878_p4 = ap_phi_reg_pp0_iter0_data_2143_V_read2213_phi_reg_101874.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2143_V_read2213_rewind_phi_fu_59207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2143_V_read2213_rewind_phi_fu_59207_p6 = data_2143_V_read2213_phi_reg_101874.read();
    } else {
        ap_phi_mux_data_2143_V_read2213_rewind_phi_fu_59207_p6 = data_2143_V_read2213_rewind_reg_59203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2144_V_read2214_phi_phi_fu_101891_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2144_V_read2214_phi_phi_fu_101891_p4 = ap_phi_mux_data_2144_V_read2214_rewind_phi_fu_59221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2144_V_read2214_phi_phi_fu_101891_p4 = data_2144_V_read.read();
        } else {
            ap_phi_mux_data_2144_V_read2214_phi_phi_fu_101891_p4 = ap_phi_reg_pp0_iter0_data_2144_V_read2214_phi_reg_101887.read();
        }
    } else {
        ap_phi_mux_data_2144_V_read2214_phi_phi_fu_101891_p4 = ap_phi_reg_pp0_iter0_data_2144_V_read2214_phi_reg_101887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2144_V_read2214_rewind_phi_fu_59221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2144_V_read2214_rewind_phi_fu_59221_p6 = data_2144_V_read2214_phi_reg_101887.read();
    } else {
        ap_phi_mux_data_2144_V_read2214_rewind_phi_fu_59221_p6 = data_2144_V_read2214_rewind_reg_59217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2145_V_read2215_phi_phi_fu_101904_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2145_V_read2215_phi_phi_fu_101904_p4 = ap_phi_mux_data_2145_V_read2215_rewind_phi_fu_59235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2145_V_read2215_phi_phi_fu_101904_p4 = data_2145_V_read.read();
        } else {
            ap_phi_mux_data_2145_V_read2215_phi_phi_fu_101904_p4 = ap_phi_reg_pp0_iter0_data_2145_V_read2215_phi_reg_101900.read();
        }
    } else {
        ap_phi_mux_data_2145_V_read2215_phi_phi_fu_101904_p4 = ap_phi_reg_pp0_iter0_data_2145_V_read2215_phi_reg_101900.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2145_V_read2215_rewind_phi_fu_59235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2145_V_read2215_rewind_phi_fu_59235_p6 = data_2145_V_read2215_phi_reg_101900.read();
    } else {
        ap_phi_mux_data_2145_V_read2215_rewind_phi_fu_59235_p6 = data_2145_V_read2215_rewind_reg_59231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2146_V_read2216_phi_phi_fu_101917_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2146_V_read2216_phi_phi_fu_101917_p4 = ap_phi_mux_data_2146_V_read2216_rewind_phi_fu_59249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2146_V_read2216_phi_phi_fu_101917_p4 = data_2146_V_read.read();
        } else {
            ap_phi_mux_data_2146_V_read2216_phi_phi_fu_101917_p4 = ap_phi_reg_pp0_iter0_data_2146_V_read2216_phi_reg_101913.read();
        }
    } else {
        ap_phi_mux_data_2146_V_read2216_phi_phi_fu_101917_p4 = ap_phi_reg_pp0_iter0_data_2146_V_read2216_phi_reg_101913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2146_V_read2216_rewind_phi_fu_59249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2146_V_read2216_rewind_phi_fu_59249_p6 = data_2146_V_read2216_phi_reg_101913.read();
    } else {
        ap_phi_mux_data_2146_V_read2216_rewind_phi_fu_59249_p6 = data_2146_V_read2216_rewind_reg_59245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2147_V_read2217_phi_phi_fu_101930_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2147_V_read2217_phi_phi_fu_101930_p4 = ap_phi_mux_data_2147_V_read2217_rewind_phi_fu_59263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2147_V_read2217_phi_phi_fu_101930_p4 = data_2147_V_read.read();
        } else {
            ap_phi_mux_data_2147_V_read2217_phi_phi_fu_101930_p4 = ap_phi_reg_pp0_iter0_data_2147_V_read2217_phi_reg_101926.read();
        }
    } else {
        ap_phi_mux_data_2147_V_read2217_phi_phi_fu_101930_p4 = ap_phi_reg_pp0_iter0_data_2147_V_read2217_phi_reg_101926.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2147_V_read2217_rewind_phi_fu_59263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2147_V_read2217_rewind_phi_fu_59263_p6 = data_2147_V_read2217_phi_reg_101926.read();
    } else {
        ap_phi_mux_data_2147_V_read2217_rewind_phi_fu_59263_p6 = data_2147_V_read2217_rewind_reg_59259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2148_V_read2218_phi_phi_fu_101943_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2148_V_read2218_phi_phi_fu_101943_p4 = ap_phi_mux_data_2148_V_read2218_rewind_phi_fu_59277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2148_V_read2218_phi_phi_fu_101943_p4 = data_2148_V_read.read();
        } else {
            ap_phi_mux_data_2148_V_read2218_phi_phi_fu_101943_p4 = ap_phi_reg_pp0_iter0_data_2148_V_read2218_phi_reg_101939.read();
        }
    } else {
        ap_phi_mux_data_2148_V_read2218_phi_phi_fu_101943_p4 = ap_phi_reg_pp0_iter0_data_2148_V_read2218_phi_reg_101939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2148_V_read2218_rewind_phi_fu_59277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2148_V_read2218_rewind_phi_fu_59277_p6 = data_2148_V_read2218_phi_reg_101939.read();
    } else {
        ap_phi_mux_data_2148_V_read2218_rewind_phi_fu_59277_p6 = data_2148_V_read2218_rewind_reg_59273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2149_V_read2219_phi_phi_fu_101956_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2149_V_read2219_phi_phi_fu_101956_p4 = ap_phi_mux_data_2149_V_read2219_rewind_phi_fu_59291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2149_V_read2219_phi_phi_fu_101956_p4 = data_2149_V_read.read();
        } else {
            ap_phi_mux_data_2149_V_read2219_phi_phi_fu_101956_p4 = ap_phi_reg_pp0_iter0_data_2149_V_read2219_phi_reg_101952.read();
        }
    } else {
        ap_phi_mux_data_2149_V_read2219_phi_phi_fu_101956_p4 = ap_phi_reg_pp0_iter0_data_2149_V_read2219_phi_reg_101952.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2149_V_read2219_rewind_phi_fu_59291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2149_V_read2219_rewind_phi_fu_59291_p6 = data_2149_V_read2219_phi_reg_101952.read();
    } else {
        ap_phi_mux_data_2149_V_read2219_rewind_phi_fu_59291_p6 = data_2149_V_read2219_rewind_reg_59287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_214_V_read284_phi_phi_fu_76801_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_214_V_read284_phi_phi_fu_76801_p4 = ap_phi_mux_data_214_V_read284_rewind_phi_fu_32201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_214_V_read284_phi_phi_fu_76801_p4 = data_214_V_read.read();
        } else {
            ap_phi_mux_data_214_V_read284_phi_phi_fu_76801_p4 = ap_phi_reg_pp0_iter0_data_214_V_read284_phi_reg_76797.read();
        }
    } else {
        ap_phi_mux_data_214_V_read284_phi_phi_fu_76801_p4 = ap_phi_reg_pp0_iter0_data_214_V_read284_phi_reg_76797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_214_V_read284_rewind_phi_fu_32201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_214_V_read284_rewind_phi_fu_32201_p6 = data_214_V_read284_phi_reg_76797.read();
    } else {
        ap_phi_mux_data_214_V_read284_rewind_phi_fu_32201_p6 = data_214_V_read284_rewind_reg_32197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2150_V_read2220_phi_phi_fu_101969_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2150_V_read2220_phi_phi_fu_101969_p4 = ap_phi_mux_data_2150_V_read2220_rewind_phi_fu_59305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2150_V_read2220_phi_phi_fu_101969_p4 = data_2150_V_read.read();
        } else {
            ap_phi_mux_data_2150_V_read2220_phi_phi_fu_101969_p4 = ap_phi_reg_pp0_iter0_data_2150_V_read2220_phi_reg_101965.read();
        }
    } else {
        ap_phi_mux_data_2150_V_read2220_phi_phi_fu_101969_p4 = ap_phi_reg_pp0_iter0_data_2150_V_read2220_phi_reg_101965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2150_V_read2220_rewind_phi_fu_59305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2150_V_read2220_rewind_phi_fu_59305_p6 = data_2150_V_read2220_phi_reg_101965.read();
    } else {
        ap_phi_mux_data_2150_V_read2220_rewind_phi_fu_59305_p6 = data_2150_V_read2220_rewind_reg_59301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2151_V_read2221_phi_phi_fu_101982_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2151_V_read2221_phi_phi_fu_101982_p4 = ap_phi_mux_data_2151_V_read2221_rewind_phi_fu_59319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2151_V_read2221_phi_phi_fu_101982_p4 = data_2151_V_read.read();
        } else {
            ap_phi_mux_data_2151_V_read2221_phi_phi_fu_101982_p4 = ap_phi_reg_pp0_iter0_data_2151_V_read2221_phi_reg_101978.read();
        }
    } else {
        ap_phi_mux_data_2151_V_read2221_phi_phi_fu_101982_p4 = ap_phi_reg_pp0_iter0_data_2151_V_read2221_phi_reg_101978.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2151_V_read2221_rewind_phi_fu_59319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2151_V_read2221_rewind_phi_fu_59319_p6 = data_2151_V_read2221_phi_reg_101978.read();
    } else {
        ap_phi_mux_data_2151_V_read2221_rewind_phi_fu_59319_p6 = data_2151_V_read2221_rewind_reg_59315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2152_V_read2222_phi_phi_fu_101995_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2152_V_read2222_phi_phi_fu_101995_p4 = ap_phi_mux_data_2152_V_read2222_rewind_phi_fu_59333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2152_V_read2222_phi_phi_fu_101995_p4 = data_2152_V_read.read();
        } else {
            ap_phi_mux_data_2152_V_read2222_phi_phi_fu_101995_p4 = ap_phi_reg_pp0_iter0_data_2152_V_read2222_phi_reg_101991.read();
        }
    } else {
        ap_phi_mux_data_2152_V_read2222_phi_phi_fu_101995_p4 = ap_phi_reg_pp0_iter0_data_2152_V_read2222_phi_reg_101991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2152_V_read2222_rewind_phi_fu_59333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2152_V_read2222_rewind_phi_fu_59333_p6 = data_2152_V_read2222_phi_reg_101991.read();
    } else {
        ap_phi_mux_data_2152_V_read2222_rewind_phi_fu_59333_p6 = data_2152_V_read2222_rewind_reg_59329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2153_V_read2223_phi_phi_fu_102008_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2153_V_read2223_phi_phi_fu_102008_p4 = ap_phi_mux_data_2153_V_read2223_rewind_phi_fu_59347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2153_V_read2223_phi_phi_fu_102008_p4 = data_2153_V_read.read();
        } else {
            ap_phi_mux_data_2153_V_read2223_phi_phi_fu_102008_p4 = ap_phi_reg_pp0_iter0_data_2153_V_read2223_phi_reg_102004.read();
        }
    } else {
        ap_phi_mux_data_2153_V_read2223_phi_phi_fu_102008_p4 = ap_phi_reg_pp0_iter0_data_2153_V_read2223_phi_reg_102004.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2153_V_read2223_rewind_phi_fu_59347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2153_V_read2223_rewind_phi_fu_59347_p6 = data_2153_V_read2223_phi_reg_102004.read();
    } else {
        ap_phi_mux_data_2153_V_read2223_rewind_phi_fu_59347_p6 = data_2153_V_read2223_rewind_reg_59343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2154_V_read2224_phi_phi_fu_102021_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2154_V_read2224_phi_phi_fu_102021_p4 = ap_phi_mux_data_2154_V_read2224_rewind_phi_fu_59361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2154_V_read2224_phi_phi_fu_102021_p4 = data_2154_V_read.read();
        } else {
            ap_phi_mux_data_2154_V_read2224_phi_phi_fu_102021_p4 = ap_phi_reg_pp0_iter0_data_2154_V_read2224_phi_reg_102017.read();
        }
    } else {
        ap_phi_mux_data_2154_V_read2224_phi_phi_fu_102021_p4 = ap_phi_reg_pp0_iter0_data_2154_V_read2224_phi_reg_102017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2154_V_read2224_rewind_phi_fu_59361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2154_V_read2224_rewind_phi_fu_59361_p6 = data_2154_V_read2224_phi_reg_102017.read();
    } else {
        ap_phi_mux_data_2154_V_read2224_rewind_phi_fu_59361_p6 = data_2154_V_read2224_rewind_reg_59357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2155_V_read2225_phi_phi_fu_102034_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2155_V_read2225_phi_phi_fu_102034_p4 = ap_phi_mux_data_2155_V_read2225_rewind_phi_fu_59375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2155_V_read2225_phi_phi_fu_102034_p4 = data_2155_V_read.read();
        } else {
            ap_phi_mux_data_2155_V_read2225_phi_phi_fu_102034_p4 = ap_phi_reg_pp0_iter0_data_2155_V_read2225_phi_reg_102030.read();
        }
    } else {
        ap_phi_mux_data_2155_V_read2225_phi_phi_fu_102034_p4 = ap_phi_reg_pp0_iter0_data_2155_V_read2225_phi_reg_102030.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2155_V_read2225_rewind_phi_fu_59375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2155_V_read2225_rewind_phi_fu_59375_p6 = data_2155_V_read2225_phi_reg_102030.read();
    } else {
        ap_phi_mux_data_2155_V_read2225_rewind_phi_fu_59375_p6 = data_2155_V_read2225_rewind_reg_59371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2156_V_read2226_phi_phi_fu_102047_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2156_V_read2226_phi_phi_fu_102047_p4 = ap_phi_mux_data_2156_V_read2226_rewind_phi_fu_59389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2156_V_read2226_phi_phi_fu_102047_p4 = data_2156_V_read.read();
        } else {
            ap_phi_mux_data_2156_V_read2226_phi_phi_fu_102047_p4 = ap_phi_reg_pp0_iter0_data_2156_V_read2226_phi_reg_102043.read();
        }
    } else {
        ap_phi_mux_data_2156_V_read2226_phi_phi_fu_102047_p4 = ap_phi_reg_pp0_iter0_data_2156_V_read2226_phi_reg_102043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2156_V_read2226_rewind_phi_fu_59389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2156_V_read2226_rewind_phi_fu_59389_p6 = data_2156_V_read2226_phi_reg_102043.read();
    } else {
        ap_phi_mux_data_2156_V_read2226_rewind_phi_fu_59389_p6 = data_2156_V_read2226_rewind_reg_59385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2157_V_read2227_phi_phi_fu_102060_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2157_V_read2227_phi_phi_fu_102060_p4 = ap_phi_mux_data_2157_V_read2227_rewind_phi_fu_59403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2157_V_read2227_phi_phi_fu_102060_p4 = data_2157_V_read.read();
        } else {
            ap_phi_mux_data_2157_V_read2227_phi_phi_fu_102060_p4 = ap_phi_reg_pp0_iter0_data_2157_V_read2227_phi_reg_102056.read();
        }
    } else {
        ap_phi_mux_data_2157_V_read2227_phi_phi_fu_102060_p4 = ap_phi_reg_pp0_iter0_data_2157_V_read2227_phi_reg_102056.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2157_V_read2227_rewind_phi_fu_59403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2157_V_read2227_rewind_phi_fu_59403_p6 = data_2157_V_read2227_phi_reg_102056.read();
    } else {
        ap_phi_mux_data_2157_V_read2227_rewind_phi_fu_59403_p6 = data_2157_V_read2227_rewind_reg_59399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2158_V_read2228_phi_phi_fu_102073_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2158_V_read2228_phi_phi_fu_102073_p4 = ap_phi_mux_data_2158_V_read2228_rewind_phi_fu_59417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2158_V_read2228_phi_phi_fu_102073_p4 = data_2158_V_read.read();
        } else {
            ap_phi_mux_data_2158_V_read2228_phi_phi_fu_102073_p4 = ap_phi_reg_pp0_iter0_data_2158_V_read2228_phi_reg_102069.read();
        }
    } else {
        ap_phi_mux_data_2158_V_read2228_phi_phi_fu_102073_p4 = ap_phi_reg_pp0_iter0_data_2158_V_read2228_phi_reg_102069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2158_V_read2228_rewind_phi_fu_59417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2158_V_read2228_rewind_phi_fu_59417_p6 = data_2158_V_read2228_phi_reg_102069.read();
    } else {
        ap_phi_mux_data_2158_V_read2228_rewind_phi_fu_59417_p6 = data_2158_V_read2228_rewind_reg_59413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2159_V_read2229_phi_phi_fu_102086_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2159_V_read2229_phi_phi_fu_102086_p4 = ap_phi_mux_data_2159_V_read2229_rewind_phi_fu_59431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2159_V_read2229_phi_phi_fu_102086_p4 = data_2159_V_read.read();
        } else {
            ap_phi_mux_data_2159_V_read2229_phi_phi_fu_102086_p4 = ap_phi_reg_pp0_iter0_data_2159_V_read2229_phi_reg_102082.read();
        }
    } else {
        ap_phi_mux_data_2159_V_read2229_phi_phi_fu_102086_p4 = ap_phi_reg_pp0_iter0_data_2159_V_read2229_phi_reg_102082.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2159_V_read2229_rewind_phi_fu_59431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2159_V_read2229_rewind_phi_fu_59431_p6 = data_2159_V_read2229_phi_reg_102082.read();
    } else {
        ap_phi_mux_data_2159_V_read2229_rewind_phi_fu_59431_p6 = data_2159_V_read2229_rewind_reg_59427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_215_V_read285_phi_phi_fu_76814_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_215_V_read285_phi_phi_fu_76814_p4 = ap_phi_mux_data_215_V_read285_rewind_phi_fu_32215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_215_V_read285_phi_phi_fu_76814_p4 = data_215_V_read.read();
        } else {
            ap_phi_mux_data_215_V_read285_phi_phi_fu_76814_p4 = ap_phi_reg_pp0_iter0_data_215_V_read285_phi_reg_76810.read();
        }
    } else {
        ap_phi_mux_data_215_V_read285_phi_phi_fu_76814_p4 = ap_phi_reg_pp0_iter0_data_215_V_read285_phi_reg_76810.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_215_V_read285_rewind_phi_fu_32215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_215_V_read285_rewind_phi_fu_32215_p6 = data_215_V_read285_phi_reg_76810.read();
    } else {
        ap_phi_mux_data_215_V_read285_rewind_phi_fu_32215_p6 = data_215_V_read285_rewind_reg_32211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2160_V_read2230_phi_phi_fu_102099_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2160_V_read2230_phi_phi_fu_102099_p4 = ap_phi_mux_data_2160_V_read2230_rewind_phi_fu_59445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2160_V_read2230_phi_phi_fu_102099_p4 = data_2160_V_read.read();
        } else {
            ap_phi_mux_data_2160_V_read2230_phi_phi_fu_102099_p4 = ap_phi_reg_pp0_iter0_data_2160_V_read2230_phi_reg_102095.read();
        }
    } else {
        ap_phi_mux_data_2160_V_read2230_phi_phi_fu_102099_p4 = ap_phi_reg_pp0_iter0_data_2160_V_read2230_phi_reg_102095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2160_V_read2230_rewind_phi_fu_59445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2160_V_read2230_rewind_phi_fu_59445_p6 = data_2160_V_read2230_phi_reg_102095.read();
    } else {
        ap_phi_mux_data_2160_V_read2230_rewind_phi_fu_59445_p6 = data_2160_V_read2230_rewind_reg_59441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2161_V_read2231_phi_phi_fu_102112_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2161_V_read2231_phi_phi_fu_102112_p4 = ap_phi_mux_data_2161_V_read2231_rewind_phi_fu_59459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2161_V_read2231_phi_phi_fu_102112_p4 = data_2161_V_read.read();
        } else {
            ap_phi_mux_data_2161_V_read2231_phi_phi_fu_102112_p4 = ap_phi_reg_pp0_iter0_data_2161_V_read2231_phi_reg_102108.read();
        }
    } else {
        ap_phi_mux_data_2161_V_read2231_phi_phi_fu_102112_p4 = ap_phi_reg_pp0_iter0_data_2161_V_read2231_phi_reg_102108.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2161_V_read2231_rewind_phi_fu_59459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2161_V_read2231_rewind_phi_fu_59459_p6 = data_2161_V_read2231_phi_reg_102108.read();
    } else {
        ap_phi_mux_data_2161_V_read2231_rewind_phi_fu_59459_p6 = data_2161_V_read2231_rewind_reg_59455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2162_V_read2232_phi_phi_fu_102125_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2162_V_read2232_phi_phi_fu_102125_p4 = ap_phi_mux_data_2162_V_read2232_rewind_phi_fu_59473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2162_V_read2232_phi_phi_fu_102125_p4 = data_2162_V_read.read();
        } else {
            ap_phi_mux_data_2162_V_read2232_phi_phi_fu_102125_p4 = ap_phi_reg_pp0_iter0_data_2162_V_read2232_phi_reg_102121.read();
        }
    } else {
        ap_phi_mux_data_2162_V_read2232_phi_phi_fu_102125_p4 = ap_phi_reg_pp0_iter0_data_2162_V_read2232_phi_reg_102121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2162_V_read2232_rewind_phi_fu_59473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2162_V_read2232_rewind_phi_fu_59473_p6 = data_2162_V_read2232_phi_reg_102121.read();
    } else {
        ap_phi_mux_data_2162_V_read2232_rewind_phi_fu_59473_p6 = data_2162_V_read2232_rewind_reg_59469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2163_V_read2233_phi_phi_fu_102138_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2163_V_read2233_phi_phi_fu_102138_p4 = ap_phi_mux_data_2163_V_read2233_rewind_phi_fu_59487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2163_V_read2233_phi_phi_fu_102138_p4 = data_2163_V_read.read();
        } else {
            ap_phi_mux_data_2163_V_read2233_phi_phi_fu_102138_p4 = ap_phi_reg_pp0_iter0_data_2163_V_read2233_phi_reg_102134.read();
        }
    } else {
        ap_phi_mux_data_2163_V_read2233_phi_phi_fu_102138_p4 = ap_phi_reg_pp0_iter0_data_2163_V_read2233_phi_reg_102134.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2163_V_read2233_rewind_phi_fu_59487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2163_V_read2233_rewind_phi_fu_59487_p6 = data_2163_V_read2233_phi_reg_102134.read();
    } else {
        ap_phi_mux_data_2163_V_read2233_rewind_phi_fu_59487_p6 = data_2163_V_read2233_rewind_reg_59483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2164_V_read2234_phi_phi_fu_102151_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2164_V_read2234_phi_phi_fu_102151_p4 = ap_phi_mux_data_2164_V_read2234_rewind_phi_fu_59501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2164_V_read2234_phi_phi_fu_102151_p4 = data_2164_V_read.read();
        } else {
            ap_phi_mux_data_2164_V_read2234_phi_phi_fu_102151_p4 = ap_phi_reg_pp0_iter0_data_2164_V_read2234_phi_reg_102147.read();
        }
    } else {
        ap_phi_mux_data_2164_V_read2234_phi_phi_fu_102151_p4 = ap_phi_reg_pp0_iter0_data_2164_V_read2234_phi_reg_102147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2164_V_read2234_rewind_phi_fu_59501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2164_V_read2234_rewind_phi_fu_59501_p6 = data_2164_V_read2234_phi_reg_102147.read();
    } else {
        ap_phi_mux_data_2164_V_read2234_rewind_phi_fu_59501_p6 = data_2164_V_read2234_rewind_reg_59497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2165_V_read2235_phi_phi_fu_102164_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2165_V_read2235_phi_phi_fu_102164_p4 = ap_phi_mux_data_2165_V_read2235_rewind_phi_fu_59515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2165_V_read2235_phi_phi_fu_102164_p4 = data_2165_V_read.read();
        } else {
            ap_phi_mux_data_2165_V_read2235_phi_phi_fu_102164_p4 = ap_phi_reg_pp0_iter0_data_2165_V_read2235_phi_reg_102160.read();
        }
    } else {
        ap_phi_mux_data_2165_V_read2235_phi_phi_fu_102164_p4 = ap_phi_reg_pp0_iter0_data_2165_V_read2235_phi_reg_102160.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2165_V_read2235_rewind_phi_fu_59515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2165_V_read2235_rewind_phi_fu_59515_p6 = data_2165_V_read2235_phi_reg_102160.read();
    } else {
        ap_phi_mux_data_2165_V_read2235_rewind_phi_fu_59515_p6 = data_2165_V_read2235_rewind_reg_59511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2166_V_read2236_phi_phi_fu_102177_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2166_V_read2236_phi_phi_fu_102177_p4 = ap_phi_mux_data_2166_V_read2236_rewind_phi_fu_59529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2166_V_read2236_phi_phi_fu_102177_p4 = data_2166_V_read.read();
        } else {
            ap_phi_mux_data_2166_V_read2236_phi_phi_fu_102177_p4 = ap_phi_reg_pp0_iter0_data_2166_V_read2236_phi_reg_102173.read();
        }
    } else {
        ap_phi_mux_data_2166_V_read2236_phi_phi_fu_102177_p4 = ap_phi_reg_pp0_iter0_data_2166_V_read2236_phi_reg_102173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2166_V_read2236_rewind_phi_fu_59529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2166_V_read2236_rewind_phi_fu_59529_p6 = data_2166_V_read2236_phi_reg_102173.read();
    } else {
        ap_phi_mux_data_2166_V_read2236_rewind_phi_fu_59529_p6 = data_2166_V_read2236_rewind_reg_59525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2167_V_read2237_phi_phi_fu_102190_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2167_V_read2237_phi_phi_fu_102190_p4 = ap_phi_mux_data_2167_V_read2237_rewind_phi_fu_59543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2167_V_read2237_phi_phi_fu_102190_p4 = data_2167_V_read.read();
        } else {
            ap_phi_mux_data_2167_V_read2237_phi_phi_fu_102190_p4 = ap_phi_reg_pp0_iter0_data_2167_V_read2237_phi_reg_102186.read();
        }
    } else {
        ap_phi_mux_data_2167_V_read2237_phi_phi_fu_102190_p4 = ap_phi_reg_pp0_iter0_data_2167_V_read2237_phi_reg_102186.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2167_V_read2237_rewind_phi_fu_59543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2167_V_read2237_rewind_phi_fu_59543_p6 = data_2167_V_read2237_phi_reg_102186.read();
    } else {
        ap_phi_mux_data_2167_V_read2237_rewind_phi_fu_59543_p6 = data_2167_V_read2237_rewind_reg_59539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2168_V_read2238_phi_phi_fu_102203_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2168_V_read2238_phi_phi_fu_102203_p4 = ap_phi_mux_data_2168_V_read2238_rewind_phi_fu_59557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2168_V_read2238_phi_phi_fu_102203_p4 = data_2168_V_read.read();
        } else {
            ap_phi_mux_data_2168_V_read2238_phi_phi_fu_102203_p4 = ap_phi_reg_pp0_iter0_data_2168_V_read2238_phi_reg_102199.read();
        }
    } else {
        ap_phi_mux_data_2168_V_read2238_phi_phi_fu_102203_p4 = ap_phi_reg_pp0_iter0_data_2168_V_read2238_phi_reg_102199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2168_V_read2238_rewind_phi_fu_59557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2168_V_read2238_rewind_phi_fu_59557_p6 = data_2168_V_read2238_phi_reg_102199.read();
    } else {
        ap_phi_mux_data_2168_V_read2238_rewind_phi_fu_59557_p6 = data_2168_V_read2238_rewind_reg_59553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2169_V_read2239_phi_phi_fu_102216_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2169_V_read2239_phi_phi_fu_102216_p4 = ap_phi_mux_data_2169_V_read2239_rewind_phi_fu_59571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2169_V_read2239_phi_phi_fu_102216_p4 = data_2169_V_read.read();
        } else {
            ap_phi_mux_data_2169_V_read2239_phi_phi_fu_102216_p4 = ap_phi_reg_pp0_iter0_data_2169_V_read2239_phi_reg_102212.read();
        }
    } else {
        ap_phi_mux_data_2169_V_read2239_phi_phi_fu_102216_p4 = ap_phi_reg_pp0_iter0_data_2169_V_read2239_phi_reg_102212.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2169_V_read2239_rewind_phi_fu_59571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2169_V_read2239_rewind_phi_fu_59571_p6 = data_2169_V_read2239_phi_reg_102212.read();
    } else {
        ap_phi_mux_data_2169_V_read2239_rewind_phi_fu_59571_p6 = data_2169_V_read2239_rewind_reg_59567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_216_V_read286_phi_phi_fu_76827_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_216_V_read286_phi_phi_fu_76827_p4 = ap_phi_mux_data_216_V_read286_rewind_phi_fu_32229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_216_V_read286_phi_phi_fu_76827_p4 = data_216_V_read.read();
        } else {
            ap_phi_mux_data_216_V_read286_phi_phi_fu_76827_p4 = ap_phi_reg_pp0_iter0_data_216_V_read286_phi_reg_76823.read();
        }
    } else {
        ap_phi_mux_data_216_V_read286_phi_phi_fu_76827_p4 = ap_phi_reg_pp0_iter0_data_216_V_read286_phi_reg_76823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_216_V_read286_rewind_phi_fu_32229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_216_V_read286_rewind_phi_fu_32229_p6 = data_216_V_read286_phi_reg_76823.read();
    } else {
        ap_phi_mux_data_216_V_read286_rewind_phi_fu_32229_p6 = data_216_V_read286_rewind_reg_32225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2170_V_read2240_phi_phi_fu_102229_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2170_V_read2240_phi_phi_fu_102229_p4 = ap_phi_mux_data_2170_V_read2240_rewind_phi_fu_59585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2170_V_read2240_phi_phi_fu_102229_p4 = data_2170_V_read.read();
        } else {
            ap_phi_mux_data_2170_V_read2240_phi_phi_fu_102229_p4 = ap_phi_reg_pp0_iter0_data_2170_V_read2240_phi_reg_102225.read();
        }
    } else {
        ap_phi_mux_data_2170_V_read2240_phi_phi_fu_102229_p4 = ap_phi_reg_pp0_iter0_data_2170_V_read2240_phi_reg_102225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2170_V_read2240_rewind_phi_fu_59585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2170_V_read2240_rewind_phi_fu_59585_p6 = data_2170_V_read2240_phi_reg_102225.read();
    } else {
        ap_phi_mux_data_2170_V_read2240_rewind_phi_fu_59585_p6 = data_2170_V_read2240_rewind_reg_59581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2171_V_read2241_phi_phi_fu_102242_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2171_V_read2241_phi_phi_fu_102242_p4 = ap_phi_mux_data_2171_V_read2241_rewind_phi_fu_59599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2171_V_read2241_phi_phi_fu_102242_p4 = data_2171_V_read.read();
        } else {
            ap_phi_mux_data_2171_V_read2241_phi_phi_fu_102242_p4 = ap_phi_reg_pp0_iter0_data_2171_V_read2241_phi_reg_102238.read();
        }
    } else {
        ap_phi_mux_data_2171_V_read2241_phi_phi_fu_102242_p4 = ap_phi_reg_pp0_iter0_data_2171_V_read2241_phi_reg_102238.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2171_V_read2241_rewind_phi_fu_59599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2171_V_read2241_rewind_phi_fu_59599_p6 = data_2171_V_read2241_phi_reg_102238.read();
    } else {
        ap_phi_mux_data_2171_V_read2241_rewind_phi_fu_59599_p6 = data_2171_V_read2241_rewind_reg_59595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2172_V_read2242_phi_phi_fu_102255_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2172_V_read2242_phi_phi_fu_102255_p4 = ap_phi_mux_data_2172_V_read2242_rewind_phi_fu_59613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2172_V_read2242_phi_phi_fu_102255_p4 = data_2172_V_read.read();
        } else {
            ap_phi_mux_data_2172_V_read2242_phi_phi_fu_102255_p4 = ap_phi_reg_pp0_iter0_data_2172_V_read2242_phi_reg_102251.read();
        }
    } else {
        ap_phi_mux_data_2172_V_read2242_phi_phi_fu_102255_p4 = ap_phi_reg_pp0_iter0_data_2172_V_read2242_phi_reg_102251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2172_V_read2242_rewind_phi_fu_59613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2172_V_read2242_rewind_phi_fu_59613_p6 = data_2172_V_read2242_phi_reg_102251.read();
    } else {
        ap_phi_mux_data_2172_V_read2242_rewind_phi_fu_59613_p6 = data_2172_V_read2242_rewind_reg_59609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2173_V_read2243_phi_phi_fu_102268_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2173_V_read2243_phi_phi_fu_102268_p4 = ap_phi_mux_data_2173_V_read2243_rewind_phi_fu_59627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2173_V_read2243_phi_phi_fu_102268_p4 = data_2173_V_read.read();
        } else {
            ap_phi_mux_data_2173_V_read2243_phi_phi_fu_102268_p4 = ap_phi_reg_pp0_iter0_data_2173_V_read2243_phi_reg_102264.read();
        }
    } else {
        ap_phi_mux_data_2173_V_read2243_phi_phi_fu_102268_p4 = ap_phi_reg_pp0_iter0_data_2173_V_read2243_phi_reg_102264.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2173_V_read2243_rewind_phi_fu_59627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2173_V_read2243_rewind_phi_fu_59627_p6 = data_2173_V_read2243_phi_reg_102264.read();
    } else {
        ap_phi_mux_data_2173_V_read2243_rewind_phi_fu_59627_p6 = data_2173_V_read2243_rewind_reg_59623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2174_V_read2244_phi_phi_fu_102281_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2174_V_read2244_phi_phi_fu_102281_p4 = ap_phi_mux_data_2174_V_read2244_rewind_phi_fu_59641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2174_V_read2244_phi_phi_fu_102281_p4 = data_2174_V_read.read();
        } else {
            ap_phi_mux_data_2174_V_read2244_phi_phi_fu_102281_p4 = ap_phi_reg_pp0_iter0_data_2174_V_read2244_phi_reg_102277.read();
        }
    } else {
        ap_phi_mux_data_2174_V_read2244_phi_phi_fu_102281_p4 = ap_phi_reg_pp0_iter0_data_2174_V_read2244_phi_reg_102277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2174_V_read2244_rewind_phi_fu_59641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2174_V_read2244_rewind_phi_fu_59641_p6 = data_2174_V_read2244_phi_reg_102277.read();
    } else {
        ap_phi_mux_data_2174_V_read2244_rewind_phi_fu_59641_p6 = data_2174_V_read2244_rewind_reg_59637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2175_V_read2245_phi_phi_fu_102294_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2175_V_read2245_phi_phi_fu_102294_p4 = ap_phi_mux_data_2175_V_read2245_rewind_phi_fu_59655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2175_V_read2245_phi_phi_fu_102294_p4 = data_2175_V_read.read();
        } else {
            ap_phi_mux_data_2175_V_read2245_phi_phi_fu_102294_p4 = ap_phi_reg_pp0_iter0_data_2175_V_read2245_phi_reg_102290.read();
        }
    } else {
        ap_phi_mux_data_2175_V_read2245_phi_phi_fu_102294_p4 = ap_phi_reg_pp0_iter0_data_2175_V_read2245_phi_reg_102290.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2175_V_read2245_rewind_phi_fu_59655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2175_V_read2245_rewind_phi_fu_59655_p6 = data_2175_V_read2245_phi_reg_102290.read();
    } else {
        ap_phi_mux_data_2175_V_read2245_rewind_phi_fu_59655_p6 = data_2175_V_read2245_rewind_reg_59651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2176_V_read2246_phi_phi_fu_102307_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2176_V_read2246_phi_phi_fu_102307_p4 = ap_phi_mux_data_2176_V_read2246_rewind_phi_fu_59669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2176_V_read2246_phi_phi_fu_102307_p4 = data_2176_V_read.read();
        } else {
            ap_phi_mux_data_2176_V_read2246_phi_phi_fu_102307_p4 = ap_phi_reg_pp0_iter0_data_2176_V_read2246_phi_reg_102303.read();
        }
    } else {
        ap_phi_mux_data_2176_V_read2246_phi_phi_fu_102307_p4 = ap_phi_reg_pp0_iter0_data_2176_V_read2246_phi_reg_102303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2176_V_read2246_rewind_phi_fu_59669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2176_V_read2246_rewind_phi_fu_59669_p6 = data_2176_V_read2246_phi_reg_102303.read();
    } else {
        ap_phi_mux_data_2176_V_read2246_rewind_phi_fu_59669_p6 = data_2176_V_read2246_rewind_reg_59665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2177_V_read2247_phi_phi_fu_102320_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2177_V_read2247_phi_phi_fu_102320_p4 = ap_phi_mux_data_2177_V_read2247_rewind_phi_fu_59683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2177_V_read2247_phi_phi_fu_102320_p4 = data_2177_V_read.read();
        } else {
            ap_phi_mux_data_2177_V_read2247_phi_phi_fu_102320_p4 = ap_phi_reg_pp0_iter0_data_2177_V_read2247_phi_reg_102316.read();
        }
    } else {
        ap_phi_mux_data_2177_V_read2247_phi_phi_fu_102320_p4 = ap_phi_reg_pp0_iter0_data_2177_V_read2247_phi_reg_102316.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2177_V_read2247_rewind_phi_fu_59683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2177_V_read2247_rewind_phi_fu_59683_p6 = data_2177_V_read2247_phi_reg_102316.read();
    } else {
        ap_phi_mux_data_2177_V_read2247_rewind_phi_fu_59683_p6 = data_2177_V_read2247_rewind_reg_59679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2178_V_read2248_phi_phi_fu_102333_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2178_V_read2248_phi_phi_fu_102333_p4 = ap_phi_mux_data_2178_V_read2248_rewind_phi_fu_59697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2178_V_read2248_phi_phi_fu_102333_p4 = data_2178_V_read.read();
        } else {
            ap_phi_mux_data_2178_V_read2248_phi_phi_fu_102333_p4 = ap_phi_reg_pp0_iter0_data_2178_V_read2248_phi_reg_102329.read();
        }
    } else {
        ap_phi_mux_data_2178_V_read2248_phi_phi_fu_102333_p4 = ap_phi_reg_pp0_iter0_data_2178_V_read2248_phi_reg_102329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2178_V_read2248_rewind_phi_fu_59697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2178_V_read2248_rewind_phi_fu_59697_p6 = data_2178_V_read2248_phi_reg_102329.read();
    } else {
        ap_phi_mux_data_2178_V_read2248_rewind_phi_fu_59697_p6 = data_2178_V_read2248_rewind_reg_59693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2179_V_read2249_phi_phi_fu_102346_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2179_V_read2249_phi_phi_fu_102346_p4 = ap_phi_mux_data_2179_V_read2249_rewind_phi_fu_59711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2179_V_read2249_phi_phi_fu_102346_p4 = data_2179_V_read.read();
        } else {
            ap_phi_mux_data_2179_V_read2249_phi_phi_fu_102346_p4 = ap_phi_reg_pp0_iter0_data_2179_V_read2249_phi_reg_102342.read();
        }
    } else {
        ap_phi_mux_data_2179_V_read2249_phi_phi_fu_102346_p4 = ap_phi_reg_pp0_iter0_data_2179_V_read2249_phi_reg_102342.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2179_V_read2249_rewind_phi_fu_59711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2179_V_read2249_rewind_phi_fu_59711_p6 = data_2179_V_read2249_phi_reg_102342.read();
    } else {
        ap_phi_mux_data_2179_V_read2249_rewind_phi_fu_59711_p6 = data_2179_V_read2249_rewind_reg_59707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_217_V_read287_phi_phi_fu_76840_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_217_V_read287_phi_phi_fu_76840_p4 = ap_phi_mux_data_217_V_read287_rewind_phi_fu_32243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_217_V_read287_phi_phi_fu_76840_p4 = data_217_V_read.read();
        } else {
            ap_phi_mux_data_217_V_read287_phi_phi_fu_76840_p4 = ap_phi_reg_pp0_iter0_data_217_V_read287_phi_reg_76836.read();
        }
    } else {
        ap_phi_mux_data_217_V_read287_phi_phi_fu_76840_p4 = ap_phi_reg_pp0_iter0_data_217_V_read287_phi_reg_76836.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_217_V_read287_rewind_phi_fu_32243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_217_V_read287_rewind_phi_fu_32243_p6 = data_217_V_read287_phi_reg_76836.read();
    } else {
        ap_phi_mux_data_217_V_read287_rewind_phi_fu_32243_p6 = data_217_V_read287_rewind_reg_32239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2180_V_read2250_phi_phi_fu_102359_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2180_V_read2250_phi_phi_fu_102359_p4 = ap_phi_mux_data_2180_V_read2250_rewind_phi_fu_59725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2180_V_read2250_phi_phi_fu_102359_p4 = data_2180_V_read.read();
        } else {
            ap_phi_mux_data_2180_V_read2250_phi_phi_fu_102359_p4 = ap_phi_reg_pp0_iter0_data_2180_V_read2250_phi_reg_102355.read();
        }
    } else {
        ap_phi_mux_data_2180_V_read2250_phi_phi_fu_102359_p4 = ap_phi_reg_pp0_iter0_data_2180_V_read2250_phi_reg_102355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2180_V_read2250_rewind_phi_fu_59725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2180_V_read2250_rewind_phi_fu_59725_p6 = data_2180_V_read2250_phi_reg_102355.read();
    } else {
        ap_phi_mux_data_2180_V_read2250_rewind_phi_fu_59725_p6 = data_2180_V_read2250_rewind_reg_59721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2181_V_read2251_phi_phi_fu_102372_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2181_V_read2251_phi_phi_fu_102372_p4 = ap_phi_mux_data_2181_V_read2251_rewind_phi_fu_59739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2181_V_read2251_phi_phi_fu_102372_p4 = data_2181_V_read.read();
        } else {
            ap_phi_mux_data_2181_V_read2251_phi_phi_fu_102372_p4 = ap_phi_reg_pp0_iter0_data_2181_V_read2251_phi_reg_102368.read();
        }
    } else {
        ap_phi_mux_data_2181_V_read2251_phi_phi_fu_102372_p4 = ap_phi_reg_pp0_iter0_data_2181_V_read2251_phi_reg_102368.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2181_V_read2251_rewind_phi_fu_59739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2181_V_read2251_rewind_phi_fu_59739_p6 = data_2181_V_read2251_phi_reg_102368.read();
    } else {
        ap_phi_mux_data_2181_V_read2251_rewind_phi_fu_59739_p6 = data_2181_V_read2251_rewind_reg_59735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2182_V_read2252_phi_phi_fu_102385_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2182_V_read2252_phi_phi_fu_102385_p4 = ap_phi_mux_data_2182_V_read2252_rewind_phi_fu_59753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2182_V_read2252_phi_phi_fu_102385_p4 = data_2182_V_read.read();
        } else {
            ap_phi_mux_data_2182_V_read2252_phi_phi_fu_102385_p4 = ap_phi_reg_pp0_iter0_data_2182_V_read2252_phi_reg_102381.read();
        }
    } else {
        ap_phi_mux_data_2182_V_read2252_phi_phi_fu_102385_p4 = ap_phi_reg_pp0_iter0_data_2182_V_read2252_phi_reg_102381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2182_V_read2252_rewind_phi_fu_59753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2182_V_read2252_rewind_phi_fu_59753_p6 = data_2182_V_read2252_phi_reg_102381.read();
    } else {
        ap_phi_mux_data_2182_V_read2252_rewind_phi_fu_59753_p6 = data_2182_V_read2252_rewind_reg_59749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2183_V_read2253_phi_phi_fu_102398_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2183_V_read2253_phi_phi_fu_102398_p4 = ap_phi_mux_data_2183_V_read2253_rewind_phi_fu_59767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2183_V_read2253_phi_phi_fu_102398_p4 = data_2183_V_read.read();
        } else {
            ap_phi_mux_data_2183_V_read2253_phi_phi_fu_102398_p4 = ap_phi_reg_pp0_iter0_data_2183_V_read2253_phi_reg_102394.read();
        }
    } else {
        ap_phi_mux_data_2183_V_read2253_phi_phi_fu_102398_p4 = ap_phi_reg_pp0_iter0_data_2183_V_read2253_phi_reg_102394.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2183_V_read2253_rewind_phi_fu_59767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2183_V_read2253_rewind_phi_fu_59767_p6 = data_2183_V_read2253_phi_reg_102394.read();
    } else {
        ap_phi_mux_data_2183_V_read2253_rewind_phi_fu_59767_p6 = data_2183_V_read2253_rewind_reg_59763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2184_V_read2254_phi_phi_fu_102411_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2184_V_read2254_phi_phi_fu_102411_p4 = ap_phi_mux_data_2184_V_read2254_rewind_phi_fu_59781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2184_V_read2254_phi_phi_fu_102411_p4 = data_2184_V_read.read();
        } else {
            ap_phi_mux_data_2184_V_read2254_phi_phi_fu_102411_p4 = ap_phi_reg_pp0_iter0_data_2184_V_read2254_phi_reg_102407.read();
        }
    } else {
        ap_phi_mux_data_2184_V_read2254_phi_phi_fu_102411_p4 = ap_phi_reg_pp0_iter0_data_2184_V_read2254_phi_reg_102407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2184_V_read2254_rewind_phi_fu_59781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2184_V_read2254_rewind_phi_fu_59781_p6 = data_2184_V_read2254_phi_reg_102407.read();
    } else {
        ap_phi_mux_data_2184_V_read2254_rewind_phi_fu_59781_p6 = data_2184_V_read2254_rewind_reg_59777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2185_V_read2255_phi_phi_fu_102424_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2185_V_read2255_phi_phi_fu_102424_p4 = ap_phi_mux_data_2185_V_read2255_rewind_phi_fu_59795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2185_V_read2255_phi_phi_fu_102424_p4 = data_2185_V_read.read();
        } else {
            ap_phi_mux_data_2185_V_read2255_phi_phi_fu_102424_p4 = ap_phi_reg_pp0_iter0_data_2185_V_read2255_phi_reg_102420.read();
        }
    } else {
        ap_phi_mux_data_2185_V_read2255_phi_phi_fu_102424_p4 = ap_phi_reg_pp0_iter0_data_2185_V_read2255_phi_reg_102420.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2185_V_read2255_rewind_phi_fu_59795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2185_V_read2255_rewind_phi_fu_59795_p6 = data_2185_V_read2255_phi_reg_102420.read();
    } else {
        ap_phi_mux_data_2185_V_read2255_rewind_phi_fu_59795_p6 = data_2185_V_read2255_rewind_reg_59791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2186_V_read2256_phi_phi_fu_102437_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2186_V_read2256_phi_phi_fu_102437_p4 = ap_phi_mux_data_2186_V_read2256_rewind_phi_fu_59809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2186_V_read2256_phi_phi_fu_102437_p4 = data_2186_V_read.read();
        } else {
            ap_phi_mux_data_2186_V_read2256_phi_phi_fu_102437_p4 = ap_phi_reg_pp0_iter0_data_2186_V_read2256_phi_reg_102433.read();
        }
    } else {
        ap_phi_mux_data_2186_V_read2256_phi_phi_fu_102437_p4 = ap_phi_reg_pp0_iter0_data_2186_V_read2256_phi_reg_102433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2186_V_read2256_rewind_phi_fu_59809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2186_V_read2256_rewind_phi_fu_59809_p6 = data_2186_V_read2256_phi_reg_102433.read();
    } else {
        ap_phi_mux_data_2186_V_read2256_rewind_phi_fu_59809_p6 = data_2186_V_read2256_rewind_reg_59805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2187_V_read2257_phi_phi_fu_102450_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2187_V_read2257_phi_phi_fu_102450_p4 = ap_phi_mux_data_2187_V_read2257_rewind_phi_fu_59823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2187_V_read2257_phi_phi_fu_102450_p4 = data_2187_V_read.read();
        } else {
            ap_phi_mux_data_2187_V_read2257_phi_phi_fu_102450_p4 = ap_phi_reg_pp0_iter0_data_2187_V_read2257_phi_reg_102446.read();
        }
    } else {
        ap_phi_mux_data_2187_V_read2257_phi_phi_fu_102450_p4 = ap_phi_reg_pp0_iter0_data_2187_V_read2257_phi_reg_102446.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2187_V_read2257_rewind_phi_fu_59823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2187_V_read2257_rewind_phi_fu_59823_p6 = data_2187_V_read2257_phi_reg_102446.read();
    } else {
        ap_phi_mux_data_2187_V_read2257_rewind_phi_fu_59823_p6 = data_2187_V_read2257_rewind_reg_59819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2188_V_read2258_phi_phi_fu_102463_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2188_V_read2258_phi_phi_fu_102463_p4 = ap_phi_mux_data_2188_V_read2258_rewind_phi_fu_59837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2188_V_read2258_phi_phi_fu_102463_p4 = data_2188_V_read.read();
        } else {
            ap_phi_mux_data_2188_V_read2258_phi_phi_fu_102463_p4 = ap_phi_reg_pp0_iter0_data_2188_V_read2258_phi_reg_102459.read();
        }
    } else {
        ap_phi_mux_data_2188_V_read2258_phi_phi_fu_102463_p4 = ap_phi_reg_pp0_iter0_data_2188_V_read2258_phi_reg_102459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2188_V_read2258_rewind_phi_fu_59837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2188_V_read2258_rewind_phi_fu_59837_p6 = data_2188_V_read2258_phi_reg_102459.read();
    } else {
        ap_phi_mux_data_2188_V_read2258_rewind_phi_fu_59837_p6 = data_2188_V_read2258_rewind_reg_59833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2189_V_read2259_phi_phi_fu_102476_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2189_V_read2259_phi_phi_fu_102476_p4 = ap_phi_mux_data_2189_V_read2259_rewind_phi_fu_59851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2189_V_read2259_phi_phi_fu_102476_p4 = data_2189_V_read.read();
        } else {
            ap_phi_mux_data_2189_V_read2259_phi_phi_fu_102476_p4 = ap_phi_reg_pp0_iter0_data_2189_V_read2259_phi_reg_102472.read();
        }
    } else {
        ap_phi_mux_data_2189_V_read2259_phi_phi_fu_102476_p4 = ap_phi_reg_pp0_iter0_data_2189_V_read2259_phi_reg_102472.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2189_V_read2259_rewind_phi_fu_59851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2189_V_read2259_rewind_phi_fu_59851_p6 = data_2189_V_read2259_phi_reg_102472.read();
    } else {
        ap_phi_mux_data_2189_V_read2259_rewind_phi_fu_59851_p6 = data_2189_V_read2259_rewind_reg_59847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_218_V_read288_phi_phi_fu_76853_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_218_V_read288_phi_phi_fu_76853_p4 = ap_phi_mux_data_218_V_read288_rewind_phi_fu_32257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_218_V_read288_phi_phi_fu_76853_p4 = data_218_V_read.read();
        } else {
            ap_phi_mux_data_218_V_read288_phi_phi_fu_76853_p4 = ap_phi_reg_pp0_iter0_data_218_V_read288_phi_reg_76849.read();
        }
    } else {
        ap_phi_mux_data_218_V_read288_phi_phi_fu_76853_p4 = ap_phi_reg_pp0_iter0_data_218_V_read288_phi_reg_76849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_218_V_read288_rewind_phi_fu_32257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_218_V_read288_rewind_phi_fu_32257_p6 = data_218_V_read288_phi_reg_76849.read();
    } else {
        ap_phi_mux_data_218_V_read288_rewind_phi_fu_32257_p6 = data_218_V_read288_rewind_reg_32253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2190_V_read2260_phi_phi_fu_102489_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2190_V_read2260_phi_phi_fu_102489_p4 = ap_phi_mux_data_2190_V_read2260_rewind_phi_fu_59865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2190_V_read2260_phi_phi_fu_102489_p4 = data_2190_V_read.read();
        } else {
            ap_phi_mux_data_2190_V_read2260_phi_phi_fu_102489_p4 = ap_phi_reg_pp0_iter0_data_2190_V_read2260_phi_reg_102485.read();
        }
    } else {
        ap_phi_mux_data_2190_V_read2260_phi_phi_fu_102489_p4 = ap_phi_reg_pp0_iter0_data_2190_V_read2260_phi_reg_102485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2190_V_read2260_rewind_phi_fu_59865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2190_V_read2260_rewind_phi_fu_59865_p6 = data_2190_V_read2260_phi_reg_102485.read();
    } else {
        ap_phi_mux_data_2190_V_read2260_rewind_phi_fu_59865_p6 = data_2190_V_read2260_rewind_reg_59861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2191_V_read2261_phi_phi_fu_102502_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2191_V_read2261_phi_phi_fu_102502_p4 = ap_phi_mux_data_2191_V_read2261_rewind_phi_fu_59879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2191_V_read2261_phi_phi_fu_102502_p4 = data_2191_V_read.read();
        } else {
            ap_phi_mux_data_2191_V_read2261_phi_phi_fu_102502_p4 = ap_phi_reg_pp0_iter0_data_2191_V_read2261_phi_reg_102498.read();
        }
    } else {
        ap_phi_mux_data_2191_V_read2261_phi_phi_fu_102502_p4 = ap_phi_reg_pp0_iter0_data_2191_V_read2261_phi_reg_102498.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2191_V_read2261_rewind_phi_fu_59879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2191_V_read2261_rewind_phi_fu_59879_p6 = data_2191_V_read2261_phi_reg_102498.read();
    } else {
        ap_phi_mux_data_2191_V_read2261_rewind_phi_fu_59879_p6 = data_2191_V_read2261_rewind_reg_59875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2192_V_read2262_phi_phi_fu_102515_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2192_V_read2262_phi_phi_fu_102515_p4 = ap_phi_mux_data_2192_V_read2262_rewind_phi_fu_59893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2192_V_read2262_phi_phi_fu_102515_p4 = data_2192_V_read.read();
        } else {
            ap_phi_mux_data_2192_V_read2262_phi_phi_fu_102515_p4 = ap_phi_reg_pp0_iter0_data_2192_V_read2262_phi_reg_102511.read();
        }
    } else {
        ap_phi_mux_data_2192_V_read2262_phi_phi_fu_102515_p4 = ap_phi_reg_pp0_iter0_data_2192_V_read2262_phi_reg_102511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2192_V_read2262_rewind_phi_fu_59893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2192_V_read2262_rewind_phi_fu_59893_p6 = data_2192_V_read2262_phi_reg_102511.read();
    } else {
        ap_phi_mux_data_2192_V_read2262_rewind_phi_fu_59893_p6 = data_2192_V_read2262_rewind_reg_59889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2193_V_read2263_phi_phi_fu_102528_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2193_V_read2263_phi_phi_fu_102528_p4 = ap_phi_mux_data_2193_V_read2263_rewind_phi_fu_59907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2193_V_read2263_phi_phi_fu_102528_p4 = data_2193_V_read.read();
        } else {
            ap_phi_mux_data_2193_V_read2263_phi_phi_fu_102528_p4 = ap_phi_reg_pp0_iter0_data_2193_V_read2263_phi_reg_102524.read();
        }
    } else {
        ap_phi_mux_data_2193_V_read2263_phi_phi_fu_102528_p4 = ap_phi_reg_pp0_iter0_data_2193_V_read2263_phi_reg_102524.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2193_V_read2263_rewind_phi_fu_59907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2193_V_read2263_rewind_phi_fu_59907_p6 = data_2193_V_read2263_phi_reg_102524.read();
    } else {
        ap_phi_mux_data_2193_V_read2263_rewind_phi_fu_59907_p6 = data_2193_V_read2263_rewind_reg_59903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2194_V_read2264_phi_phi_fu_102541_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2194_V_read2264_phi_phi_fu_102541_p4 = ap_phi_mux_data_2194_V_read2264_rewind_phi_fu_59921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2194_V_read2264_phi_phi_fu_102541_p4 = data_2194_V_read.read();
        } else {
            ap_phi_mux_data_2194_V_read2264_phi_phi_fu_102541_p4 = ap_phi_reg_pp0_iter0_data_2194_V_read2264_phi_reg_102537.read();
        }
    } else {
        ap_phi_mux_data_2194_V_read2264_phi_phi_fu_102541_p4 = ap_phi_reg_pp0_iter0_data_2194_V_read2264_phi_reg_102537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2194_V_read2264_rewind_phi_fu_59921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2194_V_read2264_rewind_phi_fu_59921_p6 = data_2194_V_read2264_phi_reg_102537.read();
    } else {
        ap_phi_mux_data_2194_V_read2264_rewind_phi_fu_59921_p6 = data_2194_V_read2264_rewind_reg_59917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2195_V_read2265_phi_phi_fu_102554_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2195_V_read2265_phi_phi_fu_102554_p4 = ap_phi_mux_data_2195_V_read2265_rewind_phi_fu_59935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2195_V_read2265_phi_phi_fu_102554_p4 = data_2195_V_read.read();
        } else {
            ap_phi_mux_data_2195_V_read2265_phi_phi_fu_102554_p4 = ap_phi_reg_pp0_iter0_data_2195_V_read2265_phi_reg_102550.read();
        }
    } else {
        ap_phi_mux_data_2195_V_read2265_phi_phi_fu_102554_p4 = ap_phi_reg_pp0_iter0_data_2195_V_read2265_phi_reg_102550.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2195_V_read2265_rewind_phi_fu_59935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2195_V_read2265_rewind_phi_fu_59935_p6 = data_2195_V_read2265_phi_reg_102550.read();
    } else {
        ap_phi_mux_data_2195_V_read2265_rewind_phi_fu_59935_p6 = data_2195_V_read2265_rewind_reg_59931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2196_V_read2266_phi_phi_fu_102567_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2196_V_read2266_phi_phi_fu_102567_p4 = ap_phi_mux_data_2196_V_read2266_rewind_phi_fu_59949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2196_V_read2266_phi_phi_fu_102567_p4 = data_2196_V_read.read();
        } else {
            ap_phi_mux_data_2196_V_read2266_phi_phi_fu_102567_p4 = ap_phi_reg_pp0_iter0_data_2196_V_read2266_phi_reg_102563.read();
        }
    } else {
        ap_phi_mux_data_2196_V_read2266_phi_phi_fu_102567_p4 = ap_phi_reg_pp0_iter0_data_2196_V_read2266_phi_reg_102563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2196_V_read2266_rewind_phi_fu_59949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2196_V_read2266_rewind_phi_fu_59949_p6 = data_2196_V_read2266_phi_reg_102563.read();
    } else {
        ap_phi_mux_data_2196_V_read2266_rewind_phi_fu_59949_p6 = data_2196_V_read2266_rewind_reg_59945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2197_V_read2267_phi_phi_fu_102580_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2197_V_read2267_phi_phi_fu_102580_p4 = ap_phi_mux_data_2197_V_read2267_rewind_phi_fu_59963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2197_V_read2267_phi_phi_fu_102580_p4 = data_2197_V_read.read();
        } else {
            ap_phi_mux_data_2197_V_read2267_phi_phi_fu_102580_p4 = ap_phi_reg_pp0_iter0_data_2197_V_read2267_phi_reg_102576.read();
        }
    } else {
        ap_phi_mux_data_2197_V_read2267_phi_phi_fu_102580_p4 = ap_phi_reg_pp0_iter0_data_2197_V_read2267_phi_reg_102576.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2197_V_read2267_rewind_phi_fu_59963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2197_V_read2267_rewind_phi_fu_59963_p6 = data_2197_V_read2267_phi_reg_102576.read();
    } else {
        ap_phi_mux_data_2197_V_read2267_rewind_phi_fu_59963_p6 = data_2197_V_read2267_rewind_reg_59959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2198_V_read2268_phi_phi_fu_102593_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2198_V_read2268_phi_phi_fu_102593_p4 = ap_phi_mux_data_2198_V_read2268_rewind_phi_fu_59977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2198_V_read2268_phi_phi_fu_102593_p4 = data_2198_V_read.read();
        } else {
            ap_phi_mux_data_2198_V_read2268_phi_phi_fu_102593_p4 = ap_phi_reg_pp0_iter0_data_2198_V_read2268_phi_reg_102589.read();
        }
    } else {
        ap_phi_mux_data_2198_V_read2268_phi_phi_fu_102593_p4 = ap_phi_reg_pp0_iter0_data_2198_V_read2268_phi_reg_102589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2198_V_read2268_rewind_phi_fu_59977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2198_V_read2268_rewind_phi_fu_59977_p6 = data_2198_V_read2268_phi_reg_102589.read();
    } else {
        ap_phi_mux_data_2198_V_read2268_rewind_phi_fu_59977_p6 = data_2198_V_read2268_rewind_reg_59973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2199_V_read2269_phi_phi_fu_102606_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2199_V_read2269_phi_phi_fu_102606_p4 = ap_phi_mux_data_2199_V_read2269_rewind_phi_fu_59991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2199_V_read2269_phi_phi_fu_102606_p4 = data_2199_V_read.read();
        } else {
            ap_phi_mux_data_2199_V_read2269_phi_phi_fu_102606_p4 = ap_phi_reg_pp0_iter0_data_2199_V_read2269_phi_reg_102602.read();
        }
    } else {
        ap_phi_mux_data_2199_V_read2269_phi_phi_fu_102606_p4 = ap_phi_reg_pp0_iter0_data_2199_V_read2269_phi_reg_102602.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2199_V_read2269_rewind_phi_fu_59991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2199_V_read2269_rewind_phi_fu_59991_p6 = data_2199_V_read2269_phi_reg_102602.read();
    } else {
        ap_phi_mux_data_2199_V_read2269_rewind_phi_fu_59991_p6 = data_2199_V_read2269_rewind_reg_59987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_219_V_read289_phi_phi_fu_76866_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_219_V_read289_phi_phi_fu_76866_p4 = ap_phi_mux_data_219_V_read289_rewind_phi_fu_32271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_219_V_read289_phi_phi_fu_76866_p4 = data_219_V_read.read();
        } else {
            ap_phi_mux_data_219_V_read289_phi_phi_fu_76866_p4 = ap_phi_reg_pp0_iter0_data_219_V_read289_phi_reg_76862.read();
        }
    } else {
        ap_phi_mux_data_219_V_read289_phi_phi_fu_76866_p4 = ap_phi_reg_pp0_iter0_data_219_V_read289_phi_reg_76862.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_219_V_read289_rewind_phi_fu_32271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_219_V_read289_rewind_phi_fu_32271_p6 = data_219_V_read289_phi_reg_76862.read();
    } else {
        ap_phi_mux_data_219_V_read289_rewind_phi_fu_32271_p6 = data_219_V_read289_rewind_reg_32267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_21_V_read91_phi_phi_fu_74292_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_21_V_read91_phi_phi_fu_74292_p4 = ap_phi_mux_data_21_V_read91_rewind_phi_fu_29499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_21_V_read91_phi_phi_fu_74292_p4 = data_21_V_read.read();
        } else {
            ap_phi_mux_data_21_V_read91_phi_phi_fu_74292_p4 = ap_phi_reg_pp0_iter0_data_21_V_read91_phi_reg_74288.read();
        }
    } else {
        ap_phi_mux_data_21_V_read91_phi_phi_fu_74292_p4 = ap_phi_reg_pp0_iter0_data_21_V_read91_phi_reg_74288.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_21_V_read91_rewind_phi_fu_29499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_21_V_read91_rewind_phi_fu_29499_p6 = data_21_V_read91_phi_reg_74288.read();
    } else {
        ap_phi_mux_data_21_V_read91_rewind_phi_fu_29499_p6 = data_21_V_read91_rewind_reg_29495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2200_V_read2270_phi_phi_fu_102619_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2200_V_read2270_phi_phi_fu_102619_p4 = ap_phi_mux_data_2200_V_read2270_rewind_phi_fu_60005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2200_V_read2270_phi_phi_fu_102619_p4 = data_2200_V_read.read();
        } else {
            ap_phi_mux_data_2200_V_read2270_phi_phi_fu_102619_p4 = ap_phi_reg_pp0_iter0_data_2200_V_read2270_phi_reg_102615.read();
        }
    } else {
        ap_phi_mux_data_2200_V_read2270_phi_phi_fu_102619_p4 = ap_phi_reg_pp0_iter0_data_2200_V_read2270_phi_reg_102615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2200_V_read2270_rewind_phi_fu_60005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2200_V_read2270_rewind_phi_fu_60005_p6 = data_2200_V_read2270_phi_reg_102615.read();
    } else {
        ap_phi_mux_data_2200_V_read2270_rewind_phi_fu_60005_p6 = data_2200_V_read2270_rewind_reg_60001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2201_V_read2271_phi_phi_fu_102632_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2201_V_read2271_phi_phi_fu_102632_p4 = ap_phi_mux_data_2201_V_read2271_rewind_phi_fu_60019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2201_V_read2271_phi_phi_fu_102632_p4 = data_2201_V_read.read();
        } else {
            ap_phi_mux_data_2201_V_read2271_phi_phi_fu_102632_p4 = ap_phi_reg_pp0_iter0_data_2201_V_read2271_phi_reg_102628.read();
        }
    } else {
        ap_phi_mux_data_2201_V_read2271_phi_phi_fu_102632_p4 = ap_phi_reg_pp0_iter0_data_2201_V_read2271_phi_reg_102628.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2201_V_read2271_rewind_phi_fu_60019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2201_V_read2271_rewind_phi_fu_60019_p6 = data_2201_V_read2271_phi_reg_102628.read();
    } else {
        ap_phi_mux_data_2201_V_read2271_rewind_phi_fu_60019_p6 = data_2201_V_read2271_rewind_reg_60015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2202_V_read2272_phi_phi_fu_102645_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2202_V_read2272_phi_phi_fu_102645_p4 = ap_phi_mux_data_2202_V_read2272_rewind_phi_fu_60033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2202_V_read2272_phi_phi_fu_102645_p4 = data_2202_V_read.read();
        } else {
            ap_phi_mux_data_2202_V_read2272_phi_phi_fu_102645_p4 = ap_phi_reg_pp0_iter0_data_2202_V_read2272_phi_reg_102641.read();
        }
    } else {
        ap_phi_mux_data_2202_V_read2272_phi_phi_fu_102645_p4 = ap_phi_reg_pp0_iter0_data_2202_V_read2272_phi_reg_102641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2202_V_read2272_rewind_phi_fu_60033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2202_V_read2272_rewind_phi_fu_60033_p6 = data_2202_V_read2272_phi_reg_102641.read();
    } else {
        ap_phi_mux_data_2202_V_read2272_rewind_phi_fu_60033_p6 = data_2202_V_read2272_rewind_reg_60029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2203_V_read2273_phi_phi_fu_102658_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2203_V_read2273_phi_phi_fu_102658_p4 = ap_phi_mux_data_2203_V_read2273_rewind_phi_fu_60047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2203_V_read2273_phi_phi_fu_102658_p4 = data_2203_V_read.read();
        } else {
            ap_phi_mux_data_2203_V_read2273_phi_phi_fu_102658_p4 = ap_phi_reg_pp0_iter0_data_2203_V_read2273_phi_reg_102654.read();
        }
    } else {
        ap_phi_mux_data_2203_V_read2273_phi_phi_fu_102658_p4 = ap_phi_reg_pp0_iter0_data_2203_V_read2273_phi_reg_102654.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2203_V_read2273_rewind_phi_fu_60047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2203_V_read2273_rewind_phi_fu_60047_p6 = data_2203_V_read2273_phi_reg_102654.read();
    } else {
        ap_phi_mux_data_2203_V_read2273_rewind_phi_fu_60047_p6 = data_2203_V_read2273_rewind_reg_60043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2204_V_read2274_phi_phi_fu_102671_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2204_V_read2274_phi_phi_fu_102671_p4 = ap_phi_mux_data_2204_V_read2274_rewind_phi_fu_60061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2204_V_read2274_phi_phi_fu_102671_p4 = data_2204_V_read.read();
        } else {
            ap_phi_mux_data_2204_V_read2274_phi_phi_fu_102671_p4 = ap_phi_reg_pp0_iter0_data_2204_V_read2274_phi_reg_102667.read();
        }
    } else {
        ap_phi_mux_data_2204_V_read2274_phi_phi_fu_102671_p4 = ap_phi_reg_pp0_iter0_data_2204_V_read2274_phi_reg_102667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2204_V_read2274_rewind_phi_fu_60061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2204_V_read2274_rewind_phi_fu_60061_p6 = data_2204_V_read2274_phi_reg_102667.read();
    } else {
        ap_phi_mux_data_2204_V_read2274_rewind_phi_fu_60061_p6 = data_2204_V_read2274_rewind_reg_60057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2205_V_read2275_phi_phi_fu_102684_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2205_V_read2275_phi_phi_fu_102684_p4 = ap_phi_mux_data_2205_V_read2275_rewind_phi_fu_60075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2205_V_read2275_phi_phi_fu_102684_p4 = data_2205_V_read.read();
        } else {
            ap_phi_mux_data_2205_V_read2275_phi_phi_fu_102684_p4 = ap_phi_reg_pp0_iter0_data_2205_V_read2275_phi_reg_102680.read();
        }
    } else {
        ap_phi_mux_data_2205_V_read2275_phi_phi_fu_102684_p4 = ap_phi_reg_pp0_iter0_data_2205_V_read2275_phi_reg_102680.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2205_V_read2275_rewind_phi_fu_60075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2205_V_read2275_rewind_phi_fu_60075_p6 = data_2205_V_read2275_phi_reg_102680.read();
    } else {
        ap_phi_mux_data_2205_V_read2275_rewind_phi_fu_60075_p6 = data_2205_V_read2275_rewind_reg_60071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2206_V_read2276_phi_phi_fu_102697_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2206_V_read2276_phi_phi_fu_102697_p4 = ap_phi_mux_data_2206_V_read2276_rewind_phi_fu_60089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2206_V_read2276_phi_phi_fu_102697_p4 = data_2206_V_read.read();
        } else {
            ap_phi_mux_data_2206_V_read2276_phi_phi_fu_102697_p4 = ap_phi_reg_pp0_iter0_data_2206_V_read2276_phi_reg_102693.read();
        }
    } else {
        ap_phi_mux_data_2206_V_read2276_phi_phi_fu_102697_p4 = ap_phi_reg_pp0_iter0_data_2206_V_read2276_phi_reg_102693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2206_V_read2276_rewind_phi_fu_60089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2206_V_read2276_rewind_phi_fu_60089_p6 = data_2206_V_read2276_phi_reg_102693.read();
    } else {
        ap_phi_mux_data_2206_V_read2276_rewind_phi_fu_60089_p6 = data_2206_V_read2276_rewind_reg_60085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2207_V_read2277_phi_phi_fu_102710_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2207_V_read2277_phi_phi_fu_102710_p4 = ap_phi_mux_data_2207_V_read2277_rewind_phi_fu_60103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2207_V_read2277_phi_phi_fu_102710_p4 = data_2207_V_read.read();
        } else {
            ap_phi_mux_data_2207_V_read2277_phi_phi_fu_102710_p4 = ap_phi_reg_pp0_iter0_data_2207_V_read2277_phi_reg_102706.read();
        }
    } else {
        ap_phi_mux_data_2207_V_read2277_phi_phi_fu_102710_p4 = ap_phi_reg_pp0_iter0_data_2207_V_read2277_phi_reg_102706.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2207_V_read2277_rewind_phi_fu_60103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2207_V_read2277_rewind_phi_fu_60103_p6 = data_2207_V_read2277_phi_reg_102706.read();
    } else {
        ap_phi_mux_data_2207_V_read2277_rewind_phi_fu_60103_p6 = data_2207_V_read2277_rewind_reg_60099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2208_V_read2278_phi_phi_fu_102723_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2208_V_read2278_phi_phi_fu_102723_p4 = ap_phi_mux_data_2208_V_read2278_rewind_phi_fu_60117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2208_V_read2278_phi_phi_fu_102723_p4 = data_2208_V_read.read();
        } else {
            ap_phi_mux_data_2208_V_read2278_phi_phi_fu_102723_p4 = ap_phi_reg_pp0_iter0_data_2208_V_read2278_phi_reg_102719.read();
        }
    } else {
        ap_phi_mux_data_2208_V_read2278_phi_phi_fu_102723_p4 = ap_phi_reg_pp0_iter0_data_2208_V_read2278_phi_reg_102719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2208_V_read2278_rewind_phi_fu_60117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2208_V_read2278_rewind_phi_fu_60117_p6 = data_2208_V_read2278_phi_reg_102719.read();
    } else {
        ap_phi_mux_data_2208_V_read2278_rewind_phi_fu_60117_p6 = data_2208_V_read2278_rewind_reg_60113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2209_V_read2279_phi_phi_fu_102736_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2209_V_read2279_phi_phi_fu_102736_p4 = ap_phi_mux_data_2209_V_read2279_rewind_phi_fu_60131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2209_V_read2279_phi_phi_fu_102736_p4 = data_2209_V_read.read();
        } else {
            ap_phi_mux_data_2209_V_read2279_phi_phi_fu_102736_p4 = ap_phi_reg_pp0_iter0_data_2209_V_read2279_phi_reg_102732.read();
        }
    } else {
        ap_phi_mux_data_2209_V_read2279_phi_phi_fu_102736_p4 = ap_phi_reg_pp0_iter0_data_2209_V_read2279_phi_reg_102732.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2209_V_read2279_rewind_phi_fu_60131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2209_V_read2279_rewind_phi_fu_60131_p6 = data_2209_V_read2279_phi_reg_102732.read();
    } else {
        ap_phi_mux_data_2209_V_read2279_rewind_phi_fu_60131_p6 = data_2209_V_read2279_rewind_reg_60127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_220_V_read290_phi_phi_fu_76879_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_220_V_read290_phi_phi_fu_76879_p4 = ap_phi_mux_data_220_V_read290_rewind_phi_fu_32285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_220_V_read290_phi_phi_fu_76879_p4 = data_220_V_read.read();
        } else {
            ap_phi_mux_data_220_V_read290_phi_phi_fu_76879_p4 = ap_phi_reg_pp0_iter0_data_220_V_read290_phi_reg_76875.read();
        }
    } else {
        ap_phi_mux_data_220_V_read290_phi_phi_fu_76879_p4 = ap_phi_reg_pp0_iter0_data_220_V_read290_phi_reg_76875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_220_V_read290_rewind_phi_fu_32285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_220_V_read290_rewind_phi_fu_32285_p6 = data_220_V_read290_phi_reg_76875.read();
    } else {
        ap_phi_mux_data_220_V_read290_rewind_phi_fu_32285_p6 = data_220_V_read290_rewind_reg_32281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2210_V_read2280_phi_phi_fu_102749_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2210_V_read2280_phi_phi_fu_102749_p4 = ap_phi_mux_data_2210_V_read2280_rewind_phi_fu_60145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2210_V_read2280_phi_phi_fu_102749_p4 = data_2210_V_read.read();
        } else {
            ap_phi_mux_data_2210_V_read2280_phi_phi_fu_102749_p4 = ap_phi_reg_pp0_iter0_data_2210_V_read2280_phi_reg_102745.read();
        }
    } else {
        ap_phi_mux_data_2210_V_read2280_phi_phi_fu_102749_p4 = ap_phi_reg_pp0_iter0_data_2210_V_read2280_phi_reg_102745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2210_V_read2280_rewind_phi_fu_60145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2210_V_read2280_rewind_phi_fu_60145_p6 = data_2210_V_read2280_phi_reg_102745.read();
    } else {
        ap_phi_mux_data_2210_V_read2280_rewind_phi_fu_60145_p6 = data_2210_V_read2280_rewind_reg_60141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2211_V_read2281_phi_phi_fu_102762_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2211_V_read2281_phi_phi_fu_102762_p4 = ap_phi_mux_data_2211_V_read2281_rewind_phi_fu_60159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2211_V_read2281_phi_phi_fu_102762_p4 = data_2211_V_read.read();
        } else {
            ap_phi_mux_data_2211_V_read2281_phi_phi_fu_102762_p4 = ap_phi_reg_pp0_iter0_data_2211_V_read2281_phi_reg_102758.read();
        }
    } else {
        ap_phi_mux_data_2211_V_read2281_phi_phi_fu_102762_p4 = ap_phi_reg_pp0_iter0_data_2211_V_read2281_phi_reg_102758.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2211_V_read2281_rewind_phi_fu_60159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2211_V_read2281_rewind_phi_fu_60159_p6 = data_2211_V_read2281_phi_reg_102758.read();
    } else {
        ap_phi_mux_data_2211_V_read2281_rewind_phi_fu_60159_p6 = data_2211_V_read2281_rewind_reg_60155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2212_V_read2282_phi_phi_fu_102775_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2212_V_read2282_phi_phi_fu_102775_p4 = ap_phi_mux_data_2212_V_read2282_rewind_phi_fu_60173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2212_V_read2282_phi_phi_fu_102775_p4 = data_2212_V_read.read();
        } else {
            ap_phi_mux_data_2212_V_read2282_phi_phi_fu_102775_p4 = ap_phi_reg_pp0_iter0_data_2212_V_read2282_phi_reg_102771.read();
        }
    } else {
        ap_phi_mux_data_2212_V_read2282_phi_phi_fu_102775_p4 = ap_phi_reg_pp0_iter0_data_2212_V_read2282_phi_reg_102771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2212_V_read2282_rewind_phi_fu_60173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2212_V_read2282_rewind_phi_fu_60173_p6 = data_2212_V_read2282_phi_reg_102771.read();
    } else {
        ap_phi_mux_data_2212_V_read2282_rewind_phi_fu_60173_p6 = data_2212_V_read2282_rewind_reg_60169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2213_V_read2283_phi_phi_fu_102788_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2213_V_read2283_phi_phi_fu_102788_p4 = ap_phi_mux_data_2213_V_read2283_rewind_phi_fu_60187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2213_V_read2283_phi_phi_fu_102788_p4 = data_2213_V_read.read();
        } else {
            ap_phi_mux_data_2213_V_read2283_phi_phi_fu_102788_p4 = ap_phi_reg_pp0_iter0_data_2213_V_read2283_phi_reg_102784.read();
        }
    } else {
        ap_phi_mux_data_2213_V_read2283_phi_phi_fu_102788_p4 = ap_phi_reg_pp0_iter0_data_2213_V_read2283_phi_reg_102784.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2213_V_read2283_rewind_phi_fu_60187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2213_V_read2283_rewind_phi_fu_60187_p6 = data_2213_V_read2283_phi_reg_102784.read();
    } else {
        ap_phi_mux_data_2213_V_read2283_rewind_phi_fu_60187_p6 = data_2213_V_read2283_rewind_reg_60183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2214_V_read2284_phi_phi_fu_102801_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2214_V_read2284_phi_phi_fu_102801_p4 = ap_phi_mux_data_2214_V_read2284_rewind_phi_fu_60201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2214_V_read2284_phi_phi_fu_102801_p4 = data_2214_V_read.read();
        } else {
            ap_phi_mux_data_2214_V_read2284_phi_phi_fu_102801_p4 = ap_phi_reg_pp0_iter0_data_2214_V_read2284_phi_reg_102797.read();
        }
    } else {
        ap_phi_mux_data_2214_V_read2284_phi_phi_fu_102801_p4 = ap_phi_reg_pp0_iter0_data_2214_V_read2284_phi_reg_102797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2214_V_read2284_rewind_phi_fu_60201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2214_V_read2284_rewind_phi_fu_60201_p6 = data_2214_V_read2284_phi_reg_102797.read();
    } else {
        ap_phi_mux_data_2214_V_read2284_rewind_phi_fu_60201_p6 = data_2214_V_read2284_rewind_reg_60197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2215_V_read2285_phi_phi_fu_102814_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2215_V_read2285_phi_phi_fu_102814_p4 = ap_phi_mux_data_2215_V_read2285_rewind_phi_fu_60215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2215_V_read2285_phi_phi_fu_102814_p4 = data_2215_V_read.read();
        } else {
            ap_phi_mux_data_2215_V_read2285_phi_phi_fu_102814_p4 = ap_phi_reg_pp0_iter0_data_2215_V_read2285_phi_reg_102810.read();
        }
    } else {
        ap_phi_mux_data_2215_V_read2285_phi_phi_fu_102814_p4 = ap_phi_reg_pp0_iter0_data_2215_V_read2285_phi_reg_102810.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2215_V_read2285_rewind_phi_fu_60215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2215_V_read2285_rewind_phi_fu_60215_p6 = data_2215_V_read2285_phi_reg_102810.read();
    } else {
        ap_phi_mux_data_2215_V_read2285_rewind_phi_fu_60215_p6 = data_2215_V_read2285_rewind_reg_60211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2216_V_read2286_phi_phi_fu_102827_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2216_V_read2286_phi_phi_fu_102827_p4 = ap_phi_mux_data_2216_V_read2286_rewind_phi_fu_60229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2216_V_read2286_phi_phi_fu_102827_p4 = data_2216_V_read.read();
        } else {
            ap_phi_mux_data_2216_V_read2286_phi_phi_fu_102827_p4 = ap_phi_reg_pp0_iter0_data_2216_V_read2286_phi_reg_102823.read();
        }
    } else {
        ap_phi_mux_data_2216_V_read2286_phi_phi_fu_102827_p4 = ap_phi_reg_pp0_iter0_data_2216_V_read2286_phi_reg_102823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2216_V_read2286_rewind_phi_fu_60229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2216_V_read2286_rewind_phi_fu_60229_p6 = data_2216_V_read2286_phi_reg_102823.read();
    } else {
        ap_phi_mux_data_2216_V_read2286_rewind_phi_fu_60229_p6 = data_2216_V_read2286_rewind_reg_60225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2217_V_read2287_phi_phi_fu_102840_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2217_V_read2287_phi_phi_fu_102840_p4 = ap_phi_mux_data_2217_V_read2287_rewind_phi_fu_60243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2217_V_read2287_phi_phi_fu_102840_p4 = data_2217_V_read.read();
        } else {
            ap_phi_mux_data_2217_V_read2287_phi_phi_fu_102840_p4 = ap_phi_reg_pp0_iter0_data_2217_V_read2287_phi_reg_102836.read();
        }
    } else {
        ap_phi_mux_data_2217_V_read2287_phi_phi_fu_102840_p4 = ap_phi_reg_pp0_iter0_data_2217_V_read2287_phi_reg_102836.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2217_V_read2287_rewind_phi_fu_60243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2217_V_read2287_rewind_phi_fu_60243_p6 = data_2217_V_read2287_phi_reg_102836.read();
    } else {
        ap_phi_mux_data_2217_V_read2287_rewind_phi_fu_60243_p6 = data_2217_V_read2287_rewind_reg_60239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2218_V_read2288_phi_phi_fu_102853_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2218_V_read2288_phi_phi_fu_102853_p4 = ap_phi_mux_data_2218_V_read2288_rewind_phi_fu_60257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2218_V_read2288_phi_phi_fu_102853_p4 = data_2218_V_read.read();
        } else {
            ap_phi_mux_data_2218_V_read2288_phi_phi_fu_102853_p4 = ap_phi_reg_pp0_iter0_data_2218_V_read2288_phi_reg_102849.read();
        }
    } else {
        ap_phi_mux_data_2218_V_read2288_phi_phi_fu_102853_p4 = ap_phi_reg_pp0_iter0_data_2218_V_read2288_phi_reg_102849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2218_V_read2288_rewind_phi_fu_60257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2218_V_read2288_rewind_phi_fu_60257_p6 = data_2218_V_read2288_phi_reg_102849.read();
    } else {
        ap_phi_mux_data_2218_V_read2288_rewind_phi_fu_60257_p6 = data_2218_V_read2288_rewind_reg_60253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2219_V_read2289_phi_phi_fu_102866_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2219_V_read2289_phi_phi_fu_102866_p4 = ap_phi_mux_data_2219_V_read2289_rewind_phi_fu_60271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2219_V_read2289_phi_phi_fu_102866_p4 = data_2219_V_read.read();
        } else {
            ap_phi_mux_data_2219_V_read2289_phi_phi_fu_102866_p4 = ap_phi_reg_pp0_iter0_data_2219_V_read2289_phi_reg_102862.read();
        }
    } else {
        ap_phi_mux_data_2219_V_read2289_phi_phi_fu_102866_p4 = ap_phi_reg_pp0_iter0_data_2219_V_read2289_phi_reg_102862.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2219_V_read2289_rewind_phi_fu_60271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2219_V_read2289_rewind_phi_fu_60271_p6 = data_2219_V_read2289_phi_reg_102862.read();
    } else {
        ap_phi_mux_data_2219_V_read2289_rewind_phi_fu_60271_p6 = data_2219_V_read2289_rewind_reg_60267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_221_V_read291_phi_phi_fu_76892_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_221_V_read291_phi_phi_fu_76892_p4 = ap_phi_mux_data_221_V_read291_rewind_phi_fu_32299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_221_V_read291_phi_phi_fu_76892_p4 = data_221_V_read.read();
        } else {
            ap_phi_mux_data_221_V_read291_phi_phi_fu_76892_p4 = ap_phi_reg_pp0_iter0_data_221_V_read291_phi_reg_76888.read();
        }
    } else {
        ap_phi_mux_data_221_V_read291_phi_phi_fu_76892_p4 = ap_phi_reg_pp0_iter0_data_221_V_read291_phi_reg_76888.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_221_V_read291_rewind_phi_fu_32299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_221_V_read291_rewind_phi_fu_32299_p6 = data_221_V_read291_phi_reg_76888.read();
    } else {
        ap_phi_mux_data_221_V_read291_rewind_phi_fu_32299_p6 = data_221_V_read291_rewind_reg_32295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2220_V_read2290_phi_phi_fu_102879_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2220_V_read2290_phi_phi_fu_102879_p4 = ap_phi_mux_data_2220_V_read2290_rewind_phi_fu_60285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2220_V_read2290_phi_phi_fu_102879_p4 = data_2220_V_read.read();
        } else {
            ap_phi_mux_data_2220_V_read2290_phi_phi_fu_102879_p4 = ap_phi_reg_pp0_iter0_data_2220_V_read2290_phi_reg_102875.read();
        }
    } else {
        ap_phi_mux_data_2220_V_read2290_phi_phi_fu_102879_p4 = ap_phi_reg_pp0_iter0_data_2220_V_read2290_phi_reg_102875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2220_V_read2290_rewind_phi_fu_60285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2220_V_read2290_rewind_phi_fu_60285_p6 = data_2220_V_read2290_phi_reg_102875.read();
    } else {
        ap_phi_mux_data_2220_V_read2290_rewind_phi_fu_60285_p6 = data_2220_V_read2290_rewind_reg_60281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2221_V_read2291_phi_phi_fu_102892_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2221_V_read2291_phi_phi_fu_102892_p4 = ap_phi_mux_data_2221_V_read2291_rewind_phi_fu_60299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2221_V_read2291_phi_phi_fu_102892_p4 = data_2221_V_read.read();
        } else {
            ap_phi_mux_data_2221_V_read2291_phi_phi_fu_102892_p4 = ap_phi_reg_pp0_iter0_data_2221_V_read2291_phi_reg_102888.read();
        }
    } else {
        ap_phi_mux_data_2221_V_read2291_phi_phi_fu_102892_p4 = ap_phi_reg_pp0_iter0_data_2221_V_read2291_phi_reg_102888.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2221_V_read2291_rewind_phi_fu_60299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2221_V_read2291_rewind_phi_fu_60299_p6 = data_2221_V_read2291_phi_reg_102888.read();
    } else {
        ap_phi_mux_data_2221_V_read2291_rewind_phi_fu_60299_p6 = data_2221_V_read2291_rewind_reg_60295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2222_V_read2292_phi_phi_fu_102905_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2222_V_read2292_phi_phi_fu_102905_p4 = ap_phi_mux_data_2222_V_read2292_rewind_phi_fu_60313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2222_V_read2292_phi_phi_fu_102905_p4 = data_2222_V_read.read();
        } else {
            ap_phi_mux_data_2222_V_read2292_phi_phi_fu_102905_p4 = ap_phi_reg_pp0_iter0_data_2222_V_read2292_phi_reg_102901.read();
        }
    } else {
        ap_phi_mux_data_2222_V_read2292_phi_phi_fu_102905_p4 = ap_phi_reg_pp0_iter0_data_2222_V_read2292_phi_reg_102901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2222_V_read2292_rewind_phi_fu_60313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2222_V_read2292_rewind_phi_fu_60313_p6 = data_2222_V_read2292_phi_reg_102901.read();
    } else {
        ap_phi_mux_data_2222_V_read2292_rewind_phi_fu_60313_p6 = data_2222_V_read2292_rewind_reg_60309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2223_V_read2293_phi_phi_fu_102918_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2223_V_read2293_phi_phi_fu_102918_p4 = ap_phi_mux_data_2223_V_read2293_rewind_phi_fu_60327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2223_V_read2293_phi_phi_fu_102918_p4 = data_2223_V_read.read();
        } else {
            ap_phi_mux_data_2223_V_read2293_phi_phi_fu_102918_p4 = ap_phi_reg_pp0_iter0_data_2223_V_read2293_phi_reg_102914.read();
        }
    } else {
        ap_phi_mux_data_2223_V_read2293_phi_phi_fu_102918_p4 = ap_phi_reg_pp0_iter0_data_2223_V_read2293_phi_reg_102914.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2223_V_read2293_rewind_phi_fu_60327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2223_V_read2293_rewind_phi_fu_60327_p6 = data_2223_V_read2293_phi_reg_102914.read();
    } else {
        ap_phi_mux_data_2223_V_read2293_rewind_phi_fu_60327_p6 = data_2223_V_read2293_rewind_reg_60323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2224_V_read2294_phi_phi_fu_102931_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2224_V_read2294_phi_phi_fu_102931_p4 = ap_phi_mux_data_2224_V_read2294_rewind_phi_fu_60341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2224_V_read2294_phi_phi_fu_102931_p4 = data_2224_V_read.read();
        } else {
            ap_phi_mux_data_2224_V_read2294_phi_phi_fu_102931_p4 = ap_phi_reg_pp0_iter0_data_2224_V_read2294_phi_reg_102927.read();
        }
    } else {
        ap_phi_mux_data_2224_V_read2294_phi_phi_fu_102931_p4 = ap_phi_reg_pp0_iter0_data_2224_V_read2294_phi_reg_102927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2224_V_read2294_rewind_phi_fu_60341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2224_V_read2294_rewind_phi_fu_60341_p6 = data_2224_V_read2294_phi_reg_102927.read();
    } else {
        ap_phi_mux_data_2224_V_read2294_rewind_phi_fu_60341_p6 = data_2224_V_read2294_rewind_reg_60337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2225_V_read2295_phi_phi_fu_102944_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2225_V_read2295_phi_phi_fu_102944_p4 = ap_phi_mux_data_2225_V_read2295_rewind_phi_fu_60355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2225_V_read2295_phi_phi_fu_102944_p4 = data_2225_V_read.read();
        } else {
            ap_phi_mux_data_2225_V_read2295_phi_phi_fu_102944_p4 = ap_phi_reg_pp0_iter0_data_2225_V_read2295_phi_reg_102940.read();
        }
    } else {
        ap_phi_mux_data_2225_V_read2295_phi_phi_fu_102944_p4 = ap_phi_reg_pp0_iter0_data_2225_V_read2295_phi_reg_102940.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2225_V_read2295_rewind_phi_fu_60355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2225_V_read2295_rewind_phi_fu_60355_p6 = data_2225_V_read2295_phi_reg_102940.read();
    } else {
        ap_phi_mux_data_2225_V_read2295_rewind_phi_fu_60355_p6 = data_2225_V_read2295_rewind_reg_60351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2226_V_read2296_phi_phi_fu_102957_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2226_V_read2296_phi_phi_fu_102957_p4 = ap_phi_mux_data_2226_V_read2296_rewind_phi_fu_60369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2226_V_read2296_phi_phi_fu_102957_p4 = data_2226_V_read.read();
        } else {
            ap_phi_mux_data_2226_V_read2296_phi_phi_fu_102957_p4 = ap_phi_reg_pp0_iter0_data_2226_V_read2296_phi_reg_102953.read();
        }
    } else {
        ap_phi_mux_data_2226_V_read2296_phi_phi_fu_102957_p4 = ap_phi_reg_pp0_iter0_data_2226_V_read2296_phi_reg_102953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2226_V_read2296_rewind_phi_fu_60369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2226_V_read2296_rewind_phi_fu_60369_p6 = data_2226_V_read2296_phi_reg_102953.read();
    } else {
        ap_phi_mux_data_2226_V_read2296_rewind_phi_fu_60369_p6 = data_2226_V_read2296_rewind_reg_60365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2227_V_read2297_phi_phi_fu_102970_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2227_V_read2297_phi_phi_fu_102970_p4 = ap_phi_mux_data_2227_V_read2297_rewind_phi_fu_60383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2227_V_read2297_phi_phi_fu_102970_p4 = data_2227_V_read.read();
        } else {
            ap_phi_mux_data_2227_V_read2297_phi_phi_fu_102970_p4 = ap_phi_reg_pp0_iter0_data_2227_V_read2297_phi_reg_102966.read();
        }
    } else {
        ap_phi_mux_data_2227_V_read2297_phi_phi_fu_102970_p4 = ap_phi_reg_pp0_iter0_data_2227_V_read2297_phi_reg_102966.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2227_V_read2297_rewind_phi_fu_60383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2227_V_read2297_rewind_phi_fu_60383_p6 = data_2227_V_read2297_phi_reg_102966.read();
    } else {
        ap_phi_mux_data_2227_V_read2297_rewind_phi_fu_60383_p6 = data_2227_V_read2297_rewind_reg_60379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2228_V_read2298_phi_phi_fu_102983_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2228_V_read2298_phi_phi_fu_102983_p4 = ap_phi_mux_data_2228_V_read2298_rewind_phi_fu_60397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2228_V_read2298_phi_phi_fu_102983_p4 = data_2228_V_read.read();
        } else {
            ap_phi_mux_data_2228_V_read2298_phi_phi_fu_102983_p4 = ap_phi_reg_pp0_iter0_data_2228_V_read2298_phi_reg_102979.read();
        }
    } else {
        ap_phi_mux_data_2228_V_read2298_phi_phi_fu_102983_p4 = ap_phi_reg_pp0_iter0_data_2228_V_read2298_phi_reg_102979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2228_V_read2298_rewind_phi_fu_60397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2228_V_read2298_rewind_phi_fu_60397_p6 = data_2228_V_read2298_phi_reg_102979.read();
    } else {
        ap_phi_mux_data_2228_V_read2298_rewind_phi_fu_60397_p6 = data_2228_V_read2298_rewind_reg_60393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2229_V_read2299_phi_phi_fu_102996_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2229_V_read2299_phi_phi_fu_102996_p4 = ap_phi_mux_data_2229_V_read2299_rewind_phi_fu_60411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2229_V_read2299_phi_phi_fu_102996_p4 = data_2229_V_read.read();
        } else {
            ap_phi_mux_data_2229_V_read2299_phi_phi_fu_102996_p4 = ap_phi_reg_pp0_iter0_data_2229_V_read2299_phi_reg_102992.read();
        }
    } else {
        ap_phi_mux_data_2229_V_read2299_phi_phi_fu_102996_p4 = ap_phi_reg_pp0_iter0_data_2229_V_read2299_phi_reg_102992.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2229_V_read2299_rewind_phi_fu_60411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2229_V_read2299_rewind_phi_fu_60411_p6 = data_2229_V_read2299_phi_reg_102992.read();
    } else {
        ap_phi_mux_data_2229_V_read2299_rewind_phi_fu_60411_p6 = data_2229_V_read2299_rewind_reg_60407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_222_V_read292_phi_phi_fu_76905_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_222_V_read292_phi_phi_fu_76905_p4 = ap_phi_mux_data_222_V_read292_rewind_phi_fu_32313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_222_V_read292_phi_phi_fu_76905_p4 = data_222_V_read.read();
        } else {
            ap_phi_mux_data_222_V_read292_phi_phi_fu_76905_p4 = ap_phi_reg_pp0_iter0_data_222_V_read292_phi_reg_76901.read();
        }
    } else {
        ap_phi_mux_data_222_V_read292_phi_phi_fu_76905_p4 = ap_phi_reg_pp0_iter0_data_222_V_read292_phi_reg_76901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_222_V_read292_rewind_phi_fu_32313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_222_V_read292_rewind_phi_fu_32313_p6 = data_222_V_read292_phi_reg_76901.read();
    } else {
        ap_phi_mux_data_222_V_read292_rewind_phi_fu_32313_p6 = data_222_V_read292_rewind_reg_32309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2230_V_read2300_phi_phi_fu_103009_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2230_V_read2300_phi_phi_fu_103009_p4 = ap_phi_mux_data_2230_V_read2300_rewind_phi_fu_60425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2230_V_read2300_phi_phi_fu_103009_p4 = data_2230_V_read.read();
        } else {
            ap_phi_mux_data_2230_V_read2300_phi_phi_fu_103009_p4 = ap_phi_reg_pp0_iter0_data_2230_V_read2300_phi_reg_103005.read();
        }
    } else {
        ap_phi_mux_data_2230_V_read2300_phi_phi_fu_103009_p4 = ap_phi_reg_pp0_iter0_data_2230_V_read2300_phi_reg_103005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2230_V_read2300_rewind_phi_fu_60425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2230_V_read2300_rewind_phi_fu_60425_p6 = data_2230_V_read2300_phi_reg_103005.read();
    } else {
        ap_phi_mux_data_2230_V_read2300_rewind_phi_fu_60425_p6 = data_2230_V_read2300_rewind_reg_60421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2231_V_read2301_phi_phi_fu_103022_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2231_V_read2301_phi_phi_fu_103022_p4 = ap_phi_mux_data_2231_V_read2301_rewind_phi_fu_60439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2231_V_read2301_phi_phi_fu_103022_p4 = data_2231_V_read.read();
        } else {
            ap_phi_mux_data_2231_V_read2301_phi_phi_fu_103022_p4 = ap_phi_reg_pp0_iter0_data_2231_V_read2301_phi_reg_103018.read();
        }
    } else {
        ap_phi_mux_data_2231_V_read2301_phi_phi_fu_103022_p4 = ap_phi_reg_pp0_iter0_data_2231_V_read2301_phi_reg_103018.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2231_V_read2301_rewind_phi_fu_60439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2231_V_read2301_rewind_phi_fu_60439_p6 = data_2231_V_read2301_phi_reg_103018.read();
    } else {
        ap_phi_mux_data_2231_V_read2301_rewind_phi_fu_60439_p6 = data_2231_V_read2301_rewind_reg_60435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2232_V_read2302_phi_phi_fu_103035_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2232_V_read2302_phi_phi_fu_103035_p4 = ap_phi_mux_data_2232_V_read2302_rewind_phi_fu_60453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2232_V_read2302_phi_phi_fu_103035_p4 = data_2232_V_read.read();
        } else {
            ap_phi_mux_data_2232_V_read2302_phi_phi_fu_103035_p4 = ap_phi_reg_pp0_iter0_data_2232_V_read2302_phi_reg_103031.read();
        }
    } else {
        ap_phi_mux_data_2232_V_read2302_phi_phi_fu_103035_p4 = ap_phi_reg_pp0_iter0_data_2232_V_read2302_phi_reg_103031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2232_V_read2302_rewind_phi_fu_60453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2232_V_read2302_rewind_phi_fu_60453_p6 = data_2232_V_read2302_phi_reg_103031.read();
    } else {
        ap_phi_mux_data_2232_V_read2302_rewind_phi_fu_60453_p6 = data_2232_V_read2302_rewind_reg_60449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2233_V_read2303_phi_phi_fu_103048_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2233_V_read2303_phi_phi_fu_103048_p4 = ap_phi_mux_data_2233_V_read2303_rewind_phi_fu_60467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2233_V_read2303_phi_phi_fu_103048_p4 = data_2233_V_read.read();
        } else {
            ap_phi_mux_data_2233_V_read2303_phi_phi_fu_103048_p4 = ap_phi_reg_pp0_iter0_data_2233_V_read2303_phi_reg_103044.read();
        }
    } else {
        ap_phi_mux_data_2233_V_read2303_phi_phi_fu_103048_p4 = ap_phi_reg_pp0_iter0_data_2233_V_read2303_phi_reg_103044.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2233_V_read2303_rewind_phi_fu_60467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2233_V_read2303_rewind_phi_fu_60467_p6 = data_2233_V_read2303_phi_reg_103044.read();
    } else {
        ap_phi_mux_data_2233_V_read2303_rewind_phi_fu_60467_p6 = data_2233_V_read2303_rewind_reg_60463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2234_V_read2304_phi_phi_fu_103061_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2234_V_read2304_phi_phi_fu_103061_p4 = ap_phi_mux_data_2234_V_read2304_rewind_phi_fu_60481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2234_V_read2304_phi_phi_fu_103061_p4 = data_2234_V_read.read();
        } else {
            ap_phi_mux_data_2234_V_read2304_phi_phi_fu_103061_p4 = ap_phi_reg_pp0_iter0_data_2234_V_read2304_phi_reg_103057.read();
        }
    } else {
        ap_phi_mux_data_2234_V_read2304_phi_phi_fu_103061_p4 = ap_phi_reg_pp0_iter0_data_2234_V_read2304_phi_reg_103057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2234_V_read2304_rewind_phi_fu_60481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2234_V_read2304_rewind_phi_fu_60481_p6 = data_2234_V_read2304_phi_reg_103057.read();
    } else {
        ap_phi_mux_data_2234_V_read2304_rewind_phi_fu_60481_p6 = data_2234_V_read2304_rewind_reg_60477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2235_V_read2305_phi_phi_fu_103074_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2235_V_read2305_phi_phi_fu_103074_p4 = ap_phi_mux_data_2235_V_read2305_rewind_phi_fu_60495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2235_V_read2305_phi_phi_fu_103074_p4 = data_2235_V_read.read();
        } else {
            ap_phi_mux_data_2235_V_read2305_phi_phi_fu_103074_p4 = ap_phi_reg_pp0_iter0_data_2235_V_read2305_phi_reg_103070.read();
        }
    } else {
        ap_phi_mux_data_2235_V_read2305_phi_phi_fu_103074_p4 = ap_phi_reg_pp0_iter0_data_2235_V_read2305_phi_reg_103070.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2235_V_read2305_rewind_phi_fu_60495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2235_V_read2305_rewind_phi_fu_60495_p6 = data_2235_V_read2305_phi_reg_103070.read();
    } else {
        ap_phi_mux_data_2235_V_read2305_rewind_phi_fu_60495_p6 = data_2235_V_read2305_rewind_reg_60491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2236_V_read2306_phi_phi_fu_103087_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2236_V_read2306_phi_phi_fu_103087_p4 = ap_phi_mux_data_2236_V_read2306_rewind_phi_fu_60509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2236_V_read2306_phi_phi_fu_103087_p4 = data_2236_V_read.read();
        } else {
            ap_phi_mux_data_2236_V_read2306_phi_phi_fu_103087_p4 = ap_phi_reg_pp0_iter0_data_2236_V_read2306_phi_reg_103083.read();
        }
    } else {
        ap_phi_mux_data_2236_V_read2306_phi_phi_fu_103087_p4 = ap_phi_reg_pp0_iter0_data_2236_V_read2306_phi_reg_103083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2236_V_read2306_rewind_phi_fu_60509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2236_V_read2306_rewind_phi_fu_60509_p6 = data_2236_V_read2306_phi_reg_103083.read();
    } else {
        ap_phi_mux_data_2236_V_read2306_rewind_phi_fu_60509_p6 = data_2236_V_read2306_rewind_reg_60505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2237_V_read2307_phi_phi_fu_103100_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2237_V_read2307_phi_phi_fu_103100_p4 = ap_phi_mux_data_2237_V_read2307_rewind_phi_fu_60523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2237_V_read2307_phi_phi_fu_103100_p4 = data_2237_V_read.read();
        } else {
            ap_phi_mux_data_2237_V_read2307_phi_phi_fu_103100_p4 = ap_phi_reg_pp0_iter0_data_2237_V_read2307_phi_reg_103096.read();
        }
    } else {
        ap_phi_mux_data_2237_V_read2307_phi_phi_fu_103100_p4 = ap_phi_reg_pp0_iter0_data_2237_V_read2307_phi_reg_103096.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2237_V_read2307_rewind_phi_fu_60523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2237_V_read2307_rewind_phi_fu_60523_p6 = data_2237_V_read2307_phi_reg_103096.read();
    } else {
        ap_phi_mux_data_2237_V_read2307_rewind_phi_fu_60523_p6 = data_2237_V_read2307_rewind_reg_60519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2238_V_read2308_phi_phi_fu_103113_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2238_V_read2308_phi_phi_fu_103113_p4 = ap_phi_mux_data_2238_V_read2308_rewind_phi_fu_60537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2238_V_read2308_phi_phi_fu_103113_p4 = data_2238_V_read.read();
        } else {
            ap_phi_mux_data_2238_V_read2308_phi_phi_fu_103113_p4 = ap_phi_reg_pp0_iter0_data_2238_V_read2308_phi_reg_103109.read();
        }
    } else {
        ap_phi_mux_data_2238_V_read2308_phi_phi_fu_103113_p4 = ap_phi_reg_pp0_iter0_data_2238_V_read2308_phi_reg_103109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2238_V_read2308_rewind_phi_fu_60537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2238_V_read2308_rewind_phi_fu_60537_p6 = data_2238_V_read2308_phi_reg_103109.read();
    } else {
        ap_phi_mux_data_2238_V_read2308_rewind_phi_fu_60537_p6 = data_2238_V_read2308_rewind_reg_60533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2239_V_read2309_phi_phi_fu_103126_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2239_V_read2309_phi_phi_fu_103126_p4 = ap_phi_mux_data_2239_V_read2309_rewind_phi_fu_60551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2239_V_read2309_phi_phi_fu_103126_p4 = data_2239_V_read.read();
        } else {
            ap_phi_mux_data_2239_V_read2309_phi_phi_fu_103126_p4 = ap_phi_reg_pp0_iter0_data_2239_V_read2309_phi_reg_103122.read();
        }
    } else {
        ap_phi_mux_data_2239_V_read2309_phi_phi_fu_103126_p4 = ap_phi_reg_pp0_iter0_data_2239_V_read2309_phi_reg_103122.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2239_V_read2309_rewind_phi_fu_60551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2239_V_read2309_rewind_phi_fu_60551_p6 = data_2239_V_read2309_phi_reg_103122.read();
    } else {
        ap_phi_mux_data_2239_V_read2309_rewind_phi_fu_60551_p6 = data_2239_V_read2309_rewind_reg_60547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_223_V_read293_phi_phi_fu_76918_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_223_V_read293_phi_phi_fu_76918_p4 = ap_phi_mux_data_223_V_read293_rewind_phi_fu_32327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_223_V_read293_phi_phi_fu_76918_p4 = data_223_V_read.read();
        } else {
            ap_phi_mux_data_223_V_read293_phi_phi_fu_76918_p4 = ap_phi_reg_pp0_iter0_data_223_V_read293_phi_reg_76914.read();
        }
    } else {
        ap_phi_mux_data_223_V_read293_phi_phi_fu_76918_p4 = ap_phi_reg_pp0_iter0_data_223_V_read293_phi_reg_76914.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_223_V_read293_rewind_phi_fu_32327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_223_V_read293_rewind_phi_fu_32327_p6 = data_223_V_read293_phi_reg_76914.read();
    } else {
        ap_phi_mux_data_223_V_read293_rewind_phi_fu_32327_p6 = data_223_V_read293_rewind_reg_32323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2240_V_read2310_phi_phi_fu_103139_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2240_V_read2310_phi_phi_fu_103139_p4 = ap_phi_mux_data_2240_V_read2310_rewind_phi_fu_60565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2240_V_read2310_phi_phi_fu_103139_p4 = data_2240_V_read.read();
        } else {
            ap_phi_mux_data_2240_V_read2310_phi_phi_fu_103139_p4 = ap_phi_reg_pp0_iter0_data_2240_V_read2310_phi_reg_103135.read();
        }
    } else {
        ap_phi_mux_data_2240_V_read2310_phi_phi_fu_103139_p4 = ap_phi_reg_pp0_iter0_data_2240_V_read2310_phi_reg_103135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2240_V_read2310_rewind_phi_fu_60565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2240_V_read2310_rewind_phi_fu_60565_p6 = data_2240_V_read2310_phi_reg_103135.read();
    } else {
        ap_phi_mux_data_2240_V_read2310_rewind_phi_fu_60565_p6 = data_2240_V_read2310_rewind_reg_60561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2241_V_read2311_phi_phi_fu_103152_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2241_V_read2311_phi_phi_fu_103152_p4 = ap_phi_mux_data_2241_V_read2311_rewind_phi_fu_60579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2241_V_read2311_phi_phi_fu_103152_p4 = data_2241_V_read.read();
        } else {
            ap_phi_mux_data_2241_V_read2311_phi_phi_fu_103152_p4 = ap_phi_reg_pp0_iter0_data_2241_V_read2311_phi_reg_103148.read();
        }
    } else {
        ap_phi_mux_data_2241_V_read2311_phi_phi_fu_103152_p4 = ap_phi_reg_pp0_iter0_data_2241_V_read2311_phi_reg_103148.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2241_V_read2311_rewind_phi_fu_60579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2241_V_read2311_rewind_phi_fu_60579_p6 = data_2241_V_read2311_phi_reg_103148.read();
    } else {
        ap_phi_mux_data_2241_V_read2311_rewind_phi_fu_60579_p6 = data_2241_V_read2311_rewind_reg_60575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2242_V_read2312_phi_phi_fu_103165_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2242_V_read2312_phi_phi_fu_103165_p4 = ap_phi_mux_data_2242_V_read2312_rewind_phi_fu_60593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2242_V_read2312_phi_phi_fu_103165_p4 = data_2242_V_read.read();
        } else {
            ap_phi_mux_data_2242_V_read2312_phi_phi_fu_103165_p4 = ap_phi_reg_pp0_iter0_data_2242_V_read2312_phi_reg_103161.read();
        }
    } else {
        ap_phi_mux_data_2242_V_read2312_phi_phi_fu_103165_p4 = ap_phi_reg_pp0_iter0_data_2242_V_read2312_phi_reg_103161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2242_V_read2312_rewind_phi_fu_60593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2242_V_read2312_rewind_phi_fu_60593_p6 = data_2242_V_read2312_phi_reg_103161.read();
    } else {
        ap_phi_mux_data_2242_V_read2312_rewind_phi_fu_60593_p6 = data_2242_V_read2312_rewind_reg_60589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2243_V_read2313_phi_phi_fu_103178_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2243_V_read2313_phi_phi_fu_103178_p4 = ap_phi_mux_data_2243_V_read2313_rewind_phi_fu_60607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2243_V_read2313_phi_phi_fu_103178_p4 = data_2243_V_read.read();
        } else {
            ap_phi_mux_data_2243_V_read2313_phi_phi_fu_103178_p4 = ap_phi_reg_pp0_iter0_data_2243_V_read2313_phi_reg_103174.read();
        }
    } else {
        ap_phi_mux_data_2243_V_read2313_phi_phi_fu_103178_p4 = ap_phi_reg_pp0_iter0_data_2243_V_read2313_phi_reg_103174.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2243_V_read2313_rewind_phi_fu_60607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2243_V_read2313_rewind_phi_fu_60607_p6 = data_2243_V_read2313_phi_reg_103174.read();
    } else {
        ap_phi_mux_data_2243_V_read2313_rewind_phi_fu_60607_p6 = data_2243_V_read2313_rewind_reg_60603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2244_V_read2314_phi_phi_fu_103191_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2244_V_read2314_phi_phi_fu_103191_p4 = ap_phi_mux_data_2244_V_read2314_rewind_phi_fu_60621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2244_V_read2314_phi_phi_fu_103191_p4 = data_2244_V_read.read();
        } else {
            ap_phi_mux_data_2244_V_read2314_phi_phi_fu_103191_p4 = ap_phi_reg_pp0_iter0_data_2244_V_read2314_phi_reg_103187.read();
        }
    } else {
        ap_phi_mux_data_2244_V_read2314_phi_phi_fu_103191_p4 = ap_phi_reg_pp0_iter0_data_2244_V_read2314_phi_reg_103187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2244_V_read2314_rewind_phi_fu_60621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2244_V_read2314_rewind_phi_fu_60621_p6 = data_2244_V_read2314_phi_reg_103187.read();
    } else {
        ap_phi_mux_data_2244_V_read2314_rewind_phi_fu_60621_p6 = data_2244_V_read2314_rewind_reg_60617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2245_V_read2315_phi_phi_fu_103204_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2245_V_read2315_phi_phi_fu_103204_p4 = ap_phi_mux_data_2245_V_read2315_rewind_phi_fu_60635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2245_V_read2315_phi_phi_fu_103204_p4 = data_2245_V_read.read();
        } else {
            ap_phi_mux_data_2245_V_read2315_phi_phi_fu_103204_p4 = ap_phi_reg_pp0_iter0_data_2245_V_read2315_phi_reg_103200.read();
        }
    } else {
        ap_phi_mux_data_2245_V_read2315_phi_phi_fu_103204_p4 = ap_phi_reg_pp0_iter0_data_2245_V_read2315_phi_reg_103200.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2245_V_read2315_rewind_phi_fu_60635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2245_V_read2315_rewind_phi_fu_60635_p6 = data_2245_V_read2315_phi_reg_103200.read();
    } else {
        ap_phi_mux_data_2245_V_read2315_rewind_phi_fu_60635_p6 = data_2245_V_read2315_rewind_reg_60631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2246_V_read2316_phi_phi_fu_103217_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2246_V_read2316_phi_phi_fu_103217_p4 = ap_phi_mux_data_2246_V_read2316_rewind_phi_fu_60649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2246_V_read2316_phi_phi_fu_103217_p4 = data_2246_V_read.read();
        } else {
            ap_phi_mux_data_2246_V_read2316_phi_phi_fu_103217_p4 = ap_phi_reg_pp0_iter0_data_2246_V_read2316_phi_reg_103213.read();
        }
    } else {
        ap_phi_mux_data_2246_V_read2316_phi_phi_fu_103217_p4 = ap_phi_reg_pp0_iter0_data_2246_V_read2316_phi_reg_103213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2246_V_read2316_rewind_phi_fu_60649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2246_V_read2316_rewind_phi_fu_60649_p6 = data_2246_V_read2316_phi_reg_103213.read();
    } else {
        ap_phi_mux_data_2246_V_read2316_rewind_phi_fu_60649_p6 = data_2246_V_read2316_rewind_reg_60645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2247_V_read2317_phi_phi_fu_103230_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2247_V_read2317_phi_phi_fu_103230_p4 = ap_phi_mux_data_2247_V_read2317_rewind_phi_fu_60663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2247_V_read2317_phi_phi_fu_103230_p4 = data_2247_V_read.read();
        } else {
            ap_phi_mux_data_2247_V_read2317_phi_phi_fu_103230_p4 = ap_phi_reg_pp0_iter0_data_2247_V_read2317_phi_reg_103226.read();
        }
    } else {
        ap_phi_mux_data_2247_V_read2317_phi_phi_fu_103230_p4 = ap_phi_reg_pp0_iter0_data_2247_V_read2317_phi_reg_103226.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2247_V_read2317_rewind_phi_fu_60663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2247_V_read2317_rewind_phi_fu_60663_p6 = data_2247_V_read2317_phi_reg_103226.read();
    } else {
        ap_phi_mux_data_2247_V_read2317_rewind_phi_fu_60663_p6 = data_2247_V_read2317_rewind_reg_60659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2248_V_read2318_phi_phi_fu_103243_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2248_V_read2318_phi_phi_fu_103243_p4 = ap_phi_mux_data_2248_V_read2318_rewind_phi_fu_60677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2248_V_read2318_phi_phi_fu_103243_p4 = data_2248_V_read.read();
        } else {
            ap_phi_mux_data_2248_V_read2318_phi_phi_fu_103243_p4 = ap_phi_reg_pp0_iter0_data_2248_V_read2318_phi_reg_103239.read();
        }
    } else {
        ap_phi_mux_data_2248_V_read2318_phi_phi_fu_103243_p4 = ap_phi_reg_pp0_iter0_data_2248_V_read2318_phi_reg_103239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2248_V_read2318_rewind_phi_fu_60677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2248_V_read2318_rewind_phi_fu_60677_p6 = data_2248_V_read2318_phi_reg_103239.read();
    } else {
        ap_phi_mux_data_2248_V_read2318_rewind_phi_fu_60677_p6 = data_2248_V_read2318_rewind_reg_60673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2249_V_read2319_phi_phi_fu_103256_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2249_V_read2319_phi_phi_fu_103256_p4 = ap_phi_mux_data_2249_V_read2319_rewind_phi_fu_60691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2249_V_read2319_phi_phi_fu_103256_p4 = data_2249_V_read.read();
        } else {
            ap_phi_mux_data_2249_V_read2319_phi_phi_fu_103256_p4 = ap_phi_reg_pp0_iter0_data_2249_V_read2319_phi_reg_103252.read();
        }
    } else {
        ap_phi_mux_data_2249_V_read2319_phi_phi_fu_103256_p4 = ap_phi_reg_pp0_iter0_data_2249_V_read2319_phi_reg_103252.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2249_V_read2319_rewind_phi_fu_60691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2249_V_read2319_rewind_phi_fu_60691_p6 = data_2249_V_read2319_phi_reg_103252.read();
    } else {
        ap_phi_mux_data_2249_V_read2319_rewind_phi_fu_60691_p6 = data_2249_V_read2319_rewind_reg_60687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_224_V_read294_phi_phi_fu_76931_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_224_V_read294_phi_phi_fu_76931_p4 = ap_phi_mux_data_224_V_read294_rewind_phi_fu_32341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_224_V_read294_phi_phi_fu_76931_p4 = data_224_V_read.read();
        } else {
            ap_phi_mux_data_224_V_read294_phi_phi_fu_76931_p4 = ap_phi_reg_pp0_iter0_data_224_V_read294_phi_reg_76927.read();
        }
    } else {
        ap_phi_mux_data_224_V_read294_phi_phi_fu_76931_p4 = ap_phi_reg_pp0_iter0_data_224_V_read294_phi_reg_76927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_224_V_read294_rewind_phi_fu_32341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_224_V_read294_rewind_phi_fu_32341_p6 = data_224_V_read294_phi_reg_76927.read();
    } else {
        ap_phi_mux_data_224_V_read294_rewind_phi_fu_32341_p6 = data_224_V_read294_rewind_reg_32337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2250_V_read2320_phi_phi_fu_103269_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2250_V_read2320_phi_phi_fu_103269_p4 = ap_phi_mux_data_2250_V_read2320_rewind_phi_fu_60705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2250_V_read2320_phi_phi_fu_103269_p4 = data_2250_V_read.read();
        } else {
            ap_phi_mux_data_2250_V_read2320_phi_phi_fu_103269_p4 = ap_phi_reg_pp0_iter0_data_2250_V_read2320_phi_reg_103265.read();
        }
    } else {
        ap_phi_mux_data_2250_V_read2320_phi_phi_fu_103269_p4 = ap_phi_reg_pp0_iter0_data_2250_V_read2320_phi_reg_103265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2250_V_read2320_rewind_phi_fu_60705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2250_V_read2320_rewind_phi_fu_60705_p6 = data_2250_V_read2320_phi_reg_103265.read();
    } else {
        ap_phi_mux_data_2250_V_read2320_rewind_phi_fu_60705_p6 = data_2250_V_read2320_rewind_reg_60701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2251_V_read2321_phi_phi_fu_103282_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2251_V_read2321_phi_phi_fu_103282_p4 = ap_phi_mux_data_2251_V_read2321_rewind_phi_fu_60719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2251_V_read2321_phi_phi_fu_103282_p4 = data_2251_V_read.read();
        } else {
            ap_phi_mux_data_2251_V_read2321_phi_phi_fu_103282_p4 = ap_phi_reg_pp0_iter0_data_2251_V_read2321_phi_reg_103278.read();
        }
    } else {
        ap_phi_mux_data_2251_V_read2321_phi_phi_fu_103282_p4 = ap_phi_reg_pp0_iter0_data_2251_V_read2321_phi_reg_103278.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2251_V_read2321_rewind_phi_fu_60719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2251_V_read2321_rewind_phi_fu_60719_p6 = data_2251_V_read2321_phi_reg_103278.read();
    } else {
        ap_phi_mux_data_2251_V_read2321_rewind_phi_fu_60719_p6 = data_2251_V_read2321_rewind_reg_60715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2252_V_read2322_phi_phi_fu_103295_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2252_V_read2322_phi_phi_fu_103295_p4 = ap_phi_mux_data_2252_V_read2322_rewind_phi_fu_60733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2252_V_read2322_phi_phi_fu_103295_p4 = data_2252_V_read.read();
        } else {
            ap_phi_mux_data_2252_V_read2322_phi_phi_fu_103295_p4 = ap_phi_reg_pp0_iter0_data_2252_V_read2322_phi_reg_103291.read();
        }
    } else {
        ap_phi_mux_data_2252_V_read2322_phi_phi_fu_103295_p4 = ap_phi_reg_pp0_iter0_data_2252_V_read2322_phi_reg_103291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2252_V_read2322_rewind_phi_fu_60733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2252_V_read2322_rewind_phi_fu_60733_p6 = data_2252_V_read2322_phi_reg_103291.read();
    } else {
        ap_phi_mux_data_2252_V_read2322_rewind_phi_fu_60733_p6 = data_2252_V_read2322_rewind_reg_60729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2253_V_read2323_phi_phi_fu_103308_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2253_V_read2323_phi_phi_fu_103308_p4 = ap_phi_mux_data_2253_V_read2323_rewind_phi_fu_60747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2253_V_read2323_phi_phi_fu_103308_p4 = data_2253_V_read.read();
        } else {
            ap_phi_mux_data_2253_V_read2323_phi_phi_fu_103308_p4 = ap_phi_reg_pp0_iter0_data_2253_V_read2323_phi_reg_103304.read();
        }
    } else {
        ap_phi_mux_data_2253_V_read2323_phi_phi_fu_103308_p4 = ap_phi_reg_pp0_iter0_data_2253_V_read2323_phi_reg_103304.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2253_V_read2323_rewind_phi_fu_60747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2253_V_read2323_rewind_phi_fu_60747_p6 = data_2253_V_read2323_phi_reg_103304.read();
    } else {
        ap_phi_mux_data_2253_V_read2323_rewind_phi_fu_60747_p6 = data_2253_V_read2323_rewind_reg_60743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2254_V_read2324_phi_phi_fu_103321_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2254_V_read2324_phi_phi_fu_103321_p4 = ap_phi_mux_data_2254_V_read2324_rewind_phi_fu_60761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2254_V_read2324_phi_phi_fu_103321_p4 = data_2254_V_read.read();
        } else {
            ap_phi_mux_data_2254_V_read2324_phi_phi_fu_103321_p4 = ap_phi_reg_pp0_iter0_data_2254_V_read2324_phi_reg_103317.read();
        }
    } else {
        ap_phi_mux_data_2254_V_read2324_phi_phi_fu_103321_p4 = ap_phi_reg_pp0_iter0_data_2254_V_read2324_phi_reg_103317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2254_V_read2324_rewind_phi_fu_60761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2254_V_read2324_rewind_phi_fu_60761_p6 = data_2254_V_read2324_phi_reg_103317.read();
    } else {
        ap_phi_mux_data_2254_V_read2324_rewind_phi_fu_60761_p6 = data_2254_V_read2324_rewind_reg_60757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2255_V_read2325_phi_phi_fu_103334_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2255_V_read2325_phi_phi_fu_103334_p4 = ap_phi_mux_data_2255_V_read2325_rewind_phi_fu_60775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2255_V_read2325_phi_phi_fu_103334_p4 = data_2255_V_read.read();
        } else {
            ap_phi_mux_data_2255_V_read2325_phi_phi_fu_103334_p4 = ap_phi_reg_pp0_iter0_data_2255_V_read2325_phi_reg_103330.read();
        }
    } else {
        ap_phi_mux_data_2255_V_read2325_phi_phi_fu_103334_p4 = ap_phi_reg_pp0_iter0_data_2255_V_read2325_phi_reg_103330.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2255_V_read2325_rewind_phi_fu_60775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2255_V_read2325_rewind_phi_fu_60775_p6 = data_2255_V_read2325_phi_reg_103330.read();
    } else {
        ap_phi_mux_data_2255_V_read2325_rewind_phi_fu_60775_p6 = data_2255_V_read2325_rewind_reg_60771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2256_V_read2326_phi_phi_fu_103347_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2256_V_read2326_phi_phi_fu_103347_p4 = ap_phi_mux_data_2256_V_read2326_rewind_phi_fu_60789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2256_V_read2326_phi_phi_fu_103347_p4 = data_2256_V_read.read();
        } else {
            ap_phi_mux_data_2256_V_read2326_phi_phi_fu_103347_p4 = ap_phi_reg_pp0_iter0_data_2256_V_read2326_phi_reg_103343.read();
        }
    } else {
        ap_phi_mux_data_2256_V_read2326_phi_phi_fu_103347_p4 = ap_phi_reg_pp0_iter0_data_2256_V_read2326_phi_reg_103343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2256_V_read2326_rewind_phi_fu_60789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2256_V_read2326_rewind_phi_fu_60789_p6 = data_2256_V_read2326_phi_reg_103343.read();
    } else {
        ap_phi_mux_data_2256_V_read2326_rewind_phi_fu_60789_p6 = data_2256_V_read2326_rewind_reg_60785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2257_V_read2327_phi_phi_fu_103360_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2257_V_read2327_phi_phi_fu_103360_p4 = ap_phi_mux_data_2257_V_read2327_rewind_phi_fu_60803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2257_V_read2327_phi_phi_fu_103360_p4 = data_2257_V_read.read();
        } else {
            ap_phi_mux_data_2257_V_read2327_phi_phi_fu_103360_p4 = ap_phi_reg_pp0_iter0_data_2257_V_read2327_phi_reg_103356.read();
        }
    } else {
        ap_phi_mux_data_2257_V_read2327_phi_phi_fu_103360_p4 = ap_phi_reg_pp0_iter0_data_2257_V_read2327_phi_reg_103356.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2257_V_read2327_rewind_phi_fu_60803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2257_V_read2327_rewind_phi_fu_60803_p6 = data_2257_V_read2327_phi_reg_103356.read();
    } else {
        ap_phi_mux_data_2257_V_read2327_rewind_phi_fu_60803_p6 = data_2257_V_read2327_rewind_reg_60799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2258_V_read2328_phi_phi_fu_103373_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2258_V_read2328_phi_phi_fu_103373_p4 = ap_phi_mux_data_2258_V_read2328_rewind_phi_fu_60817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2258_V_read2328_phi_phi_fu_103373_p4 = data_2258_V_read.read();
        } else {
            ap_phi_mux_data_2258_V_read2328_phi_phi_fu_103373_p4 = ap_phi_reg_pp0_iter0_data_2258_V_read2328_phi_reg_103369.read();
        }
    } else {
        ap_phi_mux_data_2258_V_read2328_phi_phi_fu_103373_p4 = ap_phi_reg_pp0_iter0_data_2258_V_read2328_phi_reg_103369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2258_V_read2328_rewind_phi_fu_60817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2258_V_read2328_rewind_phi_fu_60817_p6 = data_2258_V_read2328_phi_reg_103369.read();
    } else {
        ap_phi_mux_data_2258_V_read2328_rewind_phi_fu_60817_p6 = data_2258_V_read2328_rewind_reg_60813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2259_V_read2329_phi_phi_fu_103386_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2259_V_read2329_phi_phi_fu_103386_p4 = ap_phi_mux_data_2259_V_read2329_rewind_phi_fu_60831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2259_V_read2329_phi_phi_fu_103386_p4 = data_2259_V_read.read();
        } else {
            ap_phi_mux_data_2259_V_read2329_phi_phi_fu_103386_p4 = ap_phi_reg_pp0_iter0_data_2259_V_read2329_phi_reg_103382.read();
        }
    } else {
        ap_phi_mux_data_2259_V_read2329_phi_phi_fu_103386_p4 = ap_phi_reg_pp0_iter0_data_2259_V_read2329_phi_reg_103382.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2259_V_read2329_rewind_phi_fu_60831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2259_V_read2329_rewind_phi_fu_60831_p6 = data_2259_V_read2329_phi_reg_103382.read();
    } else {
        ap_phi_mux_data_2259_V_read2329_rewind_phi_fu_60831_p6 = data_2259_V_read2329_rewind_reg_60827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_225_V_read295_phi_phi_fu_76944_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_225_V_read295_phi_phi_fu_76944_p4 = ap_phi_mux_data_225_V_read295_rewind_phi_fu_32355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_225_V_read295_phi_phi_fu_76944_p4 = data_225_V_read.read();
        } else {
            ap_phi_mux_data_225_V_read295_phi_phi_fu_76944_p4 = ap_phi_reg_pp0_iter0_data_225_V_read295_phi_reg_76940.read();
        }
    } else {
        ap_phi_mux_data_225_V_read295_phi_phi_fu_76944_p4 = ap_phi_reg_pp0_iter0_data_225_V_read295_phi_reg_76940.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_225_V_read295_rewind_phi_fu_32355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_225_V_read295_rewind_phi_fu_32355_p6 = data_225_V_read295_phi_reg_76940.read();
    } else {
        ap_phi_mux_data_225_V_read295_rewind_phi_fu_32355_p6 = data_225_V_read295_rewind_reg_32351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2260_V_read2330_phi_phi_fu_103399_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2260_V_read2330_phi_phi_fu_103399_p4 = ap_phi_mux_data_2260_V_read2330_rewind_phi_fu_60845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2260_V_read2330_phi_phi_fu_103399_p4 = data_2260_V_read.read();
        } else {
            ap_phi_mux_data_2260_V_read2330_phi_phi_fu_103399_p4 = ap_phi_reg_pp0_iter0_data_2260_V_read2330_phi_reg_103395.read();
        }
    } else {
        ap_phi_mux_data_2260_V_read2330_phi_phi_fu_103399_p4 = ap_phi_reg_pp0_iter0_data_2260_V_read2330_phi_reg_103395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2260_V_read2330_rewind_phi_fu_60845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2260_V_read2330_rewind_phi_fu_60845_p6 = data_2260_V_read2330_phi_reg_103395.read();
    } else {
        ap_phi_mux_data_2260_V_read2330_rewind_phi_fu_60845_p6 = data_2260_V_read2330_rewind_reg_60841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2261_V_read2331_phi_phi_fu_103412_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2261_V_read2331_phi_phi_fu_103412_p4 = ap_phi_mux_data_2261_V_read2331_rewind_phi_fu_60859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2261_V_read2331_phi_phi_fu_103412_p4 = data_2261_V_read.read();
        } else {
            ap_phi_mux_data_2261_V_read2331_phi_phi_fu_103412_p4 = ap_phi_reg_pp0_iter0_data_2261_V_read2331_phi_reg_103408.read();
        }
    } else {
        ap_phi_mux_data_2261_V_read2331_phi_phi_fu_103412_p4 = ap_phi_reg_pp0_iter0_data_2261_V_read2331_phi_reg_103408.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2261_V_read2331_rewind_phi_fu_60859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2261_V_read2331_rewind_phi_fu_60859_p6 = data_2261_V_read2331_phi_reg_103408.read();
    } else {
        ap_phi_mux_data_2261_V_read2331_rewind_phi_fu_60859_p6 = data_2261_V_read2331_rewind_reg_60855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2262_V_read2332_phi_phi_fu_103425_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2262_V_read2332_phi_phi_fu_103425_p4 = ap_phi_mux_data_2262_V_read2332_rewind_phi_fu_60873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2262_V_read2332_phi_phi_fu_103425_p4 = data_2262_V_read.read();
        } else {
            ap_phi_mux_data_2262_V_read2332_phi_phi_fu_103425_p4 = ap_phi_reg_pp0_iter0_data_2262_V_read2332_phi_reg_103421.read();
        }
    } else {
        ap_phi_mux_data_2262_V_read2332_phi_phi_fu_103425_p4 = ap_phi_reg_pp0_iter0_data_2262_V_read2332_phi_reg_103421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2262_V_read2332_rewind_phi_fu_60873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2262_V_read2332_rewind_phi_fu_60873_p6 = data_2262_V_read2332_phi_reg_103421.read();
    } else {
        ap_phi_mux_data_2262_V_read2332_rewind_phi_fu_60873_p6 = data_2262_V_read2332_rewind_reg_60869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2263_V_read2333_phi_phi_fu_103438_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2263_V_read2333_phi_phi_fu_103438_p4 = ap_phi_mux_data_2263_V_read2333_rewind_phi_fu_60887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2263_V_read2333_phi_phi_fu_103438_p4 = data_2263_V_read.read();
        } else {
            ap_phi_mux_data_2263_V_read2333_phi_phi_fu_103438_p4 = ap_phi_reg_pp0_iter0_data_2263_V_read2333_phi_reg_103434.read();
        }
    } else {
        ap_phi_mux_data_2263_V_read2333_phi_phi_fu_103438_p4 = ap_phi_reg_pp0_iter0_data_2263_V_read2333_phi_reg_103434.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2263_V_read2333_rewind_phi_fu_60887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2263_V_read2333_rewind_phi_fu_60887_p6 = data_2263_V_read2333_phi_reg_103434.read();
    } else {
        ap_phi_mux_data_2263_V_read2333_rewind_phi_fu_60887_p6 = data_2263_V_read2333_rewind_reg_60883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2264_V_read2334_phi_phi_fu_103451_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2264_V_read2334_phi_phi_fu_103451_p4 = ap_phi_mux_data_2264_V_read2334_rewind_phi_fu_60901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2264_V_read2334_phi_phi_fu_103451_p4 = data_2264_V_read.read();
        } else {
            ap_phi_mux_data_2264_V_read2334_phi_phi_fu_103451_p4 = ap_phi_reg_pp0_iter0_data_2264_V_read2334_phi_reg_103447.read();
        }
    } else {
        ap_phi_mux_data_2264_V_read2334_phi_phi_fu_103451_p4 = ap_phi_reg_pp0_iter0_data_2264_V_read2334_phi_reg_103447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2264_V_read2334_rewind_phi_fu_60901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2264_V_read2334_rewind_phi_fu_60901_p6 = data_2264_V_read2334_phi_reg_103447.read();
    } else {
        ap_phi_mux_data_2264_V_read2334_rewind_phi_fu_60901_p6 = data_2264_V_read2334_rewind_reg_60897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2265_V_read2335_phi_phi_fu_103464_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2265_V_read2335_phi_phi_fu_103464_p4 = ap_phi_mux_data_2265_V_read2335_rewind_phi_fu_60915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2265_V_read2335_phi_phi_fu_103464_p4 = data_2265_V_read.read();
        } else {
            ap_phi_mux_data_2265_V_read2335_phi_phi_fu_103464_p4 = ap_phi_reg_pp0_iter0_data_2265_V_read2335_phi_reg_103460.read();
        }
    } else {
        ap_phi_mux_data_2265_V_read2335_phi_phi_fu_103464_p4 = ap_phi_reg_pp0_iter0_data_2265_V_read2335_phi_reg_103460.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2265_V_read2335_rewind_phi_fu_60915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2265_V_read2335_rewind_phi_fu_60915_p6 = data_2265_V_read2335_phi_reg_103460.read();
    } else {
        ap_phi_mux_data_2265_V_read2335_rewind_phi_fu_60915_p6 = data_2265_V_read2335_rewind_reg_60911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2266_V_read2336_phi_phi_fu_103477_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2266_V_read2336_phi_phi_fu_103477_p4 = ap_phi_mux_data_2266_V_read2336_rewind_phi_fu_60929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2266_V_read2336_phi_phi_fu_103477_p4 = data_2266_V_read.read();
        } else {
            ap_phi_mux_data_2266_V_read2336_phi_phi_fu_103477_p4 = ap_phi_reg_pp0_iter0_data_2266_V_read2336_phi_reg_103473.read();
        }
    } else {
        ap_phi_mux_data_2266_V_read2336_phi_phi_fu_103477_p4 = ap_phi_reg_pp0_iter0_data_2266_V_read2336_phi_reg_103473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2266_V_read2336_rewind_phi_fu_60929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2266_V_read2336_rewind_phi_fu_60929_p6 = data_2266_V_read2336_phi_reg_103473.read();
    } else {
        ap_phi_mux_data_2266_V_read2336_rewind_phi_fu_60929_p6 = data_2266_V_read2336_rewind_reg_60925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2267_V_read2337_phi_phi_fu_103490_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2267_V_read2337_phi_phi_fu_103490_p4 = ap_phi_mux_data_2267_V_read2337_rewind_phi_fu_60943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2267_V_read2337_phi_phi_fu_103490_p4 = data_2267_V_read.read();
        } else {
            ap_phi_mux_data_2267_V_read2337_phi_phi_fu_103490_p4 = ap_phi_reg_pp0_iter0_data_2267_V_read2337_phi_reg_103486.read();
        }
    } else {
        ap_phi_mux_data_2267_V_read2337_phi_phi_fu_103490_p4 = ap_phi_reg_pp0_iter0_data_2267_V_read2337_phi_reg_103486.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2267_V_read2337_rewind_phi_fu_60943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2267_V_read2337_rewind_phi_fu_60943_p6 = data_2267_V_read2337_phi_reg_103486.read();
    } else {
        ap_phi_mux_data_2267_V_read2337_rewind_phi_fu_60943_p6 = data_2267_V_read2337_rewind_reg_60939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2268_V_read2338_phi_phi_fu_103503_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2268_V_read2338_phi_phi_fu_103503_p4 = ap_phi_mux_data_2268_V_read2338_rewind_phi_fu_60957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2268_V_read2338_phi_phi_fu_103503_p4 = data_2268_V_read.read();
        } else {
            ap_phi_mux_data_2268_V_read2338_phi_phi_fu_103503_p4 = ap_phi_reg_pp0_iter0_data_2268_V_read2338_phi_reg_103499.read();
        }
    } else {
        ap_phi_mux_data_2268_V_read2338_phi_phi_fu_103503_p4 = ap_phi_reg_pp0_iter0_data_2268_V_read2338_phi_reg_103499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2268_V_read2338_rewind_phi_fu_60957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2268_V_read2338_rewind_phi_fu_60957_p6 = data_2268_V_read2338_phi_reg_103499.read();
    } else {
        ap_phi_mux_data_2268_V_read2338_rewind_phi_fu_60957_p6 = data_2268_V_read2338_rewind_reg_60953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2269_V_read2339_phi_phi_fu_103516_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2269_V_read2339_phi_phi_fu_103516_p4 = ap_phi_mux_data_2269_V_read2339_rewind_phi_fu_60971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2269_V_read2339_phi_phi_fu_103516_p4 = data_2269_V_read.read();
        } else {
            ap_phi_mux_data_2269_V_read2339_phi_phi_fu_103516_p4 = ap_phi_reg_pp0_iter0_data_2269_V_read2339_phi_reg_103512.read();
        }
    } else {
        ap_phi_mux_data_2269_V_read2339_phi_phi_fu_103516_p4 = ap_phi_reg_pp0_iter0_data_2269_V_read2339_phi_reg_103512.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2269_V_read2339_rewind_phi_fu_60971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2269_V_read2339_rewind_phi_fu_60971_p6 = data_2269_V_read2339_phi_reg_103512.read();
    } else {
        ap_phi_mux_data_2269_V_read2339_rewind_phi_fu_60971_p6 = data_2269_V_read2339_rewind_reg_60967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_226_V_read296_phi_phi_fu_76957_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_226_V_read296_phi_phi_fu_76957_p4 = ap_phi_mux_data_226_V_read296_rewind_phi_fu_32369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_226_V_read296_phi_phi_fu_76957_p4 = data_226_V_read.read();
        } else {
            ap_phi_mux_data_226_V_read296_phi_phi_fu_76957_p4 = ap_phi_reg_pp0_iter0_data_226_V_read296_phi_reg_76953.read();
        }
    } else {
        ap_phi_mux_data_226_V_read296_phi_phi_fu_76957_p4 = ap_phi_reg_pp0_iter0_data_226_V_read296_phi_reg_76953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_226_V_read296_rewind_phi_fu_32369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_226_V_read296_rewind_phi_fu_32369_p6 = data_226_V_read296_phi_reg_76953.read();
    } else {
        ap_phi_mux_data_226_V_read296_rewind_phi_fu_32369_p6 = data_226_V_read296_rewind_reg_32365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2270_V_read2340_phi_phi_fu_103529_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2270_V_read2340_phi_phi_fu_103529_p4 = ap_phi_mux_data_2270_V_read2340_rewind_phi_fu_60985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2270_V_read2340_phi_phi_fu_103529_p4 = data_2270_V_read.read();
        } else {
            ap_phi_mux_data_2270_V_read2340_phi_phi_fu_103529_p4 = ap_phi_reg_pp0_iter0_data_2270_V_read2340_phi_reg_103525.read();
        }
    } else {
        ap_phi_mux_data_2270_V_read2340_phi_phi_fu_103529_p4 = ap_phi_reg_pp0_iter0_data_2270_V_read2340_phi_reg_103525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2270_V_read2340_rewind_phi_fu_60985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2270_V_read2340_rewind_phi_fu_60985_p6 = data_2270_V_read2340_phi_reg_103525.read();
    } else {
        ap_phi_mux_data_2270_V_read2340_rewind_phi_fu_60985_p6 = data_2270_V_read2340_rewind_reg_60981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2271_V_read2341_phi_phi_fu_103542_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2271_V_read2341_phi_phi_fu_103542_p4 = ap_phi_mux_data_2271_V_read2341_rewind_phi_fu_60999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2271_V_read2341_phi_phi_fu_103542_p4 = data_2271_V_read.read();
        } else {
            ap_phi_mux_data_2271_V_read2341_phi_phi_fu_103542_p4 = ap_phi_reg_pp0_iter0_data_2271_V_read2341_phi_reg_103538.read();
        }
    } else {
        ap_phi_mux_data_2271_V_read2341_phi_phi_fu_103542_p4 = ap_phi_reg_pp0_iter0_data_2271_V_read2341_phi_reg_103538.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2271_V_read2341_rewind_phi_fu_60999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2271_V_read2341_rewind_phi_fu_60999_p6 = data_2271_V_read2341_phi_reg_103538.read();
    } else {
        ap_phi_mux_data_2271_V_read2341_rewind_phi_fu_60999_p6 = data_2271_V_read2341_rewind_reg_60995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2272_V_read2342_phi_phi_fu_103555_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2272_V_read2342_phi_phi_fu_103555_p4 = ap_phi_mux_data_2272_V_read2342_rewind_phi_fu_61013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2272_V_read2342_phi_phi_fu_103555_p4 = data_2272_V_read.read();
        } else {
            ap_phi_mux_data_2272_V_read2342_phi_phi_fu_103555_p4 = ap_phi_reg_pp0_iter0_data_2272_V_read2342_phi_reg_103551.read();
        }
    } else {
        ap_phi_mux_data_2272_V_read2342_phi_phi_fu_103555_p4 = ap_phi_reg_pp0_iter0_data_2272_V_read2342_phi_reg_103551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2272_V_read2342_rewind_phi_fu_61013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2272_V_read2342_rewind_phi_fu_61013_p6 = data_2272_V_read2342_phi_reg_103551.read();
    } else {
        ap_phi_mux_data_2272_V_read2342_rewind_phi_fu_61013_p6 = data_2272_V_read2342_rewind_reg_61009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2273_V_read2343_phi_phi_fu_103568_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2273_V_read2343_phi_phi_fu_103568_p4 = ap_phi_mux_data_2273_V_read2343_rewind_phi_fu_61027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2273_V_read2343_phi_phi_fu_103568_p4 = data_2273_V_read.read();
        } else {
            ap_phi_mux_data_2273_V_read2343_phi_phi_fu_103568_p4 = ap_phi_reg_pp0_iter0_data_2273_V_read2343_phi_reg_103564.read();
        }
    } else {
        ap_phi_mux_data_2273_V_read2343_phi_phi_fu_103568_p4 = ap_phi_reg_pp0_iter0_data_2273_V_read2343_phi_reg_103564.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2273_V_read2343_rewind_phi_fu_61027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2273_V_read2343_rewind_phi_fu_61027_p6 = data_2273_V_read2343_phi_reg_103564.read();
    } else {
        ap_phi_mux_data_2273_V_read2343_rewind_phi_fu_61027_p6 = data_2273_V_read2343_rewind_reg_61023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2274_V_read2344_phi_phi_fu_103581_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2274_V_read2344_phi_phi_fu_103581_p4 = ap_phi_mux_data_2274_V_read2344_rewind_phi_fu_61041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2274_V_read2344_phi_phi_fu_103581_p4 = data_2274_V_read.read();
        } else {
            ap_phi_mux_data_2274_V_read2344_phi_phi_fu_103581_p4 = ap_phi_reg_pp0_iter0_data_2274_V_read2344_phi_reg_103577.read();
        }
    } else {
        ap_phi_mux_data_2274_V_read2344_phi_phi_fu_103581_p4 = ap_phi_reg_pp0_iter0_data_2274_V_read2344_phi_reg_103577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2274_V_read2344_rewind_phi_fu_61041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2274_V_read2344_rewind_phi_fu_61041_p6 = data_2274_V_read2344_phi_reg_103577.read();
    } else {
        ap_phi_mux_data_2274_V_read2344_rewind_phi_fu_61041_p6 = data_2274_V_read2344_rewind_reg_61037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2275_V_read2345_phi_phi_fu_103594_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2275_V_read2345_phi_phi_fu_103594_p4 = ap_phi_mux_data_2275_V_read2345_rewind_phi_fu_61055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2275_V_read2345_phi_phi_fu_103594_p4 = data_2275_V_read.read();
        } else {
            ap_phi_mux_data_2275_V_read2345_phi_phi_fu_103594_p4 = ap_phi_reg_pp0_iter0_data_2275_V_read2345_phi_reg_103590.read();
        }
    } else {
        ap_phi_mux_data_2275_V_read2345_phi_phi_fu_103594_p4 = ap_phi_reg_pp0_iter0_data_2275_V_read2345_phi_reg_103590.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2275_V_read2345_rewind_phi_fu_61055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2275_V_read2345_rewind_phi_fu_61055_p6 = data_2275_V_read2345_phi_reg_103590.read();
    } else {
        ap_phi_mux_data_2275_V_read2345_rewind_phi_fu_61055_p6 = data_2275_V_read2345_rewind_reg_61051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2276_V_read2346_phi_phi_fu_103607_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2276_V_read2346_phi_phi_fu_103607_p4 = ap_phi_mux_data_2276_V_read2346_rewind_phi_fu_61069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2276_V_read2346_phi_phi_fu_103607_p4 = data_2276_V_read.read();
        } else {
            ap_phi_mux_data_2276_V_read2346_phi_phi_fu_103607_p4 = ap_phi_reg_pp0_iter0_data_2276_V_read2346_phi_reg_103603.read();
        }
    } else {
        ap_phi_mux_data_2276_V_read2346_phi_phi_fu_103607_p4 = ap_phi_reg_pp0_iter0_data_2276_V_read2346_phi_reg_103603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2276_V_read2346_rewind_phi_fu_61069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2276_V_read2346_rewind_phi_fu_61069_p6 = data_2276_V_read2346_phi_reg_103603.read();
    } else {
        ap_phi_mux_data_2276_V_read2346_rewind_phi_fu_61069_p6 = data_2276_V_read2346_rewind_reg_61065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2277_V_read2347_phi_phi_fu_103620_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2277_V_read2347_phi_phi_fu_103620_p4 = ap_phi_mux_data_2277_V_read2347_rewind_phi_fu_61083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2277_V_read2347_phi_phi_fu_103620_p4 = data_2277_V_read.read();
        } else {
            ap_phi_mux_data_2277_V_read2347_phi_phi_fu_103620_p4 = ap_phi_reg_pp0_iter0_data_2277_V_read2347_phi_reg_103616.read();
        }
    } else {
        ap_phi_mux_data_2277_V_read2347_phi_phi_fu_103620_p4 = ap_phi_reg_pp0_iter0_data_2277_V_read2347_phi_reg_103616.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2277_V_read2347_rewind_phi_fu_61083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2277_V_read2347_rewind_phi_fu_61083_p6 = data_2277_V_read2347_phi_reg_103616.read();
    } else {
        ap_phi_mux_data_2277_V_read2347_rewind_phi_fu_61083_p6 = data_2277_V_read2347_rewind_reg_61079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2278_V_read2348_phi_phi_fu_103633_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2278_V_read2348_phi_phi_fu_103633_p4 = ap_phi_mux_data_2278_V_read2348_rewind_phi_fu_61097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2278_V_read2348_phi_phi_fu_103633_p4 = data_2278_V_read.read();
        } else {
            ap_phi_mux_data_2278_V_read2348_phi_phi_fu_103633_p4 = ap_phi_reg_pp0_iter0_data_2278_V_read2348_phi_reg_103629.read();
        }
    } else {
        ap_phi_mux_data_2278_V_read2348_phi_phi_fu_103633_p4 = ap_phi_reg_pp0_iter0_data_2278_V_read2348_phi_reg_103629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2278_V_read2348_rewind_phi_fu_61097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2278_V_read2348_rewind_phi_fu_61097_p6 = data_2278_V_read2348_phi_reg_103629.read();
    } else {
        ap_phi_mux_data_2278_V_read2348_rewind_phi_fu_61097_p6 = data_2278_V_read2348_rewind_reg_61093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2279_V_read2349_phi_phi_fu_103646_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2279_V_read2349_phi_phi_fu_103646_p4 = ap_phi_mux_data_2279_V_read2349_rewind_phi_fu_61111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2279_V_read2349_phi_phi_fu_103646_p4 = data_2279_V_read.read();
        } else {
            ap_phi_mux_data_2279_V_read2349_phi_phi_fu_103646_p4 = ap_phi_reg_pp0_iter0_data_2279_V_read2349_phi_reg_103642.read();
        }
    } else {
        ap_phi_mux_data_2279_V_read2349_phi_phi_fu_103646_p4 = ap_phi_reg_pp0_iter0_data_2279_V_read2349_phi_reg_103642.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2279_V_read2349_rewind_phi_fu_61111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2279_V_read2349_rewind_phi_fu_61111_p6 = data_2279_V_read2349_phi_reg_103642.read();
    } else {
        ap_phi_mux_data_2279_V_read2349_rewind_phi_fu_61111_p6 = data_2279_V_read2349_rewind_reg_61107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_227_V_read297_phi_phi_fu_76970_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_227_V_read297_phi_phi_fu_76970_p4 = ap_phi_mux_data_227_V_read297_rewind_phi_fu_32383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_227_V_read297_phi_phi_fu_76970_p4 = data_227_V_read.read();
        } else {
            ap_phi_mux_data_227_V_read297_phi_phi_fu_76970_p4 = ap_phi_reg_pp0_iter0_data_227_V_read297_phi_reg_76966.read();
        }
    } else {
        ap_phi_mux_data_227_V_read297_phi_phi_fu_76970_p4 = ap_phi_reg_pp0_iter0_data_227_V_read297_phi_reg_76966.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_227_V_read297_rewind_phi_fu_32383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_227_V_read297_rewind_phi_fu_32383_p6 = data_227_V_read297_phi_reg_76966.read();
    } else {
        ap_phi_mux_data_227_V_read297_rewind_phi_fu_32383_p6 = data_227_V_read297_rewind_reg_32379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2280_V_read2350_phi_phi_fu_103659_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2280_V_read2350_phi_phi_fu_103659_p4 = ap_phi_mux_data_2280_V_read2350_rewind_phi_fu_61125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2280_V_read2350_phi_phi_fu_103659_p4 = data_2280_V_read.read();
        } else {
            ap_phi_mux_data_2280_V_read2350_phi_phi_fu_103659_p4 = ap_phi_reg_pp0_iter0_data_2280_V_read2350_phi_reg_103655.read();
        }
    } else {
        ap_phi_mux_data_2280_V_read2350_phi_phi_fu_103659_p4 = ap_phi_reg_pp0_iter0_data_2280_V_read2350_phi_reg_103655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2280_V_read2350_rewind_phi_fu_61125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2280_V_read2350_rewind_phi_fu_61125_p6 = data_2280_V_read2350_phi_reg_103655.read();
    } else {
        ap_phi_mux_data_2280_V_read2350_rewind_phi_fu_61125_p6 = data_2280_V_read2350_rewind_reg_61121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2281_V_read2351_phi_phi_fu_103672_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2281_V_read2351_phi_phi_fu_103672_p4 = ap_phi_mux_data_2281_V_read2351_rewind_phi_fu_61139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2281_V_read2351_phi_phi_fu_103672_p4 = data_2281_V_read.read();
        } else {
            ap_phi_mux_data_2281_V_read2351_phi_phi_fu_103672_p4 = ap_phi_reg_pp0_iter0_data_2281_V_read2351_phi_reg_103668.read();
        }
    } else {
        ap_phi_mux_data_2281_V_read2351_phi_phi_fu_103672_p4 = ap_phi_reg_pp0_iter0_data_2281_V_read2351_phi_reg_103668.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2281_V_read2351_rewind_phi_fu_61139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2281_V_read2351_rewind_phi_fu_61139_p6 = data_2281_V_read2351_phi_reg_103668.read();
    } else {
        ap_phi_mux_data_2281_V_read2351_rewind_phi_fu_61139_p6 = data_2281_V_read2351_rewind_reg_61135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2282_V_read2352_phi_phi_fu_103685_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2282_V_read2352_phi_phi_fu_103685_p4 = ap_phi_mux_data_2282_V_read2352_rewind_phi_fu_61153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2282_V_read2352_phi_phi_fu_103685_p4 = data_2282_V_read.read();
        } else {
            ap_phi_mux_data_2282_V_read2352_phi_phi_fu_103685_p4 = ap_phi_reg_pp0_iter0_data_2282_V_read2352_phi_reg_103681.read();
        }
    } else {
        ap_phi_mux_data_2282_V_read2352_phi_phi_fu_103685_p4 = ap_phi_reg_pp0_iter0_data_2282_V_read2352_phi_reg_103681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2282_V_read2352_rewind_phi_fu_61153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2282_V_read2352_rewind_phi_fu_61153_p6 = data_2282_V_read2352_phi_reg_103681.read();
    } else {
        ap_phi_mux_data_2282_V_read2352_rewind_phi_fu_61153_p6 = data_2282_V_read2352_rewind_reg_61149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2283_V_read2353_phi_phi_fu_103698_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2283_V_read2353_phi_phi_fu_103698_p4 = ap_phi_mux_data_2283_V_read2353_rewind_phi_fu_61167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2283_V_read2353_phi_phi_fu_103698_p4 = data_2283_V_read.read();
        } else {
            ap_phi_mux_data_2283_V_read2353_phi_phi_fu_103698_p4 = ap_phi_reg_pp0_iter0_data_2283_V_read2353_phi_reg_103694.read();
        }
    } else {
        ap_phi_mux_data_2283_V_read2353_phi_phi_fu_103698_p4 = ap_phi_reg_pp0_iter0_data_2283_V_read2353_phi_reg_103694.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2283_V_read2353_rewind_phi_fu_61167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2283_V_read2353_rewind_phi_fu_61167_p6 = data_2283_V_read2353_phi_reg_103694.read();
    } else {
        ap_phi_mux_data_2283_V_read2353_rewind_phi_fu_61167_p6 = data_2283_V_read2353_rewind_reg_61163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2284_V_read2354_phi_phi_fu_103711_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2284_V_read2354_phi_phi_fu_103711_p4 = ap_phi_mux_data_2284_V_read2354_rewind_phi_fu_61181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2284_V_read2354_phi_phi_fu_103711_p4 = data_2284_V_read.read();
        } else {
            ap_phi_mux_data_2284_V_read2354_phi_phi_fu_103711_p4 = ap_phi_reg_pp0_iter0_data_2284_V_read2354_phi_reg_103707.read();
        }
    } else {
        ap_phi_mux_data_2284_V_read2354_phi_phi_fu_103711_p4 = ap_phi_reg_pp0_iter0_data_2284_V_read2354_phi_reg_103707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2284_V_read2354_rewind_phi_fu_61181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2284_V_read2354_rewind_phi_fu_61181_p6 = data_2284_V_read2354_phi_reg_103707.read();
    } else {
        ap_phi_mux_data_2284_V_read2354_rewind_phi_fu_61181_p6 = data_2284_V_read2354_rewind_reg_61177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2285_V_read2355_phi_phi_fu_103724_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2285_V_read2355_phi_phi_fu_103724_p4 = ap_phi_mux_data_2285_V_read2355_rewind_phi_fu_61195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2285_V_read2355_phi_phi_fu_103724_p4 = data_2285_V_read.read();
        } else {
            ap_phi_mux_data_2285_V_read2355_phi_phi_fu_103724_p4 = ap_phi_reg_pp0_iter0_data_2285_V_read2355_phi_reg_103720.read();
        }
    } else {
        ap_phi_mux_data_2285_V_read2355_phi_phi_fu_103724_p4 = ap_phi_reg_pp0_iter0_data_2285_V_read2355_phi_reg_103720.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2285_V_read2355_rewind_phi_fu_61195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2285_V_read2355_rewind_phi_fu_61195_p6 = data_2285_V_read2355_phi_reg_103720.read();
    } else {
        ap_phi_mux_data_2285_V_read2355_rewind_phi_fu_61195_p6 = data_2285_V_read2355_rewind_reg_61191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2286_V_read2356_phi_phi_fu_103737_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2286_V_read2356_phi_phi_fu_103737_p4 = ap_phi_mux_data_2286_V_read2356_rewind_phi_fu_61209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2286_V_read2356_phi_phi_fu_103737_p4 = data_2286_V_read.read();
        } else {
            ap_phi_mux_data_2286_V_read2356_phi_phi_fu_103737_p4 = ap_phi_reg_pp0_iter0_data_2286_V_read2356_phi_reg_103733.read();
        }
    } else {
        ap_phi_mux_data_2286_V_read2356_phi_phi_fu_103737_p4 = ap_phi_reg_pp0_iter0_data_2286_V_read2356_phi_reg_103733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2286_V_read2356_rewind_phi_fu_61209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2286_V_read2356_rewind_phi_fu_61209_p6 = data_2286_V_read2356_phi_reg_103733.read();
    } else {
        ap_phi_mux_data_2286_V_read2356_rewind_phi_fu_61209_p6 = data_2286_V_read2356_rewind_reg_61205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2287_V_read2357_phi_phi_fu_103750_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2287_V_read2357_phi_phi_fu_103750_p4 = ap_phi_mux_data_2287_V_read2357_rewind_phi_fu_61223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2287_V_read2357_phi_phi_fu_103750_p4 = data_2287_V_read.read();
        } else {
            ap_phi_mux_data_2287_V_read2357_phi_phi_fu_103750_p4 = ap_phi_reg_pp0_iter0_data_2287_V_read2357_phi_reg_103746.read();
        }
    } else {
        ap_phi_mux_data_2287_V_read2357_phi_phi_fu_103750_p4 = ap_phi_reg_pp0_iter0_data_2287_V_read2357_phi_reg_103746.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2287_V_read2357_rewind_phi_fu_61223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2287_V_read2357_rewind_phi_fu_61223_p6 = data_2287_V_read2357_phi_reg_103746.read();
    } else {
        ap_phi_mux_data_2287_V_read2357_rewind_phi_fu_61223_p6 = data_2287_V_read2357_rewind_reg_61219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2288_V_read2358_phi_phi_fu_103763_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2288_V_read2358_phi_phi_fu_103763_p4 = ap_phi_mux_data_2288_V_read2358_rewind_phi_fu_61237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2288_V_read2358_phi_phi_fu_103763_p4 = data_2288_V_read.read();
        } else {
            ap_phi_mux_data_2288_V_read2358_phi_phi_fu_103763_p4 = ap_phi_reg_pp0_iter0_data_2288_V_read2358_phi_reg_103759.read();
        }
    } else {
        ap_phi_mux_data_2288_V_read2358_phi_phi_fu_103763_p4 = ap_phi_reg_pp0_iter0_data_2288_V_read2358_phi_reg_103759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2288_V_read2358_rewind_phi_fu_61237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2288_V_read2358_rewind_phi_fu_61237_p6 = data_2288_V_read2358_phi_reg_103759.read();
    } else {
        ap_phi_mux_data_2288_V_read2358_rewind_phi_fu_61237_p6 = data_2288_V_read2358_rewind_reg_61233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2289_V_read2359_phi_phi_fu_103776_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2289_V_read2359_phi_phi_fu_103776_p4 = ap_phi_mux_data_2289_V_read2359_rewind_phi_fu_61251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2289_V_read2359_phi_phi_fu_103776_p4 = data_2289_V_read.read();
        } else {
            ap_phi_mux_data_2289_V_read2359_phi_phi_fu_103776_p4 = ap_phi_reg_pp0_iter0_data_2289_V_read2359_phi_reg_103772.read();
        }
    } else {
        ap_phi_mux_data_2289_V_read2359_phi_phi_fu_103776_p4 = ap_phi_reg_pp0_iter0_data_2289_V_read2359_phi_reg_103772.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2289_V_read2359_rewind_phi_fu_61251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2289_V_read2359_rewind_phi_fu_61251_p6 = data_2289_V_read2359_phi_reg_103772.read();
    } else {
        ap_phi_mux_data_2289_V_read2359_rewind_phi_fu_61251_p6 = data_2289_V_read2359_rewind_reg_61247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_228_V_read298_phi_phi_fu_76983_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_228_V_read298_phi_phi_fu_76983_p4 = ap_phi_mux_data_228_V_read298_rewind_phi_fu_32397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_228_V_read298_phi_phi_fu_76983_p4 = data_228_V_read.read();
        } else {
            ap_phi_mux_data_228_V_read298_phi_phi_fu_76983_p4 = ap_phi_reg_pp0_iter0_data_228_V_read298_phi_reg_76979.read();
        }
    } else {
        ap_phi_mux_data_228_V_read298_phi_phi_fu_76983_p4 = ap_phi_reg_pp0_iter0_data_228_V_read298_phi_reg_76979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_228_V_read298_rewind_phi_fu_32397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_228_V_read298_rewind_phi_fu_32397_p6 = data_228_V_read298_phi_reg_76979.read();
    } else {
        ap_phi_mux_data_228_V_read298_rewind_phi_fu_32397_p6 = data_228_V_read298_rewind_reg_32393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2290_V_read2360_phi_phi_fu_103789_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2290_V_read2360_phi_phi_fu_103789_p4 = ap_phi_mux_data_2290_V_read2360_rewind_phi_fu_61265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2290_V_read2360_phi_phi_fu_103789_p4 = data_2290_V_read.read();
        } else {
            ap_phi_mux_data_2290_V_read2360_phi_phi_fu_103789_p4 = ap_phi_reg_pp0_iter0_data_2290_V_read2360_phi_reg_103785.read();
        }
    } else {
        ap_phi_mux_data_2290_V_read2360_phi_phi_fu_103789_p4 = ap_phi_reg_pp0_iter0_data_2290_V_read2360_phi_reg_103785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2290_V_read2360_rewind_phi_fu_61265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2290_V_read2360_rewind_phi_fu_61265_p6 = data_2290_V_read2360_phi_reg_103785.read();
    } else {
        ap_phi_mux_data_2290_V_read2360_rewind_phi_fu_61265_p6 = data_2290_V_read2360_rewind_reg_61261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2291_V_read2361_phi_phi_fu_103802_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2291_V_read2361_phi_phi_fu_103802_p4 = ap_phi_mux_data_2291_V_read2361_rewind_phi_fu_61279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2291_V_read2361_phi_phi_fu_103802_p4 = data_2291_V_read.read();
        } else {
            ap_phi_mux_data_2291_V_read2361_phi_phi_fu_103802_p4 = ap_phi_reg_pp0_iter0_data_2291_V_read2361_phi_reg_103798.read();
        }
    } else {
        ap_phi_mux_data_2291_V_read2361_phi_phi_fu_103802_p4 = ap_phi_reg_pp0_iter0_data_2291_V_read2361_phi_reg_103798.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2291_V_read2361_rewind_phi_fu_61279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2291_V_read2361_rewind_phi_fu_61279_p6 = data_2291_V_read2361_phi_reg_103798.read();
    } else {
        ap_phi_mux_data_2291_V_read2361_rewind_phi_fu_61279_p6 = data_2291_V_read2361_rewind_reg_61275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2292_V_read2362_phi_phi_fu_103815_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2292_V_read2362_phi_phi_fu_103815_p4 = ap_phi_mux_data_2292_V_read2362_rewind_phi_fu_61293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2292_V_read2362_phi_phi_fu_103815_p4 = data_2292_V_read.read();
        } else {
            ap_phi_mux_data_2292_V_read2362_phi_phi_fu_103815_p4 = ap_phi_reg_pp0_iter0_data_2292_V_read2362_phi_reg_103811.read();
        }
    } else {
        ap_phi_mux_data_2292_V_read2362_phi_phi_fu_103815_p4 = ap_phi_reg_pp0_iter0_data_2292_V_read2362_phi_reg_103811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2292_V_read2362_rewind_phi_fu_61293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2292_V_read2362_rewind_phi_fu_61293_p6 = data_2292_V_read2362_phi_reg_103811.read();
    } else {
        ap_phi_mux_data_2292_V_read2362_rewind_phi_fu_61293_p6 = data_2292_V_read2362_rewind_reg_61289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2293_V_read2363_phi_phi_fu_103828_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2293_V_read2363_phi_phi_fu_103828_p4 = ap_phi_mux_data_2293_V_read2363_rewind_phi_fu_61307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2293_V_read2363_phi_phi_fu_103828_p4 = data_2293_V_read.read();
        } else {
            ap_phi_mux_data_2293_V_read2363_phi_phi_fu_103828_p4 = ap_phi_reg_pp0_iter0_data_2293_V_read2363_phi_reg_103824.read();
        }
    } else {
        ap_phi_mux_data_2293_V_read2363_phi_phi_fu_103828_p4 = ap_phi_reg_pp0_iter0_data_2293_V_read2363_phi_reg_103824.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2293_V_read2363_rewind_phi_fu_61307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2293_V_read2363_rewind_phi_fu_61307_p6 = data_2293_V_read2363_phi_reg_103824.read();
    } else {
        ap_phi_mux_data_2293_V_read2363_rewind_phi_fu_61307_p6 = data_2293_V_read2363_rewind_reg_61303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2294_V_read2364_phi_phi_fu_103841_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2294_V_read2364_phi_phi_fu_103841_p4 = ap_phi_mux_data_2294_V_read2364_rewind_phi_fu_61321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2294_V_read2364_phi_phi_fu_103841_p4 = data_2294_V_read.read();
        } else {
            ap_phi_mux_data_2294_V_read2364_phi_phi_fu_103841_p4 = ap_phi_reg_pp0_iter0_data_2294_V_read2364_phi_reg_103837.read();
        }
    } else {
        ap_phi_mux_data_2294_V_read2364_phi_phi_fu_103841_p4 = ap_phi_reg_pp0_iter0_data_2294_V_read2364_phi_reg_103837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2294_V_read2364_rewind_phi_fu_61321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2294_V_read2364_rewind_phi_fu_61321_p6 = data_2294_V_read2364_phi_reg_103837.read();
    } else {
        ap_phi_mux_data_2294_V_read2364_rewind_phi_fu_61321_p6 = data_2294_V_read2364_rewind_reg_61317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2295_V_read2365_phi_phi_fu_103854_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2295_V_read2365_phi_phi_fu_103854_p4 = ap_phi_mux_data_2295_V_read2365_rewind_phi_fu_61335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2295_V_read2365_phi_phi_fu_103854_p4 = data_2295_V_read.read();
        } else {
            ap_phi_mux_data_2295_V_read2365_phi_phi_fu_103854_p4 = ap_phi_reg_pp0_iter0_data_2295_V_read2365_phi_reg_103850.read();
        }
    } else {
        ap_phi_mux_data_2295_V_read2365_phi_phi_fu_103854_p4 = ap_phi_reg_pp0_iter0_data_2295_V_read2365_phi_reg_103850.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2295_V_read2365_rewind_phi_fu_61335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2295_V_read2365_rewind_phi_fu_61335_p6 = data_2295_V_read2365_phi_reg_103850.read();
    } else {
        ap_phi_mux_data_2295_V_read2365_rewind_phi_fu_61335_p6 = data_2295_V_read2365_rewind_reg_61331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2296_V_read2366_phi_phi_fu_103867_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2296_V_read2366_phi_phi_fu_103867_p4 = ap_phi_mux_data_2296_V_read2366_rewind_phi_fu_61349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2296_V_read2366_phi_phi_fu_103867_p4 = data_2296_V_read.read();
        } else {
            ap_phi_mux_data_2296_V_read2366_phi_phi_fu_103867_p4 = ap_phi_reg_pp0_iter0_data_2296_V_read2366_phi_reg_103863.read();
        }
    } else {
        ap_phi_mux_data_2296_V_read2366_phi_phi_fu_103867_p4 = ap_phi_reg_pp0_iter0_data_2296_V_read2366_phi_reg_103863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2296_V_read2366_rewind_phi_fu_61349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2296_V_read2366_rewind_phi_fu_61349_p6 = data_2296_V_read2366_phi_reg_103863.read();
    } else {
        ap_phi_mux_data_2296_V_read2366_rewind_phi_fu_61349_p6 = data_2296_V_read2366_rewind_reg_61345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2297_V_read2367_phi_phi_fu_103880_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2297_V_read2367_phi_phi_fu_103880_p4 = ap_phi_mux_data_2297_V_read2367_rewind_phi_fu_61363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2297_V_read2367_phi_phi_fu_103880_p4 = data_2297_V_read.read();
        } else {
            ap_phi_mux_data_2297_V_read2367_phi_phi_fu_103880_p4 = ap_phi_reg_pp0_iter0_data_2297_V_read2367_phi_reg_103876.read();
        }
    } else {
        ap_phi_mux_data_2297_V_read2367_phi_phi_fu_103880_p4 = ap_phi_reg_pp0_iter0_data_2297_V_read2367_phi_reg_103876.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2297_V_read2367_rewind_phi_fu_61363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2297_V_read2367_rewind_phi_fu_61363_p6 = data_2297_V_read2367_phi_reg_103876.read();
    } else {
        ap_phi_mux_data_2297_V_read2367_rewind_phi_fu_61363_p6 = data_2297_V_read2367_rewind_reg_61359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2298_V_read2368_phi_phi_fu_103893_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2298_V_read2368_phi_phi_fu_103893_p4 = ap_phi_mux_data_2298_V_read2368_rewind_phi_fu_61377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2298_V_read2368_phi_phi_fu_103893_p4 = data_2298_V_read.read();
        } else {
            ap_phi_mux_data_2298_V_read2368_phi_phi_fu_103893_p4 = ap_phi_reg_pp0_iter0_data_2298_V_read2368_phi_reg_103889.read();
        }
    } else {
        ap_phi_mux_data_2298_V_read2368_phi_phi_fu_103893_p4 = ap_phi_reg_pp0_iter0_data_2298_V_read2368_phi_reg_103889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2298_V_read2368_rewind_phi_fu_61377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2298_V_read2368_rewind_phi_fu_61377_p6 = data_2298_V_read2368_phi_reg_103889.read();
    } else {
        ap_phi_mux_data_2298_V_read2368_rewind_phi_fu_61377_p6 = data_2298_V_read2368_rewind_reg_61373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2299_V_read2369_phi_phi_fu_103906_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2299_V_read2369_phi_phi_fu_103906_p4 = ap_phi_mux_data_2299_V_read2369_rewind_phi_fu_61391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2299_V_read2369_phi_phi_fu_103906_p4 = data_2299_V_read.read();
        } else {
            ap_phi_mux_data_2299_V_read2369_phi_phi_fu_103906_p4 = ap_phi_reg_pp0_iter0_data_2299_V_read2369_phi_reg_103902.read();
        }
    } else {
        ap_phi_mux_data_2299_V_read2369_phi_phi_fu_103906_p4 = ap_phi_reg_pp0_iter0_data_2299_V_read2369_phi_reg_103902.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2299_V_read2369_rewind_phi_fu_61391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2299_V_read2369_rewind_phi_fu_61391_p6 = data_2299_V_read2369_phi_reg_103902.read();
    } else {
        ap_phi_mux_data_2299_V_read2369_rewind_phi_fu_61391_p6 = data_2299_V_read2369_rewind_reg_61387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_229_V_read299_phi_phi_fu_76996_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_229_V_read299_phi_phi_fu_76996_p4 = ap_phi_mux_data_229_V_read299_rewind_phi_fu_32411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_229_V_read299_phi_phi_fu_76996_p4 = data_229_V_read.read();
        } else {
            ap_phi_mux_data_229_V_read299_phi_phi_fu_76996_p4 = ap_phi_reg_pp0_iter0_data_229_V_read299_phi_reg_76992.read();
        }
    } else {
        ap_phi_mux_data_229_V_read299_phi_phi_fu_76996_p4 = ap_phi_reg_pp0_iter0_data_229_V_read299_phi_reg_76992.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_229_V_read299_rewind_phi_fu_32411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_229_V_read299_rewind_phi_fu_32411_p6 = data_229_V_read299_phi_reg_76992.read();
    } else {
        ap_phi_mux_data_229_V_read299_rewind_phi_fu_32411_p6 = data_229_V_read299_rewind_reg_32407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_22_V_read92_phi_phi_fu_74305_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_22_V_read92_phi_phi_fu_74305_p4 = ap_phi_mux_data_22_V_read92_rewind_phi_fu_29513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_22_V_read92_phi_phi_fu_74305_p4 = data_22_V_read.read();
        } else {
            ap_phi_mux_data_22_V_read92_phi_phi_fu_74305_p4 = ap_phi_reg_pp0_iter0_data_22_V_read92_phi_reg_74301.read();
        }
    } else {
        ap_phi_mux_data_22_V_read92_phi_phi_fu_74305_p4 = ap_phi_reg_pp0_iter0_data_22_V_read92_phi_reg_74301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_22_V_read92_rewind_phi_fu_29513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_22_V_read92_rewind_phi_fu_29513_p6 = data_22_V_read92_phi_reg_74301.read();
    } else {
        ap_phi_mux_data_22_V_read92_rewind_phi_fu_29513_p6 = data_22_V_read92_rewind_reg_29509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2300_V_read2370_phi_phi_fu_103919_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2300_V_read2370_phi_phi_fu_103919_p4 = ap_phi_mux_data_2300_V_read2370_rewind_phi_fu_61405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2300_V_read2370_phi_phi_fu_103919_p4 = data_2300_V_read.read();
        } else {
            ap_phi_mux_data_2300_V_read2370_phi_phi_fu_103919_p4 = ap_phi_reg_pp0_iter0_data_2300_V_read2370_phi_reg_103915.read();
        }
    } else {
        ap_phi_mux_data_2300_V_read2370_phi_phi_fu_103919_p4 = ap_phi_reg_pp0_iter0_data_2300_V_read2370_phi_reg_103915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2300_V_read2370_rewind_phi_fu_61405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2300_V_read2370_rewind_phi_fu_61405_p6 = data_2300_V_read2370_phi_reg_103915.read();
    } else {
        ap_phi_mux_data_2300_V_read2370_rewind_phi_fu_61405_p6 = data_2300_V_read2370_rewind_reg_61401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2301_V_read2371_phi_phi_fu_103932_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2301_V_read2371_phi_phi_fu_103932_p4 = ap_phi_mux_data_2301_V_read2371_rewind_phi_fu_61419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2301_V_read2371_phi_phi_fu_103932_p4 = data_2301_V_read.read();
        } else {
            ap_phi_mux_data_2301_V_read2371_phi_phi_fu_103932_p4 = ap_phi_reg_pp0_iter0_data_2301_V_read2371_phi_reg_103928.read();
        }
    } else {
        ap_phi_mux_data_2301_V_read2371_phi_phi_fu_103932_p4 = ap_phi_reg_pp0_iter0_data_2301_V_read2371_phi_reg_103928.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2301_V_read2371_rewind_phi_fu_61419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2301_V_read2371_rewind_phi_fu_61419_p6 = data_2301_V_read2371_phi_reg_103928.read();
    } else {
        ap_phi_mux_data_2301_V_read2371_rewind_phi_fu_61419_p6 = data_2301_V_read2371_rewind_reg_61415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2302_V_read2372_phi_phi_fu_103945_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2302_V_read2372_phi_phi_fu_103945_p4 = ap_phi_mux_data_2302_V_read2372_rewind_phi_fu_61433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2302_V_read2372_phi_phi_fu_103945_p4 = data_2302_V_read.read();
        } else {
            ap_phi_mux_data_2302_V_read2372_phi_phi_fu_103945_p4 = ap_phi_reg_pp0_iter0_data_2302_V_read2372_phi_reg_103941.read();
        }
    } else {
        ap_phi_mux_data_2302_V_read2372_phi_phi_fu_103945_p4 = ap_phi_reg_pp0_iter0_data_2302_V_read2372_phi_reg_103941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2302_V_read2372_rewind_phi_fu_61433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2302_V_read2372_rewind_phi_fu_61433_p6 = data_2302_V_read2372_phi_reg_103941.read();
    } else {
        ap_phi_mux_data_2302_V_read2372_rewind_phi_fu_61433_p6 = data_2302_V_read2372_rewind_reg_61429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2303_V_read2373_phi_phi_fu_103958_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2303_V_read2373_phi_phi_fu_103958_p4 = ap_phi_mux_data_2303_V_read2373_rewind_phi_fu_61447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2303_V_read2373_phi_phi_fu_103958_p4 = data_2303_V_read.read();
        } else {
            ap_phi_mux_data_2303_V_read2373_phi_phi_fu_103958_p4 = ap_phi_reg_pp0_iter0_data_2303_V_read2373_phi_reg_103954.read();
        }
    } else {
        ap_phi_mux_data_2303_V_read2373_phi_phi_fu_103958_p4 = ap_phi_reg_pp0_iter0_data_2303_V_read2373_phi_reg_103954.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2303_V_read2373_rewind_phi_fu_61447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2303_V_read2373_rewind_phi_fu_61447_p6 = data_2303_V_read2373_phi_reg_103954.read();
    } else {
        ap_phi_mux_data_2303_V_read2373_rewind_phi_fu_61447_p6 = data_2303_V_read2373_rewind_reg_61443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2304_V_read2374_phi_phi_fu_103971_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2304_V_read2374_phi_phi_fu_103971_p4 = ap_phi_mux_data_2304_V_read2374_rewind_phi_fu_61461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2304_V_read2374_phi_phi_fu_103971_p4 = data_2304_V_read.read();
        } else {
            ap_phi_mux_data_2304_V_read2374_phi_phi_fu_103971_p4 = ap_phi_reg_pp0_iter0_data_2304_V_read2374_phi_reg_103967.read();
        }
    } else {
        ap_phi_mux_data_2304_V_read2374_phi_phi_fu_103971_p4 = ap_phi_reg_pp0_iter0_data_2304_V_read2374_phi_reg_103967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2304_V_read2374_rewind_phi_fu_61461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2304_V_read2374_rewind_phi_fu_61461_p6 = data_2304_V_read2374_phi_reg_103967.read();
    } else {
        ap_phi_mux_data_2304_V_read2374_rewind_phi_fu_61461_p6 = data_2304_V_read2374_rewind_reg_61457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2305_V_read2375_phi_phi_fu_103984_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2305_V_read2375_phi_phi_fu_103984_p4 = ap_phi_mux_data_2305_V_read2375_rewind_phi_fu_61475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2305_V_read2375_phi_phi_fu_103984_p4 = data_2305_V_read.read();
        } else {
            ap_phi_mux_data_2305_V_read2375_phi_phi_fu_103984_p4 = ap_phi_reg_pp0_iter0_data_2305_V_read2375_phi_reg_103980.read();
        }
    } else {
        ap_phi_mux_data_2305_V_read2375_phi_phi_fu_103984_p4 = ap_phi_reg_pp0_iter0_data_2305_V_read2375_phi_reg_103980.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2305_V_read2375_rewind_phi_fu_61475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2305_V_read2375_rewind_phi_fu_61475_p6 = data_2305_V_read2375_phi_reg_103980.read();
    } else {
        ap_phi_mux_data_2305_V_read2375_rewind_phi_fu_61475_p6 = data_2305_V_read2375_rewind_reg_61471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2306_V_read2376_phi_phi_fu_103997_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2306_V_read2376_phi_phi_fu_103997_p4 = ap_phi_mux_data_2306_V_read2376_rewind_phi_fu_61489_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2306_V_read2376_phi_phi_fu_103997_p4 = data_2306_V_read.read();
        } else {
            ap_phi_mux_data_2306_V_read2376_phi_phi_fu_103997_p4 = ap_phi_reg_pp0_iter0_data_2306_V_read2376_phi_reg_103993.read();
        }
    } else {
        ap_phi_mux_data_2306_V_read2376_phi_phi_fu_103997_p4 = ap_phi_reg_pp0_iter0_data_2306_V_read2376_phi_reg_103993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2306_V_read2376_rewind_phi_fu_61489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2306_V_read2376_rewind_phi_fu_61489_p6 = data_2306_V_read2376_phi_reg_103993.read();
    } else {
        ap_phi_mux_data_2306_V_read2376_rewind_phi_fu_61489_p6 = data_2306_V_read2376_rewind_reg_61485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2307_V_read2377_phi_phi_fu_104010_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2307_V_read2377_phi_phi_fu_104010_p4 = ap_phi_mux_data_2307_V_read2377_rewind_phi_fu_61503_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2307_V_read2377_phi_phi_fu_104010_p4 = data_2307_V_read.read();
        } else {
            ap_phi_mux_data_2307_V_read2377_phi_phi_fu_104010_p4 = ap_phi_reg_pp0_iter0_data_2307_V_read2377_phi_reg_104006.read();
        }
    } else {
        ap_phi_mux_data_2307_V_read2377_phi_phi_fu_104010_p4 = ap_phi_reg_pp0_iter0_data_2307_V_read2377_phi_reg_104006.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2307_V_read2377_rewind_phi_fu_61503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2307_V_read2377_rewind_phi_fu_61503_p6 = data_2307_V_read2377_phi_reg_104006.read();
    } else {
        ap_phi_mux_data_2307_V_read2377_rewind_phi_fu_61503_p6 = data_2307_V_read2377_rewind_reg_61499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2308_V_read2378_phi_phi_fu_104023_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2308_V_read2378_phi_phi_fu_104023_p4 = ap_phi_mux_data_2308_V_read2378_rewind_phi_fu_61517_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2308_V_read2378_phi_phi_fu_104023_p4 = data_2308_V_read.read();
        } else {
            ap_phi_mux_data_2308_V_read2378_phi_phi_fu_104023_p4 = ap_phi_reg_pp0_iter0_data_2308_V_read2378_phi_reg_104019.read();
        }
    } else {
        ap_phi_mux_data_2308_V_read2378_phi_phi_fu_104023_p4 = ap_phi_reg_pp0_iter0_data_2308_V_read2378_phi_reg_104019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2308_V_read2378_rewind_phi_fu_61517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2308_V_read2378_rewind_phi_fu_61517_p6 = data_2308_V_read2378_phi_reg_104019.read();
    } else {
        ap_phi_mux_data_2308_V_read2378_rewind_phi_fu_61517_p6 = data_2308_V_read2378_rewind_reg_61513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2309_V_read2379_phi_phi_fu_104036_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2309_V_read2379_phi_phi_fu_104036_p4 = ap_phi_mux_data_2309_V_read2379_rewind_phi_fu_61531_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2309_V_read2379_phi_phi_fu_104036_p4 = data_2309_V_read.read();
        } else {
            ap_phi_mux_data_2309_V_read2379_phi_phi_fu_104036_p4 = ap_phi_reg_pp0_iter0_data_2309_V_read2379_phi_reg_104032.read();
        }
    } else {
        ap_phi_mux_data_2309_V_read2379_phi_phi_fu_104036_p4 = ap_phi_reg_pp0_iter0_data_2309_V_read2379_phi_reg_104032.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2309_V_read2379_rewind_phi_fu_61531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2309_V_read2379_rewind_phi_fu_61531_p6 = data_2309_V_read2379_phi_reg_104032.read();
    } else {
        ap_phi_mux_data_2309_V_read2379_rewind_phi_fu_61531_p6 = data_2309_V_read2379_rewind_reg_61527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_230_V_read300_phi_phi_fu_77009_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_230_V_read300_phi_phi_fu_77009_p4 = ap_phi_mux_data_230_V_read300_rewind_phi_fu_32425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_230_V_read300_phi_phi_fu_77009_p4 = data_230_V_read.read();
        } else {
            ap_phi_mux_data_230_V_read300_phi_phi_fu_77009_p4 = ap_phi_reg_pp0_iter0_data_230_V_read300_phi_reg_77005.read();
        }
    } else {
        ap_phi_mux_data_230_V_read300_phi_phi_fu_77009_p4 = ap_phi_reg_pp0_iter0_data_230_V_read300_phi_reg_77005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_230_V_read300_rewind_phi_fu_32425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_230_V_read300_rewind_phi_fu_32425_p6 = data_230_V_read300_phi_reg_77005.read();
    } else {
        ap_phi_mux_data_230_V_read300_rewind_phi_fu_32425_p6 = data_230_V_read300_rewind_reg_32421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2310_V_read2380_phi_phi_fu_104049_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2310_V_read2380_phi_phi_fu_104049_p4 = ap_phi_mux_data_2310_V_read2380_rewind_phi_fu_61545_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2310_V_read2380_phi_phi_fu_104049_p4 = data_2310_V_read.read();
        } else {
            ap_phi_mux_data_2310_V_read2380_phi_phi_fu_104049_p4 = ap_phi_reg_pp0_iter0_data_2310_V_read2380_phi_reg_104045.read();
        }
    } else {
        ap_phi_mux_data_2310_V_read2380_phi_phi_fu_104049_p4 = ap_phi_reg_pp0_iter0_data_2310_V_read2380_phi_reg_104045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2310_V_read2380_rewind_phi_fu_61545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2310_V_read2380_rewind_phi_fu_61545_p6 = data_2310_V_read2380_phi_reg_104045.read();
    } else {
        ap_phi_mux_data_2310_V_read2380_rewind_phi_fu_61545_p6 = data_2310_V_read2380_rewind_reg_61541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2311_V_read2381_phi_phi_fu_104062_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2311_V_read2381_phi_phi_fu_104062_p4 = ap_phi_mux_data_2311_V_read2381_rewind_phi_fu_61559_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2311_V_read2381_phi_phi_fu_104062_p4 = data_2311_V_read.read();
        } else {
            ap_phi_mux_data_2311_V_read2381_phi_phi_fu_104062_p4 = ap_phi_reg_pp0_iter0_data_2311_V_read2381_phi_reg_104058.read();
        }
    } else {
        ap_phi_mux_data_2311_V_read2381_phi_phi_fu_104062_p4 = ap_phi_reg_pp0_iter0_data_2311_V_read2381_phi_reg_104058.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2311_V_read2381_rewind_phi_fu_61559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2311_V_read2381_rewind_phi_fu_61559_p6 = data_2311_V_read2381_phi_reg_104058.read();
    } else {
        ap_phi_mux_data_2311_V_read2381_rewind_phi_fu_61559_p6 = data_2311_V_read2381_rewind_reg_61555.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2312_V_read2382_phi_phi_fu_104075_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2312_V_read2382_phi_phi_fu_104075_p4 = ap_phi_mux_data_2312_V_read2382_rewind_phi_fu_61573_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2312_V_read2382_phi_phi_fu_104075_p4 = data_2312_V_read.read();
        } else {
            ap_phi_mux_data_2312_V_read2382_phi_phi_fu_104075_p4 = ap_phi_reg_pp0_iter0_data_2312_V_read2382_phi_reg_104071.read();
        }
    } else {
        ap_phi_mux_data_2312_V_read2382_phi_phi_fu_104075_p4 = ap_phi_reg_pp0_iter0_data_2312_V_read2382_phi_reg_104071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2312_V_read2382_rewind_phi_fu_61573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2312_V_read2382_rewind_phi_fu_61573_p6 = data_2312_V_read2382_phi_reg_104071.read();
    } else {
        ap_phi_mux_data_2312_V_read2382_rewind_phi_fu_61573_p6 = data_2312_V_read2382_rewind_reg_61569.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2313_V_read2383_phi_phi_fu_104088_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2313_V_read2383_phi_phi_fu_104088_p4 = ap_phi_mux_data_2313_V_read2383_rewind_phi_fu_61587_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2313_V_read2383_phi_phi_fu_104088_p4 = data_2313_V_read.read();
        } else {
            ap_phi_mux_data_2313_V_read2383_phi_phi_fu_104088_p4 = ap_phi_reg_pp0_iter0_data_2313_V_read2383_phi_reg_104084.read();
        }
    } else {
        ap_phi_mux_data_2313_V_read2383_phi_phi_fu_104088_p4 = ap_phi_reg_pp0_iter0_data_2313_V_read2383_phi_reg_104084.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2313_V_read2383_rewind_phi_fu_61587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2313_V_read2383_rewind_phi_fu_61587_p6 = data_2313_V_read2383_phi_reg_104084.read();
    } else {
        ap_phi_mux_data_2313_V_read2383_rewind_phi_fu_61587_p6 = data_2313_V_read2383_rewind_reg_61583.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2314_V_read2384_phi_phi_fu_104101_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2314_V_read2384_phi_phi_fu_104101_p4 = ap_phi_mux_data_2314_V_read2384_rewind_phi_fu_61601_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2314_V_read2384_phi_phi_fu_104101_p4 = data_2314_V_read.read();
        } else {
            ap_phi_mux_data_2314_V_read2384_phi_phi_fu_104101_p4 = ap_phi_reg_pp0_iter0_data_2314_V_read2384_phi_reg_104097.read();
        }
    } else {
        ap_phi_mux_data_2314_V_read2384_phi_phi_fu_104101_p4 = ap_phi_reg_pp0_iter0_data_2314_V_read2384_phi_reg_104097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2314_V_read2384_rewind_phi_fu_61601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2314_V_read2384_rewind_phi_fu_61601_p6 = data_2314_V_read2384_phi_reg_104097.read();
    } else {
        ap_phi_mux_data_2314_V_read2384_rewind_phi_fu_61601_p6 = data_2314_V_read2384_rewind_reg_61597.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2315_V_read2385_phi_phi_fu_104114_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2315_V_read2385_phi_phi_fu_104114_p4 = ap_phi_mux_data_2315_V_read2385_rewind_phi_fu_61615_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2315_V_read2385_phi_phi_fu_104114_p4 = data_2315_V_read.read();
        } else {
            ap_phi_mux_data_2315_V_read2385_phi_phi_fu_104114_p4 = ap_phi_reg_pp0_iter0_data_2315_V_read2385_phi_reg_104110.read();
        }
    } else {
        ap_phi_mux_data_2315_V_read2385_phi_phi_fu_104114_p4 = ap_phi_reg_pp0_iter0_data_2315_V_read2385_phi_reg_104110.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2315_V_read2385_rewind_phi_fu_61615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2315_V_read2385_rewind_phi_fu_61615_p6 = data_2315_V_read2385_phi_reg_104110.read();
    } else {
        ap_phi_mux_data_2315_V_read2385_rewind_phi_fu_61615_p6 = data_2315_V_read2385_rewind_reg_61611.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2316_V_read2386_phi_phi_fu_104127_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2316_V_read2386_phi_phi_fu_104127_p4 = ap_phi_mux_data_2316_V_read2386_rewind_phi_fu_61629_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2316_V_read2386_phi_phi_fu_104127_p4 = data_2316_V_read.read();
        } else {
            ap_phi_mux_data_2316_V_read2386_phi_phi_fu_104127_p4 = ap_phi_reg_pp0_iter0_data_2316_V_read2386_phi_reg_104123.read();
        }
    } else {
        ap_phi_mux_data_2316_V_read2386_phi_phi_fu_104127_p4 = ap_phi_reg_pp0_iter0_data_2316_V_read2386_phi_reg_104123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2316_V_read2386_rewind_phi_fu_61629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2316_V_read2386_rewind_phi_fu_61629_p6 = data_2316_V_read2386_phi_reg_104123.read();
    } else {
        ap_phi_mux_data_2316_V_read2386_rewind_phi_fu_61629_p6 = data_2316_V_read2386_rewind_reg_61625.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2317_V_read2387_phi_phi_fu_104140_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2317_V_read2387_phi_phi_fu_104140_p4 = ap_phi_mux_data_2317_V_read2387_rewind_phi_fu_61643_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2317_V_read2387_phi_phi_fu_104140_p4 = data_2317_V_read.read();
        } else {
            ap_phi_mux_data_2317_V_read2387_phi_phi_fu_104140_p4 = ap_phi_reg_pp0_iter0_data_2317_V_read2387_phi_reg_104136.read();
        }
    } else {
        ap_phi_mux_data_2317_V_read2387_phi_phi_fu_104140_p4 = ap_phi_reg_pp0_iter0_data_2317_V_read2387_phi_reg_104136.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2317_V_read2387_rewind_phi_fu_61643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2317_V_read2387_rewind_phi_fu_61643_p6 = data_2317_V_read2387_phi_reg_104136.read();
    } else {
        ap_phi_mux_data_2317_V_read2387_rewind_phi_fu_61643_p6 = data_2317_V_read2387_rewind_reg_61639.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2318_V_read2388_phi_phi_fu_104153_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2318_V_read2388_phi_phi_fu_104153_p4 = ap_phi_mux_data_2318_V_read2388_rewind_phi_fu_61657_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2318_V_read2388_phi_phi_fu_104153_p4 = data_2318_V_read.read();
        } else {
            ap_phi_mux_data_2318_V_read2388_phi_phi_fu_104153_p4 = ap_phi_reg_pp0_iter0_data_2318_V_read2388_phi_reg_104149.read();
        }
    } else {
        ap_phi_mux_data_2318_V_read2388_phi_phi_fu_104153_p4 = ap_phi_reg_pp0_iter0_data_2318_V_read2388_phi_reg_104149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2318_V_read2388_rewind_phi_fu_61657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2318_V_read2388_rewind_phi_fu_61657_p6 = data_2318_V_read2388_phi_reg_104149.read();
    } else {
        ap_phi_mux_data_2318_V_read2388_rewind_phi_fu_61657_p6 = data_2318_V_read2388_rewind_reg_61653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2319_V_read2389_phi_phi_fu_104166_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2319_V_read2389_phi_phi_fu_104166_p4 = ap_phi_mux_data_2319_V_read2389_rewind_phi_fu_61671_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2319_V_read2389_phi_phi_fu_104166_p4 = data_2319_V_read.read();
        } else {
            ap_phi_mux_data_2319_V_read2389_phi_phi_fu_104166_p4 = ap_phi_reg_pp0_iter0_data_2319_V_read2389_phi_reg_104162.read();
        }
    } else {
        ap_phi_mux_data_2319_V_read2389_phi_phi_fu_104166_p4 = ap_phi_reg_pp0_iter0_data_2319_V_read2389_phi_reg_104162.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2319_V_read2389_rewind_phi_fu_61671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2319_V_read2389_rewind_phi_fu_61671_p6 = data_2319_V_read2389_phi_reg_104162.read();
    } else {
        ap_phi_mux_data_2319_V_read2389_rewind_phi_fu_61671_p6 = data_2319_V_read2389_rewind_reg_61667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_231_V_read301_phi_phi_fu_77022_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_231_V_read301_phi_phi_fu_77022_p4 = ap_phi_mux_data_231_V_read301_rewind_phi_fu_32439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_231_V_read301_phi_phi_fu_77022_p4 = data_231_V_read.read();
        } else {
            ap_phi_mux_data_231_V_read301_phi_phi_fu_77022_p4 = ap_phi_reg_pp0_iter0_data_231_V_read301_phi_reg_77018.read();
        }
    } else {
        ap_phi_mux_data_231_V_read301_phi_phi_fu_77022_p4 = ap_phi_reg_pp0_iter0_data_231_V_read301_phi_reg_77018.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_231_V_read301_rewind_phi_fu_32439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_231_V_read301_rewind_phi_fu_32439_p6 = data_231_V_read301_phi_reg_77018.read();
    } else {
        ap_phi_mux_data_231_V_read301_rewind_phi_fu_32439_p6 = data_231_V_read301_rewind_reg_32435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2320_V_read2390_phi_phi_fu_104179_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2320_V_read2390_phi_phi_fu_104179_p4 = ap_phi_mux_data_2320_V_read2390_rewind_phi_fu_61685_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2320_V_read2390_phi_phi_fu_104179_p4 = data_2320_V_read.read();
        } else {
            ap_phi_mux_data_2320_V_read2390_phi_phi_fu_104179_p4 = ap_phi_reg_pp0_iter0_data_2320_V_read2390_phi_reg_104175.read();
        }
    } else {
        ap_phi_mux_data_2320_V_read2390_phi_phi_fu_104179_p4 = ap_phi_reg_pp0_iter0_data_2320_V_read2390_phi_reg_104175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2320_V_read2390_rewind_phi_fu_61685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2320_V_read2390_rewind_phi_fu_61685_p6 = data_2320_V_read2390_phi_reg_104175.read();
    } else {
        ap_phi_mux_data_2320_V_read2390_rewind_phi_fu_61685_p6 = data_2320_V_read2390_rewind_reg_61681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2321_V_read2391_phi_phi_fu_104192_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2321_V_read2391_phi_phi_fu_104192_p4 = ap_phi_mux_data_2321_V_read2391_rewind_phi_fu_61699_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2321_V_read2391_phi_phi_fu_104192_p4 = data_2321_V_read.read();
        } else {
            ap_phi_mux_data_2321_V_read2391_phi_phi_fu_104192_p4 = ap_phi_reg_pp0_iter0_data_2321_V_read2391_phi_reg_104188.read();
        }
    } else {
        ap_phi_mux_data_2321_V_read2391_phi_phi_fu_104192_p4 = ap_phi_reg_pp0_iter0_data_2321_V_read2391_phi_reg_104188.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2321_V_read2391_rewind_phi_fu_61699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2321_V_read2391_rewind_phi_fu_61699_p6 = data_2321_V_read2391_phi_reg_104188.read();
    } else {
        ap_phi_mux_data_2321_V_read2391_rewind_phi_fu_61699_p6 = data_2321_V_read2391_rewind_reg_61695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2322_V_read2392_phi_phi_fu_104205_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2322_V_read2392_phi_phi_fu_104205_p4 = ap_phi_mux_data_2322_V_read2392_rewind_phi_fu_61713_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2322_V_read2392_phi_phi_fu_104205_p4 = data_2322_V_read.read();
        } else {
            ap_phi_mux_data_2322_V_read2392_phi_phi_fu_104205_p4 = ap_phi_reg_pp0_iter0_data_2322_V_read2392_phi_reg_104201.read();
        }
    } else {
        ap_phi_mux_data_2322_V_read2392_phi_phi_fu_104205_p4 = ap_phi_reg_pp0_iter0_data_2322_V_read2392_phi_reg_104201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2322_V_read2392_rewind_phi_fu_61713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2322_V_read2392_rewind_phi_fu_61713_p6 = data_2322_V_read2392_phi_reg_104201.read();
    } else {
        ap_phi_mux_data_2322_V_read2392_rewind_phi_fu_61713_p6 = data_2322_V_read2392_rewind_reg_61709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2323_V_read2393_phi_phi_fu_104218_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2323_V_read2393_phi_phi_fu_104218_p4 = ap_phi_mux_data_2323_V_read2393_rewind_phi_fu_61727_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2323_V_read2393_phi_phi_fu_104218_p4 = data_2323_V_read.read();
        } else {
            ap_phi_mux_data_2323_V_read2393_phi_phi_fu_104218_p4 = ap_phi_reg_pp0_iter0_data_2323_V_read2393_phi_reg_104214.read();
        }
    } else {
        ap_phi_mux_data_2323_V_read2393_phi_phi_fu_104218_p4 = ap_phi_reg_pp0_iter0_data_2323_V_read2393_phi_reg_104214.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2323_V_read2393_rewind_phi_fu_61727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2323_V_read2393_rewind_phi_fu_61727_p6 = data_2323_V_read2393_phi_reg_104214.read();
    } else {
        ap_phi_mux_data_2323_V_read2393_rewind_phi_fu_61727_p6 = data_2323_V_read2393_rewind_reg_61723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2324_V_read2394_phi_phi_fu_104231_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2324_V_read2394_phi_phi_fu_104231_p4 = ap_phi_mux_data_2324_V_read2394_rewind_phi_fu_61741_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2324_V_read2394_phi_phi_fu_104231_p4 = data_2324_V_read.read();
        } else {
            ap_phi_mux_data_2324_V_read2394_phi_phi_fu_104231_p4 = ap_phi_reg_pp0_iter0_data_2324_V_read2394_phi_reg_104227.read();
        }
    } else {
        ap_phi_mux_data_2324_V_read2394_phi_phi_fu_104231_p4 = ap_phi_reg_pp0_iter0_data_2324_V_read2394_phi_reg_104227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2324_V_read2394_rewind_phi_fu_61741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2324_V_read2394_rewind_phi_fu_61741_p6 = data_2324_V_read2394_phi_reg_104227.read();
    } else {
        ap_phi_mux_data_2324_V_read2394_rewind_phi_fu_61741_p6 = data_2324_V_read2394_rewind_reg_61737.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2325_V_read2395_phi_phi_fu_104244_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2325_V_read2395_phi_phi_fu_104244_p4 = ap_phi_mux_data_2325_V_read2395_rewind_phi_fu_61755_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2325_V_read2395_phi_phi_fu_104244_p4 = data_2325_V_read.read();
        } else {
            ap_phi_mux_data_2325_V_read2395_phi_phi_fu_104244_p4 = ap_phi_reg_pp0_iter0_data_2325_V_read2395_phi_reg_104240.read();
        }
    } else {
        ap_phi_mux_data_2325_V_read2395_phi_phi_fu_104244_p4 = ap_phi_reg_pp0_iter0_data_2325_V_read2395_phi_reg_104240.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2325_V_read2395_rewind_phi_fu_61755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2325_V_read2395_rewind_phi_fu_61755_p6 = data_2325_V_read2395_phi_reg_104240.read();
    } else {
        ap_phi_mux_data_2325_V_read2395_rewind_phi_fu_61755_p6 = data_2325_V_read2395_rewind_reg_61751.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2326_V_read2396_phi_phi_fu_104257_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2326_V_read2396_phi_phi_fu_104257_p4 = ap_phi_mux_data_2326_V_read2396_rewind_phi_fu_61769_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2326_V_read2396_phi_phi_fu_104257_p4 = data_2326_V_read.read();
        } else {
            ap_phi_mux_data_2326_V_read2396_phi_phi_fu_104257_p4 = ap_phi_reg_pp0_iter0_data_2326_V_read2396_phi_reg_104253.read();
        }
    } else {
        ap_phi_mux_data_2326_V_read2396_phi_phi_fu_104257_p4 = ap_phi_reg_pp0_iter0_data_2326_V_read2396_phi_reg_104253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2326_V_read2396_rewind_phi_fu_61769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2326_V_read2396_rewind_phi_fu_61769_p6 = data_2326_V_read2396_phi_reg_104253.read();
    } else {
        ap_phi_mux_data_2326_V_read2396_rewind_phi_fu_61769_p6 = data_2326_V_read2396_rewind_reg_61765.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2327_V_read2397_phi_phi_fu_104270_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2327_V_read2397_phi_phi_fu_104270_p4 = ap_phi_mux_data_2327_V_read2397_rewind_phi_fu_61783_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2327_V_read2397_phi_phi_fu_104270_p4 = data_2327_V_read.read();
        } else {
            ap_phi_mux_data_2327_V_read2397_phi_phi_fu_104270_p4 = ap_phi_reg_pp0_iter0_data_2327_V_read2397_phi_reg_104266.read();
        }
    } else {
        ap_phi_mux_data_2327_V_read2397_phi_phi_fu_104270_p4 = ap_phi_reg_pp0_iter0_data_2327_V_read2397_phi_reg_104266.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2327_V_read2397_rewind_phi_fu_61783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2327_V_read2397_rewind_phi_fu_61783_p6 = data_2327_V_read2397_phi_reg_104266.read();
    } else {
        ap_phi_mux_data_2327_V_read2397_rewind_phi_fu_61783_p6 = data_2327_V_read2397_rewind_reg_61779.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2328_V_read2398_phi_phi_fu_104283_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2328_V_read2398_phi_phi_fu_104283_p4 = ap_phi_mux_data_2328_V_read2398_rewind_phi_fu_61797_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2328_V_read2398_phi_phi_fu_104283_p4 = data_2328_V_read.read();
        } else {
            ap_phi_mux_data_2328_V_read2398_phi_phi_fu_104283_p4 = ap_phi_reg_pp0_iter0_data_2328_V_read2398_phi_reg_104279.read();
        }
    } else {
        ap_phi_mux_data_2328_V_read2398_phi_phi_fu_104283_p4 = ap_phi_reg_pp0_iter0_data_2328_V_read2398_phi_reg_104279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2328_V_read2398_rewind_phi_fu_61797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2328_V_read2398_rewind_phi_fu_61797_p6 = data_2328_V_read2398_phi_reg_104279.read();
    } else {
        ap_phi_mux_data_2328_V_read2398_rewind_phi_fu_61797_p6 = data_2328_V_read2398_rewind_reg_61793.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2329_V_read2399_phi_phi_fu_104296_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2329_V_read2399_phi_phi_fu_104296_p4 = ap_phi_mux_data_2329_V_read2399_rewind_phi_fu_61811_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2329_V_read2399_phi_phi_fu_104296_p4 = data_2329_V_read.read();
        } else {
            ap_phi_mux_data_2329_V_read2399_phi_phi_fu_104296_p4 = ap_phi_reg_pp0_iter0_data_2329_V_read2399_phi_reg_104292.read();
        }
    } else {
        ap_phi_mux_data_2329_V_read2399_phi_phi_fu_104296_p4 = ap_phi_reg_pp0_iter0_data_2329_V_read2399_phi_reg_104292.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2329_V_read2399_rewind_phi_fu_61811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2329_V_read2399_rewind_phi_fu_61811_p6 = data_2329_V_read2399_phi_reg_104292.read();
    } else {
        ap_phi_mux_data_2329_V_read2399_rewind_phi_fu_61811_p6 = data_2329_V_read2399_rewind_reg_61807.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_232_V_read302_phi_phi_fu_77035_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_232_V_read302_phi_phi_fu_77035_p4 = ap_phi_mux_data_232_V_read302_rewind_phi_fu_32453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_232_V_read302_phi_phi_fu_77035_p4 = data_232_V_read.read();
        } else {
            ap_phi_mux_data_232_V_read302_phi_phi_fu_77035_p4 = ap_phi_reg_pp0_iter0_data_232_V_read302_phi_reg_77031.read();
        }
    } else {
        ap_phi_mux_data_232_V_read302_phi_phi_fu_77035_p4 = ap_phi_reg_pp0_iter0_data_232_V_read302_phi_reg_77031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_232_V_read302_rewind_phi_fu_32453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_232_V_read302_rewind_phi_fu_32453_p6 = data_232_V_read302_phi_reg_77031.read();
    } else {
        ap_phi_mux_data_232_V_read302_rewind_phi_fu_32453_p6 = data_232_V_read302_rewind_reg_32449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2330_V_read2400_phi_phi_fu_104309_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2330_V_read2400_phi_phi_fu_104309_p4 = ap_phi_mux_data_2330_V_read2400_rewind_phi_fu_61825_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2330_V_read2400_phi_phi_fu_104309_p4 = data_2330_V_read.read();
        } else {
            ap_phi_mux_data_2330_V_read2400_phi_phi_fu_104309_p4 = ap_phi_reg_pp0_iter0_data_2330_V_read2400_phi_reg_104305.read();
        }
    } else {
        ap_phi_mux_data_2330_V_read2400_phi_phi_fu_104309_p4 = ap_phi_reg_pp0_iter0_data_2330_V_read2400_phi_reg_104305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2330_V_read2400_rewind_phi_fu_61825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2330_V_read2400_rewind_phi_fu_61825_p6 = data_2330_V_read2400_phi_reg_104305.read();
    } else {
        ap_phi_mux_data_2330_V_read2400_rewind_phi_fu_61825_p6 = data_2330_V_read2400_rewind_reg_61821.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2331_V_read2401_phi_phi_fu_104322_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2331_V_read2401_phi_phi_fu_104322_p4 = ap_phi_mux_data_2331_V_read2401_rewind_phi_fu_61839_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2331_V_read2401_phi_phi_fu_104322_p4 = data_2331_V_read.read();
        } else {
            ap_phi_mux_data_2331_V_read2401_phi_phi_fu_104322_p4 = ap_phi_reg_pp0_iter0_data_2331_V_read2401_phi_reg_104318.read();
        }
    } else {
        ap_phi_mux_data_2331_V_read2401_phi_phi_fu_104322_p4 = ap_phi_reg_pp0_iter0_data_2331_V_read2401_phi_reg_104318.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2331_V_read2401_rewind_phi_fu_61839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2331_V_read2401_rewind_phi_fu_61839_p6 = data_2331_V_read2401_phi_reg_104318.read();
    } else {
        ap_phi_mux_data_2331_V_read2401_rewind_phi_fu_61839_p6 = data_2331_V_read2401_rewind_reg_61835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2332_V_read2402_phi_phi_fu_104335_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2332_V_read2402_phi_phi_fu_104335_p4 = ap_phi_mux_data_2332_V_read2402_rewind_phi_fu_61853_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2332_V_read2402_phi_phi_fu_104335_p4 = data_2332_V_read.read();
        } else {
            ap_phi_mux_data_2332_V_read2402_phi_phi_fu_104335_p4 = ap_phi_reg_pp0_iter0_data_2332_V_read2402_phi_reg_104331.read();
        }
    } else {
        ap_phi_mux_data_2332_V_read2402_phi_phi_fu_104335_p4 = ap_phi_reg_pp0_iter0_data_2332_V_read2402_phi_reg_104331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2332_V_read2402_rewind_phi_fu_61853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2332_V_read2402_rewind_phi_fu_61853_p6 = data_2332_V_read2402_phi_reg_104331.read();
    } else {
        ap_phi_mux_data_2332_V_read2402_rewind_phi_fu_61853_p6 = data_2332_V_read2402_rewind_reg_61849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2333_V_read2403_phi_phi_fu_104348_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2333_V_read2403_phi_phi_fu_104348_p4 = ap_phi_mux_data_2333_V_read2403_rewind_phi_fu_61867_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2333_V_read2403_phi_phi_fu_104348_p4 = data_2333_V_read.read();
        } else {
            ap_phi_mux_data_2333_V_read2403_phi_phi_fu_104348_p4 = ap_phi_reg_pp0_iter0_data_2333_V_read2403_phi_reg_104344.read();
        }
    } else {
        ap_phi_mux_data_2333_V_read2403_phi_phi_fu_104348_p4 = ap_phi_reg_pp0_iter0_data_2333_V_read2403_phi_reg_104344.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2333_V_read2403_rewind_phi_fu_61867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2333_V_read2403_rewind_phi_fu_61867_p6 = data_2333_V_read2403_phi_reg_104344.read();
    } else {
        ap_phi_mux_data_2333_V_read2403_rewind_phi_fu_61867_p6 = data_2333_V_read2403_rewind_reg_61863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2334_V_read2404_phi_phi_fu_104361_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2334_V_read2404_phi_phi_fu_104361_p4 = ap_phi_mux_data_2334_V_read2404_rewind_phi_fu_61881_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2334_V_read2404_phi_phi_fu_104361_p4 = data_2334_V_read.read();
        } else {
            ap_phi_mux_data_2334_V_read2404_phi_phi_fu_104361_p4 = ap_phi_reg_pp0_iter0_data_2334_V_read2404_phi_reg_104357.read();
        }
    } else {
        ap_phi_mux_data_2334_V_read2404_phi_phi_fu_104361_p4 = ap_phi_reg_pp0_iter0_data_2334_V_read2404_phi_reg_104357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2334_V_read2404_rewind_phi_fu_61881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2334_V_read2404_rewind_phi_fu_61881_p6 = data_2334_V_read2404_phi_reg_104357.read();
    } else {
        ap_phi_mux_data_2334_V_read2404_rewind_phi_fu_61881_p6 = data_2334_V_read2404_rewind_reg_61877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2335_V_read2405_phi_phi_fu_104374_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2335_V_read2405_phi_phi_fu_104374_p4 = ap_phi_mux_data_2335_V_read2405_rewind_phi_fu_61895_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2335_V_read2405_phi_phi_fu_104374_p4 = data_2335_V_read.read();
        } else {
            ap_phi_mux_data_2335_V_read2405_phi_phi_fu_104374_p4 = ap_phi_reg_pp0_iter0_data_2335_V_read2405_phi_reg_104370.read();
        }
    } else {
        ap_phi_mux_data_2335_V_read2405_phi_phi_fu_104374_p4 = ap_phi_reg_pp0_iter0_data_2335_V_read2405_phi_reg_104370.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2335_V_read2405_rewind_phi_fu_61895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2335_V_read2405_rewind_phi_fu_61895_p6 = data_2335_V_read2405_phi_reg_104370.read();
    } else {
        ap_phi_mux_data_2335_V_read2405_rewind_phi_fu_61895_p6 = data_2335_V_read2405_rewind_reg_61891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2336_V_read2406_phi_phi_fu_104387_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2336_V_read2406_phi_phi_fu_104387_p4 = ap_phi_mux_data_2336_V_read2406_rewind_phi_fu_61909_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2336_V_read2406_phi_phi_fu_104387_p4 = data_2336_V_read.read();
        } else {
            ap_phi_mux_data_2336_V_read2406_phi_phi_fu_104387_p4 = ap_phi_reg_pp0_iter0_data_2336_V_read2406_phi_reg_104383.read();
        }
    } else {
        ap_phi_mux_data_2336_V_read2406_phi_phi_fu_104387_p4 = ap_phi_reg_pp0_iter0_data_2336_V_read2406_phi_reg_104383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2336_V_read2406_rewind_phi_fu_61909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2336_V_read2406_rewind_phi_fu_61909_p6 = data_2336_V_read2406_phi_reg_104383.read();
    } else {
        ap_phi_mux_data_2336_V_read2406_rewind_phi_fu_61909_p6 = data_2336_V_read2406_rewind_reg_61905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2337_V_read2407_phi_phi_fu_104400_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2337_V_read2407_phi_phi_fu_104400_p4 = ap_phi_mux_data_2337_V_read2407_rewind_phi_fu_61923_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2337_V_read2407_phi_phi_fu_104400_p4 = data_2337_V_read.read();
        } else {
            ap_phi_mux_data_2337_V_read2407_phi_phi_fu_104400_p4 = ap_phi_reg_pp0_iter0_data_2337_V_read2407_phi_reg_104396.read();
        }
    } else {
        ap_phi_mux_data_2337_V_read2407_phi_phi_fu_104400_p4 = ap_phi_reg_pp0_iter0_data_2337_V_read2407_phi_reg_104396.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2337_V_read2407_rewind_phi_fu_61923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2337_V_read2407_rewind_phi_fu_61923_p6 = data_2337_V_read2407_phi_reg_104396.read();
    } else {
        ap_phi_mux_data_2337_V_read2407_rewind_phi_fu_61923_p6 = data_2337_V_read2407_rewind_reg_61919.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2338_V_read2408_phi_phi_fu_104413_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2338_V_read2408_phi_phi_fu_104413_p4 = ap_phi_mux_data_2338_V_read2408_rewind_phi_fu_61937_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2338_V_read2408_phi_phi_fu_104413_p4 = data_2338_V_read.read();
        } else {
            ap_phi_mux_data_2338_V_read2408_phi_phi_fu_104413_p4 = ap_phi_reg_pp0_iter0_data_2338_V_read2408_phi_reg_104409.read();
        }
    } else {
        ap_phi_mux_data_2338_V_read2408_phi_phi_fu_104413_p4 = ap_phi_reg_pp0_iter0_data_2338_V_read2408_phi_reg_104409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2338_V_read2408_rewind_phi_fu_61937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2338_V_read2408_rewind_phi_fu_61937_p6 = data_2338_V_read2408_phi_reg_104409.read();
    } else {
        ap_phi_mux_data_2338_V_read2408_rewind_phi_fu_61937_p6 = data_2338_V_read2408_rewind_reg_61933.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2339_V_read2409_phi_phi_fu_104426_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2339_V_read2409_phi_phi_fu_104426_p4 = ap_phi_mux_data_2339_V_read2409_rewind_phi_fu_61951_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2339_V_read2409_phi_phi_fu_104426_p4 = data_2339_V_read.read();
        } else {
            ap_phi_mux_data_2339_V_read2409_phi_phi_fu_104426_p4 = ap_phi_reg_pp0_iter0_data_2339_V_read2409_phi_reg_104422.read();
        }
    } else {
        ap_phi_mux_data_2339_V_read2409_phi_phi_fu_104426_p4 = ap_phi_reg_pp0_iter0_data_2339_V_read2409_phi_reg_104422.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2339_V_read2409_rewind_phi_fu_61951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2339_V_read2409_rewind_phi_fu_61951_p6 = data_2339_V_read2409_phi_reg_104422.read();
    } else {
        ap_phi_mux_data_2339_V_read2409_rewind_phi_fu_61951_p6 = data_2339_V_read2409_rewind_reg_61947.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_233_V_read303_phi_phi_fu_77048_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_233_V_read303_phi_phi_fu_77048_p4 = ap_phi_mux_data_233_V_read303_rewind_phi_fu_32467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_233_V_read303_phi_phi_fu_77048_p4 = data_233_V_read.read();
        } else {
            ap_phi_mux_data_233_V_read303_phi_phi_fu_77048_p4 = ap_phi_reg_pp0_iter0_data_233_V_read303_phi_reg_77044.read();
        }
    } else {
        ap_phi_mux_data_233_V_read303_phi_phi_fu_77048_p4 = ap_phi_reg_pp0_iter0_data_233_V_read303_phi_reg_77044.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_233_V_read303_rewind_phi_fu_32467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_233_V_read303_rewind_phi_fu_32467_p6 = data_233_V_read303_phi_reg_77044.read();
    } else {
        ap_phi_mux_data_233_V_read303_rewind_phi_fu_32467_p6 = data_233_V_read303_rewind_reg_32463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2340_V_read2410_phi_phi_fu_104439_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2340_V_read2410_phi_phi_fu_104439_p4 = ap_phi_mux_data_2340_V_read2410_rewind_phi_fu_61965_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2340_V_read2410_phi_phi_fu_104439_p4 = data_2340_V_read.read();
        } else {
            ap_phi_mux_data_2340_V_read2410_phi_phi_fu_104439_p4 = ap_phi_reg_pp0_iter0_data_2340_V_read2410_phi_reg_104435.read();
        }
    } else {
        ap_phi_mux_data_2340_V_read2410_phi_phi_fu_104439_p4 = ap_phi_reg_pp0_iter0_data_2340_V_read2410_phi_reg_104435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2340_V_read2410_rewind_phi_fu_61965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2340_V_read2410_rewind_phi_fu_61965_p6 = data_2340_V_read2410_phi_reg_104435.read();
    } else {
        ap_phi_mux_data_2340_V_read2410_rewind_phi_fu_61965_p6 = data_2340_V_read2410_rewind_reg_61961.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2341_V_read2411_phi_phi_fu_104452_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2341_V_read2411_phi_phi_fu_104452_p4 = ap_phi_mux_data_2341_V_read2411_rewind_phi_fu_61979_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2341_V_read2411_phi_phi_fu_104452_p4 = data_2341_V_read.read();
        } else {
            ap_phi_mux_data_2341_V_read2411_phi_phi_fu_104452_p4 = ap_phi_reg_pp0_iter0_data_2341_V_read2411_phi_reg_104448.read();
        }
    } else {
        ap_phi_mux_data_2341_V_read2411_phi_phi_fu_104452_p4 = ap_phi_reg_pp0_iter0_data_2341_V_read2411_phi_reg_104448.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2341_V_read2411_rewind_phi_fu_61979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2341_V_read2411_rewind_phi_fu_61979_p6 = data_2341_V_read2411_phi_reg_104448.read();
    } else {
        ap_phi_mux_data_2341_V_read2411_rewind_phi_fu_61979_p6 = data_2341_V_read2411_rewind_reg_61975.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2342_V_read2412_phi_phi_fu_104465_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2342_V_read2412_phi_phi_fu_104465_p4 = ap_phi_mux_data_2342_V_read2412_rewind_phi_fu_61993_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2342_V_read2412_phi_phi_fu_104465_p4 = data_2342_V_read.read();
        } else {
            ap_phi_mux_data_2342_V_read2412_phi_phi_fu_104465_p4 = ap_phi_reg_pp0_iter0_data_2342_V_read2412_phi_reg_104461.read();
        }
    } else {
        ap_phi_mux_data_2342_V_read2412_phi_phi_fu_104465_p4 = ap_phi_reg_pp0_iter0_data_2342_V_read2412_phi_reg_104461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2342_V_read2412_rewind_phi_fu_61993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2342_V_read2412_rewind_phi_fu_61993_p6 = data_2342_V_read2412_phi_reg_104461.read();
    } else {
        ap_phi_mux_data_2342_V_read2412_rewind_phi_fu_61993_p6 = data_2342_V_read2412_rewind_reg_61989.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2343_V_read2413_phi_phi_fu_104478_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2343_V_read2413_phi_phi_fu_104478_p4 = ap_phi_mux_data_2343_V_read2413_rewind_phi_fu_62007_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2343_V_read2413_phi_phi_fu_104478_p4 = data_2343_V_read.read();
        } else {
            ap_phi_mux_data_2343_V_read2413_phi_phi_fu_104478_p4 = ap_phi_reg_pp0_iter0_data_2343_V_read2413_phi_reg_104474.read();
        }
    } else {
        ap_phi_mux_data_2343_V_read2413_phi_phi_fu_104478_p4 = ap_phi_reg_pp0_iter0_data_2343_V_read2413_phi_reg_104474.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2343_V_read2413_rewind_phi_fu_62007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2343_V_read2413_rewind_phi_fu_62007_p6 = data_2343_V_read2413_phi_reg_104474.read();
    } else {
        ap_phi_mux_data_2343_V_read2413_rewind_phi_fu_62007_p6 = data_2343_V_read2413_rewind_reg_62003.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2344_V_read2414_phi_phi_fu_104491_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2344_V_read2414_phi_phi_fu_104491_p4 = ap_phi_mux_data_2344_V_read2414_rewind_phi_fu_62021_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2344_V_read2414_phi_phi_fu_104491_p4 = data_2344_V_read.read();
        } else {
            ap_phi_mux_data_2344_V_read2414_phi_phi_fu_104491_p4 = ap_phi_reg_pp0_iter0_data_2344_V_read2414_phi_reg_104487.read();
        }
    } else {
        ap_phi_mux_data_2344_V_read2414_phi_phi_fu_104491_p4 = ap_phi_reg_pp0_iter0_data_2344_V_read2414_phi_reg_104487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2344_V_read2414_rewind_phi_fu_62021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2344_V_read2414_rewind_phi_fu_62021_p6 = data_2344_V_read2414_phi_reg_104487.read();
    } else {
        ap_phi_mux_data_2344_V_read2414_rewind_phi_fu_62021_p6 = data_2344_V_read2414_rewind_reg_62017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2345_V_read2415_phi_phi_fu_104504_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2345_V_read2415_phi_phi_fu_104504_p4 = ap_phi_mux_data_2345_V_read2415_rewind_phi_fu_62035_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2345_V_read2415_phi_phi_fu_104504_p4 = data_2345_V_read.read();
        } else {
            ap_phi_mux_data_2345_V_read2415_phi_phi_fu_104504_p4 = ap_phi_reg_pp0_iter0_data_2345_V_read2415_phi_reg_104500.read();
        }
    } else {
        ap_phi_mux_data_2345_V_read2415_phi_phi_fu_104504_p4 = ap_phi_reg_pp0_iter0_data_2345_V_read2415_phi_reg_104500.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2345_V_read2415_rewind_phi_fu_62035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2345_V_read2415_rewind_phi_fu_62035_p6 = data_2345_V_read2415_phi_reg_104500.read();
    } else {
        ap_phi_mux_data_2345_V_read2415_rewind_phi_fu_62035_p6 = data_2345_V_read2415_rewind_reg_62031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2346_V_read2416_phi_phi_fu_104517_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2346_V_read2416_phi_phi_fu_104517_p4 = ap_phi_mux_data_2346_V_read2416_rewind_phi_fu_62049_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2346_V_read2416_phi_phi_fu_104517_p4 = data_2346_V_read.read();
        } else {
            ap_phi_mux_data_2346_V_read2416_phi_phi_fu_104517_p4 = ap_phi_reg_pp0_iter0_data_2346_V_read2416_phi_reg_104513.read();
        }
    } else {
        ap_phi_mux_data_2346_V_read2416_phi_phi_fu_104517_p4 = ap_phi_reg_pp0_iter0_data_2346_V_read2416_phi_reg_104513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2346_V_read2416_rewind_phi_fu_62049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2346_V_read2416_rewind_phi_fu_62049_p6 = data_2346_V_read2416_phi_reg_104513.read();
    } else {
        ap_phi_mux_data_2346_V_read2416_rewind_phi_fu_62049_p6 = data_2346_V_read2416_rewind_reg_62045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2347_V_read2417_phi_phi_fu_104530_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2347_V_read2417_phi_phi_fu_104530_p4 = ap_phi_mux_data_2347_V_read2417_rewind_phi_fu_62063_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2347_V_read2417_phi_phi_fu_104530_p4 = data_2347_V_read.read();
        } else {
            ap_phi_mux_data_2347_V_read2417_phi_phi_fu_104530_p4 = ap_phi_reg_pp0_iter0_data_2347_V_read2417_phi_reg_104526.read();
        }
    } else {
        ap_phi_mux_data_2347_V_read2417_phi_phi_fu_104530_p4 = ap_phi_reg_pp0_iter0_data_2347_V_read2417_phi_reg_104526.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2347_V_read2417_rewind_phi_fu_62063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2347_V_read2417_rewind_phi_fu_62063_p6 = data_2347_V_read2417_phi_reg_104526.read();
    } else {
        ap_phi_mux_data_2347_V_read2417_rewind_phi_fu_62063_p6 = data_2347_V_read2417_rewind_reg_62059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2348_V_read2418_phi_phi_fu_104543_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2348_V_read2418_phi_phi_fu_104543_p4 = ap_phi_mux_data_2348_V_read2418_rewind_phi_fu_62077_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2348_V_read2418_phi_phi_fu_104543_p4 = data_2348_V_read.read();
        } else {
            ap_phi_mux_data_2348_V_read2418_phi_phi_fu_104543_p4 = ap_phi_reg_pp0_iter0_data_2348_V_read2418_phi_reg_104539.read();
        }
    } else {
        ap_phi_mux_data_2348_V_read2418_phi_phi_fu_104543_p4 = ap_phi_reg_pp0_iter0_data_2348_V_read2418_phi_reg_104539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2348_V_read2418_rewind_phi_fu_62077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2348_V_read2418_rewind_phi_fu_62077_p6 = data_2348_V_read2418_phi_reg_104539.read();
    } else {
        ap_phi_mux_data_2348_V_read2418_rewind_phi_fu_62077_p6 = data_2348_V_read2418_rewind_reg_62073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2349_V_read2419_phi_phi_fu_104556_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2349_V_read2419_phi_phi_fu_104556_p4 = ap_phi_mux_data_2349_V_read2419_rewind_phi_fu_62091_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2349_V_read2419_phi_phi_fu_104556_p4 = data_2349_V_read.read();
        } else {
            ap_phi_mux_data_2349_V_read2419_phi_phi_fu_104556_p4 = ap_phi_reg_pp0_iter0_data_2349_V_read2419_phi_reg_104552.read();
        }
    } else {
        ap_phi_mux_data_2349_V_read2419_phi_phi_fu_104556_p4 = ap_phi_reg_pp0_iter0_data_2349_V_read2419_phi_reg_104552.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2349_V_read2419_rewind_phi_fu_62091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2349_V_read2419_rewind_phi_fu_62091_p6 = data_2349_V_read2419_phi_reg_104552.read();
    } else {
        ap_phi_mux_data_2349_V_read2419_rewind_phi_fu_62091_p6 = data_2349_V_read2419_rewind_reg_62087.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_234_V_read304_phi_phi_fu_77061_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_234_V_read304_phi_phi_fu_77061_p4 = ap_phi_mux_data_234_V_read304_rewind_phi_fu_32481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_234_V_read304_phi_phi_fu_77061_p4 = data_234_V_read.read();
        } else {
            ap_phi_mux_data_234_V_read304_phi_phi_fu_77061_p4 = ap_phi_reg_pp0_iter0_data_234_V_read304_phi_reg_77057.read();
        }
    } else {
        ap_phi_mux_data_234_V_read304_phi_phi_fu_77061_p4 = ap_phi_reg_pp0_iter0_data_234_V_read304_phi_reg_77057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_234_V_read304_rewind_phi_fu_32481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_234_V_read304_rewind_phi_fu_32481_p6 = data_234_V_read304_phi_reg_77057.read();
    } else {
        ap_phi_mux_data_234_V_read304_rewind_phi_fu_32481_p6 = data_234_V_read304_rewind_reg_32477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2350_V_read2420_phi_phi_fu_104569_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2350_V_read2420_phi_phi_fu_104569_p4 = ap_phi_mux_data_2350_V_read2420_rewind_phi_fu_62105_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2350_V_read2420_phi_phi_fu_104569_p4 = data_2350_V_read.read();
        } else {
            ap_phi_mux_data_2350_V_read2420_phi_phi_fu_104569_p4 = ap_phi_reg_pp0_iter0_data_2350_V_read2420_phi_reg_104565.read();
        }
    } else {
        ap_phi_mux_data_2350_V_read2420_phi_phi_fu_104569_p4 = ap_phi_reg_pp0_iter0_data_2350_V_read2420_phi_reg_104565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2350_V_read2420_rewind_phi_fu_62105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2350_V_read2420_rewind_phi_fu_62105_p6 = data_2350_V_read2420_phi_reg_104565.read();
    } else {
        ap_phi_mux_data_2350_V_read2420_rewind_phi_fu_62105_p6 = data_2350_V_read2420_rewind_reg_62101.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2351_V_read2421_phi_phi_fu_104582_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2351_V_read2421_phi_phi_fu_104582_p4 = ap_phi_mux_data_2351_V_read2421_rewind_phi_fu_62119_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2351_V_read2421_phi_phi_fu_104582_p4 = data_2351_V_read.read();
        } else {
            ap_phi_mux_data_2351_V_read2421_phi_phi_fu_104582_p4 = ap_phi_reg_pp0_iter0_data_2351_V_read2421_phi_reg_104578.read();
        }
    } else {
        ap_phi_mux_data_2351_V_read2421_phi_phi_fu_104582_p4 = ap_phi_reg_pp0_iter0_data_2351_V_read2421_phi_reg_104578.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2351_V_read2421_rewind_phi_fu_62119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2351_V_read2421_rewind_phi_fu_62119_p6 = data_2351_V_read2421_phi_reg_104578.read();
    } else {
        ap_phi_mux_data_2351_V_read2421_rewind_phi_fu_62119_p6 = data_2351_V_read2421_rewind_reg_62115.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2352_V_read2422_phi_phi_fu_104595_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2352_V_read2422_phi_phi_fu_104595_p4 = ap_phi_mux_data_2352_V_read2422_rewind_phi_fu_62133_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2352_V_read2422_phi_phi_fu_104595_p4 = data_2352_V_read.read();
        } else {
            ap_phi_mux_data_2352_V_read2422_phi_phi_fu_104595_p4 = ap_phi_reg_pp0_iter0_data_2352_V_read2422_phi_reg_104591.read();
        }
    } else {
        ap_phi_mux_data_2352_V_read2422_phi_phi_fu_104595_p4 = ap_phi_reg_pp0_iter0_data_2352_V_read2422_phi_reg_104591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2352_V_read2422_rewind_phi_fu_62133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2352_V_read2422_rewind_phi_fu_62133_p6 = data_2352_V_read2422_phi_reg_104591.read();
    } else {
        ap_phi_mux_data_2352_V_read2422_rewind_phi_fu_62133_p6 = data_2352_V_read2422_rewind_reg_62129.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2353_V_read2423_phi_phi_fu_104608_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2353_V_read2423_phi_phi_fu_104608_p4 = ap_phi_mux_data_2353_V_read2423_rewind_phi_fu_62147_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2353_V_read2423_phi_phi_fu_104608_p4 = data_2353_V_read.read();
        } else {
            ap_phi_mux_data_2353_V_read2423_phi_phi_fu_104608_p4 = ap_phi_reg_pp0_iter0_data_2353_V_read2423_phi_reg_104604.read();
        }
    } else {
        ap_phi_mux_data_2353_V_read2423_phi_phi_fu_104608_p4 = ap_phi_reg_pp0_iter0_data_2353_V_read2423_phi_reg_104604.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2353_V_read2423_rewind_phi_fu_62147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2353_V_read2423_rewind_phi_fu_62147_p6 = data_2353_V_read2423_phi_reg_104604.read();
    } else {
        ap_phi_mux_data_2353_V_read2423_rewind_phi_fu_62147_p6 = data_2353_V_read2423_rewind_reg_62143.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2354_V_read2424_phi_phi_fu_104621_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2354_V_read2424_phi_phi_fu_104621_p4 = ap_phi_mux_data_2354_V_read2424_rewind_phi_fu_62161_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2354_V_read2424_phi_phi_fu_104621_p4 = data_2354_V_read.read();
        } else {
            ap_phi_mux_data_2354_V_read2424_phi_phi_fu_104621_p4 = ap_phi_reg_pp0_iter0_data_2354_V_read2424_phi_reg_104617.read();
        }
    } else {
        ap_phi_mux_data_2354_V_read2424_phi_phi_fu_104621_p4 = ap_phi_reg_pp0_iter0_data_2354_V_read2424_phi_reg_104617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2354_V_read2424_rewind_phi_fu_62161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2354_V_read2424_rewind_phi_fu_62161_p6 = data_2354_V_read2424_phi_reg_104617.read();
    } else {
        ap_phi_mux_data_2354_V_read2424_rewind_phi_fu_62161_p6 = data_2354_V_read2424_rewind_reg_62157.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2355_V_read2425_phi_phi_fu_104634_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2355_V_read2425_phi_phi_fu_104634_p4 = ap_phi_mux_data_2355_V_read2425_rewind_phi_fu_62175_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2355_V_read2425_phi_phi_fu_104634_p4 = data_2355_V_read.read();
        } else {
            ap_phi_mux_data_2355_V_read2425_phi_phi_fu_104634_p4 = ap_phi_reg_pp0_iter0_data_2355_V_read2425_phi_reg_104630.read();
        }
    } else {
        ap_phi_mux_data_2355_V_read2425_phi_phi_fu_104634_p4 = ap_phi_reg_pp0_iter0_data_2355_V_read2425_phi_reg_104630.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2355_V_read2425_rewind_phi_fu_62175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2355_V_read2425_rewind_phi_fu_62175_p6 = data_2355_V_read2425_phi_reg_104630.read();
    } else {
        ap_phi_mux_data_2355_V_read2425_rewind_phi_fu_62175_p6 = data_2355_V_read2425_rewind_reg_62171.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2356_V_read2426_phi_phi_fu_104647_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2356_V_read2426_phi_phi_fu_104647_p4 = ap_phi_mux_data_2356_V_read2426_rewind_phi_fu_62189_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2356_V_read2426_phi_phi_fu_104647_p4 = data_2356_V_read.read();
        } else {
            ap_phi_mux_data_2356_V_read2426_phi_phi_fu_104647_p4 = ap_phi_reg_pp0_iter0_data_2356_V_read2426_phi_reg_104643.read();
        }
    } else {
        ap_phi_mux_data_2356_V_read2426_phi_phi_fu_104647_p4 = ap_phi_reg_pp0_iter0_data_2356_V_read2426_phi_reg_104643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2356_V_read2426_rewind_phi_fu_62189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2356_V_read2426_rewind_phi_fu_62189_p6 = data_2356_V_read2426_phi_reg_104643.read();
    } else {
        ap_phi_mux_data_2356_V_read2426_rewind_phi_fu_62189_p6 = data_2356_V_read2426_rewind_reg_62185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2357_V_read2427_phi_phi_fu_104660_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2357_V_read2427_phi_phi_fu_104660_p4 = ap_phi_mux_data_2357_V_read2427_rewind_phi_fu_62203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2357_V_read2427_phi_phi_fu_104660_p4 = data_2357_V_read.read();
        } else {
            ap_phi_mux_data_2357_V_read2427_phi_phi_fu_104660_p4 = ap_phi_reg_pp0_iter0_data_2357_V_read2427_phi_reg_104656.read();
        }
    } else {
        ap_phi_mux_data_2357_V_read2427_phi_phi_fu_104660_p4 = ap_phi_reg_pp0_iter0_data_2357_V_read2427_phi_reg_104656.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2357_V_read2427_rewind_phi_fu_62203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2357_V_read2427_rewind_phi_fu_62203_p6 = data_2357_V_read2427_phi_reg_104656.read();
    } else {
        ap_phi_mux_data_2357_V_read2427_rewind_phi_fu_62203_p6 = data_2357_V_read2427_rewind_reg_62199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2358_V_read2428_phi_phi_fu_104673_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2358_V_read2428_phi_phi_fu_104673_p4 = ap_phi_mux_data_2358_V_read2428_rewind_phi_fu_62217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2358_V_read2428_phi_phi_fu_104673_p4 = data_2358_V_read.read();
        } else {
            ap_phi_mux_data_2358_V_read2428_phi_phi_fu_104673_p4 = ap_phi_reg_pp0_iter0_data_2358_V_read2428_phi_reg_104669.read();
        }
    } else {
        ap_phi_mux_data_2358_V_read2428_phi_phi_fu_104673_p4 = ap_phi_reg_pp0_iter0_data_2358_V_read2428_phi_reg_104669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2358_V_read2428_rewind_phi_fu_62217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2358_V_read2428_rewind_phi_fu_62217_p6 = data_2358_V_read2428_phi_reg_104669.read();
    } else {
        ap_phi_mux_data_2358_V_read2428_rewind_phi_fu_62217_p6 = data_2358_V_read2428_rewind_reg_62213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2359_V_read2429_phi_phi_fu_104686_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2359_V_read2429_phi_phi_fu_104686_p4 = ap_phi_mux_data_2359_V_read2429_rewind_phi_fu_62231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2359_V_read2429_phi_phi_fu_104686_p4 = data_2359_V_read.read();
        } else {
            ap_phi_mux_data_2359_V_read2429_phi_phi_fu_104686_p4 = ap_phi_reg_pp0_iter0_data_2359_V_read2429_phi_reg_104682.read();
        }
    } else {
        ap_phi_mux_data_2359_V_read2429_phi_phi_fu_104686_p4 = ap_phi_reg_pp0_iter0_data_2359_V_read2429_phi_reg_104682.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2359_V_read2429_rewind_phi_fu_62231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2359_V_read2429_rewind_phi_fu_62231_p6 = data_2359_V_read2429_phi_reg_104682.read();
    } else {
        ap_phi_mux_data_2359_V_read2429_rewind_phi_fu_62231_p6 = data_2359_V_read2429_rewind_reg_62227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_235_V_read305_phi_phi_fu_77074_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_235_V_read305_phi_phi_fu_77074_p4 = ap_phi_mux_data_235_V_read305_rewind_phi_fu_32495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_235_V_read305_phi_phi_fu_77074_p4 = data_235_V_read.read();
        } else {
            ap_phi_mux_data_235_V_read305_phi_phi_fu_77074_p4 = ap_phi_reg_pp0_iter0_data_235_V_read305_phi_reg_77070.read();
        }
    } else {
        ap_phi_mux_data_235_V_read305_phi_phi_fu_77074_p4 = ap_phi_reg_pp0_iter0_data_235_V_read305_phi_reg_77070.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_235_V_read305_rewind_phi_fu_32495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_235_V_read305_rewind_phi_fu_32495_p6 = data_235_V_read305_phi_reg_77070.read();
    } else {
        ap_phi_mux_data_235_V_read305_rewind_phi_fu_32495_p6 = data_235_V_read305_rewind_reg_32491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2360_V_read2430_phi_phi_fu_104699_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2360_V_read2430_phi_phi_fu_104699_p4 = ap_phi_mux_data_2360_V_read2430_rewind_phi_fu_62245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2360_V_read2430_phi_phi_fu_104699_p4 = data_2360_V_read.read();
        } else {
            ap_phi_mux_data_2360_V_read2430_phi_phi_fu_104699_p4 = ap_phi_reg_pp0_iter0_data_2360_V_read2430_phi_reg_104695.read();
        }
    } else {
        ap_phi_mux_data_2360_V_read2430_phi_phi_fu_104699_p4 = ap_phi_reg_pp0_iter0_data_2360_V_read2430_phi_reg_104695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2360_V_read2430_rewind_phi_fu_62245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2360_V_read2430_rewind_phi_fu_62245_p6 = data_2360_V_read2430_phi_reg_104695.read();
    } else {
        ap_phi_mux_data_2360_V_read2430_rewind_phi_fu_62245_p6 = data_2360_V_read2430_rewind_reg_62241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2361_V_read2431_phi_phi_fu_104712_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2361_V_read2431_phi_phi_fu_104712_p4 = ap_phi_mux_data_2361_V_read2431_rewind_phi_fu_62259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2361_V_read2431_phi_phi_fu_104712_p4 = data_2361_V_read.read();
        } else {
            ap_phi_mux_data_2361_V_read2431_phi_phi_fu_104712_p4 = ap_phi_reg_pp0_iter0_data_2361_V_read2431_phi_reg_104708.read();
        }
    } else {
        ap_phi_mux_data_2361_V_read2431_phi_phi_fu_104712_p4 = ap_phi_reg_pp0_iter0_data_2361_V_read2431_phi_reg_104708.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2361_V_read2431_rewind_phi_fu_62259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2361_V_read2431_rewind_phi_fu_62259_p6 = data_2361_V_read2431_phi_reg_104708.read();
    } else {
        ap_phi_mux_data_2361_V_read2431_rewind_phi_fu_62259_p6 = data_2361_V_read2431_rewind_reg_62255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2362_V_read2432_phi_phi_fu_104725_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2362_V_read2432_phi_phi_fu_104725_p4 = ap_phi_mux_data_2362_V_read2432_rewind_phi_fu_62273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2362_V_read2432_phi_phi_fu_104725_p4 = data_2362_V_read.read();
        } else {
            ap_phi_mux_data_2362_V_read2432_phi_phi_fu_104725_p4 = ap_phi_reg_pp0_iter0_data_2362_V_read2432_phi_reg_104721.read();
        }
    } else {
        ap_phi_mux_data_2362_V_read2432_phi_phi_fu_104725_p4 = ap_phi_reg_pp0_iter0_data_2362_V_read2432_phi_reg_104721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2362_V_read2432_rewind_phi_fu_62273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2362_V_read2432_rewind_phi_fu_62273_p6 = data_2362_V_read2432_phi_reg_104721.read();
    } else {
        ap_phi_mux_data_2362_V_read2432_rewind_phi_fu_62273_p6 = data_2362_V_read2432_rewind_reg_62269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2363_V_read2433_phi_phi_fu_104738_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2363_V_read2433_phi_phi_fu_104738_p4 = ap_phi_mux_data_2363_V_read2433_rewind_phi_fu_62287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2363_V_read2433_phi_phi_fu_104738_p4 = data_2363_V_read.read();
        } else {
            ap_phi_mux_data_2363_V_read2433_phi_phi_fu_104738_p4 = ap_phi_reg_pp0_iter0_data_2363_V_read2433_phi_reg_104734.read();
        }
    } else {
        ap_phi_mux_data_2363_V_read2433_phi_phi_fu_104738_p4 = ap_phi_reg_pp0_iter0_data_2363_V_read2433_phi_reg_104734.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2363_V_read2433_rewind_phi_fu_62287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2363_V_read2433_rewind_phi_fu_62287_p6 = data_2363_V_read2433_phi_reg_104734.read();
    } else {
        ap_phi_mux_data_2363_V_read2433_rewind_phi_fu_62287_p6 = data_2363_V_read2433_rewind_reg_62283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2364_V_read2434_phi_phi_fu_104751_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2364_V_read2434_phi_phi_fu_104751_p4 = ap_phi_mux_data_2364_V_read2434_rewind_phi_fu_62301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2364_V_read2434_phi_phi_fu_104751_p4 = data_2364_V_read.read();
        } else {
            ap_phi_mux_data_2364_V_read2434_phi_phi_fu_104751_p4 = ap_phi_reg_pp0_iter0_data_2364_V_read2434_phi_reg_104747.read();
        }
    } else {
        ap_phi_mux_data_2364_V_read2434_phi_phi_fu_104751_p4 = ap_phi_reg_pp0_iter0_data_2364_V_read2434_phi_reg_104747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2364_V_read2434_rewind_phi_fu_62301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2364_V_read2434_rewind_phi_fu_62301_p6 = data_2364_V_read2434_phi_reg_104747.read();
    } else {
        ap_phi_mux_data_2364_V_read2434_rewind_phi_fu_62301_p6 = data_2364_V_read2434_rewind_reg_62297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2365_V_read2435_phi_phi_fu_104764_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2365_V_read2435_phi_phi_fu_104764_p4 = ap_phi_mux_data_2365_V_read2435_rewind_phi_fu_62315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2365_V_read2435_phi_phi_fu_104764_p4 = data_2365_V_read.read();
        } else {
            ap_phi_mux_data_2365_V_read2435_phi_phi_fu_104764_p4 = ap_phi_reg_pp0_iter0_data_2365_V_read2435_phi_reg_104760.read();
        }
    } else {
        ap_phi_mux_data_2365_V_read2435_phi_phi_fu_104764_p4 = ap_phi_reg_pp0_iter0_data_2365_V_read2435_phi_reg_104760.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2365_V_read2435_rewind_phi_fu_62315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2365_V_read2435_rewind_phi_fu_62315_p6 = data_2365_V_read2435_phi_reg_104760.read();
    } else {
        ap_phi_mux_data_2365_V_read2435_rewind_phi_fu_62315_p6 = data_2365_V_read2435_rewind_reg_62311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2366_V_read2436_phi_phi_fu_104777_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2366_V_read2436_phi_phi_fu_104777_p4 = ap_phi_mux_data_2366_V_read2436_rewind_phi_fu_62329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2366_V_read2436_phi_phi_fu_104777_p4 = data_2366_V_read.read();
        } else {
            ap_phi_mux_data_2366_V_read2436_phi_phi_fu_104777_p4 = ap_phi_reg_pp0_iter0_data_2366_V_read2436_phi_reg_104773.read();
        }
    } else {
        ap_phi_mux_data_2366_V_read2436_phi_phi_fu_104777_p4 = ap_phi_reg_pp0_iter0_data_2366_V_read2436_phi_reg_104773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2366_V_read2436_rewind_phi_fu_62329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2366_V_read2436_rewind_phi_fu_62329_p6 = data_2366_V_read2436_phi_reg_104773.read();
    } else {
        ap_phi_mux_data_2366_V_read2436_rewind_phi_fu_62329_p6 = data_2366_V_read2436_rewind_reg_62325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2367_V_read2437_phi_phi_fu_104790_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2367_V_read2437_phi_phi_fu_104790_p4 = ap_phi_mux_data_2367_V_read2437_rewind_phi_fu_62343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2367_V_read2437_phi_phi_fu_104790_p4 = data_2367_V_read.read();
        } else {
            ap_phi_mux_data_2367_V_read2437_phi_phi_fu_104790_p4 = ap_phi_reg_pp0_iter0_data_2367_V_read2437_phi_reg_104786.read();
        }
    } else {
        ap_phi_mux_data_2367_V_read2437_phi_phi_fu_104790_p4 = ap_phi_reg_pp0_iter0_data_2367_V_read2437_phi_reg_104786.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2367_V_read2437_rewind_phi_fu_62343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2367_V_read2437_rewind_phi_fu_62343_p6 = data_2367_V_read2437_phi_reg_104786.read();
    } else {
        ap_phi_mux_data_2367_V_read2437_rewind_phi_fu_62343_p6 = data_2367_V_read2437_rewind_reg_62339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2368_V_read2438_phi_phi_fu_104803_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2368_V_read2438_phi_phi_fu_104803_p4 = ap_phi_mux_data_2368_V_read2438_rewind_phi_fu_62357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2368_V_read2438_phi_phi_fu_104803_p4 = data_2368_V_read.read();
        } else {
            ap_phi_mux_data_2368_V_read2438_phi_phi_fu_104803_p4 = ap_phi_reg_pp0_iter0_data_2368_V_read2438_phi_reg_104799.read();
        }
    } else {
        ap_phi_mux_data_2368_V_read2438_phi_phi_fu_104803_p4 = ap_phi_reg_pp0_iter0_data_2368_V_read2438_phi_reg_104799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2368_V_read2438_rewind_phi_fu_62357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2368_V_read2438_rewind_phi_fu_62357_p6 = data_2368_V_read2438_phi_reg_104799.read();
    } else {
        ap_phi_mux_data_2368_V_read2438_rewind_phi_fu_62357_p6 = data_2368_V_read2438_rewind_reg_62353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2369_V_read2439_phi_phi_fu_104816_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2369_V_read2439_phi_phi_fu_104816_p4 = ap_phi_mux_data_2369_V_read2439_rewind_phi_fu_62371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2369_V_read2439_phi_phi_fu_104816_p4 = data_2369_V_read.read();
        } else {
            ap_phi_mux_data_2369_V_read2439_phi_phi_fu_104816_p4 = ap_phi_reg_pp0_iter0_data_2369_V_read2439_phi_reg_104812.read();
        }
    } else {
        ap_phi_mux_data_2369_V_read2439_phi_phi_fu_104816_p4 = ap_phi_reg_pp0_iter0_data_2369_V_read2439_phi_reg_104812.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2369_V_read2439_rewind_phi_fu_62371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2369_V_read2439_rewind_phi_fu_62371_p6 = data_2369_V_read2439_phi_reg_104812.read();
    } else {
        ap_phi_mux_data_2369_V_read2439_rewind_phi_fu_62371_p6 = data_2369_V_read2439_rewind_reg_62367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_236_V_read306_phi_phi_fu_77087_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_236_V_read306_phi_phi_fu_77087_p4 = ap_phi_mux_data_236_V_read306_rewind_phi_fu_32509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_236_V_read306_phi_phi_fu_77087_p4 = data_236_V_read.read();
        } else {
            ap_phi_mux_data_236_V_read306_phi_phi_fu_77087_p4 = ap_phi_reg_pp0_iter0_data_236_V_read306_phi_reg_77083.read();
        }
    } else {
        ap_phi_mux_data_236_V_read306_phi_phi_fu_77087_p4 = ap_phi_reg_pp0_iter0_data_236_V_read306_phi_reg_77083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_236_V_read306_rewind_phi_fu_32509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_236_V_read306_rewind_phi_fu_32509_p6 = data_236_V_read306_phi_reg_77083.read();
    } else {
        ap_phi_mux_data_236_V_read306_rewind_phi_fu_32509_p6 = data_236_V_read306_rewind_reg_32505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2370_V_read2440_phi_phi_fu_104829_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2370_V_read2440_phi_phi_fu_104829_p4 = ap_phi_mux_data_2370_V_read2440_rewind_phi_fu_62385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2370_V_read2440_phi_phi_fu_104829_p4 = data_2370_V_read.read();
        } else {
            ap_phi_mux_data_2370_V_read2440_phi_phi_fu_104829_p4 = ap_phi_reg_pp0_iter0_data_2370_V_read2440_phi_reg_104825.read();
        }
    } else {
        ap_phi_mux_data_2370_V_read2440_phi_phi_fu_104829_p4 = ap_phi_reg_pp0_iter0_data_2370_V_read2440_phi_reg_104825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2370_V_read2440_rewind_phi_fu_62385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2370_V_read2440_rewind_phi_fu_62385_p6 = data_2370_V_read2440_phi_reg_104825.read();
    } else {
        ap_phi_mux_data_2370_V_read2440_rewind_phi_fu_62385_p6 = data_2370_V_read2440_rewind_reg_62381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2371_V_read2441_phi_phi_fu_104842_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2371_V_read2441_phi_phi_fu_104842_p4 = ap_phi_mux_data_2371_V_read2441_rewind_phi_fu_62399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2371_V_read2441_phi_phi_fu_104842_p4 = data_2371_V_read.read();
        } else {
            ap_phi_mux_data_2371_V_read2441_phi_phi_fu_104842_p4 = ap_phi_reg_pp0_iter0_data_2371_V_read2441_phi_reg_104838.read();
        }
    } else {
        ap_phi_mux_data_2371_V_read2441_phi_phi_fu_104842_p4 = ap_phi_reg_pp0_iter0_data_2371_V_read2441_phi_reg_104838.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2371_V_read2441_rewind_phi_fu_62399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2371_V_read2441_rewind_phi_fu_62399_p6 = data_2371_V_read2441_phi_reg_104838.read();
    } else {
        ap_phi_mux_data_2371_V_read2441_rewind_phi_fu_62399_p6 = data_2371_V_read2441_rewind_reg_62395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2372_V_read2442_phi_phi_fu_104855_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2372_V_read2442_phi_phi_fu_104855_p4 = ap_phi_mux_data_2372_V_read2442_rewind_phi_fu_62413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2372_V_read2442_phi_phi_fu_104855_p4 = data_2372_V_read.read();
        } else {
            ap_phi_mux_data_2372_V_read2442_phi_phi_fu_104855_p4 = ap_phi_reg_pp0_iter0_data_2372_V_read2442_phi_reg_104851.read();
        }
    } else {
        ap_phi_mux_data_2372_V_read2442_phi_phi_fu_104855_p4 = ap_phi_reg_pp0_iter0_data_2372_V_read2442_phi_reg_104851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2372_V_read2442_rewind_phi_fu_62413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2372_V_read2442_rewind_phi_fu_62413_p6 = data_2372_V_read2442_phi_reg_104851.read();
    } else {
        ap_phi_mux_data_2372_V_read2442_rewind_phi_fu_62413_p6 = data_2372_V_read2442_rewind_reg_62409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2373_V_read2443_phi_phi_fu_104868_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2373_V_read2443_phi_phi_fu_104868_p4 = ap_phi_mux_data_2373_V_read2443_rewind_phi_fu_62427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2373_V_read2443_phi_phi_fu_104868_p4 = data_2373_V_read.read();
        } else {
            ap_phi_mux_data_2373_V_read2443_phi_phi_fu_104868_p4 = ap_phi_reg_pp0_iter0_data_2373_V_read2443_phi_reg_104864.read();
        }
    } else {
        ap_phi_mux_data_2373_V_read2443_phi_phi_fu_104868_p4 = ap_phi_reg_pp0_iter0_data_2373_V_read2443_phi_reg_104864.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2373_V_read2443_rewind_phi_fu_62427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2373_V_read2443_rewind_phi_fu_62427_p6 = data_2373_V_read2443_phi_reg_104864.read();
    } else {
        ap_phi_mux_data_2373_V_read2443_rewind_phi_fu_62427_p6 = data_2373_V_read2443_rewind_reg_62423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2374_V_read2444_phi_phi_fu_104881_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2374_V_read2444_phi_phi_fu_104881_p4 = ap_phi_mux_data_2374_V_read2444_rewind_phi_fu_62441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2374_V_read2444_phi_phi_fu_104881_p4 = data_2374_V_read.read();
        } else {
            ap_phi_mux_data_2374_V_read2444_phi_phi_fu_104881_p4 = ap_phi_reg_pp0_iter0_data_2374_V_read2444_phi_reg_104877.read();
        }
    } else {
        ap_phi_mux_data_2374_V_read2444_phi_phi_fu_104881_p4 = ap_phi_reg_pp0_iter0_data_2374_V_read2444_phi_reg_104877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2374_V_read2444_rewind_phi_fu_62441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2374_V_read2444_rewind_phi_fu_62441_p6 = data_2374_V_read2444_phi_reg_104877.read();
    } else {
        ap_phi_mux_data_2374_V_read2444_rewind_phi_fu_62441_p6 = data_2374_V_read2444_rewind_reg_62437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2375_V_read2445_phi_phi_fu_104894_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2375_V_read2445_phi_phi_fu_104894_p4 = ap_phi_mux_data_2375_V_read2445_rewind_phi_fu_62455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2375_V_read2445_phi_phi_fu_104894_p4 = data_2375_V_read.read();
        } else {
            ap_phi_mux_data_2375_V_read2445_phi_phi_fu_104894_p4 = ap_phi_reg_pp0_iter0_data_2375_V_read2445_phi_reg_104890.read();
        }
    } else {
        ap_phi_mux_data_2375_V_read2445_phi_phi_fu_104894_p4 = ap_phi_reg_pp0_iter0_data_2375_V_read2445_phi_reg_104890.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2375_V_read2445_rewind_phi_fu_62455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2375_V_read2445_rewind_phi_fu_62455_p6 = data_2375_V_read2445_phi_reg_104890.read();
    } else {
        ap_phi_mux_data_2375_V_read2445_rewind_phi_fu_62455_p6 = data_2375_V_read2445_rewind_reg_62451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2376_V_read2446_phi_phi_fu_104907_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2376_V_read2446_phi_phi_fu_104907_p4 = ap_phi_mux_data_2376_V_read2446_rewind_phi_fu_62469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2376_V_read2446_phi_phi_fu_104907_p4 = data_2376_V_read.read();
        } else {
            ap_phi_mux_data_2376_V_read2446_phi_phi_fu_104907_p4 = ap_phi_reg_pp0_iter0_data_2376_V_read2446_phi_reg_104903.read();
        }
    } else {
        ap_phi_mux_data_2376_V_read2446_phi_phi_fu_104907_p4 = ap_phi_reg_pp0_iter0_data_2376_V_read2446_phi_reg_104903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2376_V_read2446_rewind_phi_fu_62469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2376_V_read2446_rewind_phi_fu_62469_p6 = data_2376_V_read2446_phi_reg_104903.read();
    } else {
        ap_phi_mux_data_2376_V_read2446_rewind_phi_fu_62469_p6 = data_2376_V_read2446_rewind_reg_62465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2377_V_read2447_phi_phi_fu_104920_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2377_V_read2447_phi_phi_fu_104920_p4 = ap_phi_mux_data_2377_V_read2447_rewind_phi_fu_62483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2377_V_read2447_phi_phi_fu_104920_p4 = data_2377_V_read.read();
        } else {
            ap_phi_mux_data_2377_V_read2447_phi_phi_fu_104920_p4 = ap_phi_reg_pp0_iter0_data_2377_V_read2447_phi_reg_104916.read();
        }
    } else {
        ap_phi_mux_data_2377_V_read2447_phi_phi_fu_104920_p4 = ap_phi_reg_pp0_iter0_data_2377_V_read2447_phi_reg_104916.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2377_V_read2447_rewind_phi_fu_62483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2377_V_read2447_rewind_phi_fu_62483_p6 = data_2377_V_read2447_phi_reg_104916.read();
    } else {
        ap_phi_mux_data_2377_V_read2447_rewind_phi_fu_62483_p6 = data_2377_V_read2447_rewind_reg_62479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2378_V_read2448_phi_phi_fu_104933_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2378_V_read2448_phi_phi_fu_104933_p4 = ap_phi_mux_data_2378_V_read2448_rewind_phi_fu_62497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2378_V_read2448_phi_phi_fu_104933_p4 = data_2378_V_read.read();
        } else {
            ap_phi_mux_data_2378_V_read2448_phi_phi_fu_104933_p4 = ap_phi_reg_pp0_iter0_data_2378_V_read2448_phi_reg_104929.read();
        }
    } else {
        ap_phi_mux_data_2378_V_read2448_phi_phi_fu_104933_p4 = ap_phi_reg_pp0_iter0_data_2378_V_read2448_phi_reg_104929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2378_V_read2448_rewind_phi_fu_62497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2378_V_read2448_rewind_phi_fu_62497_p6 = data_2378_V_read2448_phi_reg_104929.read();
    } else {
        ap_phi_mux_data_2378_V_read2448_rewind_phi_fu_62497_p6 = data_2378_V_read2448_rewind_reg_62493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2379_V_read2449_phi_phi_fu_104946_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2379_V_read2449_phi_phi_fu_104946_p4 = ap_phi_mux_data_2379_V_read2449_rewind_phi_fu_62511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2379_V_read2449_phi_phi_fu_104946_p4 = data_2379_V_read.read();
        } else {
            ap_phi_mux_data_2379_V_read2449_phi_phi_fu_104946_p4 = ap_phi_reg_pp0_iter0_data_2379_V_read2449_phi_reg_104942.read();
        }
    } else {
        ap_phi_mux_data_2379_V_read2449_phi_phi_fu_104946_p4 = ap_phi_reg_pp0_iter0_data_2379_V_read2449_phi_reg_104942.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2379_V_read2449_rewind_phi_fu_62511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2379_V_read2449_rewind_phi_fu_62511_p6 = data_2379_V_read2449_phi_reg_104942.read();
    } else {
        ap_phi_mux_data_2379_V_read2449_rewind_phi_fu_62511_p6 = data_2379_V_read2449_rewind_reg_62507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_237_V_read307_phi_phi_fu_77100_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_237_V_read307_phi_phi_fu_77100_p4 = ap_phi_mux_data_237_V_read307_rewind_phi_fu_32523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_237_V_read307_phi_phi_fu_77100_p4 = data_237_V_read.read();
        } else {
            ap_phi_mux_data_237_V_read307_phi_phi_fu_77100_p4 = ap_phi_reg_pp0_iter0_data_237_V_read307_phi_reg_77096.read();
        }
    } else {
        ap_phi_mux_data_237_V_read307_phi_phi_fu_77100_p4 = ap_phi_reg_pp0_iter0_data_237_V_read307_phi_reg_77096.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_237_V_read307_rewind_phi_fu_32523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_237_V_read307_rewind_phi_fu_32523_p6 = data_237_V_read307_phi_reg_77096.read();
    } else {
        ap_phi_mux_data_237_V_read307_rewind_phi_fu_32523_p6 = data_237_V_read307_rewind_reg_32519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2380_V_read2450_phi_phi_fu_104959_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2380_V_read2450_phi_phi_fu_104959_p4 = ap_phi_mux_data_2380_V_read2450_rewind_phi_fu_62525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2380_V_read2450_phi_phi_fu_104959_p4 = data_2380_V_read.read();
        } else {
            ap_phi_mux_data_2380_V_read2450_phi_phi_fu_104959_p4 = ap_phi_reg_pp0_iter0_data_2380_V_read2450_phi_reg_104955.read();
        }
    } else {
        ap_phi_mux_data_2380_V_read2450_phi_phi_fu_104959_p4 = ap_phi_reg_pp0_iter0_data_2380_V_read2450_phi_reg_104955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2380_V_read2450_rewind_phi_fu_62525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2380_V_read2450_rewind_phi_fu_62525_p6 = data_2380_V_read2450_phi_reg_104955.read();
    } else {
        ap_phi_mux_data_2380_V_read2450_rewind_phi_fu_62525_p6 = data_2380_V_read2450_rewind_reg_62521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2381_V_read2451_phi_phi_fu_104972_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2381_V_read2451_phi_phi_fu_104972_p4 = ap_phi_mux_data_2381_V_read2451_rewind_phi_fu_62539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2381_V_read2451_phi_phi_fu_104972_p4 = data_2381_V_read.read();
        } else {
            ap_phi_mux_data_2381_V_read2451_phi_phi_fu_104972_p4 = ap_phi_reg_pp0_iter0_data_2381_V_read2451_phi_reg_104968.read();
        }
    } else {
        ap_phi_mux_data_2381_V_read2451_phi_phi_fu_104972_p4 = ap_phi_reg_pp0_iter0_data_2381_V_read2451_phi_reg_104968.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2381_V_read2451_rewind_phi_fu_62539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2381_V_read2451_rewind_phi_fu_62539_p6 = data_2381_V_read2451_phi_reg_104968.read();
    } else {
        ap_phi_mux_data_2381_V_read2451_rewind_phi_fu_62539_p6 = data_2381_V_read2451_rewind_reg_62535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2382_V_read2452_phi_phi_fu_104985_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2382_V_read2452_phi_phi_fu_104985_p4 = ap_phi_mux_data_2382_V_read2452_rewind_phi_fu_62553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2382_V_read2452_phi_phi_fu_104985_p4 = data_2382_V_read.read();
        } else {
            ap_phi_mux_data_2382_V_read2452_phi_phi_fu_104985_p4 = ap_phi_reg_pp0_iter0_data_2382_V_read2452_phi_reg_104981.read();
        }
    } else {
        ap_phi_mux_data_2382_V_read2452_phi_phi_fu_104985_p4 = ap_phi_reg_pp0_iter0_data_2382_V_read2452_phi_reg_104981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2382_V_read2452_rewind_phi_fu_62553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2382_V_read2452_rewind_phi_fu_62553_p6 = data_2382_V_read2452_phi_reg_104981.read();
    } else {
        ap_phi_mux_data_2382_V_read2452_rewind_phi_fu_62553_p6 = data_2382_V_read2452_rewind_reg_62549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2383_V_read2453_phi_phi_fu_104998_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2383_V_read2453_phi_phi_fu_104998_p4 = ap_phi_mux_data_2383_V_read2453_rewind_phi_fu_62567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2383_V_read2453_phi_phi_fu_104998_p4 = data_2383_V_read.read();
        } else {
            ap_phi_mux_data_2383_V_read2453_phi_phi_fu_104998_p4 = ap_phi_reg_pp0_iter0_data_2383_V_read2453_phi_reg_104994.read();
        }
    } else {
        ap_phi_mux_data_2383_V_read2453_phi_phi_fu_104998_p4 = ap_phi_reg_pp0_iter0_data_2383_V_read2453_phi_reg_104994.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2383_V_read2453_rewind_phi_fu_62567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2383_V_read2453_rewind_phi_fu_62567_p6 = data_2383_V_read2453_phi_reg_104994.read();
    } else {
        ap_phi_mux_data_2383_V_read2453_rewind_phi_fu_62567_p6 = data_2383_V_read2453_rewind_reg_62563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2384_V_read2454_phi_phi_fu_105011_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2384_V_read2454_phi_phi_fu_105011_p4 = ap_phi_mux_data_2384_V_read2454_rewind_phi_fu_62581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2384_V_read2454_phi_phi_fu_105011_p4 = data_2384_V_read.read();
        } else {
            ap_phi_mux_data_2384_V_read2454_phi_phi_fu_105011_p4 = ap_phi_reg_pp0_iter0_data_2384_V_read2454_phi_reg_105007.read();
        }
    } else {
        ap_phi_mux_data_2384_V_read2454_phi_phi_fu_105011_p4 = ap_phi_reg_pp0_iter0_data_2384_V_read2454_phi_reg_105007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2384_V_read2454_rewind_phi_fu_62581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2384_V_read2454_rewind_phi_fu_62581_p6 = data_2384_V_read2454_phi_reg_105007.read();
    } else {
        ap_phi_mux_data_2384_V_read2454_rewind_phi_fu_62581_p6 = data_2384_V_read2454_rewind_reg_62577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2385_V_read2455_phi_phi_fu_105024_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2385_V_read2455_phi_phi_fu_105024_p4 = ap_phi_mux_data_2385_V_read2455_rewind_phi_fu_62595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2385_V_read2455_phi_phi_fu_105024_p4 = data_2385_V_read.read();
        } else {
            ap_phi_mux_data_2385_V_read2455_phi_phi_fu_105024_p4 = ap_phi_reg_pp0_iter0_data_2385_V_read2455_phi_reg_105020.read();
        }
    } else {
        ap_phi_mux_data_2385_V_read2455_phi_phi_fu_105024_p4 = ap_phi_reg_pp0_iter0_data_2385_V_read2455_phi_reg_105020.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2385_V_read2455_rewind_phi_fu_62595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2385_V_read2455_rewind_phi_fu_62595_p6 = data_2385_V_read2455_phi_reg_105020.read();
    } else {
        ap_phi_mux_data_2385_V_read2455_rewind_phi_fu_62595_p6 = data_2385_V_read2455_rewind_reg_62591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2386_V_read2456_phi_phi_fu_105037_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2386_V_read2456_phi_phi_fu_105037_p4 = ap_phi_mux_data_2386_V_read2456_rewind_phi_fu_62609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2386_V_read2456_phi_phi_fu_105037_p4 = data_2386_V_read.read();
        } else {
            ap_phi_mux_data_2386_V_read2456_phi_phi_fu_105037_p4 = ap_phi_reg_pp0_iter0_data_2386_V_read2456_phi_reg_105033.read();
        }
    } else {
        ap_phi_mux_data_2386_V_read2456_phi_phi_fu_105037_p4 = ap_phi_reg_pp0_iter0_data_2386_V_read2456_phi_reg_105033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2386_V_read2456_rewind_phi_fu_62609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2386_V_read2456_rewind_phi_fu_62609_p6 = data_2386_V_read2456_phi_reg_105033.read();
    } else {
        ap_phi_mux_data_2386_V_read2456_rewind_phi_fu_62609_p6 = data_2386_V_read2456_rewind_reg_62605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2387_V_read2457_phi_phi_fu_105050_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2387_V_read2457_phi_phi_fu_105050_p4 = ap_phi_mux_data_2387_V_read2457_rewind_phi_fu_62623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2387_V_read2457_phi_phi_fu_105050_p4 = data_2387_V_read.read();
        } else {
            ap_phi_mux_data_2387_V_read2457_phi_phi_fu_105050_p4 = ap_phi_reg_pp0_iter0_data_2387_V_read2457_phi_reg_105046.read();
        }
    } else {
        ap_phi_mux_data_2387_V_read2457_phi_phi_fu_105050_p4 = ap_phi_reg_pp0_iter0_data_2387_V_read2457_phi_reg_105046.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2387_V_read2457_rewind_phi_fu_62623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2387_V_read2457_rewind_phi_fu_62623_p6 = data_2387_V_read2457_phi_reg_105046.read();
    } else {
        ap_phi_mux_data_2387_V_read2457_rewind_phi_fu_62623_p6 = data_2387_V_read2457_rewind_reg_62619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2388_V_read2458_phi_phi_fu_105063_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2388_V_read2458_phi_phi_fu_105063_p4 = ap_phi_mux_data_2388_V_read2458_rewind_phi_fu_62637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2388_V_read2458_phi_phi_fu_105063_p4 = data_2388_V_read.read();
        } else {
            ap_phi_mux_data_2388_V_read2458_phi_phi_fu_105063_p4 = ap_phi_reg_pp0_iter0_data_2388_V_read2458_phi_reg_105059.read();
        }
    } else {
        ap_phi_mux_data_2388_V_read2458_phi_phi_fu_105063_p4 = ap_phi_reg_pp0_iter0_data_2388_V_read2458_phi_reg_105059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2388_V_read2458_rewind_phi_fu_62637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2388_V_read2458_rewind_phi_fu_62637_p6 = data_2388_V_read2458_phi_reg_105059.read();
    } else {
        ap_phi_mux_data_2388_V_read2458_rewind_phi_fu_62637_p6 = data_2388_V_read2458_rewind_reg_62633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2389_V_read2459_phi_phi_fu_105076_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2389_V_read2459_phi_phi_fu_105076_p4 = ap_phi_mux_data_2389_V_read2459_rewind_phi_fu_62651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2389_V_read2459_phi_phi_fu_105076_p4 = data_2389_V_read.read();
        } else {
            ap_phi_mux_data_2389_V_read2459_phi_phi_fu_105076_p4 = ap_phi_reg_pp0_iter0_data_2389_V_read2459_phi_reg_105072.read();
        }
    } else {
        ap_phi_mux_data_2389_V_read2459_phi_phi_fu_105076_p4 = ap_phi_reg_pp0_iter0_data_2389_V_read2459_phi_reg_105072.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2389_V_read2459_rewind_phi_fu_62651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2389_V_read2459_rewind_phi_fu_62651_p6 = data_2389_V_read2459_phi_reg_105072.read();
    } else {
        ap_phi_mux_data_2389_V_read2459_rewind_phi_fu_62651_p6 = data_2389_V_read2459_rewind_reg_62647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_238_V_read308_phi_phi_fu_77113_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_238_V_read308_phi_phi_fu_77113_p4 = ap_phi_mux_data_238_V_read308_rewind_phi_fu_32537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_238_V_read308_phi_phi_fu_77113_p4 = data_238_V_read.read();
        } else {
            ap_phi_mux_data_238_V_read308_phi_phi_fu_77113_p4 = ap_phi_reg_pp0_iter0_data_238_V_read308_phi_reg_77109.read();
        }
    } else {
        ap_phi_mux_data_238_V_read308_phi_phi_fu_77113_p4 = ap_phi_reg_pp0_iter0_data_238_V_read308_phi_reg_77109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_238_V_read308_rewind_phi_fu_32537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_238_V_read308_rewind_phi_fu_32537_p6 = data_238_V_read308_phi_reg_77109.read();
    } else {
        ap_phi_mux_data_238_V_read308_rewind_phi_fu_32537_p6 = data_238_V_read308_rewind_reg_32533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2390_V_read2460_phi_phi_fu_105089_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2390_V_read2460_phi_phi_fu_105089_p4 = ap_phi_mux_data_2390_V_read2460_rewind_phi_fu_62665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2390_V_read2460_phi_phi_fu_105089_p4 = data_2390_V_read.read();
        } else {
            ap_phi_mux_data_2390_V_read2460_phi_phi_fu_105089_p4 = ap_phi_reg_pp0_iter0_data_2390_V_read2460_phi_reg_105085.read();
        }
    } else {
        ap_phi_mux_data_2390_V_read2460_phi_phi_fu_105089_p4 = ap_phi_reg_pp0_iter0_data_2390_V_read2460_phi_reg_105085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2390_V_read2460_rewind_phi_fu_62665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2390_V_read2460_rewind_phi_fu_62665_p6 = data_2390_V_read2460_phi_reg_105085.read();
    } else {
        ap_phi_mux_data_2390_V_read2460_rewind_phi_fu_62665_p6 = data_2390_V_read2460_rewind_reg_62661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2391_V_read2461_phi_phi_fu_105102_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2391_V_read2461_phi_phi_fu_105102_p4 = ap_phi_mux_data_2391_V_read2461_rewind_phi_fu_62679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2391_V_read2461_phi_phi_fu_105102_p4 = data_2391_V_read.read();
        } else {
            ap_phi_mux_data_2391_V_read2461_phi_phi_fu_105102_p4 = ap_phi_reg_pp0_iter0_data_2391_V_read2461_phi_reg_105098.read();
        }
    } else {
        ap_phi_mux_data_2391_V_read2461_phi_phi_fu_105102_p4 = ap_phi_reg_pp0_iter0_data_2391_V_read2461_phi_reg_105098.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2391_V_read2461_rewind_phi_fu_62679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2391_V_read2461_rewind_phi_fu_62679_p6 = data_2391_V_read2461_phi_reg_105098.read();
    } else {
        ap_phi_mux_data_2391_V_read2461_rewind_phi_fu_62679_p6 = data_2391_V_read2461_rewind_reg_62675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2392_V_read2462_phi_phi_fu_105115_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2392_V_read2462_phi_phi_fu_105115_p4 = ap_phi_mux_data_2392_V_read2462_rewind_phi_fu_62693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2392_V_read2462_phi_phi_fu_105115_p4 = data_2392_V_read.read();
        } else {
            ap_phi_mux_data_2392_V_read2462_phi_phi_fu_105115_p4 = ap_phi_reg_pp0_iter0_data_2392_V_read2462_phi_reg_105111.read();
        }
    } else {
        ap_phi_mux_data_2392_V_read2462_phi_phi_fu_105115_p4 = ap_phi_reg_pp0_iter0_data_2392_V_read2462_phi_reg_105111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2392_V_read2462_rewind_phi_fu_62693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2392_V_read2462_rewind_phi_fu_62693_p6 = data_2392_V_read2462_phi_reg_105111.read();
    } else {
        ap_phi_mux_data_2392_V_read2462_rewind_phi_fu_62693_p6 = data_2392_V_read2462_rewind_reg_62689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2393_V_read2463_phi_phi_fu_105128_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2393_V_read2463_phi_phi_fu_105128_p4 = ap_phi_mux_data_2393_V_read2463_rewind_phi_fu_62707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2393_V_read2463_phi_phi_fu_105128_p4 = data_2393_V_read.read();
        } else {
            ap_phi_mux_data_2393_V_read2463_phi_phi_fu_105128_p4 = ap_phi_reg_pp0_iter0_data_2393_V_read2463_phi_reg_105124.read();
        }
    } else {
        ap_phi_mux_data_2393_V_read2463_phi_phi_fu_105128_p4 = ap_phi_reg_pp0_iter0_data_2393_V_read2463_phi_reg_105124.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2393_V_read2463_rewind_phi_fu_62707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2393_V_read2463_rewind_phi_fu_62707_p6 = data_2393_V_read2463_phi_reg_105124.read();
    } else {
        ap_phi_mux_data_2393_V_read2463_rewind_phi_fu_62707_p6 = data_2393_V_read2463_rewind_reg_62703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2394_V_read2464_phi_phi_fu_105141_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2394_V_read2464_phi_phi_fu_105141_p4 = ap_phi_mux_data_2394_V_read2464_rewind_phi_fu_62721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2394_V_read2464_phi_phi_fu_105141_p4 = data_2394_V_read.read();
        } else {
            ap_phi_mux_data_2394_V_read2464_phi_phi_fu_105141_p4 = ap_phi_reg_pp0_iter0_data_2394_V_read2464_phi_reg_105137.read();
        }
    } else {
        ap_phi_mux_data_2394_V_read2464_phi_phi_fu_105141_p4 = ap_phi_reg_pp0_iter0_data_2394_V_read2464_phi_reg_105137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2394_V_read2464_rewind_phi_fu_62721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2394_V_read2464_rewind_phi_fu_62721_p6 = data_2394_V_read2464_phi_reg_105137.read();
    } else {
        ap_phi_mux_data_2394_V_read2464_rewind_phi_fu_62721_p6 = data_2394_V_read2464_rewind_reg_62717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2395_V_read2465_phi_phi_fu_105154_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2395_V_read2465_phi_phi_fu_105154_p4 = ap_phi_mux_data_2395_V_read2465_rewind_phi_fu_62735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2395_V_read2465_phi_phi_fu_105154_p4 = data_2395_V_read.read();
        } else {
            ap_phi_mux_data_2395_V_read2465_phi_phi_fu_105154_p4 = ap_phi_reg_pp0_iter0_data_2395_V_read2465_phi_reg_105150.read();
        }
    } else {
        ap_phi_mux_data_2395_V_read2465_phi_phi_fu_105154_p4 = ap_phi_reg_pp0_iter0_data_2395_V_read2465_phi_reg_105150.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2395_V_read2465_rewind_phi_fu_62735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2395_V_read2465_rewind_phi_fu_62735_p6 = data_2395_V_read2465_phi_reg_105150.read();
    } else {
        ap_phi_mux_data_2395_V_read2465_rewind_phi_fu_62735_p6 = data_2395_V_read2465_rewind_reg_62731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2396_V_read2466_phi_phi_fu_105167_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2396_V_read2466_phi_phi_fu_105167_p4 = ap_phi_mux_data_2396_V_read2466_rewind_phi_fu_62749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2396_V_read2466_phi_phi_fu_105167_p4 = data_2396_V_read.read();
        } else {
            ap_phi_mux_data_2396_V_read2466_phi_phi_fu_105167_p4 = ap_phi_reg_pp0_iter0_data_2396_V_read2466_phi_reg_105163.read();
        }
    } else {
        ap_phi_mux_data_2396_V_read2466_phi_phi_fu_105167_p4 = ap_phi_reg_pp0_iter0_data_2396_V_read2466_phi_reg_105163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2396_V_read2466_rewind_phi_fu_62749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2396_V_read2466_rewind_phi_fu_62749_p6 = data_2396_V_read2466_phi_reg_105163.read();
    } else {
        ap_phi_mux_data_2396_V_read2466_rewind_phi_fu_62749_p6 = data_2396_V_read2466_rewind_reg_62745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2397_V_read2467_phi_phi_fu_105180_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2397_V_read2467_phi_phi_fu_105180_p4 = ap_phi_mux_data_2397_V_read2467_rewind_phi_fu_62763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2397_V_read2467_phi_phi_fu_105180_p4 = data_2397_V_read.read();
        } else {
            ap_phi_mux_data_2397_V_read2467_phi_phi_fu_105180_p4 = ap_phi_reg_pp0_iter0_data_2397_V_read2467_phi_reg_105176.read();
        }
    } else {
        ap_phi_mux_data_2397_V_read2467_phi_phi_fu_105180_p4 = ap_phi_reg_pp0_iter0_data_2397_V_read2467_phi_reg_105176.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2397_V_read2467_rewind_phi_fu_62763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2397_V_read2467_rewind_phi_fu_62763_p6 = data_2397_V_read2467_phi_reg_105176.read();
    } else {
        ap_phi_mux_data_2397_V_read2467_rewind_phi_fu_62763_p6 = data_2397_V_read2467_rewind_reg_62759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2398_V_read2468_phi_phi_fu_105193_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2398_V_read2468_phi_phi_fu_105193_p4 = ap_phi_mux_data_2398_V_read2468_rewind_phi_fu_62777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2398_V_read2468_phi_phi_fu_105193_p4 = data_2398_V_read.read();
        } else {
            ap_phi_mux_data_2398_V_read2468_phi_phi_fu_105193_p4 = ap_phi_reg_pp0_iter0_data_2398_V_read2468_phi_reg_105189.read();
        }
    } else {
        ap_phi_mux_data_2398_V_read2468_phi_phi_fu_105193_p4 = ap_phi_reg_pp0_iter0_data_2398_V_read2468_phi_reg_105189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2398_V_read2468_rewind_phi_fu_62777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2398_V_read2468_rewind_phi_fu_62777_p6 = data_2398_V_read2468_phi_reg_105189.read();
    } else {
        ap_phi_mux_data_2398_V_read2468_rewind_phi_fu_62777_p6 = data_2398_V_read2468_rewind_reg_62773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2399_V_read2469_phi_phi_fu_105206_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2399_V_read2469_phi_phi_fu_105206_p4 = ap_phi_mux_data_2399_V_read2469_rewind_phi_fu_62791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2399_V_read2469_phi_phi_fu_105206_p4 = data_2399_V_read.read();
        } else {
            ap_phi_mux_data_2399_V_read2469_phi_phi_fu_105206_p4 = ap_phi_reg_pp0_iter0_data_2399_V_read2469_phi_reg_105202.read();
        }
    } else {
        ap_phi_mux_data_2399_V_read2469_phi_phi_fu_105206_p4 = ap_phi_reg_pp0_iter0_data_2399_V_read2469_phi_reg_105202.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2399_V_read2469_rewind_phi_fu_62791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2399_V_read2469_rewind_phi_fu_62791_p6 = data_2399_V_read2469_phi_reg_105202.read();
    } else {
        ap_phi_mux_data_2399_V_read2469_rewind_phi_fu_62791_p6 = data_2399_V_read2469_rewind_reg_62787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_239_V_read309_phi_phi_fu_77126_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_239_V_read309_phi_phi_fu_77126_p4 = ap_phi_mux_data_239_V_read309_rewind_phi_fu_32551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_239_V_read309_phi_phi_fu_77126_p4 = data_239_V_read.read();
        } else {
            ap_phi_mux_data_239_V_read309_phi_phi_fu_77126_p4 = ap_phi_reg_pp0_iter0_data_239_V_read309_phi_reg_77122.read();
        }
    } else {
        ap_phi_mux_data_239_V_read309_phi_phi_fu_77126_p4 = ap_phi_reg_pp0_iter0_data_239_V_read309_phi_reg_77122.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_239_V_read309_rewind_phi_fu_32551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_239_V_read309_rewind_phi_fu_32551_p6 = data_239_V_read309_phi_reg_77122.read();
    } else {
        ap_phi_mux_data_239_V_read309_rewind_phi_fu_32551_p6 = data_239_V_read309_rewind_reg_32547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_23_V_read93_phi_phi_fu_74318_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_23_V_read93_phi_phi_fu_74318_p4 = ap_phi_mux_data_23_V_read93_rewind_phi_fu_29527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_23_V_read93_phi_phi_fu_74318_p4 = data_23_V_read.read();
        } else {
            ap_phi_mux_data_23_V_read93_phi_phi_fu_74318_p4 = ap_phi_reg_pp0_iter0_data_23_V_read93_phi_reg_74314.read();
        }
    } else {
        ap_phi_mux_data_23_V_read93_phi_phi_fu_74318_p4 = ap_phi_reg_pp0_iter0_data_23_V_read93_phi_reg_74314.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_23_V_read93_rewind_phi_fu_29527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_23_V_read93_rewind_phi_fu_29527_p6 = data_23_V_read93_phi_reg_74314.read();
    } else {
        ap_phi_mux_data_23_V_read93_rewind_phi_fu_29527_p6 = data_23_V_read93_rewind_reg_29523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2400_V_read2470_phi_phi_fu_105219_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2400_V_read2470_phi_phi_fu_105219_p4 = ap_phi_mux_data_2400_V_read2470_rewind_phi_fu_62805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2400_V_read2470_phi_phi_fu_105219_p4 = data_2400_V_read.read();
        } else {
            ap_phi_mux_data_2400_V_read2470_phi_phi_fu_105219_p4 = ap_phi_reg_pp0_iter0_data_2400_V_read2470_phi_reg_105215.read();
        }
    } else {
        ap_phi_mux_data_2400_V_read2470_phi_phi_fu_105219_p4 = ap_phi_reg_pp0_iter0_data_2400_V_read2470_phi_reg_105215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2400_V_read2470_rewind_phi_fu_62805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2400_V_read2470_rewind_phi_fu_62805_p6 = data_2400_V_read2470_phi_reg_105215.read();
    } else {
        ap_phi_mux_data_2400_V_read2470_rewind_phi_fu_62805_p6 = data_2400_V_read2470_rewind_reg_62801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2401_V_read2471_phi_phi_fu_105232_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2401_V_read2471_phi_phi_fu_105232_p4 = ap_phi_mux_data_2401_V_read2471_rewind_phi_fu_62819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2401_V_read2471_phi_phi_fu_105232_p4 = data_2401_V_read.read();
        } else {
            ap_phi_mux_data_2401_V_read2471_phi_phi_fu_105232_p4 = ap_phi_reg_pp0_iter0_data_2401_V_read2471_phi_reg_105228.read();
        }
    } else {
        ap_phi_mux_data_2401_V_read2471_phi_phi_fu_105232_p4 = ap_phi_reg_pp0_iter0_data_2401_V_read2471_phi_reg_105228.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2401_V_read2471_rewind_phi_fu_62819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2401_V_read2471_rewind_phi_fu_62819_p6 = data_2401_V_read2471_phi_reg_105228.read();
    } else {
        ap_phi_mux_data_2401_V_read2471_rewind_phi_fu_62819_p6 = data_2401_V_read2471_rewind_reg_62815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2402_V_read2472_phi_phi_fu_105245_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2402_V_read2472_phi_phi_fu_105245_p4 = ap_phi_mux_data_2402_V_read2472_rewind_phi_fu_62833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2402_V_read2472_phi_phi_fu_105245_p4 = data_2402_V_read.read();
        } else {
            ap_phi_mux_data_2402_V_read2472_phi_phi_fu_105245_p4 = ap_phi_reg_pp0_iter0_data_2402_V_read2472_phi_reg_105241.read();
        }
    } else {
        ap_phi_mux_data_2402_V_read2472_phi_phi_fu_105245_p4 = ap_phi_reg_pp0_iter0_data_2402_V_read2472_phi_reg_105241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2402_V_read2472_rewind_phi_fu_62833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2402_V_read2472_rewind_phi_fu_62833_p6 = data_2402_V_read2472_phi_reg_105241.read();
    } else {
        ap_phi_mux_data_2402_V_read2472_rewind_phi_fu_62833_p6 = data_2402_V_read2472_rewind_reg_62829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2403_V_read2473_phi_phi_fu_105258_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2403_V_read2473_phi_phi_fu_105258_p4 = ap_phi_mux_data_2403_V_read2473_rewind_phi_fu_62847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2403_V_read2473_phi_phi_fu_105258_p4 = data_2403_V_read.read();
        } else {
            ap_phi_mux_data_2403_V_read2473_phi_phi_fu_105258_p4 = ap_phi_reg_pp0_iter0_data_2403_V_read2473_phi_reg_105254.read();
        }
    } else {
        ap_phi_mux_data_2403_V_read2473_phi_phi_fu_105258_p4 = ap_phi_reg_pp0_iter0_data_2403_V_read2473_phi_reg_105254.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2403_V_read2473_rewind_phi_fu_62847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2403_V_read2473_rewind_phi_fu_62847_p6 = data_2403_V_read2473_phi_reg_105254.read();
    } else {
        ap_phi_mux_data_2403_V_read2473_rewind_phi_fu_62847_p6 = data_2403_V_read2473_rewind_reg_62843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2404_V_read2474_phi_phi_fu_105271_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2404_V_read2474_phi_phi_fu_105271_p4 = ap_phi_mux_data_2404_V_read2474_rewind_phi_fu_62861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2404_V_read2474_phi_phi_fu_105271_p4 = data_2404_V_read.read();
        } else {
            ap_phi_mux_data_2404_V_read2474_phi_phi_fu_105271_p4 = ap_phi_reg_pp0_iter0_data_2404_V_read2474_phi_reg_105267.read();
        }
    } else {
        ap_phi_mux_data_2404_V_read2474_phi_phi_fu_105271_p4 = ap_phi_reg_pp0_iter0_data_2404_V_read2474_phi_reg_105267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2404_V_read2474_rewind_phi_fu_62861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2404_V_read2474_rewind_phi_fu_62861_p6 = data_2404_V_read2474_phi_reg_105267.read();
    } else {
        ap_phi_mux_data_2404_V_read2474_rewind_phi_fu_62861_p6 = data_2404_V_read2474_rewind_reg_62857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2405_V_read2475_phi_phi_fu_105284_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2405_V_read2475_phi_phi_fu_105284_p4 = ap_phi_mux_data_2405_V_read2475_rewind_phi_fu_62875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2405_V_read2475_phi_phi_fu_105284_p4 = data_2405_V_read.read();
        } else {
            ap_phi_mux_data_2405_V_read2475_phi_phi_fu_105284_p4 = ap_phi_reg_pp0_iter0_data_2405_V_read2475_phi_reg_105280.read();
        }
    } else {
        ap_phi_mux_data_2405_V_read2475_phi_phi_fu_105284_p4 = ap_phi_reg_pp0_iter0_data_2405_V_read2475_phi_reg_105280.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2405_V_read2475_rewind_phi_fu_62875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2405_V_read2475_rewind_phi_fu_62875_p6 = data_2405_V_read2475_phi_reg_105280.read();
    } else {
        ap_phi_mux_data_2405_V_read2475_rewind_phi_fu_62875_p6 = data_2405_V_read2475_rewind_reg_62871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2406_V_read2476_phi_phi_fu_105297_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2406_V_read2476_phi_phi_fu_105297_p4 = ap_phi_mux_data_2406_V_read2476_rewind_phi_fu_62889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2406_V_read2476_phi_phi_fu_105297_p4 = data_2406_V_read.read();
        } else {
            ap_phi_mux_data_2406_V_read2476_phi_phi_fu_105297_p4 = ap_phi_reg_pp0_iter0_data_2406_V_read2476_phi_reg_105293.read();
        }
    } else {
        ap_phi_mux_data_2406_V_read2476_phi_phi_fu_105297_p4 = ap_phi_reg_pp0_iter0_data_2406_V_read2476_phi_reg_105293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2406_V_read2476_rewind_phi_fu_62889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2406_V_read2476_rewind_phi_fu_62889_p6 = data_2406_V_read2476_phi_reg_105293.read();
    } else {
        ap_phi_mux_data_2406_V_read2476_rewind_phi_fu_62889_p6 = data_2406_V_read2476_rewind_reg_62885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2407_V_read2477_phi_phi_fu_105310_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2407_V_read2477_phi_phi_fu_105310_p4 = ap_phi_mux_data_2407_V_read2477_rewind_phi_fu_62903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2407_V_read2477_phi_phi_fu_105310_p4 = data_2407_V_read.read();
        } else {
            ap_phi_mux_data_2407_V_read2477_phi_phi_fu_105310_p4 = ap_phi_reg_pp0_iter0_data_2407_V_read2477_phi_reg_105306.read();
        }
    } else {
        ap_phi_mux_data_2407_V_read2477_phi_phi_fu_105310_p4 = ap_phi_reg_pp0_iter0_data_2407_V_read2477_phi_reg_105306.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2407_V_read2477_rewind_phi_fu_62903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2407_V_read2477_rewind_phi_fu_62903_p6 = data_2407_V_read2477_phi_reg_105306.read();
    } else {
        ap_phi_mux_data_2407_V_read2477_rewind_phi_fu_62903_p6 = data_2407_V_read2477_rewind_reg_62899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2408_V_read2478_phi_phi_fu_105323_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2408_V_read2478_phi_phi_fu_105323_p4 = ap_phi_mux_data_2408_V_read2478_rewind_phi_fu_62917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2408_V_read2478_phi_phi_fu_105323_p4 = data_2408_V_read.read();
        } else {
            ap_phi_mux_data_2408_V_read2478_phi_phi_fu_105323_p4 = ap_phi_reg_pp0_iter0_data_2408_V_read2478_phi_reg_105319.read();
        }
    } else {
        ap_phi_mux_data_2408_V_read2478_phi_phi_fu_105323_p4 = ap_phi_reg_pp0_iter0_data_2408_V_read2478_phi_reg_105319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2408_V_read2478_rewind_phi_fu_62917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2408_V_read2478_rewind_phi_fu_62917_p6 = data_2408_V_read2478_phi_reg_105319.read();
    } else {
        ap_phi_mux_data_2408_V_read2478_rewind_phi_fu_62917_p6 = data_2408_V_read2478_rewind_reg_62913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2409_V_read2479_phi_phi_fu_105336_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2409_V_read2479_phi_phi_fu_105336_p4 = ap_phi_mux_data_2409_V_read2479_rewind_phi_fu_62931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2409_V_read2479_phi_phi_fu_105336_p4 = data_2409_V_read.read();
        } else {
            ap_phi_mux_data_2409_V_read2479_phi_phi_fu_105336_p4 = ap_phi_reg_pp0_iter0_data_2409_V_read2479_phi_reg_105332.read();
        }
    } else {
        ap_phi_mux_data_2409_V_read2479_phi_phi_fu_105336_p4 = ap_phi_reg_pp0_iter0_data_2409_V_read2479_phi_reg_105332.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2409_V_read2479_rewind_phi_fu_62931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2409_V_read2479_rewind_phi_fu_62931_p6 = data_2409_V_read2479_phi_reg_105332.read();
    } else {
        ap_phi_mux_data_2409_V_read2479_rewind_phi_fu_62931_p6 = data_2409_V_read2479_rewind_reg_62927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_240_V_read310_phi_phi_fu_77139_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_240_V_read310_phi_phi_fu_77139_p4 = ap_phi_mux_data_240_V_read310_rewind_phi_fu_32565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_240_V_read310_phi_phi_fu_77139_p4 = data_240_V_read.read();
        } else {
            ap_phi_mux_data_240_V_read310_phi_phi_fu_77139_p4 = ap_phi_reg_pp0_iter0_data_240_V_read310_phi_reg_77135.read();
        }
    } else {
        ap_phi_mux_data_240_V_read310_phi_phi_fu_77139_p4 = ap_phi_reg_pp0_iter0_data_240_V_read310_phi_reg_77135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_240_V_read310_rewind_phi_fu_32565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_240_V_read310_rewind_phi_fu_32565_p6 = data_240_V_read310_phi_reg_77135.read();
    } else {
        ap_phi_mux_data_240_V_read310_rewind_phi_fu_32565_p6 = data_240_V_read310_rewind_reg_32561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2410_V_read2480_phi_phi_fu_105349_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2410_V_read2480_phi_phi_fu_105349_p4 = ap_phi_mux_data_2410_V_read2480_rewind_phi_fu_62945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2410_V_read2480_phi_phi_fu_105349_p4 = data_2410_V_read.read();
        } else {
            ap_phi_mux_data_2410_V_read2480_phi_phi_fu_105349_p4 = ap_phi_reg_pp0_iter0_data_2410_V_read2480_phi_reg_105345.read();
        }
    } else {
        ap_phi_mux_data_2410_V_read2480_phi_phi_fu_105349_p4 = ap_phi_reg_pp0_iter0_data_2410_V_read2480_phi_reg_105345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2410_V_read2480_rewind_phi_fu_62945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2410_V_read2480_rewind_phi_fu_62945_p6 = data_2410_V_read2480_phi_reg_105345.read();
    } else {
        ap_phi_mux_data_2410_V_read2480_rewind_phi_fu_62945_p6 = data_2410_V_read2480_rewind_reg_62941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2411_V_read2481_phi_phi_fu_105362_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2411_V_read2481_phi_phi_fu_105362_p4 = ap_phi_mux_data_2411_V_read2481_rewind_phi_fu_62959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2411_V_read2481_phi_phi_fu_105362_p4 = data_2411_V_read.read();
        } else {
            ap_phi_mux_data_2411_V_read2481_phi_phi_fu_105362_p4 = ap_phi_reg_pp0_iter0_data_2411_V_read2481_phi_reg_105358.read();
        }
    } else {
        ap_phi_mux_data_2411_V_read2481_phi_phi_fu_105362_p4 = ap_phi_reg_pp0_iter0_data_2411_V_read2481_phi_reg_105358.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2411_V_read2481_rewind_phi_fu_62959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2411_V_read2481_rewind_phi_fu_62959_p6 = data_2411_V_read2481_phi_reg_105358.read();
    } else {
        ap_phi_mux_data_2411_V_read2481_rewind_phi_fu_62959_p6 = data_2411_V_read2481_rewind_reg_62955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2412_V_read2482_phi_phi_fu_105375_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2412_V_read2482_phi_phi_fu_105375_p4 = ap_phi_mux_data_2412_V_read2482_rewind_phi_fu_62973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2412_V_read2482_phi_phi_fu_105375_p4 = data_2412_V_read.read();
        } else {
            ap_phi_mux_data_2412_V_read2482_phi_phi_fu_105375_p4 = ap_phi_reg_pp0_iter0_data_2412_V_read2482_phi_reg_105371.read();
        }
    } else {
        ap_phi_mux_data_2412_V_read2482_phi_phi_fu_105375_p4 = ap_phi_reg_pp0_iter0_data_2412_V_read2482_phi_reg_105371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2412_V_read2482_rewind_phi_fu_62973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2412_V_read2482_rewind_phi_fu_62973_p6 = data_2412_V_read2482_phi_reg_105371.read();
    } else {
        ap_phi_mux_data_2412_V_read2482_rewind_phi_fu_62973_p6 = data_2412_V_read2482_rewind_reg_62969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2413_V_read2483_phi_phi_fu_105388_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2413_V_read2483_phi_phi_fu_105388_p4 = ap_phi_mux_data_2413_V_read2483_rewind_phi_fu_62987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2413_V_read2483_phi_phi_fu_105388_p4 = data_2413_V_read.read();
        } else {
            ap_phi_mux_data_2413_V_read2483_phi_phi_fu_105388_p4 = ap_phi_reg_pp0_iter0_data_2413_V_read2483_phi_reg_105384.read();
        }
    } else {
        ap_phi_mux_data_2413_V_read2483_phi_phi_fu_105388_p4 = ap_phi_reg_pp0_iter0_data_2413_V_read2483_phi_reg_105384.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2413_V_read2483_rewind_phi_fu_62987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2413_V_read2483_rewind_phi_fu_62987_p6 = data_2413_V_read2483_phi_reg_105384.read();
    } else {
        ap_phi_mux_data_2413_V_read2483_rewind_phi_fu_62987_p6 = data_2413_V_read2483_rewind_reg_62983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2414_V_read2484_phi_phi_fu_105401_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2414_V_read2484_phi_phi_fu_105401_p4 = ap_phi_mux_data_2414_V_read2484_rewind_phi_fu_63001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2414_V_read2484_phi_phi_fu_105401_p4 = data_2414_V_read.read();
        } else {
            ap_phi_mux_data_2414_V_read2484_phi_phi_fu_105401_p4 = ap_phi_reg_pp0_iter0_data_2414_V_read2484_phi_reg_105397.read();
        }
    } else {
        ap_phi_mux_data_2414_V_read2484_phi_phi_fu_105401_p4 = ap_phi_reg_pp0_iter0_data_2414_V_read2484_phi_reg_105397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2414_V_read2484_rewind_phi_fu_63001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2414_V_read2484_rewind_phi_fu_63001_p6 = data_2414_V_read2484_phi_reg_105397.read();
    } else {
        ap_phi_mux_data_2414_V_read2484_rewind_phi_fu_63001_p6 = data_2414_V_read2484_rewind_reg_62997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2415_V_read2485_phi_phi_fu_105414_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2415_V_read2485_phi_phi_fu_105414_p4 = ap_phi_mux_data_2415_V_read2485_rewind_phi_fu_63015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2415_V_read2485_phi_phi_fu_105414_p4 = data_2415_V_read.read();
        } else {
            ap_phi_mux_data_2415_V_read2485_phi_phi_fu_105414_p4 = ap_phi_reg_pp0_iter0_data_2415_V_read2485_phi_reg_105410.read();
        }
    } else {
        ap_phi_mux_data_2415_V_read2485_phi_phi_fu_105414_p4 = ap_phi_reg_pp0_iter0_data_2415_V_read2485_phi_reg_105410.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2415_V_read2485_rewind_phi_fu_63015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2415_V_read2485_rewind_phi_fu_63015_p6 = data_2415_V_read2485_phi_reg_105410.read();
    } else {
        ap_phi_mux_data_2415_V_read2485_rewind_phi_fu_63015_p6 = data_2415_V_read2485_rewind_reg_63011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2416_V_read2486_phi_phi_fu_105427_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2416_V_read2486_phi_phi_fu_105427_p4 = ap_phi_mux_data_2416_V_read2486_rewind_phi_fu_63029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2416_V_read2486_phi_phi_fu_105427_p4 = data_2416_V_read.read();
        } else {
            ap_phi_mux_data_2416_V_read2486_phi_phi_fu_105427_p4 = ap_phi_reg_pp0_iter0_data_2416_V_read2486_phi_reg_105423.read();
        }
    } else {
        ap_phi_mux_data_2416_V_read2486_phi_phi_fu_105427_p4 = ap_phi_reg_pp0_iter0_data_2416_V_read2486_phi_reg_105423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2416_V_read2486_rewind_phi_fu_63029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2416_V_read2486_rewind_phi_fu_63029_p6 = data_2416_V_read2486_phi_reg_105423.read();
    } else {
        ap_phi_mux_data_2416_V_read2486_rewind_phi_fu_63029_p6 = data_2416_V_read2486_rewind_reg_63025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2417_V_read2487_phi_phi_fu_105440_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2417_V_read2487_phi_phi_fu_105440_p4 = ap_phi_mux_data_2417_V_read2487_rewind_phi_fu_63043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2417_V_read2487_phi_phi_fu_105440_p4 = data_2417_V_read.read();
        } else {
            ap_phi_mux_data_2417_V_read2487_phi_phi_fu_105440_p4 = ap_phi_reg_pp0_iter0_data_2417_V_read2487_phi_reg_105436.read();
        }
    } else {
        ap_phi_mux_data_2417_V_read2487_phi_phi_fu_105440_p4 = ap_phi_reg_pp0_iter0_data_2417_V_read2487_phi_reg_105436.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2417_V_read2487_rewind_phi_fu_63043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2417_V_read2487_rewind_phi_fu_63043_p6 = data_2417_V_read2487_phi_reg_105436.read();
    } else {
        ap_phi_mux_data_2417_V_read2487_rewind_phi_fu_63043_p6 = data_2417_V_read2487_rewind_reg_63039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2418_V_read2488_phi_phi_fu_105453_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2418_V_read2488_phi_phi_fu_105453_p4 = ap_phi_mux_data_2418_V_read2488_rewind_phi_fu_63057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2418_V_read2488_phi_phi_fu_105453_p4 = data_2418_V_read.read();
        } else {
            ap_phi_mux_data_2418_V_read2488_phi_phi_fu_105453_p4 = ap_phi_reg_pp0_iter0_data_2418_V_read2488_phi_reg_105449.read();
        }
    } else {
        ap_phi_mux_data_2418_V_read2488_phi_phi_fu_105453_p4 = ap_phi_reg_pp0_iter0_data_2418_V_read2488_phi_reg_105449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2418_V_read2488_rewind_phi_fu_63057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2418_V_read2488_rewind_phi_fu_63057_p6 = data_2418_V_read2488_phi_reg_105449.read();
    } else {
        ap_phi_mux_data_2418_V_read2488_rewind_phi_fu_63057_p6 = data_2418_V_read2488_rewind_reg_63053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2419_V_read2489_phi_phi_fu_105466_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2419_V_read2489_phi_phi_fu_105466_p4 = ap_phi_mux_data_2419_V_read2489_rewind_phi_fu_63071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2419_V_read2489_phi_phi_fu_105466_p4 = data_2419_V_read.read();
        } else {
            ap_phi_mux_data_2419_V_read2489_phi_phi_fu_105466_p4 = ap_phi_reg_pp0_iter0_data_2419_V_read2489_phi_reg_105462.read();
        }
    } else {
        ap_phi_mux_data_2419_V_read2489_phi_phi_fu_105466_p4 = ap_phi_reg_pp0_iter0_data_2419_V_read2489_phi_reg_105462.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2419_V_read2489_rewind_phi_fu_63071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2419_V_read2489_rewind_phi_fu_63071_p6 = data_2419_V_read2489_phi_reg_105462.read();
    } else {
        ap_phi_mux_data_2419_V_read2489_rewind_phi_fu_63071_p6 = data_2419_V_read2489_rewind_reg_63067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_241_V_read311_phi_phi_fu_77152_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_241_V_read311_phi_phi_fu_77152_p4 = ap_phi_mux_data_241_V_read311_rewind_phi_fu_32579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_241_V_read311_phi_phi_fu_77152_p4 = data_241_V_read.read();
        } else {
            ap_phi_mux_data_241_V_read311_phi_phi_fu_77152_p4 = ap_phi_reg_pp0_iter0_data_241_V_read311_phi_reg_77148.read();
        }
    } else {
        ap_phi_mux_data_241_V_read311_phi_phi_fu_77152_p4 = ap_phi_reg_pp0_iter0_data_241_V_read311_phi_reg_77148.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_241_V_read311_rewind_phi_fu_32579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_241_V_read311_rewind_phi_fu_32579_p6 = data_241_V_read311_phi_reg_77148.read();
    } else {
        ap_phi_mux_data_241_V_read311_rewind_phi_fu_32579_p6 = data_241_V_read311_rewind_reg_32575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2420_V_read2490_phi_phi_fu_105479_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2420_V_read2490_phi_phi_fu_105479_p4 = ap_phi_mux_data_2420_V_read2490_rewind_phi_fu_63085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2420_V_read2490_phi_phi_fu_105479_p4 = data_2420_V_read.read();
        } else {
            ap_phi_mux_data_2420_V_read2490_phi_phi_fu_105479_p4 = ap_phi_reg_pp0_iter0_data_2420_V_read2490_phi_reg_105475.read();
        }
    } else {
        ap_phi_mux_data_2420_V_read2490_phi_phi_fu_105479_p4 = ap_phi_reg_pp0_iter0_data_2420_V_read2490_phi_reg_105475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2420_V_read2490_rewind_phi_fu_63085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2420_V_read2490_rewind_phi_fu_63085_p6 = data_2420_V_read2490_phi_reg_105475.read();
    } else {
        ap_phi_mux_data_2420_V_read2490_rewind_phi_fu_63085_p6 = data_2420_V_read2490_rewind_reg_63081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2421_V_read2491_phi_phi_fu_105492_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2421_V_read2491_phi_phi_fu_105492_p4 = ap_phi_mux_data_2421_V_read2491_rewind_phi_fu_63099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2421_V_read2491_phi_phi_fu_105492_p4 = data_2421_V_read.read();
        } else {
            ap_phi_mux_data_2421_V_read2491_phi_phi_fu_105492_p4 = ap_phi_reg_pp0_iter0_data_2421_V_read2491_phi_reg_105488.read();
        }
    } else {
        ap_phi_mux_data_2421_V_read2491_phi_phi_fu_105492_p4 = ap_phi_reg_pp0_iter0_data_2421_V_read2491_phi_reg_105488.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2421_V_read2491_rewind_phi_fu_63099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2421_V_read2491_rewind_phi_fu_63099_p6 = data_2421_V_read2491_phi_reg_105488.read();
    } else {
        ap_phi_mux_data_2421_V_read2491_rewind_phi_fu_63099_p6 = data_2421_V_read2491_rewind_reg_63095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2422_V_read2492_phi_phi_fu_105505_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2422_V_read2492_phi_phi_fu_105505_p4 = ap_phi_mux_data_2422_V_read2492_rewind_phi_fu_63113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2422_V_read2492_phi_phi_fu_105505_p4 = data_2422_V_read.read();
        } else {
            ap_phi_mux_data_2422_V_read2492_phi_phi_fu_105505_p4 = ap_phi_reg_pp0_iter0_data_2422_V_read2492_phi_reg_105501.read();
        }
    } else {
        ap_phi_mux_data_2422_V_read2492_phi_phi_fu_105505_p4 = ap_phi_reg_pp0_iter0_data_2422_V_read2492_phi_reg_105501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2422_V_read2492_rewind_phi_fu_63113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2422_V_read2492_rewind_phi_fu_63113_p6 = data_2422_V_read2492_phi_reg_105501.read();
    } else {
        ap_phi_mux_data_2422_V_read2492_rewind_phi_fu_63113_p6 = data_2422_V_read2492_rewind_reg_63109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2423_V_read2493_phi_phi_fu_105518_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2423_V_read2493_phi_phi_fu_105518_p4 = ap_phi_mux_data_2423_V_read2493_rewind_phi_fu_63127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2423_V_read2493_phi_phi_fu_105518_p4 = data_2423_V_read.read();
        } else {
            ap_phi_mux_data_2423_V_read2493_phi_phi_fu_105518_p4 = ap_phi_reg_pp0_iter0_data_2423_V_read2493_phi_reg_105514.read();
        }
    } else {
        ap_phi_mux_data_2423_V_read2493_phi_phi_fu_105518_p4 = ap_phi_reg_pp0_iter0_data_2423_V_read2493_phi_reg_105514.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2423_V_read2493_rewind_phi_fu_63127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2423_V_read2493_rewind_phi_fu_63127_p6 = data_2423_V_read2493_phi_reg_105514.read();
    } else {
        ap_phi_mux_data_2423_V_read2493_rewind_phi_fu_63127_p6 = data_2423_V_read2493_rewind_reg_63123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2424_V_read2494_phi_phi_fu_105531_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2424_V_read2494_phi_phi_fu_105531_p4 = ap_phi_mux_data_2424_V_read2494_rewind_phi_fu_63141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2424_V_read2494_phi_phi_fu_105531_p4 = data_2424_V_read.read();
        } else {
            ap_phi_mux_data_2424_V_read2494_phi_phi_fu_105531_p4 = ap_phi_reg_pp0_iter0_data_2424_V_read2494_phi_reg_105527.read();
        }
    } else {
        ap_phi_mux_data_2424_V_read2494_phi_phi_fu_105531_p4 = ap_phi_reg_pp0_iter0_data_2424_V_read2494_phi_reg_105527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2424_V_read2494_rewind_phi_fu_63141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2424_V_read2494_rewind_phi_fu_63141_p6 = data_2424_V_read2494_phi_reg_105527.read();
    } else {
        ap_phi_mux_data_2424_V_read2494_rewind_phi_fu_63141_p6 = data_2424_V_read2494_rewind_reg_63137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2425_V_read2495_phi_phi_fu_105544_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2425_V_read2495_phi_phi_fu_105544_p4 = ap_phi_mux_data_2425_V_read2495_rewind_phi_fu_63155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2425_V_read2495_phi_phi_fu_105544_p4 = data_2425_V_read.read();
        } else {
            ap_phi_mux_data_2425_V_read2495_phi_phi_fu_105544_p4 = ap_phi_reg_pp0_iter0_data_2425_V_read2495_phi_reg_105540.read();
        }
    } else {
        ap_phi_mux_data_2425_V_read2495_phi_phi_fu_105544_p4 = ap_phi_reg_pp0_iter0_data_2425_V_read2495_phi_reg_105540.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2425_V_read2495_rewind_phi_fu_63155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2425_V_read2495_rewind_phi_fu_63155_p6 = data_2425_V_read2495_phi_reg_105540.read();
    } else {
        ap_phi_mux_data_2425_V_read2495_rewind_phi_fu_63155_p6 = data_2425_V_read2495_rewind_reg_63151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2426_V_read2496_phi_phi_fu_105557_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2426_V_read2496_phi_phi_fu_105557_p4 = ap_phi_mux_data_2426_V_read2496_rewind_phi_fu_63169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2426_V_read2496_phi_phi_fu_105557_p4 = data_2426_V_read.read();
        } else {
            ap_phi_mux_data_2426_V_read2496_phi_phi_fu_105557_p4 = ap_phi_reg_pp0_iter0_data_2426_V_read2496_phi_reg_105553.read();
        }
    } else {
        ap_phi_mux_data_2426_V_read2496_phi_phi_fu_105557_p4 = ap_phi_reg_pp0_iter0_data_2426_V_read2496_phi_reg_105553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2426_V_read2496_rewind_phi_fu_63169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2426_V_read2496_rewind_phi_fu_63169_p6 = data_2426_V_read2496_phi_reg_105553.read();
    } else {
        ap_phi_mux_data_2426_V_read2496_rewind_phi_fu_63169_p6 = data_2426_V_read2496_rewind_reg_63165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2427_V_read2497_phi_phi_fu_105570_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2427_V_read2497_phi_phi_fu_105570_p4 = ap_phi_mux_data_2427_V_read2497_rewind_phi_fu_63183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2427_V_read2497_phi_phi_fu_105570_p4 = data_2427_V_read.read();
        } else {
            ap_phi_mux_data_2427_V_read2497_phi_phi_fu_105570_p4 = ap_phi_reg_pp0_iter0_data_2427_V_read2497_phi_reg_105566.read();
        }
    } else {
        ap_phi_mux_data_2427_V_read2497_phi_phi_fu_105570_p4 = ap_phi_reg_pp0_iter0_data_2427_V_read2497_phi_reg_105566.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2427_V_read2497_rewind_phi_fu_63183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2427_V_read2497_rewind_phi_fu_63183_p6 = data_2427_V_read2497_phi_reg_105566.read();
    } else {
        ap_phi_mux_data_2427_V_read2497_rewind_phi_fu_63183_p6 = data_2427_V_read2497_rewind_reg_63179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2428_V_read2498_phi_phi_fu_105583_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2428_V_read2498_phi_phi_fu_105583_p4 = ap_phi_mux_data_2428_V_read2498_rewind_phi_fu_63197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2428_V_read2498_phi_phi_fu_105583_p4 = data_2428_V_read.read();
        } else {
            ap_phi_mux_data_2428_V_read2498_phi_phi_fu_105583_p4 = ap_phi_reg_pp0_iter0_data_2428_V_read2498_phi_reg_105579.read();
        }
    } else {
        ap_phi_mux_data_2428_V_read2498_phi_phi_fu_105583_p4 = ap_phi_reg_pp0_iter0_data_2428_V_read2498_phi_reg_105579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2428_V_read2498_rewind_phi_fu_63197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2428_V_read2498_rewind_phi_fu_63197_p6 = data_2428_V_read2498_phi_reg_105579.read();
    } else {
        ap_phi_mux_data_2428_V_read2498_rewind_phi_fu_63197_p6 = data_2428_V_read2498_rewind_reg_63193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2429_V_read2499_phi_phi_fu_105596_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2429_V_read2499_phi_phi_fu_105596_p4 = ap_phi_mux_data_2429_V_read2499_rewind_phi_fu_63211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2429_V_read2499_phi_phi_fu_105596_p4 = data_2429_V_read.read();
        } else {
            ap_phi_mux_data_2429_V_read2499_phi_phi_fu_105596_p4 = ap_phi_reg_pp0_iter0_data_2429_V_read2499_phi_reg_105592.read();
        }
    } else {
        ap_phi_mux_data_2429_V_read2499_phi_phi_fu_105596_p4 = ap_phi_reg_pp0_iter0_data_2429_V_read2499_phi_reg_105592.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2429_V_read2499_rewind_phi_fu_63211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2429_V_read2499_rewind_phi_fu_63211_p6 = data_2429_V_read2499_phi_reg_105592.read();
    } else {
        ap_phi_mux_data_2429_V_read2499_rewind_phi_fu_63211_p6 = data_2429_V_read2499_rewind_reg_63207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_242_V_read312_phi_phi_fu_77165_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_242_V_read312_phi_phi_fu_77165_p4 = ap_phi_mux_data_242_V_read312_rewind_phi_fu_32593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_242_V_read312_phi_phi_fu_77165_p4 = data_242_V_read.read();
        } else {
            ap_phi_mux_data_242_V_read312_phi_phi_fu_77165_p4 = ap_phi_reg_pp0_iter0_data_242_V_read312_phi_reg_77161.read();
        }
    } else {
        ap_phi_mux_data_242_V_read312_phi_phi_fu_77165_p4 = ap_phi_reg_pp0_iter0_data_242_V_read312_phi_reg_77161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_242_V_read312_rewind_phi_fu_32593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_242_V_read312_rewind_phi_fu_32593_p6 = data_242_V_read312_phi_reg_77161.read();
    } else {
        ap_phi_mux_data_242_V_read312_rewind_phi_fu_32593_p6 = data_242_V_read312_rewind_reg_32589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2430_V_read2500_phi_phi_fu_105609_p4() {
    if (esl_seteq<1,1,1>(ap_condition_23776.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2430_V_read2500_phi_phi_fu_105609_p4 = ap_phi_mux_data_2430_V_read2500_rewind_phi_fu_63225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_29189_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2430_V_read2500_phi_phi_fu_105609_p4 = data_2430_V_read.read();
        } else {
            ap_phi_mux_data_2430_V_read2500_phi_phi_fu_105609_p4 = ap_phi_reg_pp0_iter0_data_2430_V_read2500_phi_reg_105605.read();
        }
    } else {
        ap_phi_mux_data_2430_V_read2500_phi_phi_fu_105609_p4 = ap_phi_reg_pp0_iter0_data_2430_V_read2500_phi_reg_105605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2430_V_read2500_rewind_phi_fu_63225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_171631.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2430_V_read2500_rewind_phi_fu_63225_p6 = data_2430_V_read2500_phi_reg_105605.read();
    } else {
        ap_phi_mux_data_2430_V_read2500_rewind_phi_fu_63225_p6 = data_2430_V_read2500_rewind_reg_63221.read();
    }
}

}

