#include "dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_187_V_read257_phi_phi_fu_73128_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_187_V_read257_phi_phi_fu_73128_p4 = ap_phi_mux_data_187_V_read257_rewind_phi_fu_28501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_187_V_read257_phi_phi_fu_73128_p4 = data_187_V_read.read();
        } else {
            ap_phi_mux_data_187_V_read257_phi_phi_fu_73128_p4 = ap_phi_reg_pp0_iter0_data_187_V_read257_phi_reg_73124.read();
        }
    } else {
        ap_phi_mux_data_187_V_read257_phi_phi_fu_73128_p4 = ap_phi_reg_pp0_iter0_data_187_V_read257_phi_reg_73124.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_187_V_read257_rewind_phi_fu_28501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_187_V_read257_rewind_phi_fu_28501_p6 = data_187_V_read257_phi_reg_73124.read();
    } else {
        ap_phi_mux_data_187_V_read257_rewind_phi_fu_28501_p6 = data_187_V_read257_rewind_reg_28497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1880_V_read1950_phi_phi_fu_95137_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1880_V_read1950_phi_phi_fu_95137_p4 = ap_phi_mux_data_1880_V_read1950_rewind_phi_fu_52203_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1880_V_read1950_phi_phi_fu_95137_p4 = data_1880_V_read.read();
        } else {
            ap_phi_mux_data_1880_V_read1950_phi_phi_fu_95137_p4 = ap_phi_reg_pp0_iter0_data_1880_V_read1950_phi_reg_95133.read();
        }
    } else {
        ap_phi_mux_data_1880_V_read1950_phi_phi_fu_95137_p4 = ap_phi_reg_pp0_iter0_data_1880_V_read1950_phi_reg_95133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1880_V_read1950_rewind_phi_fu_52203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1880_V_read1950_rewind_phi_fu_52203_p6 = data_1880_V_read1950_phi_reg_95133.read();
    } else {
        ap_phi_mux_data_1880_V_read1950_rewind_phi_fu_52203_p6 = data_1880_V_read1950_rewind_reg_52199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1881_V_read1951_phi_phi_fu_95150_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1881_V_read1951_phi_phi_fu_95150_p4 = ap_phi_mux_data_1881_V_read1951_rewind_phi_fu_52217_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1881_V_read1951_phi_phi_fu_95150_p4 = data_1881_V_read.read();
        } else {
            ap_phi_mux_data_1881_V_read1951_phi_phi_fu_95150_p4 = ap_phi_reg_pp0_iter0_data_1881_V_read1951_phi_reg_95146.read();
        }
    } else {
        ap_phi_mux_data_1881_V_read1951_phi_phi_fu_95150_p4 = ap_phi_reg_pp0_iter0_data_1881_V_read1951_phi_reg_95146.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1881_V_read1951_rewind_phi_fu_52217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1881_V_read1951_rewind_phi_fu_52217_p6 = data_1881_V_read1951_phi_reg_95146.read();
    } else {
        ap_phi_mux_data_1881_V_read1951_rewind_phi_fu_52217_p6 = data_1881_V_read1951_rewind_reg_52213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1882_V_read1952_phi_phi_fu_95163_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1882_V_read1952_phi_phi_fu_95163_p4 = ap_phi_mux_data_1882_V_read1952_rewind_phi_fu_52231_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1882_V_read1952_phi_phi_fu_95163_p4 = data_1882_V_read.read();
        } else {
            ap_phi_mux_data_1882_V_read1952_phi_phi_fu_95163_p4 = ap_phi_reg_pp0_iter0_data_1882_V_read1952_phi_reg_95159.read();
        }
    } else {
        ap_phi_mux_data_1882_V_read1952_phi_phi_fu_95163_p4 = ap_phi_reg_pp0_iter0_data_1882_V_read1952_phi_reg_95159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1882_V_read1952_rewind_phi_fu_52231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1882_V_read1952_rewind_phi_fu_52231_p6 = data_1882_V_read1952_phi_reg_95159.read();
    } else {
        ap_phi_mux_data_1882_V_read1952_rewind_phi_fu_52231_p6 = data_1882_V_read1952_rewind_reg_52227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1883_V_read1953_phi_phi_fu_95176_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1883_V_read1953_phi_phi_fu_95176_p4 = ap_phi_mux_data_1883_V_read1953_rewind_phi_fu_52245_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1883_V_read1953_phi_phi_fu_95176_p4 = data_1883_V_read.read();
        } else {
            ap_phi_mux_data_1883_V_read1953_phi_phi_fu_95176_p4 = ap_phi_reg_pp0_iter0_data_1883_V_read1953_phi_reg_95172.read();
        }
    } else {
        ap_phi_mux_data_1883_V_read1953_phi_phi_fu_95176_p4 = ap_phi_reg_pp0_iter0_data_1883_V_read1953_phi_reg_95172.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1883_V_read1953_rewind_phi_fu_52245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1883_V_read1953_rewind_phi_fu_52245_p6 = data_1883_V_read1953_phi_reg_95172.read();
    } else {
        ap_phi_mux_data_1883_V_read1953_rewind_phi_fu_52245_p6 = data_1883_V_read1953_rewind_reg_52241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1884_V_read1954_phi_phi_fu_95189_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1884_V_read1954_phi_phi_fu_95189_p4 = ap_phi_mux_data_1884_V_read1954_rewind_phi_fu_52259_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1884_V_read1954_phi_phi_fu_95189_p4 = data_1884_V_read.read();
        } else {
            ap_phi_mux_data_1884_V_read1954_phi_phi_fu_95189_p4 = ap_phi_reg_pp0_iter0_data_1884_V_read1954_phi_reg_95185.read();
        }
    } else {
        ap_phi_mux_data_1884_V_read1954_phi_phi_fu_95189_p4 = ap_phi_reg_pp0_iter0_data_1884_V_read1954_phi_reg_95185.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1884_V_read1954_rewind_phi_fu_52259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1884_V_read1954_rewind_phi_fu_52259_p6 = data_1884_V_read1954_phi_reg_95185.read();
    } else {
        ap_phi_mux_data_1884_V_read1954_rewind_phi_fu_52259_p6 = data_1884_V_read1954_rewind_reg_52255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1885_V_read1955_phi_phi_fu_95202_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1885_V_read1955_phi_phi_fu_95202_p4 = ap_phi_mux_data_1885_V_read1955_rewind_phi_fu_52273_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1885_V_read1955_phi_phi_fu_95202_p4 = data_1885_V_read.read();
        } else {
            ap_phi_mux_data_1885_V_read1955_phi_phi_fu_95202_p4 = ap_phi_reg_pp0_iter0_data_1885_V_read1955_phi_reg_95198.read();
        }
    } else {
        ap_phi_mux_data_1885_V_read1955_phi_phi_fu_95202_p4 = ap_phi_reg_pp0_iter0_data_1885_V_read1955_phi_reg_95198.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1885_V_read1955_rewind_phi_fu_52273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1885_V_read1955_rewind_phi_fu_52273_p6 = data_1885_V_read1955_phi_reg_95198.read();
    } else {
        ap_phi_mux_data_1885_V_read1955_rewind_phi_fu_52273_p6 = data_1885_V_read1955_rewind_reg_52269.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1886_V_read1956_phi_phi_fu_95215_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1886_V_read1956_phi_phi_fu_95215_p4 = ap_phi_mux_data_1886_V_read1956_rewind_phi_fu_52287_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1886_V_read1956_phi_phi_fu_95215_p4 = data_1886_V_read.read();
        } else {
            ap_phi_mux_data_1886_V_read1956_phi_phi_fu_95215_p4 = ap_phi_reg_pp0_iter0_data_1886_V_read1956_phi_reg_95211.read();
        }
    } else {
        ap_phi_mux_data_1886_V_read1956_phi_phi_fu_95215_p4 = ap_phi_reg_pp0_iter0_data_1886_V_read1956_phi_reg_95211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1886_V_read1956_rewind_phi_fu_52287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1886_V_read1956_rewind_phi_fu_52287_p6 = data_1886_V_read1956_phi_reg_95211.read();
    } else {
        ap_phi_mux_data_1886_V_read1956_rewind_phi_fu_52287_p6 = data_1886_V_read1956_rewind_reg_52283.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1887_V_read1957_phi_phi_fu_95228_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1887_V_read1957_phi_phi_fu_95228_p4 = ap_phi_mux_data_1887_V_read1957_rewind_phi_fu_52301_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1887_V_read1957_phi_phi_fu_95228_p4 = data_1887_V_read.read();
        } else {
            ap_phi_mux_data_1887_V_read1957_phi_phi_fu_95228_p4 = ap_phi_reg_pp0_iter0_data_1887_V_read1957_phi_reg_95224.read();
        }
    } else {
        ap_phi_mux_data_1887_V_read1957_phi_phi_fu_95228_p4 = ap_phi_reg_pp0_iter0_data_1887_V_read1957_phi_reg_95224.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1887_V_read1957_rewind_phi_fu_52301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1887_V_read1957_rewind_phi_fu_52301_p6 = data_1887_V_read1957_phi_reg_95224.read();
    } else {
        ap_phi_mux_data_1887_V_read1957_rewind_phi_fu_52301_p6 = data_1887_V_read1957_rewind_reg_52297.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1888_V_read1958_phi_phi_fu_95241_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1888_V_read1958_phi_phi_fu_95241_p4 = ap_phi_mux_data_1888_V_read1958_rewind_phi_fu_52315_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1888_V_read1958_phi_phi_fu_95241_p4 = data_1888_V_read.read();
        } else {
            ap_phi_mux_data_1888_V_read1958_phi_phi_fu_95241_p4 = ap_phi_reg_pp0_iter0_data_1888_V_read1958_phi_reg_95237.read();
        }
    } else {
        ap_phi_mux_data_1888_V_read1958_phi_phi_fu_95241_p4 = ap_phi_reg_pp0_iter0_data_1888_V_read1958_phi_reg_95237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1888_V_read1958_rewind_phi_fu_52315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1888_V_read1958_rewind_phi_fu_52315_p6 = data_1888_V_read1958_phi_reg_95237.read();
    } else {
        ap_phi_mux_data_1888_V_read1958_rewind_phi_fu_52315_p6 = data_1888_V_read1958_rewind_reg_52311.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1889_V_read1959_phi_phi_fu_95254_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1889_V_read1959_phi_phi_fu_95254_p4 = ap_phi_mux_data_1889_V_read1959_rewind_phi_fu_52329_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1889_V_read1959_phi_phi_fu_95254_p4 = data_1889_V_read.read();
        } else {
            ap_phi_mux_data_1889_V_read1959_phi_phi_fu_95254_p4 = ap_phi_reg_pp0_iter0_data_1889_V_read1959_phi_reg_95250.read();
        }
    } else {
        ap_phi_mux_data_1889_V_read1959_phi_phi_fu_95254_p4 = ap_phi_reg_pp0_iter0_data_1889_V_read1959_phi_reg_95250.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1889_V_read1959_rewind_phi_fu_52329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1889_V_read1959_rewind_phi_fu_52329_p6 = data_1889_V_read1959_phi_reg_95250.read();
    } else {
        ap_phi_mux_data_1889_V_read1959_rewind_phi_fu_52329_p6 = data_1889_V_read1959_rewind_reg_52325.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_188_V_read258_phi_phi_fu_73141_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_188_V_read258_phi_phi_fu_73141_p4 = ap_phi_mux_data_188_V_read258_rewind_phi_fu_28515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_188_V_read258_phi_phi_fu_73141_p4 = data_188_V_read.read();
        } else {
            ap_phi_mux_data_188_V_read258_phi_phi_fu_73141_p4 = ap_phi_reg_pp0_iter0_data_188_V_read258_phi_reg_73137.read();
        }
    } else {
        ap_phi_mux_data_188_V_read258_phi_phi_fu_73141_p4 = ap_phi_reg_pp0_iter0_data_188_V_read258_phi_reg_73137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_188_V_read258_rewind_phi_fu_28515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_188_V_read258_rewind_phi_fu_28515_p6 = data_188_V_read258_phi_reg_73137.read();
    } else {
        ap_phi_mux_data_188_V_read258_rewind_phi_fu_28515_p6 = data_188_V_read258_rewind_reg_28511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1890_V_read1960_phi_phi_fu_95267_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1890_V_read1960_phi_phi_fu_95267_p4 = ap_phi_mux_data_1890_V_read1960_rewind_phi_fu_52343_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1890_V_read1960_phi_phi_fu_95267_p4 = data_1890_V_read.read();
        } else {
            ap_phi_mux_data_1890_V_read1960_phi_phi_fu_95267_p4 = ap_phi_reg_pp0_iter0_data_1890_V_read1960_phi_reg_95263.read();
        }
    } else {
        ap_phi_mux_data_1890_V_read1960_phi_phi_fu_95267_p4 = ap_phi_reg_pp0_iter0_data_1890_V_read1960_phi_reg_95263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1890_V_read1960_rewind_phi_fu_52343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1890_V_read1960_rewind_phi_fu_52343_p6 = data_1890_V_read1960_phi_reg_95263.read();
    } else {
        ap_phi_mux_data_1890_V_read1960_rewind_phi_fu_52343_p6 = data_1890_V_read1960_rewind_reg_52339.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1891_V_read1961_phi_phi_fu_95280_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1891_V_read1961_phi_phi_fu_95280_p4 = ap_phi_mux_data_1891_V_read1961_rewind_phi_fu_52357_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1891_V_read1961_phi_phi_fu_95280_p4 = data_1891_V_read.read();
        } else {
            ap_phi_mux_data_1891_V_read1961_phi_phi_fu_95280_p4 = ap_phi_reg_pp0_iter0_data_1891_V_read1961_phi_reg_95276.read();
        }
    } else {
        ap_phi_mux_data_1891_V_read1961_phi_phi_fu_95280_p4 = ap_phi_reg_pp0_iter0_data_1891_V_read1961_phi_reg_95276.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1891_V_read1961_rewind_phi_fu_52357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1891_V_read1961_rewind_phi_fu_52357_p6 = data_1891_V_read1961_phi_reg_95276.read();
    } else {
        ap_phi_mux_data_1891_V_read1961_rewind_phi_fu_52357_p6 = data_1891_V_read1961_rewind_reg_52353.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1892_V_read1962_phi_phi_fu_95293_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1892_V_read1962_phi_phi_fu_95293_p4 = ap_phi_mux_data_1892_V_read1962_rewind_phi_fu_52371_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1892_V_read1962_phi_phi_fu_95293_p4 = data_1892_V_read.read();
        } else {
            ap_phi_mux_data_1892_V_read1962_phi_phi_fu_95293_p4 = ap_phi_reg_pp0_iter0_data_1892_V_read1962_phi_reg_95289.read();
        }
    } else {
        ap_phi_mux_data_1892_V_read1962_phi_phi_fu_95293_p4 = ap_phi_reg_pp0_iter0_data_1892_V_read1962_phi_reg_95289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1892_V_read1962_rewind_phi_fu_52371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1892_V_read1962_rewind_phi_fu_52371_p6 = data_1892_V_read1962_phi_reg_95289.read();
    } else {
        ap_phi_mux_data_1892_V_read1962_rewind_phi_fu_52371_p6 = data_1892_V_read1962_rewind_reg_52367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1893_V_read1963_phi_phi_fu_95306_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1893_V_read1963_phi_phi_fu_95306_p4 = ap_phi_mux_data_1893_V_read1963_rewind_phi_fu_52385_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1893_V_read1963_phi_phi_fu_95306_p4 = data_1893_V_read.read();
        } else {
            ap_phi_mux_data_1893_V_read1963_phi_phi_fu_95306_p4 = ap_phi_reg_pp0_iter0_data_1893_V_read1963_phi_reg_95302.read();
        }
    } else {
        ap_phi_mux_data_1893_V_read1963_phi_phi_fu_95306_p4 = ap_phi_reg_pp0_iter0_data_1893_V_read1963_phi_reg_95302.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1893_V_read1963_rewind_phi_fu_52385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1893_V_read1963_rewind_phi_fu_52385_p6 = data_1893_V_read1963_phi_reg_95302.read();
    } else {
        ap_phi_mux_data_1893_V_read1963_rewind_phi_fu_52385_p6 = data_1893_V_read1963_rewind_reg_52381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1894_V_read1964_phi_phi_fu_95319_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1894_V_read1964_phi_phi_fu_95319_p4 = ap_phi_mux_data_1894_V_read1964_rewind_phi_fu_52399_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1894_V_read1964_phi_phi_fu_95319_p4 = data_1894_V_read.read();
        } else {
            ap_phi_mux_data_1894_V_read1964_phi_phi_fu_95319_p4 = ap_phi_reg_pp0_iter0_data_1894_V_read1964_phi_reg_95315.read();
        }
    } else {
        ap_phi_mux_data_1894_V_read1964_phi_phi_fu_95319_p4 = ap_phi_reg_pp0_iter0_data_1894_V_read1964_phi_reg_95315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1894_V_read1964_rewind_phi_fu_52399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1894_V_read1964_rewind_phi_fu_52399_p6 = data_1894_V_read1964_phi_reg_95315.read();
    } else {
        ap_phi_mux_data_1894_V_read1964_rewind_phi_fu_52399_p6 = data_1894_V_read1964_rewind_reg_52395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1895_V_read1965_phi_phi_fu_95332_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1895_V_read1965_phi_phi_fu_95332_p4 = ap_phi_mux_data_1895_V_read1965_rewind_phi_fu_52413_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1895_V_read1965_phi_phi_fu_95332_p4 = data_1895_V_read.read();
        } else {
            ap_phi_mux_data_1895_V_read1965_phi_phi_fu_95332_p4 = ap_phi_reg_pp0_iter0_data_1895_V_read1965_phi_reg_95328.read();
        }
    } else {
        ap_phi_mux_data_1895_V_read1965_phi_phi_fu_95332_p4 = ap_phi_reg_pp0_iter0_data_1895_V_read1965_phi_reg_95328.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1895_V_read1965_rewind_phi_fu_52413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1895_V_read1965_rewind_phi_fu_52413_p6 = data_1895_V_read1965_phi_reg_95328.read();
    } else {
        ap_phi_mux_data_1895_V_read1965_rewind_phi_fu_52413_p6 = data_1895_V_read1965_rewind_reg_52409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1896_V_read1966_phi_phi_fu_95345_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1896_V_read1966_phi_phi_fu_95345_p4 = ap_phi_mux_data_1896_V_read1966_rewind_phi_fu_52427_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1896_V_read1966_phi_phi_fu_95345_p4 = data_1896_V_read.read();
        } else {
            ap_phi_mux_data_1896_V_read1966_phi_phi_fu_95345_p4 = ap_phi_reg_pp0_iter0_data_1896_V_read1966_phi_reg_95341.read();
        }
    } else {
        ap_phi_mux_data_1896_V_read1966_phi_phi_fu_95345_p4 = ap_phi_reg_pp0_iter0_data_1896_V_read1966_phi_reg_95341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1896_V_read1966_rewind_phi_fu_52427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1896_V_read1966_rewind_phi_fu_52427_p6 = data_1896_V_read1966_phi_reg_95341.read();
    } else {
        ap_phi_mux_data_1896_V_read1966_rewind_phi_fu_52427_p6 = data_1896_V_read1966_rewind_reg_52423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1897_V_read1967_phi_phi_fu_95358_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1897_V_read1967_phi_phi_fu_95358_p4 = ap_phi_mux_data_1897_V_read1967_rewind_phi_fu_52441_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1897_V_read1967_phi_phi_fu_95358_p4 = data_1897_V_read.read();
        } else {
            ap_phi_mux_data_1897_V_read1967_phi_phi_fu_95358_p4 = ap_phi_reg_pp0_iter0_data_1897_V_read1967_phi_reg_95354.read();
        }
    } else {
        ap_phi_mux_data_1897_V_read1967_phi_phi_fu_95358_p4 = ap_phi_reg_pp0_iter0_data_1897_V_read1967_phi_reg_95354.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1897_V_read1967_rewind_phi_fu_52441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1897_V_read1967_rewind_phi_fu_52441_p6 = data_1897_V_read1967_phi_reg_95354.read();
    } else {
        ap_phi_mux_data_1897_V_read1967_rewind_phi_fu_52441_p6 = data_1897_V_read1967_rewind_reg_52437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1898_V_read1968_phi_phi_fu_95371_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1898_V_read1968_phi_phi_fu_95371_p4 = ap_phi_mux_data_1898_V_read1968_rewind_phi_fu_52455_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1898_V_read1968_phi_phi_fu_95371_p4 = data_1898_V_read.read();
        } else {
            ap_phi_mux_data_1898_V_read1968_phi_phi_fu_95371_p4 = ap_phi_reg_pp0_iter0_data_1898_V_read1968_phi_reg_95367.read();
        }
    } else {
        ap_phi_mux_data_1898_V_read1968_phi_phi_fu_95371_p4 = ap_phi_reg_pp0_iter0_data_1898_V_read1968_phi_reg_95367.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1898_V_read1968_rewind_phi_fu_52455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1898_V_read1968_rewind_phi_fu_52455_p6 = data_1898_V_read1968_phi_reg_95367.read();
    } else {
        ap_phi_mux_data_1898_V_read1968_rewind_phi_fu_52455_p6 = data_1898_V_read1968_rewind_reg_52451.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1899_V_read1969_phi_phi_fu_95384_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1899_V_read1969_phi_phi_fu_95384_p4 = ap_phi_mux_data_1899_V_read1969_rewind_phi_fu_52469_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1899_V_read1969_phi_phi_fu_95384_p4 = data_1899_V_read.read();
        } else {
            ap_phi_mux_data_1899_V_read1969_phi_phi_fu_95384_p4 = ap_phi_reg_pp0_iter0_data_1899_V_read1969_phi_reg_95380.read();
        }
    } else {
        ap_phi_mux_data_1899_V_read1969_phi_phi_fu_95384_p4 = ap_phi_reg_pp0_iter0_data_1899_V_read1969_phi_reg_95380.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1899_V_read1969_rewind_phi_fu_52469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1899_V_read1969_rewind_phi_fu_52469_p6 = data_1899_V_read1969_phi_reg_95380.read();
    } else {
        ap_phi_mux_data_1899_V_read1969_rewind_phi_fu_52469_p6 = data_1899_V_read1969_rewind_reg_52465.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_189_V_read259_phi_phi_fu_73154_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_189_V_read259_phi_phi_fu_73154_p4 = ap_phi_mux_data_189_V_read259_rewind_phi_fu_28529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_189_V_read259_phi_phi_fu_73154_p4 = data_189_V_read.read();
        } else {
            ap_phi_mux_data_189_V_read259_phi_phi_fu_73154_p4 = ap_phi_reg_pp0_iter0_data_189_V_read259_phi_reg_73150.read();
        }
    } else {
        ap_phi_mux_data_189_V_read259_phi_phi_fu_73154_p4 = ap_phi_reg_pp0_iter0_data_189_V_read259_phi_reg_73150.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_189_V_read259_rewind_phi_fu_28529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_189_V_read259_rewind_phi_fu_28529_p6 = data_189_V_read259_phi_reg_73150.read();
    } else {
        ap_phi_mux_data_189_V_read259_rewind_phi_fu_28529_p6 = data_189_V_read259_rewind_reg_28525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_18_V_read88_phi_phi_fu_70931_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_18_V_read88_phi_phi_fu_70931_p4 = ap_phi_mux_data_18_V_read88_rewind_phi_fu_26135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_18_V_read88_phi_phi_fu_70931_p4 = data_18_V_read.read();
        } else {
            ap_phi_mux_data_18_V_read88_phi_phi_fu_70931_p4 = ap_phi_reg_pp0_iter0_data_18_V_read88_phi_reg_70927.read();
        }
    } else {
        ap_phi_mux_data_18_V_read88_phi_phi_fu_70931_p4 = ap_phi_reg_pp0_iter0_data_18_V_read88_phi_reg_70927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_18_V_read88_rewind_phi_fu_26135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_18_V_read88_rewind_phi_fu_26135_p6 = data_18_V_read88_phi_reg_70927.read();
    } else {
        ap_phi_mux_data_18_V_read88_rewind_phi_fu_26135_p6 = data_18_V_read88_rewind_reg_26131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1900_V_read1970_phi_phi_fu_95397_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1900_V_read1970_phi_phi_fu_95397_p4 = ap_phi_mux_data_1900_V_read1970_rewind_phi_fu_52483_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1900_V_read1970_phi_phi_fu_95397_p4 = data_1900_V_read.read();
        } else {
            ap_phi_mux_data_1900_V_read1970_phi_phi_fu_95397_p4 = ap_phi_reg_pp0_iter0_data_1900_V_read1970_phi_reg_95393.read();
        }
    } else {
        ap_phi_mux_data_1900_V_read1970_phi_phi_fu_95397_p4 = ap_phi_reg_pp0_iter0_data_1900_V_read1970_phi_reg_95393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1900_V_read1970_rewind_phi_fu_52483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1900_V_read1970_rewind_phi_fu_52483_p6 = data_1900_V_read1970_phi_reg_95393.read();
    } else {
        ap_phi_mux_data_1900_V_read1970_rewind_phi_fu_52483_p6 = data_1900_V_read1970_rewind_reg_52479.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1901_V_read1971_phi_phi_fu_95410_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1901_V_read1971_phi_phi_fu_95410_p4 = ap_phi_mux_data_1901_V_read1971_rewind_phi_fu_52497_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1901_V_read1971_phi_phi_fu_95410_p4 = data_1901_V_read.read();
        } else {
            ap_phi_mux_data_1901_V_read1971_phi_phi_fu_95410_p4 = ap_phi_reg_pp0_iter0_data_1901_V_read1971_phi_reg_95406.read();
        }
    } else {
        ap_phi_mux_data_1901_V_read1971_phi_phi_fu_95410_p4 = ap_phi_reg_pp0_iter0_data_1901_V_read1971_phi_reg_95406.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1901_V_read1971_rewind_phi_fu_52497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1901_V_read1971_rewind_phi_fu_52497_p6 = data_1901_V_read1971_phi_reg_95406.read();
    } else {
        ap_phi_mux_data_1901_V_read1971_rewind_phi_fu_52497_p6 = data_1901_V_read1971_rewind_reg_52493.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1902_V_read1972_phi_phi_fu_95423_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1902_V_read1972_phi_phi_fu_95423_p4 = ap_phi_mux_data_1902_V_read1972_rewind_phi_fu_52511_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1902_V_read1972_phi_phi_fu_95423_p4 = data_1902_V_read.read();
        } else {
            ap_phi_mux_data_1902_V_read1972_phi_phi_fu_95423_p4 = ap_phi_reg_pp0_iter0_data_1902_V_read1972_phi_reg_95419.read();
        }
    } else {
        ap_phi_mux_data_1902_V_read1972_phi_phi_fu_95423_p4 = ap_phi_reg_pp0_iter0_data_1902_V_read1972_phi_reg_95419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1902_V_read1972_rewind_phi_fu_52511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1902_V_read1972_rewind_phi_fu_52511_p6 = data_1902_V_read1972_phi_reg_95419.read();
    } else {
        ap_phi_mux_data_1902_V_read1972_rewind_phi_fu_52511_p6 = data_1902_V_read1972_rewind_reg_52507.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1903_V_read1973_phi_phi_fu_95436_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1903_V_read1973_phi_phi_fu_95436_p4 = ap_phi_mux_data_1903_V_read1973_rewind_phi_fu_52525_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1903_V_read1973_phi_phi_fu_95436_p4 = data_1903_V_read.read();
        } else {
            ap_phi_mux_data_1903_V_read1973_phi_phi_fu_95436_p4 = ap_phi_reg_pp0_iter0_data_1903_V_read1973_phi_reg_95432.read();
        }
    } else {
        ap_phi_mux_data_1903_V_read1973_phi_phi_fu_95436_p4 = ap_phi_reg_pp0_iter0_data_1903_V_read1973_phi_reg_95432.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1903_V_read1973_rewind_phi_fu_52525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1903_V_read1973_rewind_phi_fu_52525_p6 = data_1903_V_read1973_phi_reg_95432.read();
    } else {
        ap_phi_mux_data_1903_V_read1973_rewind_phi_fu_52525_p6 = data_1903_V_read1973_rewind_reg_52521.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1904_V_read1974_phi_phi_fu_95449_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1904_V_read1974_phi_phi_fu_95449_p4 = ap_phi_mux_data_1904_V_read1974_rewind_phi_fu_52539_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1904_V_read1974_phi_phi_fu_95449_p4 = data_1904_V_read.read();
        } else {
            ap_phi_mux_data_1904_V_read1974_phi_phi_fu_95449_p4 = ap_phi_reg_pp0_iter0_data_1904_V_read1974_phi_reg_95445.read();
        }
    } else {
        ap_phi_mux_data_1904_V_read1974_phi_phi_fu_95449_p4 = ap_phi_reg_pp0_iter0_data_1904_V_read1974_phi_reg_95445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1904_V_read1974_rewind_phi_fu_52539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1904_V_read1974_rewind_phi_fu_52539_p6 = data_1904_V_read1974_phi_reg_95445.read();
    } else {
        ap_phi_mux_data_1904_V_read1974_rewind_phi_fu_52539_p6 = data_1904_V_read1974_rewind_reg_52535.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1905_V_read1975_phi_phi_fu_95462_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1905_V_read1975_phi_phi_fu_95462_p4 = ap_phi_mux_data_1905_V_read1975_rewind_phi_fu_52553_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1905_V_read1975_phi_phi_fu_95462_p4 = data_1905_V_read.read();
        } else {
            ap_phi_mux_data_1905_V_read1975_phi_phi_fu_95462_p4 = ap_phi_reg_pp0_iter0_data_1905_V_read1975_phi_reg_95458.read();
        }
    } else {
        ap_phi_mux_data_1905_V_read1975_phi_phi_fu_95462_p4 = ap_phi_reg_pp0_iter0_data_1905_V_read1975_phi_reg_95458.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1905_V_read1975_rewind_phi_fu_52553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1905_V_read1975_rewind_phi_fu_52553_p6 = data_1905_V_read1975_phi_reg_95458.read();
    } else {
        ap_phi_mux_data_1905_V_read1975_rewind_phi_fu_52553_p6 = data_1905_V_read1975_rewind_reg_52549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1906_V_read1976_phi_phi_fu_95475_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1906_V_read1976_phi_phi_fu_95475_p4 = ap_phi_mux_data_1906_V_read1976_rewind_phi_fu_52567_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1906_V_read1976_phi_phi_fu_95475_p4 = data_1906_V_read.read();
        } else {
            ap_phi_mux_data_1906_V_read1976_phi_phi_fu_95475_p4 = ap_phi_reg_pp0_iter0_data_1906_V_read1976_phi_reg_95471.read();
        }
    } else {
        ap_phi_mux_data_1906_V_read1976_phi_phi_fu_95475_p4 = ap_phi_reg_pp0_iter0_data_1906_V_read1976_phi_reg_95471.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1906_V_read1976_rewind_phi_fu_52567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1906_V_read1976_rewind_phi_fu_52567_p6 = data_1906_V_read1976_phi_reg_95471.read();
    } else {
        ap_phi_mux_data_1906_V_read1976_rewind_phi_fu_52567_p6 = data_1906_V_read1976_rewind_reg_52563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1907_V_read1977_phi_phi_fu_95488_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1907_V_read1977_phi_phi_fu_95488_p4 = ap_phi_mux_data_1907_V_read1977_rewind_phi_fu_52581_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1907_V_read1977_phi_phi_fu_95488_p4 = data_1907_V_read.read();
        } else {
            ap_phi_mux_data_1907_V_read1977_phi_phi_fu_95488_p4 = ap_phi_reg_pp0_iter0_data_1907_V_read1977_phi_reg_95484.read();
        }
    } else {
        ap_phi_mux_data_1907_V_read1977_phi_phi_fu_95488_p4 = ap_phi_reg_pp0_iter0_data_1907_V_read1977_phi_reg_95484.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1907_V_read1977_rewind_phi_fu_52581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1907_V_read1977_rewind_phi_fu_52581_p6 = data_1907_V_read1977_phi_reg_95484.read();
    } else {
        ap_phi_mux_data_1907_V_read1977_rewind_phi_fu_52581_p6 = data_1907_V_read1977_rewind_reg_52577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1908_V_read1978_phi_phi_fu_95501_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1908_V_read1978_phi_phi_fu_95501_p4 = ap_phi_mux_data_1908_V_read1978_rewind_phi_fu_52595_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1908_V_read1978_phi_phi_fu_95501_p4 = data_1908_V_read.read();
        } else {
            ap_phi_mux_data_1908_V_read1978_phi_phi_fu_95501_p4 = ap_phi_reg_pp0_iter0_data_1908_V_read1978_phi_reg_95497.read();
        }
    } else {
        ap_phi_mux_data_1908_V_read1978_phi_phi_fu_95501_p4 = ap_phi_reg_pp0_iter0_data_1908_V_read1978_phi_reg_95497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1908_V_read1978_rewind_phi_fu_52595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1908_V_read1978_rewind_phi_fu_52595_p6 = data_1908_V_read1978_phi_reg_95497.read();
    } else {
        ap_phi_mux_data_1908_V_read1978_rewind_phi_fu_52595_p6 = data_1908_V_read1978_rewind_reg_52591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1909_V_read1979_phi_phi_fu_95514_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1909_V_read1979_phi_phi_fu_95514_p4 = ap_phi_mux_data_1909_V_read1979_rewind_phi_fu_52609_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1909_V_read1979_phi_phi_fu_95514_p4 = data_1909_V_read.read();
        } else {
            ap_phi_mux_data_1909_V_read1979_phi_phi_fu_95514_p4 = ap_phi_reg_pp0_iter0_data_1909_V_read1979_phi_reg_95510.read();
        }
    } else {
        ap_phi_mux_data_1909_V_read1979_phi_phi_fu_95514_p4 = ap_phi_reg_pp0_iter0_data_1909_V_read1979_phi_reg_95510.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1909_V_read1979_rewind_phi_fu_52609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1909_V_read1979_rewind_phi_fu_52609_p6 = data_1909_V_read1979_phi_reg_95510.read();
    } else {
        ap_phi_mux_data_1909_V_read1979_rewind_phi_fu_52609_p6 = data_1909_V_read1979_rewind_reg_52605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_190_V_read260_phi_phi_fu_73167_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_190_V_read260_phi_phi_fu_73167_p4 = ap_phi_mux_data_190_V_read260_rewind_phi_fu_28543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_190_V_read260_phi_phi_fu_73167_p4 = data_190_V_read.read();
        } else {
            ap_phi_mux_data_190_V_read260_phi_phi_fu_73167_p4 = ap_phi_reg_pp0_iter0_data_190_V_read260_phi_reg_73163.read();
        }
    } else {
        ap_phi_mux_data_190_V_read260_phi_phi_fu_73167_p4 = ap_phi_reg_pp0_iter0_data_190_V_read260_phi_reg_73163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_190_V_read260_rewind_phi_fu_28543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_190_V_read260_rewind_phi_fu_28543_p6 = data_190_V_read260_phi_reg_73163.read();
    } else {
        ap_phi_mux_data_190_V_read260_rewind_phi_fu_28543_p6 = data_190_V_read260_rewind_reg_28539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1910_V_read1980_phi_phi_fu_95527_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1910_V_read1980_phi_phi_fu_95527_p4 = ap_phi_mux_data_1910_V_read1980_rewind_phi_fu_52623_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1910_V_read1980_phi_phi_fu_95527_p4 = data_1910_V_read.read();
        } else {
            ap_phi_mux_data_1910_V_read1980_phi_phi_fu_95527_p4 = ap_phi_reg_pp0_iter0_data_1910_V_read1980_phi_reg_95523.read();
        }
    } else {
        ap_phi_mux_data_1910_V_read1980_phi_phi_fu_95527_p4 = ap_phi_reg_pp0_iter0_data_1910_V_read1980_phi_reg_95523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1910_V_read1980_rewind_phi_fu_52623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1910_V_read1980_rewind_phi_fu_52623_p6 = data_1910_V_read1980_phi_reg_95523.read();
    } else {
        ap_phi_mux_data_1910_V_read1980_rewind_phi_fu_52623_p6 = data_1910_V_read1980_rewind_reg_52619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1911_V_read1981_phi_phi_fu_95540_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1911_V_read1981_phi_phi_fu_95540_p4 = ap_phi_mux_data_1911_V_read1981_rewind_phi_fu_52637_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1911_V_read1981_phi_phi_fu_95540_p4 = data_1911_V_read.read();
        } else {
            ap_phi_mux_data_1911_V_read1981_phi_phi_fu_95540_p4 = ap_phi_reg_pp0_iter0_data_1911_V_read1981_phi_reg_95536.read();
        }
    } else {
        ap_phi_mux_data_1911_V_read1981_phi_phi_fu_95540_p4 = ap_phi_reg_pp0_iter0_data_1911_V_read1981_phi_reg_95536.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1911_V_read1981_rewind_phi_fu_52637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1911_V_read1981_rewind_phi_fu_52637_p6 = data_1911_V_read1981_phi_reg_95536.read();
    } else {
        ap_phi_mux_data_1911_V_read1981_rewind_phi_fu_52637_p6 = data_1911_V_read1981_rewind_reg_52633.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1912_V_read1982_phi_phi_fu_95553_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1912_V_read1982_phi_phi_fu_95553_p4 = ap_phi_mux_data_1912_V_read1982_rewind_phi_fu_52651_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1912_V_read1982_phi_phi_fu_95553_p4 = data_1912_V_read.read();
        } else {
            ap_phi_mux_data_1912_V_read1982_phi_phi_fu_95553_p4 = ap_phi_reg_pp0_iter0_data_1912_V_read1982_phi_reg_95549.read();
        }
    } else {
        ap_phi_mux_data_1912_V_read1982_phi_phi_fu_95553_p4 = ap_phi_reg_pp0_iter0_data_1912_V_read1982_phi_reg_95549.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1912_V_read1982_rewind_phi_fu_52651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1912_V_read1982_rewind_phi_fu_52651_p6 = data_1912_V_read1982_phi_reg_95549.read();
    } else {
        ap_phi_mux_data_1912_V_read1982_rewind_phi_fu_52651_p6 = data_1912_V_read1982_rewind_reg_52647.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1913_V_read1983_phi_phi_fu_95566_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1913_V_read1983_phi_phi_fu_95566_p4 = ap_phi_mux_data_1913_V_read1983_rewind_phi_fu_52665_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1913_V_read1983_phi_phi_fu_95566_p4 = data_1913_V_read.read();
        } else {
            ap_phi_mux_data_1913_V_read1983_phi_phi_fu_95566_p4 = ap_phi_reg_pp0_iter0_data_1913_V_read1983_phi_reg_95562.read();
        }
    } else {
        ap_phi_mux_data_1913_V_read1983_phi_phi_fu_95566_p4 = ap_phi_reg_pp0_iter0_data_1913_V_read1983_phi_reg_95562.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1913_V_read1983_rewind_phi_fu_52665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1913_V_read1983_rewind_phi_fu_52665_p6 = data_1913_V_read1983_phi_reg_95562.read();
    } else {
        ap_phi_mux_data_1913_V_read1983_rewind_phi_fu_52665_p6 = data_1913_V_read1983_rewind_reg_52661.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1914_V_read1984_phi_phi_fu_95579_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1914_V_read1984_phi_phi_fu_95579_p4 = ap_phi_mux_data_1914_V_read1984_rewind_phi_fu_52679_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1914_V_read1984_phi_phi_fu_95579_p4 = data_1914_V_read.read();
        } else {
            ap_phi_mux_data_1914_V_read1984_phi_phi_fu_95579_p4 = ap_phi_reg_pp0_iter0_data_1914_V_read1984_phi_reg_95575.read();
        }
    } else {
        ap_phi_mux_data_1914_V_read1984_phi_phi_fu_95579_p4 = ap_phi_reg_pp0_iter0_data_1914_V_read1984_phi_reg_95575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1914_V_read1984_rewind_phi_fu_52679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1914_V_read1984_rewind_phi_fu_52679_p6 = data_1914_V_read1984_phi_reg_95575.read();
    } else {
        ap_phi_mux_data_1914_V_read1984_rewind_phi_fu_52679_p6 = data_1914_V_read1984_rewind_reg_52675.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1915_V_read1985_phi_phi_fu_95592_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1915_V_read1985_phi_phi_fu_95592_p4 = ap_phi_mux_data_1915_V_read1985_rewind_phi_fu_52693_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1915_V_read1985_phi_phi_fu_95592_p4 = data_1915_V_read.read();
        } else {
            ap_phi_mux_data_1915_V_read1985_phi_phi_fu_95592_p4 = ap_phi_reg_pp0_iter0_data_1915_V_read1985_phi_reg_95588.read();
        }
    } else {
        ap_phi_mux_data_1915_V_read1985_phi_phi_fu_95592_p4 = ap_phi_reg_pp0_iter0_data_1915_V_read1985_phi_reg_95588.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1915_V_read1985_rewind_phi_fu_52693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1915_V_read1985_rewind_phi_fu_52693_p6 = data_1915_V_read1985_phi_reg_95588.read();
    } else {
        ap_phi_mux_data_1915_V_read1985_rewind_phi_fu_52693_p6 = data_1915_V_read1985_rewind_reg_52689.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1916_V_read1986_phi_phi_fu_95605_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1916_V_read1986_phi_phi_fu_95605_p4 = ap_phi_mux_data_1916_V_read1986_rewind_phi_fu_52707_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1916_V_read1986_phi_phi_fu_95605_p4 = data_1916_V_read.read();
        } else {
            ap_phi_mux_data_1916_V_read1986_phi_phi_fu_95605_p4 = ap_phi_reg_pp0_iter0_data_1916_V_read1986_phi_reg_95601.read();
        }
    } else {
        ap_phi_mux_data_1916_V_read1986_phi_phi_fu_95605_p4 = ap_phi_reg_pp0_iter0_data_1916_V_read1986_phi_reg_95601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1916_V_read1986_rewind_phi_fu_52707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1916_V_read1986_rewind_phi_fu_52707_p6 = data_1916_V_read1986_phi_reg_95601.read();
    } else {
        ap_phi_mux_data_1916_V_read1986_rewind_phi_fu_52707_p6 = data_1916_V_read1986_rewind_reg_52703.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1917_V_read1987_phi_phi_fu_95618_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1917_V_read1987_phi_phi_fu_95618_p4 = ap_phi_mux_data_1917_V_read1987_rewind_phi_fu_52721_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1917_V_read1987_phi_phi_fu_95618_p4 = data_1917_V_read.read();
        } else {
            ap_phi_mux_data_1917_V_read1987_phi_phi_fu_95618_p4 = ap_phi_reg_pp0_iter0_data_1917_V_read1987_phi_reg_95614.read();
        }
    } else {
        ap_phi_mux_data_1917_V_read1987_phi_phi_fu_95618_p4 = ap_phi_reg_pp0_iter0_data_1917_V_read1987_phi_reg_95614.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1917_V_read1987_rewind_phi_fu_52721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1917_V_read1987_rewind_phi_fu_52721_p6 = data_1917_V_read1987_phi_reg_95614.read();
    } else {
        ap_phi_mux_data_1917_V_read1987_rewind_phi_fu_52721_p6 = data_1917_V_read1987_rewind_reg_52717.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1918_V_read1988_phi_phi_fu_95631_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1918_V_read1988_phi_phi_fu_95631_p4 = ap_phi_mux_data_1918_V_read1988_rewind_phi_fu_52735_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1918_V_read1988_phi_phi_fu_95631_p4 = data_1918_V_read.read();
        } else {
            ap_phi_mux_data_1918_V_read1988_phi_phi_fu_95631_p4 = ap_phi_reg_pp0_iter0_data_1918_V_read1988_phi_reg_95627.read();
        }
    } else {
        ap_phi_mux_data_1918_V_read1988_phi_phi_fu_95631_p4 = ap_phi_reg_pp0_iter0_data_1918_V_read1988_phi_reg_95627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1918_V_read1988_rewind_phi_fu_52735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1918_V_read1988_rewind_phi_fu_52735_p6 = data_1918_V_read1988_phi_reg_95627.read();
    } else {
        ap_phi_mux_data_1918_V_read1988_rewind_phi_fu_52735_p6 = data_1918_V_read1988_rewind_reg_52731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1919_V_read1989_phi_phi_fu_95644_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1919_V_read1989_phi_phi_fu_95644_p4 = ap_phi_mux_data_1919_V_read1989_rewind_phi_fu_52749_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1919_V_read1989_phi_phi_fu_95644_p4 = data_1919_V_read.read();
        } else {
            ap_phi_mux_data_1919_V_read1989_phi_phi_fu_95644_p4 = ap_phi_reg_pp0_iter0_data_1919_V_read1989_phi_reg_95640.read();
        }
    } else {
        ap_phi_mux_data_1919_V_read1989_phi_phi_fu_95644_p4 = ap_phi_reg_pp0_iter0_data_1919_V_read1989_phi_reg_95640.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1919_V_read1989_rewind_phi_fu_52749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1919_V_read1989_rewind_phi_fu_52749_p6 = data_1919_V_read1989_phi_reg_95640.read();
    } else {
        ap_phi_mux_data_1919_V_read1989_rewind_phi_fu_52749_p6 = data_1919_V_read1989_rewind_reg_52745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_191_V_read261_phi_phi_fu_73180_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_191_V_read261_phi_phi_fu_73180_p4 = ap_phi_mux_data_191_V_read261_rewind_phi_fu_28557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_191_V_read261_phi_phi_fu_73180_p4 = data_191_V_read.read();
        } else {
            ap_phi_mux_data_191_V_read261_phi_phi_fu_73180_p4 = ap_phi_reg_pp0_iter0_data_191_V_read261_phi_reg_73176.read();
        }
    } else {
        ap_phi_mux_data_191_V_read261_phi_phi_fu_73180_p4 = ap_phi_reg_pp0_iter0_data_191_V_read261_phi_reg_73176.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_191_V_read261_rewind_phi_fu_28557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_191_V_read261_rewind_phi_fu_28557_p6 = data_191_V_read261_phi_reg_73176.read();
    } else {
        ap_phi_mux_data_191_V_read261_rewind_phi_fu_28557_p6 = data_191_V_read261_rewind_reg_28553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1920_V_read1990_phi_phi_fu_95657_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1920_V_read1990_phi_phi_fu_95657_p4 = ap_phi_mux_data_1920_V_read1990_rewind_phi_fu_52763_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1920_V_read1990_phi_phi_fu_95657_p4 = data_1920_V_read.read();
        } else {
            ap_phi_mux_data_1920_V_read1990_phi_phi_fu_95657_p4 = ap_phi_reg_pp0_iter0_data_1920_V_read1990_phi_reg_95653.read();
        }
    } else {
        ap_phi_mux_data_1920_V_read1990_phi_phi_fu_95657_p4 = ap_phi_reg_pp0_iter0_data_1920_V_read1990_phi_reg_95653.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1920_V_read1990_rewind_phi_fu_52763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1920_V_read1990_rewind_phi_fu_52763_p6 = data_1920_V_read1990_phi_reg_95653.read();
    } else {
        ap_phi_mux_data_1920_V_read1990_rewind_phi_fu_52763_p6 = data_1920_V_read1990_rewind_reg_52759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1921_V_read1991_phi_phi_fu_95670_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1921_V_read1991_phi_phi_fu_95670_p4 = ap_phi_mux_data_1921_V_read1991_rewind_phi_fu_52777_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1921_V_read1991_phi_phi_fu_95670_p4 = data_1921_V_read.read();
        } else {
            ap_phi_mux_data_1921_V_read1991_phi_phi_fu_95670_p4 = ap_phi_reg_pp0_iter0_data_1921_V_read1991_phi_reg_95666.read();
        }
    } else {
        ap_phi_mux_data_1921_V_read1991_phi_phi_fu_95670_p4 = ap_phi_reg_pp0_iter0_data_1921_V_read1991_phi_reg_95666.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1921_V_read1991_rewind_phi_fu_52777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1921_V_read1991_rewind_phi_fu_52777_p6 = data_1921_V_read1991_phi_reg_95666.read();
    } else {
        ap_phi_mux_data_1921_V_read1991_rewind_phi_fu_52777_p6 = data_1921_V_read1991_rewind_reg_52773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1922_V_read1992_phi_phi_fu_95683_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1922_V_read1992_phi_phi_fu_95683_p4 = ap_phi_mux_data_1922_V_read1992_rewind_phi_fu_52791_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1922_V_read1992_phi_phi_fu_95683_p4 = data_1922_V_read.read();
        } else {
            ap_phi_mux_data_1922_V_read1992_phi_phi_fu_95683_p4 = ap_phi_reg_pp0_iter0_data_1922_V_read1992_phi_reg_95679.read();
        }
    } else {
        ap_phi_mux_data_1922_V_read1992_phi_phi_fu_95683_p4 = ap_phi_reg_pp0_iter0_data_1922_V_read1992_phi_reg_95679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1922_V_read1992_rewind_phi_fu_52791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1922_V_read1992_rewind_phi_fu_52791_p6 = data_1922_V_read1992_phi_reg_95679.read();
    } else {
        ap_phi_mux_data_1922_V_read1992_rewind_phi_fu_52791_p6 = data_1922_V_read1992_rewind_reg_52787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1923_V_read1993_phi_phi_fu_95696_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1923_V_read1993_phi_phi_fu_95696_p4 = ap_phi_mux_data_1923_V_read1993_rewind_phi_fu_52805_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1923_V_read1993_phi_phi_fu_95696_p4 = data_1923_V_read.read();
        } else {
            ap_phi_mux_data_1923_V_read1993_phi_phi_fu_95696_p4 = ap_phi_reg_pp0_iter0_data_1923_V_read1993_phi_reg_95692.read();
        }
    } else {
        ap_phi_mux_data_1923_V_read1993_phi_phi_fu_95696_p4 = ap_phi_reg_pp0_iter0_data_1923_V_read1993_phi_reg_95692.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1923_V_read1993_rewind_phi_fu_52805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1923_V_read1993_rewind_phi_fu_52805_p6 = data_1923_V_read1993_phi_reg_95692.read();
    } else {
        ap_phi_mux_data_1923_V_read1993_rewind_phi_fu_52805_p6 = data_1923_V_read1993_rewind_reg_52801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1924_V_read1994_phi_phi_fu_95709_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1924_V_read1994_phi_phi_fu_95709_p4 = ap_phi_mux_data_1924_V_read1994_rewind_phi_fu_52819_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1924_V_read1994_phi_phi_fu_95709_p4 = data_1924_V_read.read();
        } else {
            ap_phi_mux_data_1924_V_read1994_phi_phi_fu_95709_p4 = ap_phi_reg_pp0_iter0_data_1924_V_read1994_phi_reg_95705.read();
        }
    } else {
        ap_phi_mux_data_1924_V_read1994_phi_phi_fu_95709_p4 = ap_phi_reg_pp0_iter0_data_1924_V_read1994_phi_reg_95705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1924_V_read1994_rewind_phi_fu_52819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1924_V_read1994_rewind_phi_fu_52819_p6 = data_1924_V_read1994_phi_reg_95705.read();
    } else {
        ap_phi_mux_data_1924_V_read1994_rewind_phi_fu_52819_p6 = data_1924_V_read1994_rewind_reg_52815.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1925_V_read1995_phi_phi_fu_95722_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1925_V_read1995_phi_phi_fu_95722_p4 = ap_phi_mux_data_1925_V_read1995_rewind_phi_fu_52833_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1925_V_read1995_phi_phi_fu_95722_p4 = data_1925_V_read.read();
        } else {
            ap_phi_mux_data_1925_V_read1995_phi_phi_fu_95722_p4 = ap_phi_reg_pp0_iter0_data_1925_V_read1995_phi_reg_95718.read();
        }
    } else {
        ap_phi_mux_data_1925_V_read1995_phi_phi_fu_95722_p4 = ap_phi_reg_pp0_iter0_data_1925_V_read1995_phi_reg_95718.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1925_V_read1995_rewind_phi_fu_52833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1925_V_read1995_rewind_phi_fu_52833_p6 = data_1925_V_read1995_phi_reg_95718.read();
    } else {
        ap_phi_mux_data_1925_V_read1995_rewind_phi_fu_52833_p6 = data_1925_V_read1995_rewind_reg_52829.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1926_V_read1996_phi_phi_fu_95735_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1926_V_read1996_phi_phi_fu_95735_p4 = ap_phi_mux_data_1926_V_read1996_rewind_phi_fu_52847_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1926_V_read1996_phi_phi_fu_95735_p4 = data_1926_V_read.read();
        } else {
            ap_phi_mux_data_1926_V_read1996_phi_phi_fu_95735_p4 = ap_phi_reg_pp0_iter0_data_1926_V_read1996_phi_reg_95731.read();
        }
    } else {
        ap_phi_mux_data_1926_V_read1996_phi_phi_fu_95735_p4 = ap_phi_reg_pp0_iter0_data_1926_V_read1996_phi_reg_95731.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1926_V_read1996_rewind_phi_fu_52847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1926_V_read1996_rewind_phi_fu_52847_p6 = data_1926_V_read1996_phi_reg_95731.read();
    } else {
        ap_phi_mux_data_1926_V_read1996_rewind_phi_fu_52847_p6 = data_1926_V_read1996_rewind_reg_52843.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1927_V_read1997_phi_phi_fu_95748_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1927_V_read1997_phi_phi_fu_95748_p4 = ap_phi_mux_data_1927_V_read1997_rewind_phi_fu_52861_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1927_V_read1997_phi_phi_fu_95748_p4 = data_1927_V_read.read();
        } else {
            ap_phi_mux_data_1927_V_read1997_phi_phi_fu_95748_p4 = ap_phi_reg_pp0_iter0_data_1927_V_read1997_phi_reg_95744.read();
        }
    } else {
        ap_phi_mux_data_1927_V_read1997_phi_phi_fu_95748_p4 = ap_phi_reg_pp0_iter0_data_1927_V_read1997_phi_reg_95744.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1927_V_read1997_rewind_phi_fu_52861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1927_V_read1997_rewind_phi_fu_52861_p6 = data_1927_V_read1997_phi_reg_95744.read();
    } else {
        ap_phi_mux_data_1927_V_read1997_rewind_phi_fu_52861_p6 = data_1927_V_read1997_rewind_reg_52857.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1928_V_read1998_phi_phi_fu_95761_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1928_V_read1998_phi_phi_fu_95761_p4 = ap_phi_mux_data_1928_V_read1998_rewind_phi_fu_52875_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1928_V_read1998_phi_phi_fu_95761_p4 = data_1928_V_read.read();
        } else {
            ap_phi_mux_data_1928_V_read1998_phi_phi_fu_95761_p4 = ap_phi_reg_pp0_iter0_data_1928_V_read1998_phi_reg_95757.read();
        }
    } else {
        ap_phi_mux_data_1928_V_read1998_phi_phi_fu_95761_p4 = ap_phi_reg_pp0_iter0_data_1928_V_read1998_phi_reg_95757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1928_V_read1998_rewind_phi_fu_52875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1928_V_read1998_rewind_phi_fu_52875_p6 = data_1928_V_read1998_phi_reg_95757.read();
    } else {
        ap_phi_mux_data_1928_V_read1998_rewind_phi_fu_52875_p6 = data_1928_V_read1998_rewind_reg_52871.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1929_V_read1999_phi_phi_fu_95774_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1929_V_read1999_phi_phi_fu_95774_p4 = ap_phi_mux_data_1929_V_read1999_rewind_phi_fu_52889_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1929_V_read1999_phi_phi_fu_95774_p4 = data_1929_V_read.read();
        } else {
            ap_phi_mux_data_1929_V_read1999_phi_phi_fu_95774_p4 = ap_phi_reg_pp0_iter0_data_1929_V_read1999_phi_reg_95770.read();
        }
    } else {
        ap_phi_mux_data_1929_V_read1999_phi_phi_fu_95774_p4 = ap_phi_reg_pp0_iter0_data_1929_V_read1999_phi_reg_95770.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1929_V_read1999_rewind_phi_fu_52889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1929_V_read1999_rewind_phi_fu_52889_p6 = data_1929_V_read1999_phi_reg_95770.read();
    } else {
        ap_phi_mux_data_1929_V_read1999_rewind_phi_fu_52889_p6 = data_1929_V_read1999_rewind_reg_52885.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_192_V_read262_phi_phi_fu_73193_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_192_V_read262_phi_phi_fu_73193_p4 = ap_phi_mux_data_192_V_read262_rewind_phi_fu_28571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_192_V_read262_phi_phi_fu_73193_p4 = data_192_V_read.read();
        } else {
            ap_phi_mux_data_192_V_read262_phi_phi_fu_73193_p4 = ap_phi_reg_pp0_iter0_data_192_V_read262_phi_reg_73189.read();
        }
    } else {
        ap_phi_mux_data_192_V_read262_phi_phi_fu_73193_p4 = ap_phi_reg_pp0_iter0_data_192_V_read262_phi_reg_73189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_192_V_read262_rewind_phi_fu_28571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_192_V_read262_rewind_phi_fu_28571_p6 = data_192_V_read262_phi_reg_73189.read();
    } else {
        ap_phi_mux_data_192_V_read262_rewind_phi_fu_28571_p6 = data_192_V_read262_rewind_reg_28567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1930_V_read2000_phi_phi_fu_95787_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1930_V_read2000_phi_phi_fu_95787_p4 = ap_phi_mux_data_1930_V_read2000_rewind_phi_fu_52903_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1930_V_read2000_phi_phi_fu_95787_p4 = data_1930_V_read.read();
        } else {
            ap_phi_mux_data_1930_V_read2000_phi_phi_fu_95787_p4 = ap_phi_reg_pp0_iter0_data_1930_V_read2000_phi_reg_95783.read();
        }
    } else {
        ap_phi_mux_data_1930_V_read2000_phi_phi_fu_95787_p4 = ap_phi_reg_pp0_iter0_data_1930_V_read2000_phi_reg_95783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1930_V_read2000_rewind_phi_fu_52903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1930_V_read2000_rewind_phi_fu_52903_p6 = data_1930_V_read2000_phi_reg_95783.read();
    } else {
        ap_phi_mux_data_1930_V_read2000_rewind_phi_fu_52903_p6 = data_1930_V_read2000_rewind_reg_52899.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1931_V_read2001_phi_phi_fu_95800_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1931_V_read2001_phi_phi_fu_95800_p4 = ap_phi_mux_data_1931_V_read2001_rewind_phi_fu_52917_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1931_V_read2001_phi_phi_fu_95800_p4 = data_1931_V_read.read();
        } else {
            ap_phi_mux_data_1931_V_read2001_phi_phi_fu_95800_p4 = ap_phi_reg_pp0_iter0_data_1931_V_read2001_phi_reg_95796.read();
        }
    } else {
        ap_phi_mux_data_1931_V_read2001_phi_phi_fu_95800_p4 = ap_phi_reg_pp0_iter0_data_1931_V_read2001_phi_reg_95796.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1931_V_read2001_rewind_phi_fu_52917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1931_V_read2001_rewind_phi_fu_52917_p6 = data_1931_V_read2001_phi_reg_95796.read();
    } else {
        ap_phi_mux_data_1931_V_read2001_rewind_phi_fu_52917_p6 = data_1931_V_read2001_rewind_reg_52913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1932_V_read2002_phi_phi_fu_95813_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1932_V_read2002_phi_phi_fu_95813_p4 = ap_phi_mux_data_1932_V_read2002_rewind_phi_fu_52931_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1932_V_read2002_phi_phi_fu_95813_p4 = data_1932_V_read.read();
        } else {
            ap_phi_mux_data_1932_V_read2002_phi_phi_fu_95813_p4 = ap_phi_reg_pp0_iter0_data_1932_V_read2002_phi_reg_95809.read();
        }
    } else {
        ap_phi_mux_data_1932_V_read2002_phi_phi_fu_95813_p4 = ap_phi_reg_pp0_iter0_data_1932_V_read2002_phi_reg_95809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1932_V_read2002_rewind_phi_fu_52931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1932_V_read2002_rewind_phi_fu_52931_p6 = data_1932_V_read2002_phi_reg_95809.read();
    } else {
        ap_phi_mux_data_1932_V_read2002_rewind_phi_fu_52931_p6 = data_1932_V_read2002_rewind_reg_52927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1933_V_read2003_phi_phi_fu_95826_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1933_V_read2003_phi_phi_fu_95826_p4 = ap_phi_mux_data_1933_V_read2003_rewind_phi_fu_52945_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1933_V_read2003_phi_phi_fu_95826_p4 = data_1933_V_read.read();
        } else {
            ap_phi_mux_data_1933_V_read2003_phi_phi_fu_95826_p4 = ap_phi_reg_pp0_iter0_data_1933_V_read2003_phi_reg_95822.read();
        }
    } else {
        ap_phi_mux_data_1933_V_read2003_phi_phi_fu_95826_p4 = ap_phi_reg_pp0_iter0_data_1933_V_read2003_phi_reg_95822.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1933_V_read2003_rewind_phi_fu_52945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1933_V_read2003_rewind_phi_fu_52945_p6 = data_1933_V_read2003_phi_reg_95822.read();
    } else {
        ap_phi_mux_data_1933_V_read2003_rewind_phi_fu_52945_p6 = data_1933_V_read2003_rewind_reg_52941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1934_V_read2004_phi_phi_fu_95839_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1934_V_read2004_phi_phi_fu_95839_p4 = ap_phi_mux_data_1934_V_read2004_rewind_phi_fu_52959_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1934_V_read2004_phi_phi_fu_95839_p4 = data_1934_V_read.read();
        } else {
            ap_phi_mux_data_1934_V_read2004_phi_phi_fu_95839_p4 = ap_phi_reg_pp0_iter0_data_1934_V_read2004_phi_reg_95835.read();
        }
    } else {
        ap_phi_mux_data_1934_V_read2004_phi_phi_fu_95839_p4 = ap_phi_reg_pp0_iter0_data_1934_V_read2004_phi_reg_95835.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1934_V_read2004_rewind_phi_fu_52959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1934_V_read2004_rewind_phi_fu_52959_p6 = data_1934_V_read2004_phi_reg_95835.read();
    } else {
        ap_phi_mux_data_1934_V_read2004_rewind_phi_fu_52959_p6 = data_1934_V_read2004_rewind_reg_52955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1935_V_read2005_phi_phi_fu_95852_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1935_V_read2005_phi_phi_fu_95852_p4 = ap_phi_mux_data_1935_V_read2005_rewind_phi_fu_52973_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1935_V_read2005_phi_phi_fu_95852_p4 = data_1935_V_read.read();
        } else {
            ap_phi_mux_data_1935_V_read2005_phi_phi_fu_95852_p4 = ap_phi_reg_pp0_iter0_data_1935_V_read2005_phi_reg_95848.read();
        }
    } else {
        ap_phi_mux_data_1935_V_read2005_phi_phi_fu_95852_p4 = ap_phi_reg_pp0_iter0_data_1935_V_read2005_phi_reg_95848.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1935_V_read2005_rewind_phi_fu_52973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1935_V_read2005_rewind_phi_fu_52973_p6 = data_1935_V_read2005_phi_reg_95848.read();
    } else {
        ap_phi_mux_data_1935_V_read2005_rewind_phi_fu_52973_p6 = data_1935_V_read2005_rewind_reg_52969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1936_V_read2006_phi_phi_fu_95865_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1936_V_read2006_phi_phi_fu_95865_p4 = ap_phi_mux_data_1936_V_read2006_rewind_phi_fu_52987_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1936_V_read2006_phi_phi_fu_95865_p4 = data_1936_V_read.read();
        } else {
            ap_phi_mux_data_1936_V_read2006_phi_phi_fu_95865_p4 = ap_phi_reg_pp0_iter0_data_1936_V_read2006_phi_reg_95861.read();
        }
    } else {
        ap_phi_mux_data_1936_V_read2006_phi_phi_fu_95865_p4 = ap_phi_reg_pp0_iter0_data_1936_V_read2006_phi_reg_95861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1936_V_read2006_rewind_phi_fu_52987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1936_V_read2006_rewind_phi_fu_52987_p6 = data_1936_V_read2006_phi_reg_95861.read();
    } else {
        ap_phi_mux_data_1936_V_read2006_rewind_phi_fu_52987_p6 = data_1936_V_read2006_rewind_reg_52983.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1937_V_read2007_phi_phi_fu_95878_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1937_V_read2007_phi_phi_fu_95878_p4 = ap_phi_mux_data_1937_V_read2007_rewind_phi_fu_53001_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1937_V_read2007_phi_phi_fu_95878_p4 = data_1937_V_read.read();
        } else {
            ap_phi_mux_data_1937_V_read2007_phi_phi_fu_95878_p4 = ap_phi_reg_pp0_iter0_data_1937_V_read2007_phi_reg_95874.read();
        }
    } else {
        ap_phi_mux_data_1937_V_read2007_phi_phi_fu_95878_p4 = ap_phi_reg_pp0_iter0_data_1937_V_read2007_phi_reg_95874.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1937_V_read2007_rewind_phi_fu_53001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1937_V_read2007_rewind_phi_fu_53001_p6 = data_1937_V_read2007_phi_reg_95874.read();
    } else {
        ap_phi_mux_data_1937_V_read2007_rewind_phi_fu_53001_p6 = data_1937_V_read2007_rewind_reg_52997.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1938_V_read2008_phi_phi_fu_95891_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1938_V_read2008_phi_phi_fu_95891_p4 = ap_phi_mux_data_1938_V_read2008_rewind_phi_fu_53015_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1938_V_read2008_phi_phi_fu_95891_p4 = data_1938_V_read.read();
        } else {
            ap_phi_mux_data_1938_V_read2008_phi_phi_fu_95891_p4 = ap_phi_reg_pp0_iter0_data_1938_V_read2008_phi_reg_95887.read();
        }
    } else {
        ap_phi_mux_data_1938_V_read2008_phi_phi_fu_95891_p4 = ap_phi_reg_pp0_iter0_data_1938_V_read2008_phi_reg_95887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1938_V_read2008_rewind_phi_fu_53015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1938_V_read2008_rewind_phi_fu_53015_p6 = data_1938_V_read2008_phi_reg_95887.read();
    } else {
        ap_phi_mux_data_1938_V_read2008_rewind_phi_fu_53015_p6 = data_1938_V_read2008_rewind_reg_53011.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1939_V_read2009_phi_phi_fu_95904_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1939_V_read2009_phi_phi_fu_95904_p4 = ap_phi_mux_data_1939_V_read2009_rewind_phi_fu_53029_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1939_V_read2009_phi_phi_fu_95904_p4 = data_1939_V_read.read();
        } else {
            ap_phi_mux_data_1939_V_read2009_phi_phi_fu_95904_p4 = ap_phi_reg_pp0_iter0_data_1939_V_read2009_phi_reg_95900.read();
        }
    } else {
        ap_phi_mux_data_1939_V_read2009_phi_phi_fu_95904_p4 = ap_phi_reg_pp0_iter0_data_1939_V_read2009_phi_reg_95900.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1939_V_read2009_rewind_phi_fu_53029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1939_V_read2009_rewind_phi_fu_53029_p6 = data_1939_V_read2009_phi_reg_95900.read();
    } else {
        ap_phi_mux_data_1939_V_read2009_rewind_phi_fu_53029_p6 = data_1939_V_read2009_rewind_reg_53025.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_193_V_read263_phi_phi_fu_73206_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_193_V_read263_phi_phi_fu_73206_p4 = ap_phi_mux_data_193_V_read263_rewind_phi_fu_28585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_193_V_read263_phi_phi_fu_73206_p4 = data_193_V_read.read();
        } else {
            ap_phi_mux_data_193_V_read263_phi_phi_fu_73206_p4 = ap_phi_reg_pp0_iter0_data_193_V_read263_phi_reg_73202.read();
        }
    } else {
        ap_phi_mux_data_193_V_read263_phi_phi_fu_73206_p4 = ap_phi_reg_pp0_iter0_data_193_V_read263_phi_reg_73202.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_193_V_read263_rewind_phi_fu_28585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_193_V_read263_rewind_phi_fu_28585_p6 = data_193_V_read263_phi_reg_73202.read();
    } else {
        ap_phi_mux_data_193_V_read263_rewind_phi_fu_28585_p6 = data_193_V_read263_rewind_reg_28581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1940_V_read2010_phi_phi_fu_95917_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1940_V_read2010_phi_phi_fu_95917_p4 = ap_phi_mux_data_1940_V_read2010_rewind_phi_fu_53043_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1940_V_read2010_phi_phi_fu_95917_p4 = data_1940_V_read.read();
        } else {
            ap_phi_mux_data_1940_V_read2010_phi_phi_fu_95917_p4 = ap_phi_reg_pp0_iter0_data_1940_V_read2010_phi_reg_95913.read();
        }
    } else {
        ap_phi_mux_data_1940_V_read2010_phi_phi_fu_95917_p4 = ap_phi_reg_pp0_iter0_data_1940_V_read2010_phi_reg_95913.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1940_V_read2010_rewind_phi_fu_53043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1940_V_read2010_rewind_phi_fu_53043_p6 = data_1940_V_read2010_phi_reg_95913.read();
    } else {
        ap_phi_mux_data_1940_V_read2010_rewind_phi_fu_53043_p6 = data_1940_V_read2010_rewind_reg_53039.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1941_V_read2011_phi_phi_fu_95930_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1941_V_read2011_phi_phi_fu_95930_p4 = ap_phi_mux_data_1941_V_read2011_rewind_phi_fu_53057_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1941_V_read2011_phi_phi_fu_95930_p4 = data_1941_V_read.read();
        } else {
            ap_phi_mux_data_1941_V_read2011_phi_phi_fu_95930_p4 = ap_phi_reg_pp0_iter0_data_1941_V_read2011_phi_reg_95926.read();
        }
    } else {
        ap_phi_mux_data_1941_V_read2011_phi_phi_fu_95930_p4 = ap_phi_reg_pp0_iter0_data_1941_V_read2011_phi_reg_95926.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1941_V_read2011_rewind_phi_fu_53057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1941_V_read2011_rewind_phi_fu_53057_p6 = data_1941_V_read2011_phi_reg_95926.read();
    } else {
        ap_phi_mux_data_1941_V_read2011_rewind_phi_fu_53057_p6 = data_1941_V_read2011_rewind_reg_53053.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1942_V_read2012_phi_phi_fu_95943_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1942_V_read2012_phi_phi_fu_95943_p4 = ap_phi_mux_data_1942_V_read2012_rewind_phi_fu_53071_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1942_V_read2012_phi_phi_fu_95943_p4 = data_1942_V_read.read();
        } else {
            ap_phi_mux_data_1942_V_read2012_phi_phi_fu_95943_p4 = ap_phi_reg_pp0_iter0_data_1942_V_read2012_phi_reg_95939.read();
        }
    } else {
        ap_phi_mux_data_1942_V_read2012_phi_phi_fu_95943_p4 = ap_phi_reg_pp0_iter0_data_1942_V_read2012_phi_reg_95939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1942_V_read2012_rewind_phi_fu_53071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1942_V_read2012_rewind_phi_fu_53071_p6 = data_1942_V_read2012_phi_reg_95939.read();
    } else {
        ap_phi_mux_data_1942_V_read2012_rewind_phi_fu_53071_p6 = data_1942_V_read2012_rewind_reg_53067.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1943_V_read2013_phi_phi_fu_95956_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1943_V_read2013_phi_phi_fu_95956_p4 = ap_phi_mux_data_1943_V_read2013_rewind_phi_fu_53085_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1943_V_read2013_phi_phi_fu_95956_p4 = data_1943_V_read.read();
        } else {
            ap_phi_mux_data_1943_V_read2013_phi_phi_fu_95956_p4 = ap_phi_reg_pp0_iter0_data_1943_V_read2013_phi_reg_95952.read();
        }
    } else {
        ap_phi_mux_data_1943_V_read2013_phi_phi_fu_95956_p4 = ap_phi_reg_pp0_iter0_data_1943_V_read2013_phi_reg_95952.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1943_V_read2013_rewind_phi_fu_53085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1943_V_read2013_rewind_phi_fu_53085_p6 = data_1943_V_read2013_phi_reg_95952.read();
    } else {
        ap_phi_mux_data_1943_V_read2013_rewind_phi_fu_53085_p6 = data_1943_V_read2013_rewind_reg_53081.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1944_V_read2014_phi_phi_fu_95969_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1944_V_read2014_phi_phi_fu_95969_p4 = ap_phi_mux_data_1944_V_read2014_rewind_phi_fu_53099_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1944_V_read2014_phi_phi_fu_95969_p4 = data_1944_V_read.read();
        } else {
            ap_phi_mux_data_1944_V_read2014_phi_phi_fu_95969_p4 = ap_phi_reg_pp0_iter0_data_1944_V_read2014_phi_reg_95965.read();
        }
    } else {
        ap_phi_mux_data_1944_V_read2014_phi_phi_fu_95969_p4 = ap_phi_reg_pp0_iter0_data_1944_V_read2014_phi_reg_95965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1944_V_read2014_rewind_phi_fu_53099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1944_V_read2014_rewind_phi_fu_53099_p6 = data_1944_V_read2014_phi_reg_95965.read();
    } else {
        ap_phi_mux_data_1944_V_read2014_rewind_phi_fu_53099_p6 = data_1944_V_read2014_rewind_reg_53095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1945_V_read2015_phi_phi_fu_95982_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1945_V_read2015_phi_phi_fu_95982_p4 = ap_phi_mux_data_1945_V_read2015_rewind_phi_fu_53113_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1945_V_read2015_phi_phi_fu_95982_p4 = data_1945_V_read.read();
        } else {
            ap_phi_mux_data_1945_V_read2015_phi_phi_fu_95982_p4 = ap_phi_reg_pp0_iter0_data_1945_V_read2015_phi_reg_95978.read();
        }
    } else {
        ap_phi_mux_data_1945_V_read2015_phi_phi_fu_95982_p4 = ap_phi_reg_pp0_iter0_data_1945_V_read2015_phi_reg_95978.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1945_V_read2015_rewind_phi_fu_53113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1945_V_read2015_rewind_phi_fu_53113_p6 = data_1945_V_read2015_phi_reg_95978.read();
    } else {
        ap_phi_mux_data_1945_V_read2015_rewind_phi_fu_53113_p6 = data_1945_V_read2015_rewind_reg_53109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1946_V_read2016_phi_phi_fu_95995_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1946_V_read2016_phi_phi_fu_95995_p4 = ap_phi_mux_data_1946_V_read2016_rewind_phi_fu_53127_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1946_V_read2016_phi_phi_fu_95995_p4 = data_1946_V_read.read();
        } else {
            ap_phi_mux_data_1946_V_read2016_phi_phi_fu_95995_p4 = ap_phi_reg_pp0_iter0_data_1946_V_read2016_phi_reg_95991.read();
        }
    } else {
        ap_phi_mux_data_1946_V_read2016_phi_phi_fu_95995_p4 = ap_phi_reg_pp0_iter0_data_1946_V_read2016_phi_reg_95991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1946_V_read2016_rewind_phi_fu_53127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1946_V_read2016_rewind_phi_fu_53127_p6 = data_1946_V_read2016_phi_reg_95991.read();
    } else {
        ap_phi_mux_data_1946_V_read2016_rewind_phi_fu_53127_p6 = data_1946_V_read2016_rewind_reg_53123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1947_V_read2017_phi_phi_fu_96008_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1947_V_read2017_phi_phi_fu_96008_p4 = ap_phi_mux_data_1947_V_read2017_rewind_phi_fu_53141_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1947_V_read2017_phi_phi_fu_96008_p4 = data_1947_V_read.read();
        } else {
            ap_phi_mux_data_1947_V_read2017_phi_phi_fu_96008_p4 = ap_phi_reg_pp0_iter0_data_1947_V_read2017_phi_reg_96004.read();
        }
    } else {
        ap_phi_mux_data_1947_V_read2017_phi_phi_fu_96008_p4 = ap_phi_reg_pp0_iter0_data_1947_V_read2017_phi_reg_96004.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1947_V_read2017_rewind_phi_fu_53141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1947_V_read2017_rewind_phi_fu_53141_p6 = data_1947_V_read2017_phi_reg_96004.read();
    } else {
        ap_phi_mux_data_1947_V_read2017_rewind_phi_fu_53141_p6 = data_1947_V_read2017_rewind_reg_53137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1948_V_read2018_phi_phi_fu_96021_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1948_V_read2018_phi_phi_fu_96021_p4 = ap_phi_mux_data_1948_V_read2018_rewind_phi_fu_53155_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1948_V_read2018_phi_phi_fu_96021_p4 = data_1948_V_read.read();
        } else {
            ap_phi_mux_data_1948_V_read2018_phi_phi_fu_96021_p4 = ap_phi_reg_pp0_iter0_data_1948_V_read2018_phi_reg_96017.read();
        }
    } else {
        ap_phi_mux_data_1948_V_read2018_phi_phi_fu_96021_p4 = ap_phi_reg_pp0_iter0_data_1948_V_read2018_phi_reg_96017.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1948_V_read2018_rewind_phi_fu_53155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1948_V_read2018_rewind_phi_fu_53155_p6 = data_1948_V_read2018_phi_reg_96017.read();
    } else {
        ap_phi_mux_data_1948_V_read2018_rewind_phi_fu_53155_p6 = data_1948_V_read2018_rewind_reg_53151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1949_V_read2019_phi_phi_fu_96034_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1949_V_read2019_phi_phi_fu_96034_p4 = ap_phi_mux_data_1949_V_read2019_rewind_phi_fu_53169_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1949_V_read2019_phi_phi_fu_96034_p4 = data_1949_V_read.read();
        } else {
            ap_phi_mux_data_1949_V_read2019_phi_phi_fu_96034_p4 = ap_phi_reg_pp0_iter0_data_1949_V_read2019_phi_reg_96030.read();
        }
    } else {
        ap_phi_mux_data_1949_V_read2019_phi_phi_fu_96034_p4 = ap_phi_reg_pp0_iter0_data_1949_V_read2019_phi_reg_96030.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1949_V_read2019_rewind_phi_fu_53169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1949_V_read2019_rewind_phi_fu_53169_p6 = data_1949_V_read2019_phi_reg_96030.read();
    } else {
        ap_phi_mux_data_1949_V_read2019_rewind_phi_fu_53169_p6 = data_1949_V_read2019_rewind_reg_53165.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_194_V_read264_phi_phi_fu_73219_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_194_V_read264_phi_phi_fu_73219_p4 = ap_phi_mux_data_194_V_read264_rewind_phi_fu_28599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_194_V_read264_phi_phi_fu_73219_p4 = data_194_V_read.read();
        } else {
            ap_phi_mux_data_194_V_read264_phi_phi_fu_73219_p4 = ap_phi_reg_pp0_iter0_data_194_V_read264_phi_reg_73215.read();
        }
    } else {
        ap_phi_mux_data_194_V_read264_phi_phi_fu_73219_p4 = ap_phi_reg_pp0_iter0_data_194_V_read264_phi_reg_73215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_194_V_read264_rewind_phi_fu_28599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_194_V_read264_rewind_phi_fu_28599_p6 = data_194_V_read264_phi_reg_73215.read();
    } else {
        ap_phi_mux_data_194_V_read264_rewind_phi_fu_28599_p6 = data_194_V_read264_rewind_reg_28595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1950_V_read2020_phi_phi_fu_96047_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1950_V_read2020_phi_phi_fu_96047_p4 = ap_phi_mux_data_1950_V_read2020_rewind_phi_fu_53183_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1950_V_read2020_phi_phi_fu_96047_p4 = data_1950_V_read.read();
        } else {
            ap_phi_mux_data_1950_V_read2020_phi_phi_fu_96047_p4 = ap_phi_reg_pp0_iter0_data_1950_V_read2020_phi_reg_96043.read();
        }
    } else {
        ap_phi_mux_data_1950_V_read2020_phi_phi_fu_96047_p4 = ap_phi_reg_pp0_iter0_data_1950_V_read2020_phi_reg_96043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1950_V_read2020_rewind_phi_fu_53183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1950_V_read2020_rewind_phi_fu_53183_p6 = data_1950_V_read2020_phi_reg_96043.read();
    } else {
        ap_phi_mux_data_1950_V_read2020_rewind_phi_fu_53183_p6 = data_1950_V_read2020_rewind_reg_53179.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1951_V_read2021_phi_phi_fu_96060_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1951_V_read2021_phi_phi_fu_96060_p4 = ap_phi_mux_data_1951_V_read2021_rewind_phi_fu_53197_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1951_V_read2021_phi_phi_fu_96060_p4 = data_1951_V_read.read();
        } else {
            ap_phi_mux_data_1951_V_read2021_phi_phi_fu_96060_p4 = ap_phi_reg_pp0_iter0_data_1951_V_read2021_phi_reg_96056.read();
        }
    } else {
        ap_phi_mux_data_1951_V_read2021_phi_phi_fu_96060_p4 = ap_phi_reg_pp0_iter0_data_1951_V_read2021_phi_reg_96056.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1951_V_read2021_rewind_phi_fu_53197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1951_V_read2021_rewind_phi_fu_53197_p6 = data_1951_V_read2021_phi_reg_96056.read();
    } else {
        ap_phi_mux_data_1951_V_read2021_rewind_phi_fu_53197_p6 = data_1951_V_read2021_rewind_reg_53193.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1952_V_read2022_phi_phi_fu_96073_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1952_V_read2022_phi_phi_fu_96073_p4 = ap_phi_mux_data_1952_V_read2022_rewind_phi_fu_53211_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1952_V_read2022_phi_phi_fu_96073_p4 = data_1952_V_read.read();
        } else {
            ap_phi_mux_data_1952_V_read2022_phi_phi_fu_96073_p4 = ap_phi_reg_pp0_iter0_data_1952_V_read2022_phi_reg_96069.read();
        }
    } else {
        ap_phi_mux_data_1952_V_read2022_phi_phi_fu_96073_p4 = ap_phi_reg_pp0_iter0_data_1952_V_read2022_phi_reg_96069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1952_V_read2022_rewind_phi_fu_53211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1952_V_read2022_rewind_phi_fu_53211_p6 = data_1952_V_read2022_phi_reg_96069.read();
    } else {
        ap_phi_mux_data_1952_V_read2022_rewind_phi_fu_53211_p6 = data_1952_V_read2022_rewind_reg_53207.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1953_V_read2023_phi_phi_fu_96086_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1953_V_read2023_phi_phi_fu_96086_p4 = ap_phi_mux_data_1953_V_read2023_rewind_phi_fu_53225_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1953_V_read2023_phi_phi_fu_96086_p4 = data_1953_V_read.read();
        } else {
            ap_phi_mux_data_1953_V_read2023_phi_phi_fu_96086_p4 = ap_phi_reg_pp0_iter0_data_1953_V_read2023_phi_reg_96082.read();
        }
    } else {
        ap_phi_mux_data_1953_V_read2023_phi_phi_fu_96086_p4 = ap_phi_reg_pp0_iter0_data_1953_V_read2023_phi_reg_96082.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1953_V_read2023_rewind_phi_fu_53225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1953_V_read2023_rewind_phi_fu_53225_p6 = data_1953_V_read2023_phi_reg_96082.read();
    } else {
        ap_phi_mux_data_1953_V_read2023_rewind_phi_fu_53225_p6 = data_1953_V_read2023_rewind_reg_53221.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1954_V_read2024_phi_phi_fu_96099_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1954_V_read2024_phi_phi_fu_96099_p4 = ap_phi_mux_data_1954_V_read2024_rewind_phi_fu_53239_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1954_V_read2024_phi_phi_fu_96099_p4 = data_1954_V_read.read();
        } else {
            ap_phi_mux_data_1954_V_read2024_phi_phi_fu_96099_p4 = ap_phi_reg_pp0_iter0_data_1954_V_read2024_phi_reg_96095.read();
        }
    } else {
        ap_phi_mux_data_1954_V_read2024_phi_phi_fu_96099_p4 = ap_phi_reg_pp0_iter0_data_1954_V_read2024_phi_reg_96095.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1954_V_read2024_rewind_phi_fu_53239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1954_V_read2024_rewind_phi_fu_53239_p6 = data_1954_V_read2024_phi_reg_96095.read();
    } else {
        ap_phi_mux_data_1954_V_read2024_rewind_phi_fu_53239_p6 = data_1954_V_read2024_rewind_reg_53235.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1955_V_read2025_phi_phi_fu_96112_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1955_V_read2025_phi_phi_fu_96112_p4 = ap_phi_mux_data_1955_V_read2025_rewind_phi_fu_53253_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1955_V_read2025_phi_phi_fu_96112_p4 = data_1955_V_read.read();
        } else {
            ap_phi_mux_data_1955_V_read2025_phi_phi_fu_96112_p4 = ap_phi_reg_pp0_iter0_data_1955_V_read2025_phi_reg_96108.read();
        }
    } else {
        ap_phi_mux_data_1955_V_read2025_phi_phi_fu_96112_p4 = ap_phi_reg_pp0_iter0_data_1955_V_read2025_phi_reg_96108.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1955_V_read2025_rewind_phi_fu_53253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1955_V_read2025_rewind_phi_fu_53253_p6 = data_1955_V_read2025_phi_reg_96108.read();
    } else {
        ap_phi_mux_data_1955_V_read2025_rewind_phi_fu_53253_p6 = data_1955_V_read2025_rewind_reg_53249.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1956_V_read2026_phi_phi_fu_96125_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1956_V_read2026_phi_phi_fu_96125_p4 = ap_phi_mux_data_1956_V_read2026_rewind_phi_fu_53267_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1956_V_read2026_phi_phi_fu_96125_p4 = data_1956_V_read.read();
        } else {
            ap_phi_mux_data_1956_V_read2026_phi_phi_fu_96125_p4 = ap_phi_reg_pp0_iter0_data_1956_V_read2026_phi_reg_96121.read();
        }
    } else {
        ap_phi_mux_data_1956_V_read2026_phi_phi_fu_96125_p4 = ap_phi_reg_pp0_iter0_data_1956_V_read2026_phi_reg_96121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1956_V_read2026_rewind_phi_fu_53267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1956_V_read2026_rewind_phi_fu_53267_p6 = data_1956_V_read2026_phi_reg_96121.read();
    } else {
        ap_phi_mux_data_1956_V_read2026_rewind_phi_fu_53267_p6 = data_1956_V_read2026_rewind_reg_53263.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1957_V_read2027_phi_phi_fu_96138_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1957_V_read2027_phi_phi_fu_96138_p4 = ap_phi_mux_data_1957_V_read2027_rewind_phi_fu_53281_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1957_V_read2027_phi_phi_fu_96138_p4 = data_1957_V_read.read();
        } else {
            ap_phi_mux_data_1957_V_read2027_phi_phi_fu_96138_p4 = ap_phi_reg_pp0_iter0_data_1957_V_read2027_phi_reg_96134.read();
        }
    } else {
        ap_phi_mux_data_1957_V_read2027_phi_phi_fu_96138_p4 = ap_phi_reg_pp0_iter0_data_1957_V_read2027_phi_reg_96134.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1957_V_read2027_rewind_phi_fu_53281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1957_V_read2027_rewind_phi_fu_53281_p6 = data_1957_V_read2027_phi_reg_96134.read();
    } else {
        ap_phi_mux_data_1957_V_read2027_rewind_phi_fu_53281_p6 = data_1957_V_read2027_rewind_reg_53277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1958_V_read2028_phi_phi_fu_96151_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1958_V_read2028_phi_phi_fu_96151_p4 = ap_phi_mux_data_1958_V_read2028_rewind_phi_fu_53295_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1958_V_read2028_phi_phi_fu_96151_p4 = data_1958_V_read.read();
        } else {
            ap_phi_mux_data_1958_V_read2028_phi_phi_fu_96151_p4 = ap_phi_reg_pp0_iter0_data_1958_V_read2028_phi_reg_96147.read();
        }
    } else {
        ap_phi_mux_data_1958_V_read2028_phi_phi_fu_96151_p4 = ap_phi_reg_pp0_iter0_data_1958_V_read2028_phi_reg_96147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1958_V_read2028_rewind_phi_fu_53295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1958_V_read2028_rewind_phi_fu_53295_p6 = data_1958_V_read2028_phi_reg_96147.read();
    } else {
        ap_phi_mux_data_1958_V_read2028_rewind_phi_fu_53295_p6 = data_1958_V_read2028_rewind_reg_53291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1959_V_read2029_phi_phi_fu_96164_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1959_V_read2029_phi_phi_fu_96164_p4 = ap_phi_mux_data_1959_V_read2029_rewind_phi_fu_53309_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1959_V_read2029_phi_phi_fu_96164_p4 = data_1959_V_read.read();
        } else {
            ap_phi_mux_data_1959_V_read2029_phi_phi_fu_96164_p4 = ap_phi_reg_pp0_iter0_data_1959_V_read2029_phi_reg_96160.read();
        }
    } else {
        ap_phi_mux_data_1959_V_read2029_phi_phi_fu_96164_p4 = ap_phi_reg_pp0_iter0_data_1959_V_read2029_phi_reg_96160.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1959_V_read2029_rewind_phi_fu_53309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1959_V_read2029_rewind_phi_fu_53309_p6 = data_1959_V_read2029_phi_reg_96160.read();
    } else {
        ap_phi_mux_data_1959_V_read2029_rewind_phi_fu_53309_p6 = data_1959_V_read2029_rewind_reg_53305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_195_V_read265_phi_phi_fu_73232_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_195_V_read265_phi_phi_fu_73232_p4 = ap_phi_mux_data_195_V_read265_rewind_phi_fu_28613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_195_V_read265_phi_phi_fu_73232_p4 = data_195_V_read.read();
        } else {
            ap_phi_mux_data_195_V_read265_phi_phi_fu_73232_p4 = ap_phi_reg_pp0_iter0_data_195_V_read265_phi_reg_73228.read();
        }
    } else {
        ap_phi_mux_data_195_V_read265_phi_phi_fu_73232_p4 = ap_phi_reg_pp0_iter0_data_195_V_read265_phi_reg_73228.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_195_V_read265_rewind_phi_fu_28613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_195_V_read265_rewind_phi_fu_28613_p6 = data_195_V_read265_phi_reg_73228.read();
    } else {
        ap_phi_mux_data_195_V_read265_rewind_phi_fu_28613_p6 = data_195_V_read265_rewind_reg_28609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1960_V_read2030_phi_phi_fu_96177_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1960_V_read2030_phi_phi_fu_96177_p4 = ap_phi_mux_data_1960_V_read2030_rewind_phi_fu_53323_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1960_V_read2030_phi_phi_fu_96177_p4 = data_1960_V_read.read();
        } else {
            ap_phi_mux_data_1960_V_read2030_phi_phi_fu_96177_p4 = ap_phi_reg_pp0_iter0_data_1960_V_read2030_phi_reg_96173.read();
        }
    } else {
        ap_phi_mux_data_1960_V_read2030_phi_phi_fu_96177_p4 = ap_phi_reg_pp0_iter0_data_1960_V_read2030_phi_reg_96173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1960_V_read2030_rewind_phi_fu_53323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1960_V_read2030_rewind_phi_fu_53323_p6 = data_1960_V_read2030_phi_reg_96173.read();
    } else {
        ap_phi_mux_data_1960_V_read2030_rewind_phi_fu_53323_p6 = data_1960_V_read2030_rewind_reg_53319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1961_V_read2031_phi_phi_fu_96190_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1961_V_read2031_phi_phi_fu_96190_p4 = ap_phi_mux_data_1961_V_read2031_rewind_phi_fu_53337_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1961_V_read2031_phi_phi_fu_96190_p4 = data_1961_V_read.read();
        } else {
            ap_phi_mux_data_1961_V_read2031_phi_phi_fu_96190_p4 = ap_phi_reg_pp0_iter0_data_1961_V_read2031_phi_reg_96186.read();
        }
    } else {
        ap_phi_mux_data_1961_V_read2031_phi_phi_fu_96190_p4 = ap_phi_reg_pp0_iter0_data_1961_V_read2031_phi_reg_96186.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1961_V_read2031_rewind_phi_fu_53337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1961_V_read2031_rewind_phi_fu_53337_p6 = data_1961_V_read2031_phi_reg_96186.read();
    } else {
        ap_phi_mux_data_1961_V_read2031_rewind_phi_fu_53337_p6 = data_1961_V_read2031_rewind_reg_53333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1962_V_read2032_phi_phi_fu_96203_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1962_V_read2032_phi_phi_fu_96203_p4 = ap_phi_mux_data_1962_V_read2032_rewind_phi_fu_53351_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1962_V_read2032_phi_phi_fu_96203_p4 = data_1962_V_read.read();
        } else {
            ap_phi_mux_data_1962_V_read2032_phi_phi_fu_96203_p4 = ap_phi_reg_pp0_iter0_data_1962_V_read2032_phi_reg_96199.read();
        }
    } else {
        ap_phi_mux_data_1962_V_read2032_phi_phi_fu_96203_p4 = ap_phi_reg_pp0_iter0_data_1962_V_read2032_phi_reg_96199.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1962_V_read2032_rewind_phi_fu_53351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1962_V_read2032_rewind_phi_fu_53351_p6 = data_1962_V_read2032_phi_reg_96199.read();
    } else {
        ap_phi_mux_data_1962_V_read2032_rewind_phi_fu_53351_p6 = data_1962_V_read2032_rewind_reg_53347.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1963_V_read2033_phi_phi_fu_96216_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1963_V_read2033_phi_phi_fu_96216_p4 = ap_phi_mux_data_1963_V_read2033_rewind_phi_fu_53365_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1963_V_read2033_phi_phi_fu_96216_p4 = data_1963_V_read.read();
        } else {
            ap_phi_mux_data_1963_V_read2033_phi_phi_fu_96216_p4 = ap_phi_reg_pp0_iter0_data_1963_V_read2033_phi_reg_96212.read();
        }
    } else {
        ap_phi_mux_data_1963_V_read2033_phi_phi_fu_96216_p4 = ap_phi_reg_pp0_iter0_data_1963_V_read2033_phi_reg_96212.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1963_V_read2033_rewind_phi_fu_53365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1963_V_read2033_rewind_phi_fu_53365_p6 = data_1963_V_read2033_phi_reg_96212.read();
    } else {
        ap_phi_mux_data_1963_V_read2033_rewind_phi_fu_53365_p6 = data_1963_V_read2033_rewind_reg_53361.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1964_V_read2034_phi_phi_fu_96229_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1964_V_read2034_phi_phi_fu_96229_p4 = ap_phi_mux_data_1964_V_read2034_rewind_phi_fu_53379_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1964_V_read2034_phi_phi_fu_96229_p4 = data_1964_V_read.read();
        } else {
            ap_phi_mux_data_1964_V_read2034_phi_phi_fu_96229_p4 = ap_phi_reg_pp0_iter0_data_1964_V_read2034_phi_reg_96225.read();
        }
    } else {
        ap_phi_mux_data_1964_V_read2034_phi_phi_fu_96229_p4 = ap_phi_reg_pp0_iter0_data_1964_V_read2034_phi_reg_96225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1964_V_read2034_rewind_phi_fu_53379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1964_V_read2034_rewind_phi_fu_53379_p6 = data_1964_V_read2034_phi_reg_96225.read();
    } else {
        ap_phi_mux_data_1964_V_read2034_rewind_phi_fu_53379_p6 = data_1964_V_read2034_rewind_reg_53375.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1965_V_read2035_phi_phi_fu_96242_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1965_V_read2035_phi_phi_fu_96242_p4 = ap_phi_mux_data_1965_V_read2035_rewind_phi_fu_53393_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1965_V_read2035_phi_phi_fu_96242_p4 = data_1965_V_read.read();
        } else {
            ap_phi_mux_data_1965_V_read2035_phi_phi_fu_96242_p4 = ap_phi_reg_pp0_iter0_data_1965_V_read2035_phi_reg_96238.read();
        }
    } else {
        ap_phi_mux_data_1965_V_read2035_phi_phi_fu_96242_p4 = ap_phi_reg_pp0_iter0_data_1965_V_read2035_phi_reg_96238.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1965_V_read2035_rewind_phi_fu_53393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1965_V_read2035_rewind_phi_fu_53393_p6 = data_1965_V_read2035_phi_reg_96238.read();
    } else {
        ap_phi_mux_data_1965_V_read2035_rewind_phi_fu_53393_p6 = data_1965_V_read2035_rewind_reg_53389.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1966_V_read2036_phi_phi_fu_96255_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1966_V_read2036_phi_phi_fu_96255_p4 = ap_phi_mux_data_1966_V_read2036_rewind_phi_fu_53407_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1966_V_read2036_phi_phi_fu_96255_p4 = data_1966_V_read.read();
        } else {
            ap_phi_mux_data_1966_V_read2036_phi_phi_fu_96255_p4 = ap_phi_reg_pp0_iter0_data_1966_V_read2036_phi_reg_96251.read();
        }
    } else {
        ap_phi_mux_data_1966_V_read2036_phi_phi_fu_96255_p4 = ap_phi_reg_pp0_iter0_data_1966_V_read2036_phi_reg_96251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1966_V_read2036_rewind_phi_fu_53407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1966_V_read2036_rewind_phi_fu_53407_p6 = data_1966_V_read2036_phi_reg_96251.read();
    } else {
        ap_phi_mux_data_1966_V_read2036_rewind_phi_fu_53407_p6 = data_1966_V_read2036_rewind_reg_53403.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1967_V_read2037_phi_phi_fu_96268_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1967_V_read2037_phi_phi_fu_96268_p4 = ap_phi_mux_data_1967_V_read2037_rewind_phi_fu_53421_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1967_V_read2037_phi_phi_fu_96268_p4 = data_1967_V_read.read();
        } else {
            ap_phi_mux_data_1967_V_read2037_phi_phi_fu_96268_p4 = ap_phi_reg_pp0_iter0_data_1967_V_read2037_phi_reg_96264.read();
        }
    } else {
        ap_phi_mux_data_1967_V_read2037_phi_phi_fu_96268_p4 = ap_phi_reg_pp0_iter0_data_1967_V_read2037_phi_reg_96264.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1967_V_read2037_rewind_phi_fu_53421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1967_V_read2037_rewind_phi_fu_53421_p6 = data_1967_V_read2037_phi_reg_96264.read();
    } else {
        ap_phi_mux_data_1967_V_read2037_rewind_phi_fu_53421_p6 = data_1967_V_read2037_rewind_reg_53417.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1968_V_read2038_phi_phi_fu_96281_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1968_V_read2038_phi_phi_fu_96281_p4 = ap_phi_mux_data_1968_V_read2038_rewind_phi_fu_53435_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1968_V_read2038_phi_phi_fu_96281_p4 = data_1968_V_read.read();
        } else {
            ap_phi_mux_data_1968_V_read2038_phi_phi_fu_96281_p4 = ap_phi_reg_pp0_iter0_data_1968_V_read2038_phi_reg_96277.read();
        }
    } else {
        ap_phi_mux_data_1968_V_read2038_phi_phi_fu_96281_p4 = ap_phi_reg_pp0_iter0_data_1968_V_read2038_phi_reg_96277.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1968_V_read2038_rewind_phi_fu_53435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1968_V_read2038_rewind_phi_fu_53435_p6 = data_1968_V_read2038_phi_reg_96277.read();
    } else {
        ap_phi_mux_data_1968_V_read2038_rewind_phi_fu_53435_p6 = data_1968_V_read2038_rewind_reg_53431.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1969_V_read2039_phi_phi_fu_96294_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1969_V_read2039_phi_phi_fu_96294_p4 = ap_phi_mux_data_1969_V_read2039_rewind_phi_fu_53449_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1969_V_read2039_phi_phi_fu_96294_p4 = data_1969_V_read.read();
        } else {
            ap_phi_mux_data_1969_V_read2039_phi_phi_fu_96294_p4 = ap_phi_reg_pp0_iter0_data_1969_V_read2039_phi_reg_96290.read();
        }
    } else {
        ap_phi_mux_data_1969_V_read2039_phi_phi_fu_96294_p4 = ap_phi_reg_pp0_iter0_data_1969_V_read2039_phi_reg_96290.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1969_V_read2039_rewind_phi_fu_53449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1969_V_read2039_rewind_phi_fu_53449_p6 = data_1969_V_read2039_phi_reg_96290.read();
    } else {
        ap_phi_mux_data_1969_V_read2039_rewind_phi_fu_53449_p6 = data_1969_V_read2039_rewind_reg_53445.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_196_V_read266_phi_phi_fu_73245_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_196_V_read266_phi_phi_fu_73245_p4 = ap_phi_mux_data_196_V_read266_rewind_phi_fu_28627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_196_V_read266_phi_phi_fu_73245_p4 = data_196_V_read.read();
        } else {
            ap_phi_mux_data_196_V_read266_phi_phi_fu_73245_p4 = ap_phi_reg_pp0_iter0_data_196_V_read266_phi_reg_73241.read();
        }
    } else {
        ap_phi_mux_data_196_V_read266_phi_phi_fu_73245_p4 = ap_phi_reg_pp0_iter0_data_196_V_read266_phi_reg_73241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_196_V_read266_rewind_phi_fu_28627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_196_V_read266_rewind_phi_fu_28627_p6 = data_196_V_read266_phi_reg_73241.read();
    } else {
        ap_phi_mux_data_196_V_read266_rewind_phi_fu_28627_p6 = data_196_V_read266_rewind_reg_28623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1970_V_read2040_phi_phi_fu_96307_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1970_V_read2040_phi_phi_fu_96307_p4 = ap_phi_mux_data_1970_V_read2040_rewind_phi_fu_53463_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1970_V_read2040_phi_phi_fu_96307_p4 = data_1970_V_read.read();
        } else {
            ap_phi_mux_data_1970_V_read2040_phi_phi_fu_96307_p4 = ap_phi_reg_pp0_iter0_data_1970_V_read2040_phi_reg_96303.read();
        }
    } else {
        ap_phi_mux_data_1970_V_read2040_phi_phi_fu_96307_p4 = ap_phi_reg_pp0_iter0_data_1970_V_read2040_phi_reg_96303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1970_V_read2040_rewind_phi_fu_53463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1970_V_read2040_rewind_phi_fu_53463_p6 = data_1970_V_read2040_phi_reg_96303.read();
    } else {
        ap_phi_mux_data_1970_V_read2040_rewind_phi_fu_53463_p6 = data_1970_V_read2040_rewind_reg_53459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1971_V_read2041_phi_phi_fu_96320_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1971_V_read2041_phi_phi_fu_96320_p4 = ap_phi_mux_data_1971_V_read2041_rewind_phi_fu_53477_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1971_V_read2041_phi_phi_fu_96320_p4 = data_1971_V_read.read();
        } else {
            ap_phi_mux_data_1971_V_read2041_phi_phi_fu_96320_p4 = ap_phi_reg_pp0_iter0_data_1971_V_read2041_phi_reg_96316.read();
        }
    } else {
        ap_phi_mux_data_1971_V_read2041_phi_phi_fu_96320_p4 = ap_phi_reg_pp0_iter0_data_1971_V_read2041_phi_reg_96316.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1971_V_read2041_rewind_phi_fu_53477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1971_V_read2041_rewind_phi_fu_53477_p6 = data_1971_V_read2041_phi_reg_96316.read();
    } else {
        ap_phi_mux_data_1971_V_read2041_rewind_phi_fu_53477_p6 = data_1971_V_read2041_rewind_reg_53473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1972_V_read2042_phi_phi_fu_96333_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1972_V_read2042_phi_phi_fu_96333_p4 = ap_phi_mux_data_1972_V_read2042_rewind_phi_fu_53491_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1972_V_read2042_phi_phi_fu_96333_p4 = data_1972_V_read.read();
        } else {
            ap_phi_mux_data_1972_V_read2042_phi_phi_fu_96333_p4 = ap_phi_reg_pp0_iter0_data_1972_V_read2042_phi_reg_96329.read();
        }
    } else {
        ap_phi_mux_data_1972_V_read2042_phi_phi_fu_96333_p4 = ap_phi_reg_pp0_iter0_data_1972_V_read2042_phi_reg_96329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1972_V_read2042_rewind_phi_fu_53491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1972_V_read2042_rewind_phi_fu_53491_p6 = data_1972_V_read2042_phi_reg_96329.read();
    } else {
        ap_phi_mux_data_1972_V_read2042_rewind_phi_fu_53491_p6 = data_1972_V_read2042_rewind_reg_53487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1973_V_read2043_phi_phi_fu_96346_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1973_V_read2043_phi_phi_fu_96346_p4 = ap_phi_mux_data_1973_V_read2043_rewind_phi_fu_53505_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1973_V_read2043_phi_phi_fu_96346_p4 = data_1973_V_read.read();
        } else {
            ap_phi_mux_data_1973_V_read2043_phi_phi_fu_96346_p4 = ap_phi_reg_pp0_iter0_data_1973_V_read2043_phi_reg_96342.read();
        }
    } else {
        ap_phi_mux_data_1973_V_read2043_phi_phi_fu_96346_p4 = ap_phi_reg_pp0_iter0_data_1973_V_read2043_phi_reg_96342.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1973_V_read2043_rewind_phi_fu_53505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1973_V_read2043_rewind_phi_fu_53505_p6 = data_1973_V_read2043_phi_reg_96342.read();
    } else {
        ap_phi_mux_data_1973_V_read2043_rewind_phi_fu_53505_p6 = data_1973_V_read2043_rewind_reg_53501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1974_V_read2044_phi_phi_fu_96359_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1974_V_read2044_phi_phi_fu_96359_p4 = ap_phi_mux_data_1974_V_read2044_rewind_phi_fu_53519_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1974_V_read2044_phi_phi_fu_96359_p4 = data_1974_V_read.read();
        } else {
            ap_phi_mux_data_1974_V_read2044_phi_phi_fu_96359_p4 = ap_phi_reg_pp0_iter0_data_1974_V_read2044_phi_reg_96355.read();
        }
    } else {
        ap_phi_mux_data_1974_V_read2044_phi_phi_fu_96359_p4 = ap_phi_reg_pp0_iter0_data_1974_V_read2044_phi_reg_96355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1974_V_read2044_rewind_phi_fu_53519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1974_V_read2044_rewind_phi_fu_53519_p6 = data_1974_V_read2044_phi_reg_96355.read();
    } else {
        ap_phi_mux_data_1974_V_read2044_rewind_phi_fu_53519_p6 = data_1974_V_read2044_rewind_reg_53515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1975_V_read2045_phi_phi_fu_96372_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1975_V_read2045_phi_phi_fu_96372_p4 = ap_phi_mux_data_1975_V_read2045_rewind_phi_fu_53533_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1975_V_read2045_phi_phi_fu_96372_p4 = data_1975_V_read.read();
        } else {
            ap_phi_mux_data_1975_V_read2045_phi_phi_fu_96372_p4 = ap_phi_reg_pp0_iter0_data_1975_V_read2045_phi_reg_96368.read();
        }
    } else {
        ap_phi_mux_data_1975_V_read2045_phi_phi_fu_96372_p4 = ap_phi_reg_pp0_iter0_data_1975_V_read2045_phi_reg_96368.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1975_V_read2045_rewind_phi_fu_53533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1975_V_read2045_rewind_phi_fu_53533_p6 = data_1975_V_read2045_phi_reg_96368.read();
    } else {
        ap_phi_mux_data_1975_V_read2045_rewind_phi_fu_53533_p6 = data_1975_V_read2045_rewind_reg_53529.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1976_V_read2046_phi_phi_fu_96385_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1976_V_read2046_phi_phi_fu_96385_p4 = ap_phi_mux_data_1976_V_read2046_rewind_phi_fu_53547_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1976_V_read2046_phi_phi_fu_96385_p4 = data_1976_V_read.read();
        } else {
            ap_phi_mux_data_1976_V_read2046_phi_phi_fu_96385_p4 = ap_phi_reg_pp0_iter0_data_1976_V_read2046_phi_reg_96381.read();
        }
    } else {
        ap_phi_mux_data_1976_V_read2046_phi_phi_fu_96385_p4 = ap_phi_reg_pp0_iter0_data_1976_V_read2046_phi_reg_96381.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1976_V_read2046_rewind_phi_fu_53547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1976_V_read2046_rewind_phi_fu_53547_p6 = data_1976_V_read2046_phi_reg_96381.read();
    } else {
        ap_phi_mux_data_1976_V_read2046_rewind_phi_fu_53547_p6 = data_1976_V_read2046_rewind_reg_53543.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1977_V_read2047_phi_phi_fu_96398_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1977_V_read2047_phi_phi_fu_96398_p4 = ap_phi_mux_data_1977_V_read2047_rewind_phi_fu_53561_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1977_V_read2047_phi_phi_fu_96398_p4 = data_1977_V_read.read();
        } else {
            ap_phi_mux_data_1977_V_read2047_phi_phi_fu_96398_p4 = ap_phi_reg_pp0_iter0_data_1977_V_read2047_phi_reg_96394.read();
        }
    } else {
        ap_phi_mux_data_1977_V_read2047_phi_phi_fu_96398_p4 = ap_phi_reg_pp0_iter0_data_1977_V_read2047_phi_reg_96394.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1977_V_read2047_rewind_phi_fu_53561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1977_V_read2047_rewind_phi_fu_53561_p6 = data_1977_V_read2047_phi_reg_96394.read();
    } else {
        ap_phi_mux_data_1977_V_read2047_rewind_phi_fu_53561_p6 = data_1977_V_read2047_rewind_reg_53557.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1978_V_read2048_phi_phi_fu_96411_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1978_V_read2048_phi_phi_fu_96411_p4 = ap_phi_mux_data_1978_V_read2048_rewind_phi_fu_53575_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1978_V_read2048_phi_phi_fu_96411_p4 = data_1978_V_read.read();
        } else {
            ap_phi_mux_data_1978_V_read2048_phi_phi_fu_96411_p4 = ap_phi_reg_pp0_iter0_data_1978_V_read2048_phi_reg_96407.read();
        }
    } else {
        ap_phi_mux_data_1978_V_read2048_phi_phi_fu_96411_p4 = ap_phi_reg_pp0_iter0_data_1978_V_read2048_phi_reg_96407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1978_V_read2048_rewind_phi_fu_53575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1978_V_read2048_rewind_phi_fu_53575_p6 = data_1978_V_read2048_phi_reg_96407.read();
    } else {
        ap_phi_mux_data_1978_V_read2048_rewind_phi_fu_53575_p6 = data_1978_V_read2048_rewind_reg_53571.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1979_V_read2049_phi_phi_fu_96424_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1979_V_read2049_phi_phi_fu_96424_p4 = ap_phi_mux_data_1979_V_read2049_rewind_phi_fu_53589_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1979_V_read2049_phi_phi_fu_96424_p4 = data_1979_V_read.read();
        } else {
            ap_phi_mux_data_1979_V_read2049_phi_phi_fu_96424_p4 = ap_phi_reg_pp0_iter0_data_1979_V_read2049_phi_reg_96420.read();
        }
    } else {
        ap_phi_mux_data_1979_V_read2049_phi_phi_fu_96424_p4 = ap_phi_reg_pp0_iter0_data_1979_V_read2049_phi_reg_96420.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1979_V_read2049_rewind_phi_fu_53589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1979_V_read2049_rewind_phi_fu_53589_p6 = data_1979_V_read2049_phi_reg_96420.read();
    } else {
        ap_phi_mux_data_1979_V_read2049_rewind_phi_fu_53589_p6 = data_1979_V_read2049_rewind_reg_53585.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_197_V_read267_phi_phi_fu_73258_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_197_V_read267_phi_phi_fu_73258_p4 = ap_phi_mux_data_197_V_read267_rewind_phi_fu_28641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_197_V_read267_phi_phi_fu_73258_p4 = data_197_V_read.read();
        } else {
            ap_phi_mux_data_197_V_read267_phi_phi_fu_73258_p4 = ap_phi_reg_pp0_iter0_data_197_V_read267_phi_reg_73254.read();
        }
    } else {
        ap_phi_mux_data_197_V_read267_phi_phi_fu_73258_p4 = ap_phi_reg_pp0_iter0_data_197_V_read267_phi_reg_73254.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_197_V_read267_rewind_phi_fu_28641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_197_V_read267_rewind_phi_fu_28641_p6 = data_197_V_read267_phi_reg_73254.read();
    } else {
        ap_phi_mux_data_197_V_read267_rewind_phi_fu_28641_p6 = data_197_V_read267_rewind_reg_28637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1980_V_read2050_phi_phi_fu_96437_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1980_V_read2050_phi_phi_fu_96437_p4 = ap_phi_mux_data_1980_V_read2050_rewind_phi_fu_53603_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1980_V_read2050_phi_phi_fu_96437_p4 = data_1980_V_read.read();
        } else {
            ap_phi_mux_data_1980_V_read2050_phi_phi_fu_96437_p4 = ap_phi_reg_pp0_iter0_data_1980_V_read2050_phi_reg_96433.read();
        }
    } else {
        ap_phi_mux_data_1980_V_read2050_phi_phi_fu_96437_p4 = ap_phi_reg_pp0_iter0_data_1980_V_read2050_phi_reg_96433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1980_V_read2050_rewind_phi_fu_53603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1980_V_read2050_rewind_phi_fu_53603_p6 = data_1980_V_read2050_phi_reg_96433.read();
    } else {
        ap_phi_mux_data_1980_V_read2050_rewind_phi_fu_53603_p6 = data_1980_V_read2050_rewind_reg_53599.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1981_V_read2051_phi_phi_fu_96450_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1981_V_read2051_phi_phi_fu_96450_p4 = ap_phi_mux_data_1981_V_read2051_rewind_phi_fu_53617_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1981_V_read2051_phi_phi_fu_96450_p4 = data_1981_V_read.read();
        } else {
            ap_phi_mux_data_1981_V_read2051_phi_phi_fu_96450_p4 = ap_phi_reg_pp0_iter0_data_1981_V_read2051_phi_reg_96446.read();
        }
    } else {
        ap_phi_mux_data_1981_V_read2051_phi_phi_fu_96450_p4 = ap_phi_reg_pp0_iter0_data_1981_V_read2051_phi_reg_96446.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1981_V_read2051_rewind_phi_fu_53617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1981_V_read2051_rewind_phi_fu_53617_p6 = data_1981_V_read2051_phi_reg_96446.read();
    } else {
        ap_phi_mux_data_1981_V_read2051_rewind_phi_fu_53617_p6 = data_1981_V_read2051_rewind_reg_53613.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1982_V_read2052_phi_phi_fu_96463_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1982_V_read2052_phi_phi_fu_96463_p4 = ap_phi_mux_data_1982_V_read2052_rewind_phi_fu_53631_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1982_V_read2052_phi_phi_fu_96463_p4 = data_1982_V_read.read();
        } else {
            ap_phi_mux_data_1982_V_read2052_phi_phi_fu_96463_p4 = ap_phi_reg_pp0_iter0_data_1982_V_read2052_phi_reg_96459.read();
        }
    } else {
        ap_phi_mux_data_1982_V_read2052_phi_phi_fu_96463_p4 = ap_phi_reg_pp0_iter0_data_1982_V_read2052_phi_reg_96459.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1982_V_read2052_rewind_phi_fu_53631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1982_V_read2052_rewind_phi_fu_53631_p6 = data_1982_V_read2052_phi_reg_96459.read();
    } else {
        ap_phi_mux_data_1982_V_read2052_rewind_phi_fu_53631_p6 = data_1982_V_read2052_rewind_reg_53627.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1983_V_read2053_phi_phi_fu_96476_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1983_V_read2053_phi_phi_fu_96476_p4 = ap_phi_mux_data_1983_V_read2053_rewind_phi_fu_53645_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1983_V_read2053_phi_phi_fu_96476_p4 = data_1983_V_read.read();
        } else {
            ap_phi_mux_data_1983_V_read2053_phi_phi_fu_96476_p4 = ap_phi_reg_pp0_iter0_data_1983_V_read2053_phi_reg_96472.read();
        }
    } else {
        ap_phi_mux_data_1983_V_read2053_phi_phi_fu_96476_p4 = ap_phi_reg_pp0_iter0_data_1983_V_read2053_phi_reg_96472.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1983_V_read2053_rewind_phi_fu_53645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1983_V_read2053_rewind_phi_fu_53645_p6 = data_1983_V_read2053_phi_reg_96472.read();
    } else {
        ap_phi_mux_data_1983_V_read2053_rewind_phi_fu_53645_p6 = data_1983_V_read2053_rewind_reg_53641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1984_V_read2054_phi_phi_fu_96489_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1984_V_read2054_phi_phi_fu_96489_p4 = ap_phi_mux_data_1984_V_read2054_rewind_phi_fu_53659_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1984_V_read2054_phi_phi_fu_96489_p4 = data_1984_V_read.read();
        } else {
            ap_phi_mux_data_1984_V_read2054_phi_phi_fu_96489_p4 = ap_phi_reg_pp0_iter0_data_1984_V_read2054_phi_reg_96485.read();
        }
    } else {
        ap_phi_mux_data_1984_V_read2054_phi_phi_fu_96489_p4 = ap_phi_reg_pp0_iter0_data_1984_V_read2054_phi_reg_96485.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1984_V_read2054_rewind_phi_fu_53659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1984_V_read2054_rewind_phi_fu_53659_p6 = data_1984_V_read2054_phi_reg_96485.read();
    } else {
        ap_phi_mux_data_1984_V_read2054_rewind_phi_fu_53659_p6 = data_1984_V_read2054_rewind_reg_53655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1985_V_read2055_phi_phi_fu_96502_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1985_V_read2055_phi_phi_fu_96502_p4 = ap_phi_mux_data_1985_V_read2055_rewind_phi_fu_53673_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1985_V_read2055_phi_phi_fu_96502_p4 = data_1985_V_read.read();
        } else {
            ap_phi_mux_data_1985_V_read2055_phi_phi_fu_96502_p4 = ap_phi_reg_pp0_iter0_data_1985_V_read2055_phi_reg_96498.read();
        }
    } else {
        ap_phi_mux_data_1985_V_read2055_phi_phi_fu_96502_p4 = ap_phi_reg_pp0_iter0_data_1985_V_read2055_phi_reg_96498.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1985_V_read2055_rewind_phi_fu_53673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1985_V_read2055_rewind_phi_fu_53673_p6 = data_1985_V_read2055_phi_reg_96498.read();
    } else {
        ap_phi_mux_data_1985_V_read2055_rewind_phi_fu_53673_p6 = data_1985_V_read2055_rewind_reg_53669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1986_V_read2056_phi_phi_fu_96515_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1986_V_read2056_phi_phi_fu_96515_p4 = ap_phi_mux_data_1986_V_read2056_rewind_phi_fu_53687_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1986_V_read2056_phi_phi_fu_96515_p4 = data_1986_V_read.read();
        } else {
            ap_phi_mux_data_1986_V_read2056_phi_phi_fu_96515_p4 = ap_phi_reg_pp0_iter0_data_1986_V_read2056_phi_reg_96511.read();
        }
    } else {
        ap_phi_mux_data_1986_V_read2056_phi_phi_fu_96515_p4 = ap_phi_reg_pp0_iter0_data_1986_V_read2056_phi_reg_96511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1986_V_read2056_rewind_phi_fu_53687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1986_V_read2056_rewind_phi_fu_53687_p6 = data_1986_V_read2056_phi_reg_96511.read();
    } else {
        ap_phi_mux_data_1986_V_read2056_rewind_phi_fu_53687_p6 = data_1986_V_read2056_rewind_reg_53683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1987_V_read2057_phi_phi_fu_96528_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1987_V_read2057_phi_phi_fu_96528_p4 = ap_phi_mux_data_1987_V_read2057_rewind_phi_fu_53701_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1987_V_read2057_phi_phi_fu_96528_p4 = data_1987_V_read.read();
        } else {
            ap_phi_mux_data_1987_V_read2057_phi_phi_fu_96528_p4 = ap_phi_reg_pp0_iter0_data_1987_V_read2057_phi_reg_96524.read();
        }
    } else {
        ap_phi_mux_data_1987_V_read2057_phi_phi_fu_96528_p4 = ap_phi_reg_pp0_iter0_data_1987_V_read2057_phi_reg_96524.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1987_V_read2057_rewind_phi_fu_53701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1987_V_read2057_rewind_phi_fu_53701_p6 = data_1987_V_read2057_phi_reg_96524.read();
    } else {
        ap_phi_mux_data_1987_V_read2057_rewind_phi_fu_53701_p6 = data_1987_V_read2057_rewind_reg_53697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1988_V_read2058_phi_phi_fu_96541_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1988_V_read2058_phi_phi_fu_96541_p4 = ap_phi_mux_data_1988_V_read2058_rewind_phi_fu_53715_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1988_V_read2058_phi_phi_fu_96541_p4 = data_1988_V_read.read();
        } else {
            ap_phi_mux_data_1988_V_read2058_phi_phi_fu_96541_p4 = ap_phi_reg_pp0_iter0_data_1988_V_read2058_phi_reg_96537.read();
        }
    } else {
        ap_phi_mux_data_1988_V_read2058_phi_phi_fu_96541_p4 = ap_phi_reg_pp0_iter0_data_1988_V_read2058_phi_reg_96537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1988_V_read2058_rewind_phi_fu_53715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1988_V_read2058_rewind_phi_fu_53715_p6 = data_1988_V_read2058_phi_reg_96537.read();
    } else {
        ap_phi_mux_data_1988_V_read2058_rewind_phi_fu_53715_p6 = data_1988_V_read2058_rewind_reg_53711.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1989_V_read2059_phi_phi_fu_96554_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1989_V_read2059_phi_phi_fu_96554_p4 = ap_phi_mux_data_1989_V_read2059_rewind_phi_fu_53729_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1989_V_read2059_phi_phi_fu_96554_p4 = data_1989_V_read.read();
        } else {
            ap_phi_mux_data_1989_V_read2059_phi_phi_fu_96554_p4 = ap_phi_reg_pp0_iter0_data_1989_V_read2059_phi_reg_96550.read();
        }
    } else {
        ap_phi_mux_data_1989_V_read2059_phi_phi_fu_96554_p4 = ap_phi_reg_pp0_iter0_data_1989_V_read2059_phi_reg_96550.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1989_V_read2059_rewind_phi_fu_53729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1989_V_read2059_rewind_phi_fu_53729_p6 = data_1989_V_read2059_phi_reg_96550.read();
    } else {
        ap_phi_mux_data_1989_V_read2059_rewind_phi_fu_53729_p6 = data_1989_V_read2059_rewind_reg_53725.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_198_V_read268_phi_phi_fu_73271_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_198_V_read268_phi_phi_fu_73271_p4 = ap_phi_mux_data_198_V_read268_rewind_phi_fu_28655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_198_V_read268_phi_phi_fu_73271_p4 = data_198_V_read.read();
        } else {
            ap_phi_mux_data_198_V_read268_phi_phi_fu_73271_p4 = ap_phi_reg_pp0_iter0_data_198_V_read268_phi_reg_73267.read();
        }
    } else {
        ap_phi_mux_data_198_V_read268_phi_phi_fu_73271_p4 = ap_phi_reg_pp0_iter0_data_198_V_read268_phi_reg_73267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_198_V_read268_rewind_phi_fu_28655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_198_V_read268_rewind_phi_fu_28655_p6 = data_198_V_read268_phi_reg_73267.read();
    } else {
        ap_phi_mux_data_198_V_read268_rewind_phi_fu_28655_p6 = data_198_V_read268_rewind_reg_28651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1990_V_read2060_phi_phi_fu_96567_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1990_V_read2060_phi_phi_fu_96567_p4 = ap_phi_mux_data_1990_V_read2060_rewind_phi_fu_53743_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1990_V_read2060_phi_phi_fu_96567_p4 = data_1990_V_read.read();
        } else {
            ap_phi_mux_data_1990_V_read2060_phi_phi_fu_96567_p4 = ap_phi_reg_pp0_iter0_data_1990_V_read2060_phi_reg_96563.read();
        }
    } else {
        ap_phi_mux_data_1990_V_read2060_phi_phi_fu_96567_p4 = ap_phi_reg_pp0_iter0_data_1990_V_read2060_phi_reg_96563.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1990_V_read2060_rewind_phi_fu_53743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1990_V_read2060_rewind_phi_fu_53743_p6 = data_1990_V_read2060_phi_reg_96563.read();
    } else {
        ap_phi_mux_data_1990_V_read2060_rewind_phi_fu_53743_p6 = data_1990_V_read2060_rewind_reg_53739.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1991_V_read2061_phi_phi_fu_96580_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1991_V_read2061_phi_phi_fu_96580_p4 = ap_phi_mux_data_1991_V_read2061_rewind_phi_fu_53757_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1991_V_read2061_phi_phi_fu_96580_p4 = data_1991_V_read.read();
        } else {
            ap_phi_mux_data_1991_V_read2061_phi_phi_fu_96580_p4 = ap_phi_reg_pp0_iter0_data_1991_V_read2061_phi_reg_96576.read();
        }
    } else {
        ap_phi_mux_data_1991_V_read2061_phi_phi_fu_96580_p4 = ap_phi_reg_pp0_iter0_data_1991_V_read2061_phi_reg_96576.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1991_V_read2061_rewind_phi_fu_53757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1991_V_read2061_rewind_phi_fu_53757_p6 = data_1991_V_read2061_phi_reg_96576.read();
    } else {
        ap_phi_mux_data_1991_V_read2061_rewind_phi_fu_53757_p6 = data_1991_V_read2061_rewind_reg_53753.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1992_V_read2062_phi_phi_fu_96593_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1992_V_read2062_phi_phi_fu_96593_p4 = ap_phi_mux_data_1992_V_read2062_rewind_phi_fu_53771_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1992_V_read2062_phi_phi_fu_96593_p4 = data_1992_V_read.read();
        } else {
            ap_phi_mux_data_1992_V_read2062_phi_phi_fu_96593_p4 = ap_phi_reg_pp0_iter0_data_1992_V_read2062_phi_reg_96589.read();
        }
    } else {
        ap_phi_mux_data_1992_V_read2062_phi_phi_fu_96593_p4 = ap_phi_reg_pp0_iter0_data_1992_V_read2062_phi_reg_96589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1992_V_read2062_rewind_phi_fu_53771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1992_V_read2062_rewind_phi_fu_53771_p6 = data_1992_V_read2062_phi_reg_96589.read();
    } else {
        ap_phi_mux_data_1992_V_read2062_rewind_phi_fu_53771_p6 = data_1992_V_read2062_rewind_reg_53767.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1993_V_read2063_phi_phi_fu_96606_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1993_V_read2063_phi_phi_fu_96606_p4 = ap_phi_mux_data_1993_V_read2063_rewind_phi_fu_53785_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1993_V_read2063_phi_phi_fu_96606_p4 = data_1993_V_read.read();
        } else {
            ap_phi_mux_data_1993_V_read2063_phi_phi_fu_96606_p4 = ap_phi_reg_pp0_iter0_data_1993_V_read2063_phi_reg_96602.read();
        }
    } else {
        ap_phi_mux_data_1993_V_read2063_phi_phi_fu_96606_p4 = ap_phi_reg_pp0_iter0_data_1993_V_read2063_phi_reg_96602.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1993_V_read2063_rewind_phi_fu_53785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1993_V_read2063_rewind_phi_fu_53785_p6 = data_1993_V_read2063_phi_reg_96602.read();
    } else {
        ap_phi_mux_data_1993_V_read2063_rewind_phi_fu_53785_p6 = data_1993_V_read2063_rewind_reg_53781.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1994_V_read2064_phi_phi_fu_96619_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1994_V_read2064_phi_phi_fu_96619_p4 = ap_phi_mux_data_1994_V_read2064_rewind_phi_fu_53799_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1994_V_read2064_phi_phi_fu_96619_p4 = data_1994_V_read.read();
        } else {
            ap_phi_mux_data_1994_V_read2064_phi_phi_fu_96619_p4 = ap_phi_reg_pp0_iter0_data_1994_V_read2064_phi_reg_96615.read();
        }
    } else {
        ap_phi_mux_data_1994_V_read2064_phi_phi_fu_96619_p4 = ap_phi_reg_pp0_iter0_data_1994_V_read2064_phi_reg_96615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1994_V_read2064_rewind_phi_fu_53799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1994_V_read2064_rewind_phi_fu_53799_p6 = data_1994_V_read2064_phi_reg_96615.read();
    } else {
        ap_phi_mux_data_1994_V_read2064_rewind_phi_fu_53799_p6 = data_1994_V_read2064_rewind_reg_53795.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1995_V_read2065_phi_phi_fu_96632_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1995_V_read2065_phi_phi_fu_96632_p4 = ap_phi_mux_data_1995_V_read2065_rewind_phi_fu_53813_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1995_V_read2065_phi_phi_fu_96632_p4 = data_1995_V_read.read();
        } else {
            ap_phi_mux_data_1995_V_read2065_phi_phi_fu_96632_p4 = ap_phi_reg_pp0_iter0_data_1995_V_read2065_phi_reg_96628.read();
        }
    } else {
        ap_phi_mux_data_1995_V_read2065_phi_phi_fu_96632_p4 = ap_phi_reg_pp0_iter0_data_1995_V_read2065_phi_reg_96628.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1995_V_read2065_rewind_phi_fu_53813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1995_V_read2065_rewind_phi_fu_53813_p6 = data_1995_V_read2065_phi_reg_96628.read();
    } else {
        ap_phi_mux_data_1995_V_read2065_rewind_phi_fu_53813_p6 = data_1995_V_read2065_rewind_reg_53809.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1996_V_read2066_phi_phi_fu_96645_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1996_V_read2066_phi_phi_fu_96645_p4 = ap_phi_mux_data_1996_V_read2066_rewind_phi_fu_53827_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1996_V_read2066_phi_phi_fu_96645_p4 = data_1996_V_read.read();
        } else {
            ap_phi_mux_data_1996_V_read2066_phi_phi_fu_96645_p4 = ap_phi_reg_pp0_iter0_data_1996_V_read2066_phi_reg_96641.read();
        }
    } else {
        ap_phi_mux_data_1996_V_read2066_phi_phi_fu_96645_p4 = ap_phi_reg_pp0_iter0_data_1996_V_read2066_phi_reg_96641.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1996_V_read2066_rewind_phi_fu_53827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1996_V_read2066_rewind_phi_fu_53827_p6 = data_1996_V_read2066_phi_reg_96641.read();
    } else {
        ap_phi_mux_data_1996_V_read2066_rewind_phi_fu_53827_p6 = data_1996_V_read2066_rewind_reg_53823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1997_V_read2067_phi_phi_fu_96658_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1997_V_read2067_phi_phi_fu_96658_p4 = ap_phi_mux_data_1997_V_read2067_rewind_phi_fu_53841_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1997_V_read2067_phi_phi_fu_96658_p4 = data_1997_V_read.read();
        } else {
            ap_phi_mux_data_1997_V_read2067_phi_phi_fu_96658_p4 = ap_phi_reg_pp0_iter0_data_1997_V_read2067_phi_reg_96654.read();
        }
    } else {
        ap_phi_mux_data_1997_V_read2067_phi_phi_fu_96658_p4 = ap_phi_reg_pp0_iter0_data_1997_V_read2067_phi_reg_96654.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1997_V_read2067_rewind_phi_fu_53841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1997_V_read2067_rewind_phi_fu_53841_p6 = data_1997_V_read2067_phi_reg_96654.read();
    } else {
        ap_phi_mux_data_1997_V_read2067_rewind_phi_fu_53841_p6 = data_1997_V_read2067_rewind_reg_53837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1998_V_read2068_phi_phi_fu_96671_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1998_V_read2068_phi_phi_fu_96671_p4 = ap_phi_mux_data_1998_V_read2068_rewind_phi_fu_53855_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1998_V_read2068_phi_phi_fu_96671_p4 = data_1998_V_read.read();
        } else {
            ap_phi_mux_data_1998_V_read2068_phi_phi_fu_96671_p4 = ap_phi_reg_pp0_iter0_data_1998_V_read2068_phi_reg_96667.read();
        }
    } else {
        ap_phi_mux_data_1998_V_read2068_phi_phi_fu_96671_p4 = ap_phi_reg_pp0_iter0_data_1998_V_read2068_phi_reg_96667.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1998_V_read2068_rewind_phi_fu_53855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1998_V_read2068_rewind_phi_fu_53855_p6 = data_1998_V_read2068_phi_reg_96667.read();
    } else {
        ap_phi_mux_data_1998_V_read2068_rewind_phi_fu_53855_p6 = data_1998_V_read2068_rewind_reg_53851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1999_V_read2069_phi_phi_fu_96684_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1999_V_read2069_phi_phi_fu_96684_p4 = ap_phi_mux_data_1999_V_read2069_rewind_phi_fu_53869_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1999_V_read2069_phi_phi_fu_96684_p4 = data_1999_V_read.read();
        } else {
            ap_phi_mux_data_1999_V_read2069_phi_phi_fu_96684_p4 = ap_phi_reg_pp0_iter0_data_1999_V_read2069_phi_reg_96680.read();
        }
    } else {
        ap_phi_mux_data_1999_V_read2069_phi_phi_fu_96684_p4 = ap_phi_reg_pp0_iter0_data_1999_V_read2069_phi_reg_96680.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1999_V_read2069_rewind_phi_fu_53869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1999_V_read2069_rewind_phi_fu_53869_p6 = data_1999_V_read2069_phi_reg_96680.read();
    } else {
        ap_phi_mux_data_1999_V_read2069_rewind_phi_fu_53869_p6 = data_1999_V_read2069_rewind_reg_53865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_199_V_read269_phi_phi_fu_73284_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_199_V_read269_phi_phi_fu_73284_p4 = ap_phi_mux_data_199_V_read269_rewind_phi_fu_28669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_199_V_read269_phi_phi_fu_73284_p4 = data_199_V_read.read();
        } else {
            ap_phi_mux_data_199_V_read269_phi_phi_fu_73284_p4 = ap_phi_reg_pp0_iter0_data_199_V_read269_phi_reg_73280.read();
        }
    } else {
        ap_phi_mux_data_199_V_read269_phi_phi_fu_73284_p4 = ap_phi_reg_pp0_iter0_data_199_V_read269_phi_reg_73280.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_199_V_read269_rewind_phi_fu_28669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_199_V_read269_rewind_phi_fu_28669_p6 = data_199_V_read269_phi_reg_73280.read();
    } else {
        ap_phi_mux_data_199_V_read269_rewind_phi_fu_28669_p6 = data_199_V_read269_rewind_reg_28665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_19_V_read89_phi_phi_fu_70944_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_19_V_read89_phi_phi_fu_70944_p4 = ap_phi_mux_data_19_V_read89_rewind_phi_fu_26149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_19_V_read89_phi_phi_fu_70944_p4 = data_19_V_read.read();
        } else {
            ap_phi_mux_data_19_V_read89_phi_phi_fu_70944_p4 = ap_phi_reg_pp0_iter0_data_19_V_read89_phi_reg_70940.read();
        }
    } else {
        ap_phi_mux_data_19_V_read89_phi_phi_fu_70944_p4 = ap_phi_reg_pp0_iter0_data_19_V_read89_phi_reg_70940.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_19_V_read89_rewind_phi_fu_26149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_19_V_read89_rewind_phi_fu_26149_p6 = data_19_V_read89_phi_reg_70940.read();
    } else {
        ap_phi_mux_data_19_V_read89_rewind_phi_fu_26149_p6 = data_19_V_read89_rewind_reg_26145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1_V_read71_phi_phi_fu_70710_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_1_V_read71_phi_phi_fu_70710_p4 = ap_phi_mux_data_1_V_read71_rewind_phi_fu_25897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_1_V_read71_phi_phi_fu_70710_p4 = data_1_V_read.read();
        } else {
            ap_phi_mux_data_1_V_read71_phi_phi_fu_70710_p4 = ap_phi_reg_pp0_iter0_data_1_V_read71_phi_reg_70706.read();
        }
    } else {
        ap_phi_mux_data_1_V_read71_phi_phi_fu_70710_p4 = ap_phi_reg_pp0_iter0_data_1_V_read71_phi_reg_70706.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_1_V_read71_rewind_phi_fu_25897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1_V_read71_rewind_phi_fu_25897_p6 = data_1_V_read71_phi_reg_70706.read();
    } else {
        ap_phi_mux_data_1_V_read71_rewind_phi_fu_25897_p6 = data_1_V_read71_rewind_reg_25893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2000_V_read2070_phi_phi_fu_96697_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2000_V_read2070_phi_phi_fu_96697_p4 = ap_phi_mux_data_2000_V_read2070_rewind_phi_fu_53883_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2000_V_read2070_phi_phi_fu_96697_p4 = data_2000_V_read.read();
        } else {
            ap_phi_mux_data_2000_V_read2070_phi_phi_fu_96697_p4 = ap_phi_reg_pp0_iter0_data_2000_V_read2070_phi_reg_96693.read();
        }
    } else {
        ap_phi_mux_data_2000_V_read2070_phi_phi_fu_96697_p4 = ap_phi_reg_pp0_iter0_data_2000_V_read2070_phi_reg_96693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2000_V_read2070_rewind_phi_fu_53883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2000_V_read2070_rewind_phi_fu_53883_p6 = data_2000_V_read2070_phi_reg_96693.read();
    } else {
        ap_phi_mux_data_2000_V_read2070_rewind_phi_fu_53883_p6 = data_2000_V_read2070_rewind_reg_53879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2001_V_read2071_phi_phi_fu_96710_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2001_V_read2071_phi_phi_fu_96710_p4 = ap_phi_mux_data_2001_V_read2071_rewind_phi_fu_53897_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2001_V_read2071_phi_phi_fu_96710_p4 = data_2001_V_read.read();
        } else {
            ap_phi_mux_data_2001_V_read2071_phi_phi_fu_96710_p4 = ap_phi_reg_pp0_iter0_data_2001_V_read2071_phi_reg_96706.read();
        }
    } else {
        ap_phi_mux_data_2001_V_read2071_phi_phi_fu_96710_p4 = ap_phi_reg_pp0_iter0_data_2001_V_read2071_phi_reg_96706.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2001_V_read2071_rewind_phi_fu_53897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2001_V_read2071_rewind_phi_fu_53897_p6 = data_2001_V_read2071_phi_reg_96706.read();
    } else {
        ap_phi_mux_data_2001_V_read2071_rewind_phi_fu_53897_p6 = data_2001_V_read2071_rewind_reg_53893.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2002_V_read2072_phi_phi_fu_96723_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2002_V_read2072_phi_phi_fu_96723_p4 = ap_phi_mux_data_2002_V_read2072_rewind_phi_fu_53911_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2002_V_read2072_phi_phi_fu_96723_p4 = data_2002_V_read.read();
        } else {
            ap_phi_mux_data_2002_V_read2072_phi_phi_fu_96723_p4 = ap_phi_reg_pp0_iter0_data_2002_V_read2072_phi_reg_96719.read();
        }
    } else {
        ap_phi_mux_data_2002_V_read2072_phi_phi_fu_96723_p4 = ap_phi_reg_pp0_iter0_data_2002_V_read2072_phi_reg_96719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2002_V_read2072_rewind_phi_fu_53911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2002_V_read2072_rewind_phi_fu_53911_p6 = data_2002_V_read2072_phi_reg_96719.read();
    } else {
        ap_phi_mux_data_2002_V_read2072_rewind_phi_fu_53911_p6 = data_2002_V_read2072_rewind_reg_53907.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2003_V_read2073_phi_phi_fu_96736_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2003_V_read2073_phi_phi_fu_96736_p4 = ap_phi_mux_data_2003_V_read2073_rewind_phi_fu_53925_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2003_V_read2073_phi_phi_fu_96736_p4 = data_2003_V_read.read();
        } else {
            ap_phi_mux_data_2003_V_read2073_phi_phi_fu_96736_p4 = ap_phi_reg_pp0_iter0_data_2003_V_read2073_phi_reg_96732.read();
        }
    } else {
        ap_phi_mux_data_2003_V_read2073_phi_phi_fu_96736_p4 = ap_phi_reg_pp0_iter0_data_2003_V_read2073_phi_reg_96732.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2003_V_read2073_rewind_phi_fu_53925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2003_V_read2073_rewind_phi_fu_53925_p6 = data_2003_V_read2073_phi_reg_96732.read();
    } else {
        ap_phi_mux_data_2003_V_read2073_rewind_phi_fu_53925_p6 = data_2003_V_read2073_rewind_reg_53921.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2004_V_read2074_phi_phi_fu_96749_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2004_V_read2074_phi_phi_fu_96749_p4 = ap_phi_mux_data_2004_V_read2074_rewind_phi_fu_53939_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2004_V_read2074_phi_phi_fu_96749_p4 = data_2004_V_read.read();
        } else {
            ap_phi_mux_data_2004_V_read2074_phi_phi_fu_96749_p4 = ap_phi_reg_pp0_iter0_data_2004_V_read2074_phi_reg_96745.read();
        }
    } else {
        ap_phi_mux_data_2004_V_read2074_phi_phi_fu_96749_p4 = ap_phi_reg_pp0_iter0_data_2004_V_read2074_phi_reg_96745.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2004_V_read2074_rewind_phi_fu_53939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2004_V_read2074_rewind_phi_fu_53939_p6 = data_2004_V_read2074_phi_reg_96745.read();
    } else {
        ap_phi_mux_data_2004_V_read2074_rewind_phi_fu_53939_p6 = data_2004_V_read2074_rewind_reg_53935.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2005_V_read2075_phi_phi_fu_96762_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2005_V_read2075_phi_phi_fu_96762_p4 = ap_phi_mux_data_2005_V_read2075_rewind_phi_fu_53953_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2005_V_read2075_phi_phi_fu_96762_p4 = data_2005_V_read.read();
        } else {
            ap_phi_mux_data_2005_V_read2075_phi_phi_fu_96762_p4 = ap_phi_reg_pp0_iter0_data_2005_V_read2075_phi_reg_96758.read();
        }
    } else {
        ap_phi_mux_data_2005_V_read2075_phi_phi_fu_96762_p4 = ap_phi_reg_pp0_iter0_data_2005_V_read2075_phi_reg_96758.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2005_V_read2075_rewind_phi_fu_53953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2005_V_read2075_rewind_phi_fu_53953_p6 = data_2005_V_read2075_phi_reg_96758.read();
    } else {
        ap_phi_mux_data_2005_V_read2075_rewind_phi_fu_53953_p6 = data_2005_V_read2075_rewind_reg_53949.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2006_V_read2076_phi_phi_fu_96775_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2006_V_read2076_phi_phi_fu_96775_p4 = ap_phi_mux_data_2006_V_read2076_rewind_phi_fu_53967_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2006_V_read2076_phi_phi_fu_96775_p4 = data_2006_V_read.read();
        } else {
            ap_phi_mux_data_2006_V_read2076_phi_phi_fu_96775_p4 = ap_phi_reg_pp0_iter0_data_2006_V_read2076_phi_reg_96771.read();
        }
    } else {
        ap_phi_mux_data_2006_V_read2076_phi_phi_fu_96775_p4 = ap_phi_reg_pp0_iter0_data_2006_V_read2076_phi_reg_96771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2006_V_read2076_rewind_phi_fu_53967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2006_V_read2076_rewind_phi_fu_53967_p6 = data_2006_V_read2076_phi_reg_96771.read();
    } else {
        ap_phi_mux_data_2006_V_read2076_rewind_phi_fu_53967_p6 = data_2006_V_read2076_rewind_reg_53963.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2007_V_read2077_phi_phi_fu_96788_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2007_V_read2077_phi_phi_fu_96788_p4 = ap_phi_mux_data_2007_V_read2077_rewind_phi_fu_53981_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2007_V_read2077_phi_phi_fu_96788_p4 = data_2007_V_read.read();
        } else {
            ap_phi_mux_data_2007_V_read2077_phi_phi_fu_96788_p4 = ap_phi_reg_pp0_iter0_data_2007_V_read2077_phi_reg_96784.read();
        }
    } else {
        ap_phi_mux_data_2007_V_read2077_phi_phi_fu_96788_p4 = ap_phi_reg_pp0_iter0_data_2007_V_read2077_phi_reg_96784.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2007_V_read2077_rewind_phi_fu_53981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2007_V_read2077_rewind_phi_fu_53981_p6 = data_2007_V_read2077_phi_reg_96784.read();
    } else {
        ap_phi_mux_data_2007_V_read2077_rewind_phi_fu_53981_p6 = data_2007_V_read2077_rewind_reg_53977.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2008_V_read2078_phi_phi_fu_96801_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2008_V_read2078_phi_phi_fu_96801_p4 = ap_phi_mux_data_2008_V_read2078_rewind_phi_fu_53995_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2008_V_read2078_phi_phi_fu_96801_p4 = data_2008_V_read.read();
        } else {
            ap_phi_mux_data_2008_V_read2078_phi_phi_fu_96801_p4 = ap_phi_reg_pp0_iter0_data_2008_V_read2078_phi_reg_96797.read();
        }
    } else {
        ap_phi_mux_data_2008_V_read2078_phi_phi_fu_96801_p4 = ap_phi_reg_pp0_iter0_data_2008_V_read2078_phi_reg_96797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2008_V_read2078_rewind_phi_fu_53995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2008_V_read2078_rewind_phi_fu_53995_p6 = data_2008_V_read2078_phi_reg_96797.read();
    } else {
        ap_phi_mux_data_2008_V_read2078_rewind_phi_fu_53995_p6 = data_2008_V_read2078_rewind_reg_53991.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2009_V_read2079_phi_phi_fu_96814_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2009_V_read2079_phi_phi_fu_96814_p4 = ap_phi_mux_data_2009_V_read2079_rewind_phi_fu_54009_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2009_V_read2079_phi_phi_fu_96814_p4 = data_2009_V_read.read();
        } else {
            ap_phi_mux_data_2009_V_read2079_phi_phi_fu_96814_p4 = ap_phi_reg_pp0_iter0_data_2009_V_read2079_phi_reg_96810.read();
        }
    } else {
        ap_phi_mux_data_2009_V_read2079_phi_phi_fu_96814_p4 = ap_phi_reg_pp0_iter0_data_2009_V_read2079_phi_reg_96810.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2009_V_read2079_rewind_phi_fu_54009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2009_V_read2079_rewind_phi_fu_54009_p6 = data_2009_V_read2079_phi_reg_96810.read();
    } else {
        ap_phi_mux_data_2009_V_read2079_rewind_phi_fu_54009_p6 = data_2009_V_read2079_rewind_reg_54005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_200_V_read270_phi_phi_fu_73297_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_200_V_read270_phi_phi_fu_73297_p4 = ap_phi_mux_data_200_V_read270_rewind_phi_fu_28683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_200_V_read270_phi_phi_fu_73297_p4 = data_200_V_read.read();
        } else {
            ap_phi_mux_data_200_V_read270_phi_phi_fu_73297_p4 = ap_phi_reg_pp0_iter0_data_200_V_read270_phi_reg_73293.read();
        }
    } else {
        ap_phi_mux_data_200_V_read270_phi_phi_fu_73297_p4 = ap_phi_reg_pp0_iter0_data_200_V_read270_phi_reg_73293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_200_V_read270_rewind_phi_fu_28683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_200_V_read270_rewind_phi_fu_28683_p6 = data_200_V_read270_phi_reg_73293.read();
    } else {
        ap_phi_mux_data_200_V_read270_rewind_phi_fu_28683_p6 = data_200_V_read270_rewind_reg_28679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2010_V_read2080_phi_phi_fu_96827_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2010_V_read2080_phi_phi_fu_96827_p4 = ap_phi_mux_data_2010_V_read2080_rewind_phi_fu_54023_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2010_V_read2080_phi_phi_fu_96827_p4 = data_2010_V_read.read();
        } else {
            ap_phi_mux_data_2010_V_read2080_phi_phi_fu_96827_p4 = ap_phi_reg_pp0_iter0_data_2010_V_read2080_phi_reg_96823.read();
        }
    } else {
        ap_phi_mux_data_2010_V_read2080_phi_phi_fu_96827_p4 = ap_phi_reg_pp0_iter0_data_2010_V_read2080_phi_reg_96823.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2010_V_read2080_rewind_phi_fu_54023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2010_V_read2080_rewind_phi_fu_54023_p6 = data_2010_V_read2080_phi_reg_96823.read();
    } else {
        ap_phi_mux_data_2010_V_read2080_rewind_phi_fu_54023_p6 = data_2010_V_read2080_rewind_reg_54019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2011_V_read2081_phi_phi_fu_96840_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2011_V_read2081_phi_phi_fu_96840_p4 = ap_phi_mux_data_2011_V_read2081_rewind_phi_fu_54037_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2011_V_read2081_phi_phi_fu_96840_p4 = data_2011_V_read.read();
        } else {
            ap_phi_mux_data_2011_V_read2081_phi_phi_fu_96840_p4 = ap_phi_reg_pp0_iter0_data_2011_V_read2081_phi_reg_96836.read();
        }
    } else {
        ap_phi_mux_data_2011_V_read2081_phi_phi_fu_96840_p4 = ap_phi_reg_pp0_iter0_data_2011_V_read2081_phi_reg_96836.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2011_V_read2081_rewind_phi_fu_54037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2011_V_read2081_rewind_phi_fu_54037_p6 = data_2011_V_read2081_phi_reg_96836.read();
    } else {
        ap_phi_mux_data_2011_V_read2081_rewind_phi_fu_54037_p6 = data_2011_V_read2081_rewind_reg_54033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2012_V_read2082_phi_phi_fu_96853_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2012_V_read2082_phi_phi_fu_96853_p4 = ap_phi_mux_data_2012_V_read2082_rewind_phi_fu_54051_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2012_V_read2082_phi_phi_fu_96853_p4 = data_2012_V_read.read();
        } else {
            ap_phi_mux_data_2012_V_read2082_phi_phi_fu_96853_p4 = ap_phi_reg_pp0_iter0_data_2012_V_read2082_phi_reg_96849.read();
        }
    } else {
        ap_phi_mux_data_2012_V_read2082_phi_phi_fu_96853_p4 = ap_phi_reg_pp0_iter0_data_2012_V_read2082_phi_reg_96849.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2012_V_read2082_rewind_phi_fu_54051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2012_V_read2082_rewind_phi_fu_54051_p6 = data_2012_V_read2082_phi_reg_96849.read();
    } else {
        ap_phi_mux_data_2012_V_read2082_rewind_phi_fu_54051_p6 = data_2012_V_read2082_rewind_reg_54047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2013_V_read2083_phi_phi_fu_96866_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2013_V_read2083_phi_phi_fu_96866_p4 = ap_phi_mux_data_2013_V_read2083_rewind_phi_fu_54065_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2013_V_read2083_phi_phi_fu_96866_p4 = data_2013_V_read.read();
        } else {
            ap_phi_mux_data_2013_V_read2083_phi_phi_fu_96866_p4 = ap_phi_reg_pp0_iter0_data_2013_V_read2083_phi_reg_96862.read();
        }
    } else {
        ap_phi_mux_data_2013_V_read2083_phi_phi_fu_96866_p4 = ap_phi_reg_pp0_iter0_data_2013_V_read2083_phi_reg_96862.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2013_V_read2083_rewind_phi_fu_54065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2013_V_read2083_rewind_phi_fu_54065_p6 = data_2013_V_read2083_phi_reg_96862.read();
    } else {
        ap_phi_mux_data_2013_V_read2083_rewind_phi_fu_54065_p6 = data_2013_V_read2083_rewind_reg_54061.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2014_V_read2084_phi_phi_fu_96879_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2014_V_read2084_phi_phi_fu_96879_p4 = ap_phi_mux_data_2014_V_read2084_rewind_phi_fu_54079_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2014_V_read2084_phi_phi_fu_96879_p4 = data_2014_V_read.read();
        } else {
            ap_phi_mux_data_2014_V_read2084_phi_phi_fu_96879_p4 = ap_phi_reg_pp0_iter0_data_2014_V_read2084_phi_reg_96875.read();
        }
    } else {
        ap_phi_mux_data_2014_V_read2084_phi_phi_fu_96879_p4 = ap_phi_reg_pp0_iter0_data_2014_V_read2084_phi_reg_96875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2014_V_read2084_rewind_phi_fu_54079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2014_V_read2084_rewind_phi_fu_54079_p6 = data_2014_V_read2084_phi_reg_96875.read();
    } else {
        ap_phi_mux_data_2014_V_read2084_rewind_phi_fu_54079_p6 = data_2014_V_read2084_rewind_reg_54075.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2015_V_read2085_phi_phi_fu_96892_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2015_V_read2085_phi_phi_fu_96892_p4 = ap_phi_mux_data_2015_V_read2085_rewind_phi_fu_54093_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2015_V_read2085_phi_phi_fu_96892_p4 = data_2015_V_read.read();
        } else {
            ap_phi_mux_data_2015_V_read2085_phi_phi_fu_96892_p4 = ap_phi_reg_pp0_iter0_data_2015_V_read2085_phi_reg_96888.read();
        }
    } else {
        ap_phi_mux_data_2015_V_read2085_phi_phi_fu_96892_p4 = ap_phi_reg_pp0_iter0_data_2015_V_read2085_phi_reg_96888.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2015_V_read2085_rewind_phi_fu_54093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2015_V_read2085_rewind_phi_fu_54093_p6 = data_2015_V_read2085_phi_reg_96888.read();
    } else {
        ap_phi_mux_data_2015_V_read2085_rewind_phi_fu_54093_p6 = data_2015_V_read2085_rewind_reg_54089.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2016_V_read2086_phi_phi_fu_96905_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2016_V_read2086_phi_phi_fu_96905_p4 = ap_phi_mux_data_2016_V_read2086_rewind_phi_fu_54107_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2016_V_read2086_phi_phi_fu_96905_p4 = data_2016_V_read.read();
        } else {
            ap_phi_mux_data_2016_V_read2086_phi_phi_fu_96905_p4 = ap_phi_reg_pp0_iter0_data_2016_V_read2086_phi_reg_96901.read();
        }
    } else {
        ap_phi_mux_data_2016_V_read2086_phi_phi_fu_96905_p4 = ap_phi_reg_pp0_iter0_data_2016_V_read2086_phi_reg_96901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2016_V_read2086_rewind_phi_fu_54107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2016_V_read2086_rewind_phi_fu_54107_p6 = data_2016_V_read2086_phi_reg_96901.read();
    } else {
        ap_phi_mux_data_2016_V_read2086_rewind_phi_fu_54107_p6 = data_2016_V_read2086_rewind_reg_54103.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2017_V_read2087_phi_phi_fu_96918_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2017_V_read2087_phi_phi_fu_96918_p4 = ap_phi_mux_data_2017_V_read2087_rewind_phi_fu_54121_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2017_V_read2087_phi_phi_fu_96918_p4 = data_2017_V_read.read();
        } else {
            ap_phi_mux_data_2017_V_read2087_phi_phi_fu_96918_p4 = ap_phi_reg_pp0_iter0_data_2017_V_read2087_phi_reg_96914.read();
        }
    } else {
        ap_phi_mux_data_2017_V_read2087_phi_phi_fu_96918_p4 = ap_phi_reg_pp0_iter0_data_2017_V_read2087_phi_reg_96914.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2017_V_read2087_rewind_phi_fu_54121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2017_V_read2087_rewind_phi_fu_54121_p6 = data_2017_V_read2087_phi_reg_96914.read();
    } else {
        ap_phi_mux_data_2017_V_read2087_rewind_phi_fu_54121_p6 = data_2017_V_read2087_rewind_reg_54117.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2018_V_read2088_phi_phi_fu_96931_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2018_V_read2088_phi_phi_fu_96931_p4 = ap_phi_mux_data_2018_V_read2088_rewind_phi_fu_54135_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2018_V_read2088_phi_phi_fu_96931_p4 = data_2018_V_read.read();
        } else {
            ap_phi_mux_data_2018_V_read2088_phi_phi_fu_96931_p4 = ap_phi_reg_pp0_iter0_data_2018_V_read2088_phi_reg_96927.read();
        }
    } else {
        ap_phi_mux_data_2018_V_read2088_phi_phi_fu_96931_p4 = ap_phi_reg_pp0_iter0_data_2018_V_read2088_phi_reg_96927.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2018_V_read2088_rewind_phi_fu_54135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2018_V_read2088_rewind_phi_fu_54135_p6 = data_2018_V_read2088_phi_reg_96927.read();
    } else {
        ap_phi_mux_data_2018_V_read2088_rewind_phi_fu_54135_p6 = data_2018_V_read2088_rewind_reg_54131.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2019_V_read2089_phi_phi_fu_96944_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2019_V_read2089_phi_phi_fu_96944_p4 = ap_phi_mux_data_2019_V_read2089_rewind_phi_fu_54149_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2019_V_read2089_phi_phi_fu_96944_p4 = data_2019_V_read.read();
        } else {
            ap_phi_mux_data_2019_V_read2089_phi_phi_fu_96944_p4 = ap_phi_reg_pp0_iter0_data_2019_V_read2089_phi_reg_96940.read();
        }
    } else {
        ap_phi_mux_data_2019_V_read2089_phi_phi_fu_96944_p4 = ap_phi_reg_pp0_iter0_data_2019_V_read2089_phi_reg_96940.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2019_V_read2089_rewind_phi_fu_54149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2019_V_read2089_rewind_phi_fu_54149_p6 = data_2019_V_read2089_phi_reg_96940.read();
    } else {
        ap_phi_mux_data_2019_V_read2089_rewind_phi_fu_54149_p6 = data_2019_V_read2089_rewind_reg_54145.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_201_V_read271_phi_phi_fu_73310_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_201_V_read271_phi_phi_fu_73310_p4 = ap_phi_mux_data_201_V_read271_rewind_phi_fu_28697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_201_V_read271_phi_phi_fu_73310_p4 = data_201_V_read.read();
        } else {
            ap_phi_mux_data_201_V_read271_phi_phi_fu_73310_p4 = ap_phi_reg_pp0_iter0_data_201_V_read271_phi_reg_73306.read();
        }
    } else {
        ap_phi_mux_data_201_V_read271_phi_phi_fu_73310_p4 = ap_phi_reg_pp0_iter0_data_201_V_read271_phi_reg_73306.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_201_V_read271_rewind_phi_fu_28697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_201_V_read271_rewind_phi_fu_28697_p6 = data_201_V_read271_phi_reg_73306.read();
    } else {
        ap_phi_mux_data_201_V_read271_rewind_phi_fu_28697_p6 = data_201_V_read271_rewind_reg_28693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2020_V_read2090_phi_phi_fu_96957_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2020_V_read2090_phi_phi_fu_96957_p4 = ap_phi_mux_data_2020_V_read2090_rewind_phi_fu_54163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2020_V_read2090_phi_phi_fu_96957_p4 = data_2020_V_read.read();
        } else {
            ap_phi_mux_data_2020_V_read2090_phi_phi_fu_96957_p4 = ap_phi_reg_pp0_iter0_data_2020_V_read2090_phi_reg_96953.read();
        }
    } else {
        ap_phi_mux_data_2020_V_read2090_phi_phi_fu_96957_p4 = ap_phi_reg_pp0_iter0_data_2020_V_read2090_phi_reg_96953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2020_V_read2090_rewind_phi_fu_54163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2020_V_read2090_rewind_phi_fu_54163_p6 = data_2020_V_read2090_phi_reg_96953.read();
    } else {
        ap_phi_mux_data_2020_V_read2090_rewind_phi_fu_54163_p6 = data_2020_V_read2090_rewind_reg_54159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2021_V_read2091_phi_phi_fu_96970_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2021_V_read2091_phi_phi_fu_96970_p4 = ap_phi_mux_data_2021_V_read2091_rewind_phi_fu_54177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2021_V_read2091_phi_phi_fu_96970_p4 = data_2021_V_read.read();
        } else {
            ap_phi_mux_data_2021_V_read2091_phi_phi_fu_96970_p4 = ap_phi_reg_pp0_iter0_data_2021_V_read2091_phi_reg_96966.read();
        }
    } else {
        ap_phi_mux_data_2021_V_read2091_phi_phi_fu_96970_p4 = ap_phi_reg_pp0_iter0_data_2021_V_read2091_phi_reg_96966.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2021_V_read2091_rewind_phi_fu_54177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2021_V_read2091_rewind_phi_fu_54177_p6 = data_2021_V_read2091_phi_reg_96966.read();
    } else {
        ap_phi_mux_data_2021_V_read2091_rewind_phi_fu_54177_p6 = data_2021_V_read2091_rewind_reg_54173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2022_V_read2092_phi_phi_fu_96983_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2022_V_read2092_phi_phi_fu_96983_p4 = ap_phi_mux_data_2022_V_read2092_rewind_phi_fu_54191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2022_V_read2092_phi_phi_fu_96983_p4 = data_2022_V_read.read();
        } else {
            ap_phi_mux_data_2022_V_read2092_phi_phi_fu_96983_p4 = ap_phi_reg_pp0_iter0_data_2022_V_read2092_phi_reg_96979.read();
        }
    } else {
        ap_phi_mux_data_2022_V_read2092_phi_phi_fu_96983_p4 = ap_phi_reg_pp0_iter0_data_2022_V_read2092_phi_reg_96979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2022_V_read2092_rewind_phi_fu_54191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2022_V_read2092_rewind_phi_fu_54191_p6 = data_2022_V_read2092_phi_reg_96979.read();
    } else {
        ap_phi_mux_data_2022_V_read2092_rewind_phi_fu_54191_p6 = data_2022_V_read2092_rewind_reg_54187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2023_V_read2093_phi_phi_fu_96996_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2023_V_read2093_phi_phi_fu_96996_p4 = ap_phi_mux_data_2023_V_read2093_rewind_phi_fu_54205_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2023_V_read2093_phi_phi_fu_96996_p4 = data_2023_V_read.read();
        } else {
            ap_phi_mux_data_2023_V_read2093_phi_phi_fu_96996_p4 = ap_phi_reg_pp0_iter0_data_2023_V_read2093_phi_reg_96992.read();
        }
    } else {
        ap_phi_mux_data_2023_V_read2093_phi_phi_fu_96996_p4 = ap_phi_reg_pp0_iter0_data_2023_V_read2093_phi_reg_96992.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2023_V_read2093_rewind_phi_fu_54205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2023_V_read2093_rewind_phi_fu_54205_p6 = data_2023_V_read2093_phi_reg_96992.read();
    } else {
        ap_phi_mux_data_2023_V_read2093_rewind_phi_fu_54205_p6 = data_2023_V_read2093_rewind_reg_54201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2024_V_read2094_phi_phi_fu_97009_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2024_V_read2094_phi_phi_fu_97009_p4 = ap_phi_mux_data_2024_V_read2094_rewind_phi_fu_54219_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2024_V_read2094_phi_phi_fu_97009_p4 = data_2024_V_read.read();
        } else {
            ap_phi_mux_data_2024_V_read2094_phi_phi_fu_97009_p4 = ap_phi_reg_pp0_iter0_data_2024_V_read2094_phi_reg_97005.read();
        }
    } else {
        ap_phi_mux_data_2024_V_read2094_phi_phi_fu_97009_p4 = ap_phi_reg_pp0_iter0_data_2024_V_read2094_phi_reg_97005.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2024_V_read2094_rewind_phi_fu_54219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2024_V_read2094_rewind_phi_fu_54219_p6 = data_2024_V_read2094_phi_reg_97005.read();
    } else {
        ap_phi_mux_data_2024_V_read2094_rewind_phi_fu_54219_p6 = data_2024_V_read2094_rewind_reg_54215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2025_V_read2095_phi_phi_fu_97022_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2025_V_read2095_phi_phi_fu_97022_p4 = ap_phi_mux_data_2025_V_read2095_rewind_phi_fu_54233_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2025_V_read2095_phi_phi_fu_97022_p4 = data_2025_V_read.read();
        } else {
            ap_phi_mux_data_2025_V_read2095_phi_phi_fu_97022_p4 = ap_phi_reg_pp0_iter0_data_2025_V_read2095_phi_reg_97018.read();
        }
    } else {
        ap_phi_mux_data_2025_V_read2095_phi_phi_fu_97022_p4 = ap_phi_reg_pp0_iter0_data_2025_V_read2095_phi_reg_97018.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2025_V_read2095_rewind_phi_fu_54233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2025_V_read2095_rewind_phi_fu_54233_p6 = data_2025_V_read2095_phi_reg_97018.read();
    } else {
        ap_phi_mux_data_2025_V_read2095_rewind_phi_fu_54233_p6 = data_2025_V_read2095_rewind_reg_54229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2026_V_read2096_phi_phi_fu_97035_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2026_V_read2096_phi_phi_fu_97035_p4 = ap_phi_mux_data_2026_V_read2096_rewind_phi_fu_54247_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2026_V_read2096_phi_phi_fu_97035_p4 = data_2026_V_read.read();
        } else {
            ap_phi_mux_data_2026_V_read2096_phi_phi_fu_97035_p4 = ap_phi_reg_pp0_iter0_data_2026_V_read2096_phi_reg_97031.read();
        }
    } else {
        ap_phi_mux_data_2026_V_read2096_phi_phi_fu_97035_p4 = ap_phi_reg_pp0_iter0_data_2026_V_read2096_phi_reg_97031.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2026_V_read2096_rewind_phi_fu_54247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2026_V_read2096_rewind_phi_fu_54247_p6 = data_2026_V_read2096_phi_reg_97031.read();
    } else {
        ap_phi_mux_data_2026_V_read2096_rewind_phi_fu_54247_p6 = data_2026_V_read2096_rewind_reg_54243.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2027_V_read2097_phi_phi_fu_97048_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2027_V_read2097_phi_phi_fu_97048_p4 = ap_phi_mux_data_2027_V_read2097_rewind_phi_fu_54261_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2027_V_read2097_phi_phi_fu_97048_p4 = data_2027_V_read.read();
        } else {
            ap_phi_mux_data_2027_V_read2097_phi_phi_fu_97048_p4 = ap_phi_reg_pp0_iter0_data_2027_V_read2097_phi_reg_97044.read();
        }
    } else {
        ap_phi_mux_data_2027_V_read2097_phi_phi_fu_97048_p4 = ap_phi_reg_pp0_iter0_data_2027_V_read2097_phi_reg_97044.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2027_V_read2097_rewind_phi_fu_54261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2027_V_read2097_rewind_phi_fu_54261_p6 = data_2027_V_read2097_phi_reg_97044.read();
    } else {
        ap_phi_mux_data_2027_V_read2097_rewind_phi_fu_54261_p6 = data_2027_V_read2097_rewind_reg_54257.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2028_V_read2098_phi_phi_fu_97061_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2028_V_read2098_phi_phi_fu_97061_p4 = ap_phi_mux_data_2028_V_read2098_rewind_phi_fu_54275_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2028_V_read2098_phi_phi_fu_97061_p4 = data_2028_V_read.read();
        } else {
            ap_phi_mux_data_2028_V_read2098_phi_phi_fu_97061_p4 = ap_phi_reg_pp0_iter0_data_2028_V_read2098_phi_reg_97057.read();
        }
    } else {
        ap_phi_mux_data_2028_V_read2098_phi_phi_fu_97061_p4 = ap_phi_reg_pp0_iter0_data_2028_V_read2098_phi_reg_97057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2028_V_read2098_rewind_phi_fu_54275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2028_V_read2098_rewind_phi_fu_54275_p6 = data_2028_V_read2098_phi_reg_97057.read();
    } else {
        ap_phi_mux_data_2028_V_read2098_rewind_phi_fu_54275_p6 = data_2028_V_read2098_rewind_reg_54271.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2029_V_read2099_phi_phi_fu_97074_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2029_V_read2099_phi_phi_fu_97074_p4 = ap_phi_mux_data_2029_V_read2099_rewind_phi_fu_54289_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2029_V_read2099_phi_phi_fu_97074_p4 = data_2029_V_read.read();
        } else {
            ap_phi_mux_data_2029_V_read2099_phi_phi_fu_97074_p4 = ap_phi_reg_pp0_iter0_data_2029_V_read2099_phi_reg_97070.read();
        }
    } else {
        ap_phi_mux_data_2029_V_read2099_phi_phi_fu_97074_p4 = ap_phi_reg_pp0_iter0_data_2029_V_read2099_phi_reg_97070.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2029_V_read2099_rewind_phi_fu_54289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2029_V_read2099_rewind_phi_fu_54289_p6 = data_2029_V_read2099_phi_reg_97070.read();
    } else {
        ap_phi_mux_data_2029_V_read2099_rewind_phi_fu_54289_p6 = data_2029_V_read2099_rewind_reg_54285.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_202_V_read272_phi_phi_fu_73323_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_202_V_read272_phi_phi_fu_73323_p4 = ap_phi_mux_data_202_V_read272_rewind_phi_fu_28711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_202_V_read272_phi_phi_fu_73323_p4 = data_202_V_read.read();
        } else {
            ap_phi_mux_data_202_V_read272_phi_phi_fu_73323_p4 = ap_phi_reg_pp0_iter0_data_202_V_read272_phi_reg_73319.read();
        }
    } else {
        ap_phi_mux_data_202_V_read272_phi_phi_fu_73323_p4 = ap_phi_reg_pp0_iter0_data_202_V_read272_phi_reg_73319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_202_V_read272_rewind_phi_fu_28711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_202_V_read272_rewind_phi_fu_28711_p6 = data_202_V_read272_phi_reg_73319.read();
    } else {
        ap_phi_mux_data_202_V_read272_rewind_phi_fu_28711_p6 = data_202_V_read272_rewind_reg_28707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2030_V_read2100_phi_phi_fu_97087_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2030_V_read2100_phi_phi_fu_97087_p4 = ap_phi_mux_data_2030_V_read2100_rewind_phi_fu_54303_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2030_V_read2100_phi_phi_fu_97087_p4 = data_2030_V_read.read();
        } else {
            ap_phi_mux_data_2030_V_read2100_phi_phi_fu_97087_p4 = ap_phi_reg_pp0_iter0_data_2030_V_read2100_phi_reg_97083.read();
        }
    } else {
        ap_phi_mux_data_2030_V_read2100_phi_phi_fu_97087_p4 = ap_phi_reg_pp0_iter0_data_2030_V_read2100_phi_reg_97083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2030_V_read2100_rewind_phi_fu_54303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2030_V_read2100_rewind_phi_fu_54303_p6 = data_2030_V_read2100_phi_reg_97083.read();
    } else {
        ap_phi_mux_data_2030_V_read2100_rewind_phi_fu_54303_p6 = data_2030_V_read2100_rewind_reg_54299.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2031_V_read2101_phi_phi_fu_97100_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2031_V_read2101_phi_phi_fu_97100_p4 = ap_phi_mux_data_2031_V_read2101_rewind_phi_fu_54317_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2031_V_read2101_phi_phi_fu_97100_p4 = data_2031_V_read.read();
        } else {
            ap_phi_mux_data_2031_V_read2101_phi_phi_fu_97100_p4 = ap_phi_reg_pp0_iter0_data_2031_V_read2101_phi_reg_97096.read();
        }
    } else {
        ap_phi_mux_data_2031_V_read2101_phi_phi_fu_97100_p4 = ap_phi_reg_pp0_iter0_data_2031_V_read2101_phi_reg_97096.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2031_V_read2101_rewind_phi_fu_54317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2031_V_read2101_rewind_phi_fu_54317_p6 = data_2031_V_read2101_phi_reg_97096.read();
    } else {
        ap_phi_mux_data_2031_V_read2101_rewind_phi_fu_54317_p6 = data_2031_V_read2101_rewind_reg_54313.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2032_V_read2102_phi_phi_fu_97113_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2032_V_read2102_phi_phi_fu_97113_p4 = ap_phi_mux_data_2032_V_read2102_rewind_phi_fu_54331_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2032_V_read2102_phi_phi_fu_97113_p4 = data_2032_V_read.read();
        } else {
            ap_phi_mux_data_2032_V_read2102_phi_phi_fu_97113_p4 = ap_phi_reg_pp0_iter0_data_2032_V_read2102_phi_reg_97109.read();
        }
    } else {
        ap_phi_mux_data_2032_V_read2102_phi_phi_fu_97113_p4 = ap_phi_reg_pp0_iter0_data_2032_V_read2102_phi_reg_97109.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2032_V_read2102_rewind_phi_fu_54331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2032_V_read2102_rewind_phi_fu_54331_p6 = data_2032_V_read2102_phi_reg_97109.read();
    } else {
        ap_phi_mux_data_2032_V_read2102_rewind_phi_fu_54331_p6 = data_2032_V_read2102_rewind_reg_54327.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2033_V_read2103_phi_phi_fu_97126_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2033_V_read2103_phi_phi_fu_97126_p4 = ap_phi_mux_data_2033_V_read2103_rewind_phi_fu_54345_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2033_V_read2103_phi_phi_fu_97126_p4 = data_2033_V_read.read();
        } else {
            ap_phi_mux_data_2033_V_read2103_phi_phi_fu_97126_p4 = ap_phi_reg_pp0_iter0_data_2033_V_read2103_phi_reg_97122.read();
        }
    } else {
        ap_phi_mux_data_2033_V_read2103_phi_phi_fu_97126_p4 = ap_phi_reg_pp0_iter0_data_2033_V_read2103_phi_reg_97122.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2033_V_read2103_rewind_phi_fu_54345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2033_V_read2103_rewind_phi_fu_54345_p6 = data_2033_V_read2103_phi_reg_97122.read();
    } else {
        ap_phi_mux_data_2033_V_read2103_rewind_phi_fu_54345_p6 = data_2033_V_read2103_rewind_reg_54341.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2034_V_read2104_phi_phi_fu_97139_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2034_V_read2104_phi_phi_fu_97139_p4 = ap_phi_mux_data_2034_V_read2104_rewind_phi_fu_54359_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2034_V_read2104_phi_phi_fu_97139_p4 = data_2034_V_read.read();
        } else {
            ap_phi_mux_data_2034_V_read2104_phi_phi_fu_97139_p4 = ap_phi_reg_pp0_iter0_data_2034_V_read2104_phi_reg_97135.read();
        }
    } else {
        ap_phi_mux_data_2034_V_read2104_phi_phi_fu_97139_p4 = ap_phi_reg_pp0_iter0_data_2034_V_read2104_phi_reg_97135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2034_V_read2104_rewind_phi_fu_54359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2034_V_read2104_rewind_phi_fu_54359_p6 = data_2034_V_read2104_phi_reg_97135.read();
    } else {
        ap_phi_mux_data_2034_V_read2104_rewind_phi_fu_54359_p6 = data_2034_V_read2104_rewind_reg_54355.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2035_V_read2105_phi_phi_fu_97152_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2035_V_read2105_phi_phi_fu_97152_p4 = ap_phi_mux_data_2035_V_read2105_rewind_phi_fu_54373_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2035_V_read2105_phi_phi_fu_97152_p4 = data_2035_V_read.read();
        } else {
            ap_phi_mux_data_2035_V_read2105_phi_phi_fu_97152_p4 = ap_phi_reg_pp0_iter0_data_2035_V_read2105_phi_reg_97148.read();
        }
    } else {
        ap_phi_mux_data_2035_V_read2105_phi_phi_fu_97152_p4 = ap_phi_reg_pp0_iter0_data_2035_V_read2105_phi_reg_97148.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2035_V_read2105_rewind_phi_fu_54373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2035_V_read2105_rewind_phi_fu_54373_p6 = data_2035_V_read2105_phi_reg_97148.read();
    } else {
        ap_phi_mux_data_2035_V_read2105_rewind_phi_fu_54373_p6 = data_2035_V_read2105_rewind_reg_54369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2036_V_read2106_phi_phi_fu_97165_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2036_V_read2106_phi_phi_fu_97165_p4 = ap_phi_mux_data_2036_V_read2106_rewind_phi_fu_54387_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2036_V_read2106_phi_phi_fu_97165_p4 = data_2036_V_read.read();
        } else {
            ap_phi_mux_data_2036_V_read2106_phi_phi_fu_97165_p4 = ap_phi_reg_pp0_iter0_data_2036_V_read2106_phi_reg_97161.read();
        }
    } else {
        ap_phi_mux_data_2036_V_read2106_phi_phi_fu_97165_p4 = ap_phi_reg_pp0_iter0_data_2036_V_read2106_phi_reg_97161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2036_V_read2106_rewind_phi_fu_54387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2036_V_read2106_rewind_phi_fu_54387_p6 = data_2036_V_read2106_phi_reg_97161.read();
    } else {
        ap_phi_mux_data_2036_V_read2106_rewind_phi_fu_54387_p6 = data_2036_V_read2106_rewind_reg_54383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2037_V_read2107_phi_phi_fu_97178_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2037_V_read2107_phi_phi_fu_97178_p4 = ap_phi_mux_data_2037_V_read2107_rewind_phi_fu_54401_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2037_V_read2107_phi_phi_fu_97178_p4 = data_2037_V_read.read();
        } else {
            ap_phi_mux_data_2037_V_read2107_phi_phi_fu_97178_p4 = ap_phi_reg_pp0_iter0_data_2037_V_read2107_phi_reg_97174.read();
        }
    } else {
        ap_phi_mux_data_2037_V_read2107_phi_phi_fu_97178_p4 = ap_phi_reg_pp0_iter0_data_2037_V_read2107_phi_reg_97174.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2037_V_read2107_rewind_phi_fu_54401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2037_V_read2107_rewind_phi_fu_54401_p6 = data_2037_V_read2107_phi_reg_97174.read();
    } else {
        ap_phi_mux_data_2037_V_read2107_rewind_phi_fu_54401_p6 = data_2037_V_read2107_rewind_reg_54397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2038_V_read2108_phi_phi_fu_97191_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2038_V_read2108_phi_phi_fu_97191_p4 = ap_phi_mux_data_2038_V_read2108_rewind_phi_fu_54415_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2038_V_read2108_phi_phi_fu_97191_p4 = data_2038_V_read.read();
        } else {
            ap_phi_mux_data_2038_V_read2108_phi_phi_fu_97191_p4 = ap_phi_reg_pp0_iter0_data_2038_V_read2108_phi_reg_97187.read();
        }
    } else {
        ap_phi_mux_data_2038_V_read2108_phi_phi_fu_97191_p4 = ap_phi_reg_pp0_iter0_data_2038_V_read2108_phi_reg_97187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2038_V_read2108_rewind_phi_fu_54415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2038_V_read2108_rewind_phi_fu_54415_p6 = data_2038_V_read2108_phi_reg_97187.read();
    } else {
        ap_phi_mux_data_2038_V_read2108_rewind_phi_fu_54415_p6 = data_2038_V_read2108_rewind_reg_54411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2039_V_read2109_phi_phi_fu_97204_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2039_V_read2109_phi_phi_fu_97204_p4 = ap_phi_mux_data_2039_V_read2109_rewind_phi_fu_54429_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2039_V_read2109_phi_phi_fu_97204_p4 = data_2039_V_read.read();
        } else {
            ap_phi_mux_data_2039_V_read2109_phi_phi_fu_97204_p4 = ap_phi_reg_pp0_iter0_data_2039_V_read2109_phi_reg_97200.read();
        }
    } else {
        ap_phi_mux_data_2039_V_read2109_phi_phi_fu_97204_p4 = ap_phi_reg_pp0_iter0_data_2039_V_read2109_phi_reg_97200.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2039_V_read2109_rewind_phi_fu_54429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2039_V_read2109_rewind_phi_fu_54429_p6 = data_2039_V_read2109_phi_reg_97200.read();
    } else {
        ap_phi_mux_data_2039_V_read2109_rewind_phi_fu_54429_p6 = data_2039_V_read2109_rewind_reg_54425.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_203_V_read273_phi_phi_fu_73336_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_203_V_read273_phi_phi_fu_73336_p4 = ap_phi_mux_data_203_V_read273_rewind_phi_fu_28725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_203_V_read273_phi_phi_fu_73336_p4 = data_203_V_read.read();
        } else {
            ap_phi_mux_data_203_V_read273_phi_phi_fu_73336_p4 = ap_phi_reg_pp0_iter0_data_203_V_read273_phi_reg_73332.read();
        }
    } else {
        ap_phi_mux_data_203_V_read273_phi_phi_fu_73336_p4 = ap_phi_reg_pp0_iter0_data_203_V_read273_phi_reg_73332.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_203_V_read273_rewind_phi_fu_28725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_203_V_read273_rewind_phi_fu_28725_p6 = data_203_V_read273_phi_reg_73332.read();
    } else {
        ap_phi_mux_data_203_V_read273_rewind_phi_fu_28725_p6 = data_203_V_read273_rewind_reg_28721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2040_V_read2110_phi_phi_fu_97217_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2040_V_read2110_phi_phi_fu_97217_p4 = ap_phi_mux_data_2040_V_read2110_rewind_phi_fu_54443_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2040_V_read2110_phi_phi_fu_97217_p4 = data_2040_V_read.read();
        } else {
            ap_phi_mux_data_2040_V_read2110_phi_phi_fu_97217_p4 = ap_phi_reg_pp0_iter0_data_2040_V_read2110_phi_reg_97213.read();
        }
    } else {
        ap_phi_mux_data_2040_V_read2110_phi_phi_fu_97217_p4 = ap_phi_reg_pp0_iter0_data_2040_V_read2110_phi_reg_97213.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2040_V_read2110_rewind_phi_fu_54443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2040_V_read2110_rewind_phi_fu_54443_p6 = data_2040_V_read2110_phi_reg_97213.read();
    } else {
        ap_phi_mux_data_2040_V_read2110_rewind_phi_fu_54443_p6 = data_2040_V_read2110_rewind_reg_54439.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2041_V_read2111_phi_phi_fu_97230_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2041_V_read2111_phi_phi_fu_97230_p4 = ap_phi_mux_data_2041_V_read2111_rewind_phi_fu_54457_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2041_V_read2111_phi_phi_fu_97230_p4 = data_2041_V_read.read();
        } else {
            ap_phi_mux_data_2041_V_read2111_phi_phi_fu_97230_p4 = ap_phi_reg_pp0_iter0_data_2041_V_read2111_phi_reg_97226.read();
        }
    } else {
        ap_phi_mux_data_2041_V_read2111_phi_phi_fu_97230_p4 = ap_phi_reg_pp0_iter0_data_2041_V_read2111_phi_reg_97226.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2041_V_read2111_rewind_phi_fu_54457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2041_V_read2111_rewind_phi_fu_54457_p6 = data_2041_V_read2111_phi_reg_97226.read();
    } else {
        ap_phi_mux_data_2041_V_read2111_rewind_phi_fu_54457_p6 = data_2041_V_read2111_rewind_reg_54453.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2042_V_read2112_phi_phi_fu_97243_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2042_V_read2112_phi_phi_fu_97243_p4 = ap_phi_mux_data_2042_V_read2112_rewind_phi_fu_54471_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2042_V_read2112_phi_phi_fu_97243_p4 = data_2042_V_read.read();
        } else {
            ap_phi_mux_data_2042_V_read2112_phi_phi_fu_97243_p4 = ap_phi_reg_pp0_iter0_data_2042_V_read2112_phi_reg_97239.read();
        }
    } else {
        ap_phi_mux_data_2042_V_read2112_phi_phi_fu_97243_p4 = ap_phi_reg_pp0_iter0_data_2042_V_read2112_phi_reg_97239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2042_V_read2112_rewind_phi_fu_54471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2042_V_read2112_rewind_phi_fu_54471_p6 = data_2042_V_read2112_phi_reg_97239.read();
    } else {
        ap_phi_mux_data_2042_V_read2112_rewind_phi_fu_54471_p6 = data_2042_V_read2112_rewind_reg_54467.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2043_V_read2113_phi_phi_fu_97256_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2043_V_read2113_phi_phi_fu_97256_p4 = ap_phi_mux_data_2043_V_read2113_rewind_phi_fu_54485_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2043_V_read2113_phi_phi_fu_97256_p4 = data_2043_V_read.read();
        } else {
            ap_phi_mux_data_2043_V_read2113_phi_phi_fu_97256_p4 = ap_phi_reg_pp0_iter0_data_2043_V_read2113_phi_reg_97252.read();
        }
    } else {
        ap_phi_mux_data_2043_V_read2113_phi_phi_fu_97256_p4 = ap_phi_reg_pp0_iter0_data_2043_V_read2113_phi_reg_97252.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2043_V_read2113_rewind_phi_fu_54485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2043_V_read2113_rewind_phi_fu_54485_p6 = data_2043_V_read2113_phi_reg_97252.read();
    } else {
        ap_phi_mux_data_2043_V_read2113_rewind_phi_fu_54485_p6 = data_2043_V_read2113_rewind_reg_54481.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2044_V_read2114_phi_phi_fu_97269_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2044_V_read2114_phi_phi_fu_97269_p4 = ap_phi_mux_data_2044_V_read2114_rewind_phi_fu_54499_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2044_V_read2114_phi_phi_fu_97269_p4 = data_2044_V_read.read();
        } else {
            ap_phi_mux_data_2044_V_read2114_phi_phi_fu_97269_p4 = ap_phi_reg_pp0_iter0_data_2044_V_read2114_phi_reg_97265.read();
        }
    } else {
        ap_phi_mux_data_2044_V_read2114_phi_phi_fu_97269_p4 = ap_phi_reg_pp0_iter0_data_2044_V_read2114_phi_reg_97265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2044_V_read2114_rewind_phi_fu_54499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2044_V_read2114_rewind_phi_fu_54499_p6 = data_2044_V_read2114_phi_reg_97265.read();
    } else {
        ap_phi_mux_data_2044_V_read2114_rewind_phi_fu_54499_p6 = data_2044_V_read2114_rewind_reg_54495.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2045_V_read2115_phi_phi_fu_97282_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2045_V_read2115_phi_phi_fu_97282_p4 = ap_phi_mux_data_2045_V_read2115_rewind_phi_fu_54513_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2045_V_read2115_phi_phi_fu_97282_p4 = data_2045_V_read.read();
        } else {
            ap_phi_mux_data_2045_V_read2115_phi_phi_fu_97282_p4 = ap_phi_reg_pp0_iter0_data_2045_V_read2115_phi_reg_97278.read();
        }
    } else {
        ap_phi_mux_data_2045_V_read2115_phi_phi_fu_97282_p4 = ap_phi_reg_pp0_iter0_data_2045_V_read2115_phi_reg_97278.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2045_V_read2115_rewind_phi_fu_54513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2045_V_read2115_rewind_phi_fu_54513_p6 = data_2045_V_read2115_phi_reg_97278.read();
    } else {
        ap_phi_mux_data_2045_V_read2115_rewind_phi_fu_54513_p6 = data_2045_V_read2115_rewind_reg_54509.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2046_V_read2116_phi_phi_fu_97295_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2046_V_read2116_phi_phi_fu_97295_p4 = ap_phi_mux_data_2046_V_read2116_rewind_phi_fu_54527_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2046_V_read2116_phi_phi_fu_97295_p4 = data_2046_V_read.read();
        } else {
            ap_phi_mux_data_2046_V_read2116_phi_phi_fu_97295_p4 = ap_phi_reg_pp0_iter0_data_2046_V_read2116_phi_reg_97291.read();
        }
    } else {
        ap_phi_mux_data_2046_V_read2116_phi_phi_fu_97295_p4 = ap_phi_reg_pp0_iter0_data_2046_V_read2116_phi_reg_97291.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2046_V_read2116_rewind_phi_fu_54527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2046_V_read2116_rewind_phi_fu_54527_p6 = data_2046_V_read2116_phi_reg_97291.read();
    } else {
        ap_phi_mux_data_2046_V_read2116_rewind_phi_fu_54527_p6 = data_2046_V_read2116_rewind_reg_54523.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2047_V_read2117_phi_phi_fu_97308_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2047_V_read2117_phi_phi_fu_97308_p4 = ap_phi_mux_data_2047_V_read2117_rewind_phi_fu_54541_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2047_V_read2117_phi_phi_fu_97308_p4 = data_2047_V_read.read();
        } else {
            ap_phi_mux_data_2047_V_read2117_phi_phi_fu_97308_p4 = ap_phi_reg_pp0_iter0_data_2047_V_read2117_phi_reg_97304.read();
        }
    } else {
        ap_phi_mux_data_2047_V_read2117_phi_phi_fu_97308_p4 = ap_phi_reg_pp0_iter0_data_2047_V_read2117_phi_reg_97304.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2047_V_read2117_rewind_phi_fu_54541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2047_V_read2117_rewind_phi_fu_54541_p6 = data_2047_V_read2117_phi_reg_97304.read();
    } else {
        ap_phi_mux_data_2047_V_read2117_rewind_phi_fu_54541_p6 = data_2047_V_read2117_rewind_reg_54537.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2048_V_read2118_phi_phi_fu_97321_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2048_V_read2118_phi_phi_fu_97321_p4 = ap_phi_mux_data_2048_V_read2118_rewind_phi_fu_54555_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2048_V_read2118_phi_phi_fu_97321_p4 = data_2048_V_read.read();
        } else {
            ap_phi_mux_data_2048_V_read2118_phi_phi_fu_97321_p4 = ap_phi_reg_pp0_iter0_data_2048_V_read2118_phi_reg_97317.read();
        }
    } else {
        ap_phi_mux_data_2048_V_read2118_phi_phi_fu_97321_p4 = ap_phi_reg_pp0_iter0_data_2048_V_read2118_phi_reg_97317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2048_V_read2118_rewind_phi_fu_54555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2048_V_read2118_rewind_phi_fu_54555_p6 = data_2048_V_read2118_phi_reg_97317.read();
    } else {
        ap_phi_mux_data_2048_V_read2118_rewind_phi_fu_54555_p6 = data_2048_V_read2118_rewind_reg_54551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2049_V_read2119_phi_phi_fu_97334_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2049_V_read2119_phi_phi_fu_97334_p4 = ap_phi_mux_data_2049_V_read2119_rewind_phi_fu_54569_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2049_V_read2119_phi_phi_fu_97334_p4 = data_2049_V_read.read();
        } else {
            ap_phi_mux_data_2049_V_read2119_phi_phi_fu_97334_p4 = ap_phi_reg_pp0_iter0_data_2049_V_read2119_phi_reg_97330.read();
        }
    } else {
        ap_phi_mux_data_2049_V_read2119_phi_phi_fu_97334_p4 = ap_phi_reg_pp0_iter0_data_2049_V_read2119_phi_reg_97330.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2049_V_read2119_rewind_phi_fu_54569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2049_V_read2119_rewind_phi_fu_54569_p6 = data_2049_V_read2119_phi_reg_97330.read();
    } else {
        ap_phi_mux_data_2049_V_read2119_rewind_phi_fu_54569_p6 = data_2049_V_read2119_rewind_reg_54565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_204_V_read274_phi_phi_fu_73349_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_204_V_read274_phi_phi_fu_73349_p4 = ap_phi_mux_data_204_V_read274_rewind_phi_fu_28739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_204_V_read274_phi_phi_fu_73349_p4 = data_204_V_read.read();
        } else {
            ap_phi_mux_data_204_V_read274_phi_phi_fu_73349_p4 = ap_phi_reg_pp0_iter0_data_204_V_read274_phi_reg_73345.read();
        }
    } else {
        ap_phi_mux_data_204_V_read274_phi_phi_fu_73349_p4 = ap_phi_reg_pp0_iter0_data_204_V_read274_phi_reg_73345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_204_V_read274_rewind_phi_fu_28739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_204_V_read274_rewind_phi_fu_28739_p6 = data_204_V_read274_phi_reg_73345.read();
    } else {
        ap_phi_mux_data_204_V_read274_rewind_phi_fu_28739_p6 = data_204_V_read274_rewind_reg_28735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2050_V_read2120_phi_phi_fu_97347_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2050_V_read2120_phi_phi_fu_97347_p4 = ap_phi_mux_data_2050_V_read2120_rewind_phi_fu_54583_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2050_V_read2120_phi_phi_fu_97347_p4 = data_2050_V_read.read();
        } else {
            ap_phi_mux_data_2050_V_read2120_phi_phi_fu_97347_p4 = ap_phi_reg_pp0_iter0_data_2050_V_read2120_phi_reg_97343.read();
        }
    } else {
        ap_phi_mux_data_2050_V_read2120_phi_phi_fu_97347_p4 = ap_phi_reg_pp0_iter0_data_2050_V_read2120_phi_reg_97343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2050_V_read2120_rewind_phi_fu_54583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2050_V_read2120_rewind_phi_fu_54583_p6 = data_2050_V_read2120_phi_reg_97343.read();
    } else {
        ap_phi_mux_data_2050_V_read2120_rewind_phi_fu_54583_p6 = data_2050_V_read2120_rewind_reg_54579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2051_V_read2121_phi_phi_fu_97360_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2051_V_read2121_phi_phi_fu_97360_p4 = ap_phi_mux_data_2051_V_read2121_rewind_phi_fu_54597_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2051_V_read2121_phi_phi_fu_97360_p4 = data_2051_V_read.read();
        } else {
            ap_phi_mux_data_2051_V_read2121_phi_phi_fu_97360_p4 = ap_phi_reg_pp0_iter0_data_2051_V_read2121_phi_reg_97356.read();
        }
    } else {
        ap_phi_mux_data_2051_V_read2121_phi_phi_fu_97360_p4 = ap_phi_reg_pp0_iter0_data_2051_V_read2121_phi_reg_97356.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2051_V_read2121_rewind_phi_fu_54597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2051_V_read2121_rewind_phi_fu_54597_p6 = data_2051_V_read2121_phi_reg_97356.read();
    } else {
        ap_phi_mux_data_2051_V_read2121_rewind_phi_fu_54597_p6 = data_2051_V_read2121_rewind_reg_54593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2052_V_read2122_phi_phi_fu_97373_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2052_V_read2122_phi_phi_fu_97373_p4 = ap_phi_mux_data_2052_V_read2122_rewind_phi_fu_54611_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2052_V_read2122_phi_phi_fu_97373_p4 = data_2052_V_read.read();
        } else {
            ap_phi_mux_data_2052_V_read2122_phi_phi_fu_97373_p4 = ap_phi_reg_pp0_iter0_data_2052_V_read2122_phi_reg_97369.read();
        }
    } else {
        ap_phi_mux_data_2052_V_read2122_phi_phi_fu_97373_p4 = ap_phi_reg_pp0_iter0_data_2052_V_read2122_phi_reg_97369.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2052_V_read2122_rewind_phi_fu_54611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2052_V_read2122_rewind_phi_fu_54611_p6 = data_2052_V_read2122_phi_reg_97369.read();
    } else {
        ap_phi_mux_data_2052_V_read2122_rewind_phi_fu_54611_p6 = data_2052_V_read2122_rewind_reg_54607.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2053_V_read2123_phi_phi_fu_97386_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2053_V_read2123_phi_phi_fu_97386_p4 = ap_phi_mux_data_2053_V_read2123_rewind_phi_fu_54625_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2053_V_read2123_phi_phi_fu_97386_p4 = data_2053_V_read.read();
        } else {
            ap_phi_mux_data_2053_V_read2123_phi_phi_fu_97386_p4 = ap_phi_reg_pp0_iter0_data_2053_V_read2123_phi_reg_97382.read();
        }
    } else {
        ap_phi_mux_data_2053_V_read2123_phi_phi_fu_97386_p4 = ap_phi_reg_pp0_iter0_data_2053_V_read2123_phi_reg_97382.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2053_V_read2123_rewind_phi_fu_54625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2053_V_read2123_rewind_phi_fu_54625_p6 = data_2053_V_read2123_phi_reg_97382.read();
    } else {
        ap_phi_mux_data_2053_V_read2123_rewind_phi_fu_54625_p6 = data_2053_V_read2123_rewind_reg_54621.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2054_V_read2124_phi_phi_fu_97399_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2054_V_read2124_phi_phi_fu_97399_p4 = ap_phi_mux_data_2054_V_read2124_rewind_phi_fu_54639_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2054_V_read2124_phi_phi_fu_97399_p4 = data_2054_V_read.read();
        } else {
            ap_phi_mux_data_2054_V_read2124_phi_phi_fu_97399_p4 = ap_phi_reg_pp0_iter0_data_2054_V_read2124_phi_reg_97395.read();
        }
    } else {
        ap_phi_mux_data_2054_V_read2124_phi_phi_fu_97399_p4 = ap_phi_reg_pp0_iter0_data_2054_V_read2124_phi_reg_97395.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2054_V_read2124_rewind_phi_fu_54639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2054_V_read2124_rewind_phi_fu_54639_p6 = data_2054_V_read2124_phi_reg_97395.read();
    } else {
        ap_phi_mux_data_2054_V_read2124_rewind_phi_fu_54639_p6 = data_2054_V_read2124_rewind_reg_54635.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2055_V_read2125_phi_phi_fu_97412_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2055_V_read2125_phi_phi_fu_97412_p4 = ap_phi_mux_data_2055_V_read2125_rewind_phi_fu_54653_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2055_V_read2125_phi_phi_fu_97412_p4 = data_2055_V_read.read();
        } else {
            ap_phi_mux_data_2055_V_read2125_phi_phi_fu_97412_p4 = ap_phi_reg_pp0_iter0_data_2055_V_read2125_phi_reg_97408.read();
        }
    } else {
        ap_phi_mux_data_2055_V_read2125_phi_phi_fu_97412_p4 = ap_phi_reg_pp0_iter0_data_2055_V_read2125_phi_reg_97408.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2055_V_read2125_rewind_phi_fu_54653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2055_V_read2125_rewind_phi_fu_54653_p6 = data_2055_V_read2125_phi_reg_97408.read();
    } else {
        ap_phi_mux_data_2055_V_read2125_rewind_phi_fu_54653_p6 = data_2055_V_read2125_rewind_reg_54649.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2056_V_read2126_phi_phi_fu_97425_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2056_V_read2126_phi_phi_fu_97425_p4 = ap_phi_mux_data_2056_V_read2126_rewind_phi_fu_54667_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2056_V_read2126_phi_phi_fu_97425_p4 = data_2056_V_read.read();
        } else {
            ap_phi_mux_data_2056_V_read2126_phi_phi_fu_97425_p4 = ap_phi_reg_pp0_iter0_data_2056_V_read2126_phi_reg_97421.read();
        }
    } else {
        ap_phi_mux_data_2056_V_read2126_phi_phi_fu_97425_p4 = ap_phi_reg_pp0_iter0_data_2056_V_read2126_phi_reg_97421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2056_V_read2126_rewind_phi_fu_54667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2056_V_read2126_rewind_phi_fu_54667_p6 = data_2056_V_read2126_phi_reg_97421.read();
    } else {
        ap_phi_mux_data_2056_V_read2126_rewind_phi_fu_54667_p6 = data_2056_V_read2126_rewind_reg_54663.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2057_V_read2127_phi_phi_fu_97438_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2057_V_read2127_phi_phi_fu_97438_p4 = ap_phi_mux_data_2057_V_read2127_rewind_phi_fu_54681_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2057_V_read2127_phi_phi_fu_97438_p4 = data_2057_V_read.read();
        } else {
            ap_phi_mux_data_2057_V_read2127_phi_phi_fu_97438_p4 = ap_phi_reg_pp0_iter0_data_2057_V_read2127_phi_reg_97434.read();
        }
    } else {
        ap_phi_mux_data_2057_V_read2127_phi_phi_fu_97438_p4 = ap_phi_reg_pp0_iter0_data_2057_V_read2127_phi_reg_97434.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2057_V_read2127_rewind_phi_fu_54681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2057_V_read2127_rewind_phi_fu_54681_p6 = data_2057_V_read2127_phi_reg_97434.read();
    } else {
        ap_phi_mux_data_2057_V_read2127_rewind_phi_fu_54681_p6 = data_2057_V_read2127_rewind_reg_54677.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2058_V_read2128_phi_phi_fu_97451_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2058_V_read2128_phi_phi_fu_97451_p4 = ap_phi_mux_data_2058_V_read2128_rewind_phi_fu_54695_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2058_V_read2128_phi_phi_fu_97451_p4 = data_2058_V_read.read();
        } else {
            ap_phi_mux_data_2058_V_read2128_phi_phi_fu_97451_p4 = ap_phi_reg_pp0_iter0_data_2058_V_read2128_phi_reg_97447.read();
        }
    } else {
        ap_phi_mux_data_2058_V_read2128_phi_phi_fu_97451_p4 = ap_phi_reg_pp0_iter0_data_2058_V_read2128_phi_reg_97447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2058_V_read2128_rewind_phi_fu_54695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2058_V_read2128_rewind_phi_fu_54695_p6 = data_2058_V_read2128_phi_reg_97447.read();
    } else {
        ap_phi_mux_data_2058_V_read2128_rewind_phi_fu_54695_p6 = data_2058_V_read2128_rewind_reg_54691.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2059_V_read2129_phi_phi_fu_97464_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2059_V_read2129_phi_phi_fu_97464_p4 = ap_phi_mux_data_2059_V_read2129_rewind_phi_fu_54709_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2059_V_read2129_phi_phi_fu_97464_p4 = data_2059_V_read.read();
        } else {
            ap_phi_mux_data_2059_V_read2129_phi_phi_fu_97464_p4 = ap_phi_reg_pp0_iter0_data_2059_V_read2129_phi_reg_97460.read();
        }
    } else {
        ap_phi_mux_data_2059_V_read2129_phi_phi_fu_97464_p4 = ap_phi_reg_pp0_iter0_data_2059_V_read2129_phi_reg_97460.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2059_V_read2129_rewind_phi_fu_54709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2059_V_read2129_rewind_phi_fu_54709_p6 = data_2059_V_read2129_phi_reg_97460.read();
    } else {
        ap_phi_mux_data_2059_V_read2129_rewind_phi_fu_54709_p6 = data_2059_V_read2129_rewind_reg_54705.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_205_V_read275_phi_phi_fu_73362_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_205_V_read275_phi_phi_fu_73362_p4 = ap_phi_mux_data_205_V_read275_rewind_phi_fu_28753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_205_V_read275_phi_phi_fu_73362_p4 = data_205_V_read.read();
        } else {
            ap_phi_mux_data_205_V_read275_phi_phi_fu_73362_p4 = ap_phi_reg_pp0_iter0_data_205_V_read275_phi_reg_73358.read();
        }
    } else {
        ap_phi_mux_data_205_V_read275_phi_phi_fu_73362_p4 = ap_phi_reg_pp0_iter0_data_205_V_read275_phi_reg_73358.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_205_V_read275_rewind_phi_fu_28753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_205_V_read275_rewind_phi_fu_28753_p6 = data_205_V_read275_phi_reg_73358.read();
    } else {
        ap_phi_mux_data_205_V_read275_rewind_phi_fu_28753_p6 = data_205_V_read275_rewind_reg_28749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2060_V_read2130_phi_phi_fu_97477_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2060_V_read2130_phi_phi_fu_97477_p4 = ap_phi_mux_data_2060_V_read2130_rewind_phi_fu_54723_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2060_V_read2130_phi_phi_fu_97477_p4 = data_2060_V_read.read();
        } else {
            ap_phi_mux_data_2060_V_read2130_phi_phi_fu_97477_p4 = ap_phi_reg_pp0_iter0_data_2060_V_read2130_phi_reg_97473.read();
        }
    } else {
        ap_phi_mux_data_2060_V_read2130_phi_phi_fu_97477_p4 = ap_phi_reg_pp0_iter0_data_2060_V_read2130_phi_reg_97473.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2060_V_read2130_rewind_phi_fu_54723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2060_V_read2130_rewind_phi_fu_54723_p6 = data_2060_V_read2130_phi_reg_97473.read();
    } else {
        ap_phi_mux_data_2060_V_read2130_rewind_phi_fu_54723_p6 = data_2060_V_read2130_rewind_reg_54719.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2061_V_read2131_phi_phi_fu_97490_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2061_V_read2131_phi_phi_fu_97490_p4 = ap_phi_mux_data_2061_V_read2131_rewind_phi_fu_54737_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2061_V_read2131_phi_phi_fu_97490_p4 = data_2061_V_read.read();
        } else {
            ap_phi_mux_data_2061_V_read2131_phi_phi_fu_97490_p4 = ap_phi_reg_pp0_iter0_data_2061_V_read2131_phi_reg_97486.read();
        }
    } else {
        ap_phi_mux_data_2061_V_read2131_phi_phi_fu_97490_p4 = ap_phi_reg_pp0_iter0_data_2061_V_read2131_phi_reg_97486.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2061_V_read2131_rewind_phi_fu_54737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2061_V_read2131_rewind_phi_fu_54737_p6 = data_2061_V_read2131_phi_reg_97486.read();
    } else {
        ap_phi_mux_data_2061_V_read2131_rewind_phi_fu_54737_p6 = data_2061_V_read2131_rewind_reg_54733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2062_V_read2132_phi_phi_fu_97503_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2062_V_read2132_phi_phi_fu_97503_p4 = ap_phi_mux_data_2062_V_read2132_rewind_phi_fu_54751_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2062_V_read2132_phi_phi_fu_97503_p4 = data_2062_V_read.read();
        } else {
            ap_phi_mux_data_2062_V_read2132_phi_phi_fu_97503_p4 = ap_phi_reg_pp0_iter0_data_2062_V_read2132_phi_reg_97499.read();
        }
    } else {
        ap_phi_mux_data_2062_V_read2132_phi_phi_fu_97503_p4 = ap_phi_reg_pp0_iter0_data_2062_V_read2132_phi_reg_97499.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2062_V_read2132_rewind_phi_fu_54751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2062_V_read2132_rewind_phi_fu_54751_p6 = data_2062_V_read2132_phi_reg_97499.read();
    } else {
        ap_phi_mux_data_2062_V_read2132_rewind_phi_fu_54751_p6 = data_2062_V_read2132_rewind_reg_54747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2063_V_read2133_phi_phi_fu_97516_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2063_V_read2133_phi_phi_fu_97516_p4 = ap_phi_mux_data_2063_V_read2133_rewind_phi_fu_54765_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2063_V_read2133_phi_phi_fu_97516_p4 = data_2063_V_read.read();
        } else {
            ap_phi_mux_data_2063_V_read2133_phi_phi_fu_97516_p4 = ap_phi_reg_pp0_iter0_data_2063_V_read2133_phi_reg_97512.read();
        }
    } else {
        ap_phi_mux_data_2063_V_read2133_phi_phi_fu_97516_p4 = ap_phi_reg_pp0_iter0_data_2063_V_read2133_phi_reg_97512.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2063_V_read2133_rewind_phi_fu_54765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2063_V_read2133_rewind_phi_fu_54765_p6 = data_2063_V_read2133_phi_reg_97512.read();
    } else {
        ap_phi_mux_data_2063_V_read2133_rewind_phi_fu_54765_p6 = data_2063_V_read2133_rewind_reg_54761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2064_V_read2134_phi_phi_fu_97529_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2064_V_read2134_phi_phi_fu_97529_p4 = ap_phi_mux_data_2064_V_read2134_rewind_phi_fu_54779_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2064_V_read2134_phi_phi_fu_97529_p4 = data_2064_V_read.read();
        } else {
            ap_phi_mux_data_2064_V_read2134_phi_phi_fu_97529_p4 = ap_phi_reg_pp0_iter0_data_2064_V_read2134_phi_reg_97525.read();
        }
    } else {
        ap_phi_mux_data_2064_V_read2134_phi_phi_fu_97529_p4 = ap_phi_reg_pp0_iter0_data_2064_V_read2134_phi_reg_97525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2064_V_read2134_rewind_phi_fu_54779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2064_V_read2134_rewind_phi_fu_54779_p6 = data_2064_V_read2134_phi_reg_97525.read();
    } else {
        ap_phi_mux_data_2064_V_read2134_rewind_phi_fu_54779_p6 = data_2064_V_read2134_rewind_reg_54775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2065_V_read2135_phi_phi_fu_97542_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2065_V_read2135_phi_phi_fu_97542_p4 = ap_phi_mux_data_2065_V_read2135_rewind_phi_fu_54793_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2065_V_read2135_phi_phi_fu_97542_p4 = data_2065_V_read.read();
        } else {
            ap_phi_mux_data_2065_V_read2135_phi_phi_fu_97542_p4 = ap_phi_reg_pp0_iter0_data_2065_V_read2135_phi_reg_97538.read();
        }
    } else {
        ap_phi_mux_data_2065_V_read2135_phi_phi_fu_97542_p4 = ap_phi_reg_pp0_iter0_data_2065_V_read2135_phi_reg_97538.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2065_V_read2135_rewind_phi_fu_54793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2065_V_read2135_rewind_phi_fu_54793_p6 = data_2065_V_read2135_phi_reg_97538.read();
    } else {
        ap_phi_mux_data_2065_V_read2135_rewind_phi_fu_54793_p6 = data_2065_V_read2135_rewind_reg_54789.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2066_V_read2136_phi_phi_fu_97555_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2066_V_read2136_phi_phi_fu_97555_p4 = ap_phi_mux_data_2066_V_read2136_rewind_phi_fu_54807_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2066_V_read2136_phi_phi_fu_97555_p4 = data_2066_V_read.read();
        } else {
            ap_phi_mux_data_2066_V_read2136_phi_phi_fu_97555_p4 = ap_phi_reg_pp0_iter0_data_2066_V_read2136_phi_reg_97551.read();
        }
    } else {
        ap_phi_mux_data_2066_V_read2136_phi_phi_fu_97555_p4 = ap_phi_reg_pp0_iter0_data_2066_V_read2136_phi_reg_97551.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2066_V_read2136_rewind_phi_fu_54807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2066_V_read2136_rewind_phi_fu_54807_p6 = data_2066_V_read2136_phi_reg_97551.read();
    } else {
        ap_phi_mux_data_2066_V_read2136_rewind_phi_fu_54807_p6 = data_2066_V_read2136_rewind_reg_54803.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2067_V_read2137_phi_phi_fu_97568_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2067_V_read2137_phi_phi_fu_97568_p4 = ap_phi_mux_data_2067_V_read2137_rewind_phi_fu_54821_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2067_V_read2137_phi_phi_fu_97568_p4 = data_2067_V_read.read();
        } else {
            ap_phi_mux_data_2067_V_read2137_phi_phi_fu_97568_p4 = ap_phi_reg_pp0_iter0_data_2067_V_read2137_phi_reg_97564.read();
        }
    } else {
        ap_phi_mux_data_2067_V_read2137_phi_phi_fu_97568_p4 = ap_phi_reg_pp0_iter0_data_2067_V_read2137_phi_reg_97564.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2067_V_read2137_rewind_phi_fu_54821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2067_V_read2137_rewind_phi_fu_54821_p6 = data_2067_V_read2137_phi_reg_97564.read();
    } else {
        ap_phi_mux_data_2067_V_read2137_rewind_phi_fu_54821_p6 = data_2067_V_read2137_rewind_reg_54817.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2068_V_read2138_phi_phi_fu_97581_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2068_V_read2138_phi_phi_fu_97581_p4 = ap_phi_mux_data_2068_V_read2138_rewind_phi_fu_54835_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2068_V_read2138_phi_phi_fu_97581_p4 = data_2068_V_read.read();
        } else {
            ap_phi_mux_data_2068_V_read2138_phi_phi_fu_97581_p4 = ap_phi_reg_pp0_iter0_data_2068_V_read2138_phi_reg_97577.read();
        }
    } else {
        ap_phi_mux_data_2068_V_read2138_phi_phi_fu_97581_p4 = ap_phi_reg_pp0_iter0_data_2068_V_read2138_phi_reg_97577.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2068_V_read2138_rewind_phi_fu_54835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2068_V_read2138_rewind_phi_fu_54835_p6 = data_2068_V_read2138_phi_reg_97577.read();
    } else {
        ap_phi_mux_data_2068_V_read2138_rewind_phi_fu_54835_p6 = data_2068_V_read2138_rewind_reg_54831.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2069_V_read2139_phi_phi_fu_97594_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2069_V_read2139_phi_phi_fu_97594_p4 = ap_phi_mux_data_2069_V_read2139_rewind_phi_fu_54849_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2069_V_read2139_phi_phi_fu_97594_p4 = data_2069_V_read.read();
        } else {
            ap_phi_mux_data_2069_V_read2139_phi_phi_fu_97594_p4 = ap_phi_reg_pp0_iter0_data_2069_V_read2139_phi_reg_97590.read();
        }
    } else {
        ap_phi_mux_data_2069_V_read2139_phi_phi_fu_97594_p4 = ap_phi_reg_pp0_iter0_data_2069_V_read2139_phi_reg_97590.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2069_V_read2139_rewind_phi_fu_54849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2069_V_read2139_rewind_phi_fu_54849_p6 = data_2069_V_read2139_phi_reg_97590.read();
    } else {
        ap_phi_mux_data_2069_V_read2139_rewind_phi_fu_54849_p6 = data_2069_V_read2139_rewind_reg_54845.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_206_V_read276_phi_phi_fu_73375_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_206_V_read276_phi_phi_fu_73375_p4 = ap_phi_mux_data_206_V_read276_rewind_phi_fu_28767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_206_V_read276_phi_phi_fu_73375_p4 = data_206_V_read.read();
        } else {
            ap_phi_mux_data_206_V_read276_phi_phi_fu_73375_p4 = ap_phi_reg_pp0_iter0_data_206_V_read276_phi_reg_73371.read();
        }
    } else {
        ap_phi_mux_data_206_V_read276_phi_phi_fu_73375_p4 = ap_phi_reg_pp0_iter0_data_206_V_read276_phi_reg_73371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_206_V_read276_rewind_phi_fu_28767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_206_V_read276_rewind_phi_fu_28767_p6 = data_206_V_read276_phi_reg_73371.read();
    } else {
        ap_phi_mux_data_206_V_read276_rewind_phi_fu_28767_p6 = data_206_V_read276_rewind_reg_28763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2070_V_read2140_phi_phi_fu_97607_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2070_V_read2140_phi_phi_fu_97607_p4 = ap_phi_mux_data_2070_V_read2140_rewind_phi_fu_54863_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2070_V_read2140_phi_phi_fu_97607_p4 = data_2070_V_read.read();
        } else {
            ap_phi_mux_data_2070_V_read2140_phi_phi_fu_97607_p4 = ap_phi_reg_pp0_iter0_data_2070_V_read2140_phi_reg_97603.read();
        }
    } else {
        ap_phi_mux_data_2070_V_read2140_phi_phi_fu_97607_p4 = ap_phi_reg_pp0_iter0_data_2070_V_read2140_phi_reg_97603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2070_V_read2140_rewind_phi_fu_54863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2070_V_read2140_rewind_phi_fu_54863_p6 = data_2070_V_read2140_phi_reg_97603.read();
    } else {
        ap_phi_mux_data_2070_V_read2140_rewind_phi_fu_54863_p6 = data_2070_V_read2140_rewind_reg_54859.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2071_V_read2141_phi_phi_fu_97620_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2071_V_read2141_phi_phi_fu_97620_p4 = ap_phi_mux_data_2071_V_read2141_rewind_phi_fu_54877_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2071_V_read2141_phi_phi_fu_97620_p4 = data_2071_V_read.read();
        } else {
            ap_phi_mux_data_2071_V_read2141_phi_phi_fu_97620_p4 = ap_phi_reg_pp0_iter0_data_2071_V_read2141_phi_reg_97616.read();
        }
    } else {
        ap_phi_mux_data_2071_V_read2141_phi_phi_fu_97620_p4 = ap_phi_reg_pp0_iter0_data_2071_V_read2141_phi_reg_97616.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2071_V_read2141_rewind_phi_fu_54877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2071_V_read2141_rewind_phi_fu_54877_p6 = data_2071_V_read2141_phi_reg_97616.read();
    } else {
        ap_phi_mux_data_2071_V_read2141_rewind_phi_fu_54877_p6 = data_2071_V_read2141_rewind_reg_54873.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2072_V_read2142_phi_phi_fu_97633_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2072_V_read2142_phi_phi_fu_97633_p4 = ap_phi_mux_data_2072_V_read2142_rewind_phi_fu_54891_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2072_V_read2142_phi_phi_fu_97633_p4 = data_2072_V_read.read();
        } else {
            ap_phi_mux_data_2072_V_read2142_phi_phi_fu_97633_p4 = ap_phi_reg_pp0_iter0_data_2072_V_read2142_phi_reg_97629.read();
        }
    } else {
        ap_phi_mux_data_2072_V_read2142_phi_phi_fu_97633_p4 = ap_phi_reg_pp0_iter0_data_2072_V_read2142_phi_reg_97629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2072_V_read2142_rewind_phi_fu_54891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2072_V_read2142_rewind_phi_fu_54891_p6 = data_2072_V_read2142_phi_reg_97629.read();
    } else {
        ap_phi_mux_data_2072_V_read2142_rewind_phi_fu_54891_p6 = data_2072_V_read2142_rewind_reg_54887.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2073_V_read2143_phi_phi_fu_97646_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2073_V_read2143_phi_phi_fu_97646_p4 = ap_phi_mux_data_2073_V_read2143_rewind_phi_fu_54905_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2073_V_read2143_phi_phi_fu_97646_p4 = data_2073_V_read.read();
        } else {
            ap_phi_mux_data_2073_V_read2143_phi_phi_fu_97646_p4 = ap_phi_reg_pp0_iter0_data_2073_V_read2143_phi_reg_97642.read();
        }
    } else {
        ap_phi_mux_data_2073_V_read2143_phi_phi_fu_97646_p4 = ap_phi_reg_pp0_iter0_data_2073_V_read2143_phi_reg_97642.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2073_V_read2143_rewind_phi_fu_54905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2073_V_read2143_rewind_phi_fu_54905_p6 = data_2073_V_read2143_phi_reg_97642.read();
    } else {
        ap_phi_mux_data_2073_V_read2143_rewind_phi_fu_54905_p6 = data_2073_V_read2143_rewind_reg_54901.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2074_V_read2144_phi_phi_fu_97659_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2074_V_read2144_phi_phi_fu_97659_p4 = ap_phi_mux_data_2074_V_read2144_rewind_phi_fu_54919_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2074_V_read2144_phi_phi_fu_97659_p4 = data_2074_V_read.read();
        } else {
            ap_phi_mux_data_2074_V_read2144_phi_phi_fu_97659_p4 = ap_phi_reg_pp0_iter0_data_2074_V_read2144_phi_reg_97655.read();
        }
    } else {
        ap_phi_mux_data_2074_V_read2144_phi_phi_fu_97659_p4 = ap_phi_reg_pp0_iter0_data_2074_V_read2144_phi_reg_97655.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2074_V_read2144_rewind_phi_fu_54919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2074_V_read2144_rewind_phi_fu_54919_p6 = data_2074_V_read2144_phi_reg_97655.read();
    } else {
        ap_phi_mux_data_2074_V_read2144_rewind_phi_fu_54919_p6 = data_2074_V_read2144_rewind_reg_54915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2075_V_read2145_phi_phi_fu_97672_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2075_V_read2145_phi_phi_fu_97672_p4 = ap_phi_mux_data_2075_V_read2145_rewind_phi_fu_54933_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2075_V_read2145_phi_phi_fu_97672_p4 = data_2075_V_read.read();
        } else {
            ap_phi_mux_data_2075_V_read2145_phi_phi_fu_97672_p4 = ap_phi_reg_pp0_iter0_data_2075_V_read2145_phi_reg_97668.read();
        }
    } else {
        ap_phi_mux_data_2075_V_read2145_phi_phi_fu_97672_p4 = ap_phi_reg_pp0_iter0_data_2075_V_read2145_phi_reg_97668.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2075_V_read2145_rewind_phi_fu_54933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2075_V_read2145_rewind_phi_fu_54933_p6 = data_2075_V_read2145_phi_reg_97668.read();
    } else {
        ap_phi_mux_data_2075_V_read2145_rewind_phi_fu_54933_p6 = data_2075_V_read2145_rewind_reg_54929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2076_V_read2146_phi_phi_fu_97685_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2076_V_read2146_phi_phi_fu_97685_p4 = ap_phi_mux_data_2076_V_read2146_rewind_phi_fu_54947_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2076_V_read2146_phi_phi_fu_97685_p4 = data_2076_V_read.read();
        } else {
            ap_phi_mux_data_2076_V_read2146_phi_phi_fu_97685_p4 = ap_phi_reg_pp0_iter0_data_2076_V_read2146_phi_reg_97681.read();
        }
    } else {
        ap_phi_mux_data_2076_V_read2146_phi_phi_fu_97685_p4 = ap_phi_reg_pp0_iter0_data_2076_V_read2146_phi_reg_97681.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2076_V_read2146_rewind_phi_fu_54947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2076_V_read2146_rewind_phi_fu_54947_p6 = data_2076_V_read2146_phi_reg_97681.read();
    } else {
        ap_phi_mux_data_2076_V_read2146_rewind_phi_fu_54947_p6 = data_2076_V_read2146_rewind_reg_54943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2077_V_read2147_phi_phi_fu_97698_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2077_V_read2147_phi_phi_fu_97698_p4 = ap_phi_mux_data_2077_V_read2147_rewind_phi_fu_54961_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2077_V_read2147_phi_phi_fu_97698_p4 = data_2077_V_read.read();
        } else {
            ap_phi_mux_data_2077_V_read2147_phi_phi_fu_97698_p4 = ap_phi_reg_pp0_iter0_data_2077_V_read2147_phi_reg_97694.read();
        }
    } else {
        ap_phi_mux_data_2077_V_read2147_phi_phi_fu_97698_p4 = ap_phi_reg_pp0_iter0_data_2077_V_read2147_phi_reg_97694.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2077_V_read2147_rewind_phi_fu_54961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2077_V_read2147_rewind_phi_fu_54961_p6 = data_2077_V_read2147_phi_reg_97694.read();
    } else {
        ap_phi_mux_data_2077_V_read2147_rewind_phi_fu_54961_p6 = data_2077_V_read2147_rewind_reg_54957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2078_V_read2148_phi_phi_fu_97711_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2078_V_read2148_phi_phi_fu_97711_p4 = ap_phi_mux_data_2078_V_read2148_rewind_phi_fu_54975_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2078_V_read2148_phi_phi_fu_97711_p4 = data_2078_V_read.read();
        } else {
            ap_phi_mux_data_2078_V_read2148_phi_phi_fu_97711_p4 = ap_phi_reg_pp0_iter0_data_2078_V_read2148_phi_reg_97707.read();
        }
    } else {
        ap_phi_mux_data_2078_V_read2148_phi_phi_fu_97711_p4 = ap_phi_reg_pp0_iter0_data_2078_V_read2148_phi_reg_97707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2078_V_read2148_rewind_phi_fu_54975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2078_V_read2148_rewind_phi_fu_54975_p6 = data_2078_V_read2148_phi_reg_97707.read();
    } else {
        ap_phi_mux_data_2078_V_read2148_rewind_phi_fu_54975_p6 = data_2078_V_read2148_rewind_reg_54971.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2079_V_read2149_phi_phi_fu_97724_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2079_V_read2149_phi_phi_fu_97724_p4 = ap_phi_mux_data_2079_V_read2149_rewind_phi_fu_54989_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2079_V_read2149_phi_phi_fu_97724_p4 = data_2079_V_read.read();
        } else {
            ap_phi_mux_data_2079_V_read2149_phi_phi_fu_97724_p4 = ap_phi_reg_pp0_iter0_data_2079_V_read2149_phi_reg_97720.read();
        }
    } else {
        ap_phi_mux_data_2079_V_read2149_phi_phi_fu_97724_p4 = ap_phi_reg_pp0_iter0_data_2079_V_read2149_phi_reg_97720.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2079_V_read2149_rewind_phi_fu_54989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2079_V_read2149_rewind_phi_fu_54989_p6 = data_2079_V_read2149_phi_reg_97720.read();
    } else {
        ap_phi_mux_data_2079_V_read2149_rewind_phi_fu_54989_p6 = data_2079_V_read2149_rewind_reg_54985.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_207_V_read277_phi_phi_fu_73388_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_207_V_read277_phi_phi_fu_73388_p4 = ap_phi_mux_data_207_V_read277_rewind_phi_fu_28781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_207_V_read277_phi_phi_fu_73388_p4 = data_207_V_read.read();
        } else {
            ap_phi_mux_data_207_V_read277_phi_phi_fu_73388_p4 = ap_phi_reg_pp0_iter0_data_207_V_read277_phi_reg_73384.read();
        }
    } else {
        ap_phi_mux_data_207_V_read277_phi_phi_fu_73388_p4 = ap_phi_reg_pp0_iter0_data_207_V_read277_phi_reg_73384.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_207_V_read277_rewind_phi_fu_28781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_207_V_read277_rewind_phi_fu_28781_p6 = data_207_V_read277_phi_reg_73384.read();
    } else {
        ap_phi_mux_data_207_V_read277_rewind_phi_fu_28781_p6 = data_207_V_read277_rewind_reg_28777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2080_V_read2150_phi_phi_fu_97737_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2080_V_read2150_phi_phi_fu_97737_p4 = ap_phi_mux_data_2080_V_read2150_rewind_phi_fu_55003_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2080_V_read2150_phi_phi_fu_97737_p4 = data_2080_V_read.read();
        } else {
            ap_phi_mux_data_2080_V_read2150_phi_phi_fu_97737_p4 = ap_phi_reg_pp0_iter0_data_2080_V_read2150_phi_reg_97733.read();
        }
    } else {
        ap_phi_mux_data_2080_V_read2150_phi_phi_fu_97737_p4 = ap_phi_reg_pp0_iter0_data_2080_V_read2150_phi_reg_97733.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2080_V_read2150_rewind_phi_fu_55003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2080_V_read2150_rewind_phi_fu_55003_p6 = data_2080_V_read2150_phi_reg_97733.read();
    } else {
        ap_phi_mux_data_2080_V_read2150_rewind_phi_fu_55003_p6 = data_2080_V_read2150_rewind_reg_54999.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2081_V_read2151_phi_phi_fu_97750_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2081_V_read2151_phi_phi_fu_97750_p4 = ap_phi_mux_data_2081_V_read2151_rewind_phi_fu_55017_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2081_V_read2151_phi_phi_fu_97750_p4 = data_2081_V_read.read();
        } else {
            ap_phi_mux_data_2081_V_read2151_phi_phi_fu_97750_p4 = ap_phi_reg_pp0_iter0_data_2081_V_read2151_phi_reg_97746.read();
        }
    } else {
        ap_phi_mux_data_2081_V_read2151_phi_phi_fu_97750_p4 = ap_phi_reg_pp0_iter0_data_2081_V_read2151_phi_reg_97746.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2081_V_read2151_rewind_phi_fu_55017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2081_V_read2151_rewind_phi_fu_55017_p6 = data_2081_V_read2151_phi_reg_97746.read();
    } else {
        ap_phi_mux_data_2081_V_read2151_rewind_phi_fu_55017_p6 = data_2081_V_read2151_rewind_reg_55013.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2082_V_read2152_phi_phi_fu_97763_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2082_V_read2152_phi_phi_fu_97763_p4 = ap_phi_mux_data_2082_V_read2152_rewind_phi_fu_55031_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2082_V_read2152_phi_phi_fu_97763_p4 = data_2082_V_read.read();
        } else {
            ap_phi_mux_data_2082_V_read2152_phi_phi_fu_97763_p4 = ap_phi_reg_pp0_iter0_data_2082_V_read2152_phi_reg_97759.read();
        }
    } else {
        ap_phi_mux_data_2082_V_read2152_phi_phi_fu_97763_p4 = ap_phi_reg_pp0_iter0_data_2082_V_read2152_phi_reg_97759.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2082_V_read2152_rewind_phi_fu_55031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2082_V_read2152_rewind_phi_fu_55031_p6 = data_2082_V_read2152_phi_reg_97759.read();
    } else {
        ap_phi_mux_data_2082_V_read2152_rewind_phi_fu_55031_p6 = data_2082_V_read2152_rewind_reg_55027.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2083_V_read2153_phi_phi_fu_97776_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2083_V_read2153_phi_phi_fu_97776_p4 = ap_phi_mux_data_2083_V_read2153_rewind_phi_fu_55045_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2083_V_read2153_phi_phi_fu_97776_p4 = data_2083_V_read.read();
        } else {
            ap_phi_mux_data_2083_V_read2153_phi_phi_fu_97776_p4 = ap_phi_reg_pp0_iter0_data_2083_V_read2153_phi_reg_97772.read();
        }
    } else {
        ap_phi_mux_data_2083_V_read2153_phi_phi_fu_97776_p4 = ap_phi_reg_pp0_iter0_data_2083_V_read2153_phi_reg_97772.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2083_V_read2153_rewind_phi_fu_55045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2083_V_read2153_rewind_phi_fu_55045_p6 = data_2083_V_read2153_phi_reg_97772.read();
    } else {
        ap_phi_mux_data_2083_V_read2153_rewind_phi_fu_55045_p6 = data_2083_V_read2153_rewind_reg_55041.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2084_V_read2154_phi_phi_fu_97789_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2084_V_read2154_phi_phi_fu_97789_p4 = ap_phi_mux_data_2084_V_read2154_rewind_phi_fu_55059_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2084_V_read2154_phi_phi_fu_97789_p4 = data_2084_V_read.read();
        } else {
            ap_phi_mux_data_2084_V_read2154_phi_phi_fu_97789_p4 = ap_phi_reg_pp0_iter0_data_2084_V_read2154_phi_reg_97785.read();
        }
    } else {
        ap_phi_mux_data_2084_V_read2154_phi_phi_fu_97789_p4 = ap_phi_reg_pp0_iter0_data_2084_V_read2154_phi_reg_97785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2084_V_read2154_rewind_phi_fu_55059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2084_V_read2154_rewind_phi_fu_55059_p6 = data_2084_V_read2154_phi_reg_97785.read();
    } else {
        ap_phi_mux_data_2084_V_read2154_rewind_phi_fu_55059_p6 = data_2084_V_read2154_rewind_reg_55055.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2085_V_read2155_phi_phi_fu_97802_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2085_V_read2155_phi_phi_fu_97802_p4 = ap_phi_mux_data_2085_V_read2155_rewind_phi_fu_55073_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2085_V_read2155_phi_phi_fu_97802_p4 = data_2085_V_read.read();
        } else {
            ap_phi_mux_data_2085_V_read2155_phi_phi_fu_97802_p4 = ap_phi_reg_pp0_iter0_data_2085_V_read2155_phi_reg_97798.read();
        }
    } else {
        ap_phi_mux_data_2085_V_read2155_phi_phi_fu_97802_p4 = ap_phi_reg_pp0_iter0_data_2085_V_read2155_phi_reg_97798.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2085_V_read2155_rewind_phi_fu_55073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2085_V_read2155_rewind_phi_fu_55073_p6 = data_2085_V_read2155_phi_reg_97798.read();
    } else {
        ap_phi_mux_data_2085_V_read2155_rewind_phi_fu_55073_p6 = data_2085_V_read2155_rewind_reg_55069.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2086_V_read2156_phi_phi_fu_97815_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2086_V_read2156_phi_phi_fu_97815_p4 = ap_phi_mux_data_2086_V_read2156_rewind_phi_fu_55087_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2086_V_read2156_phi_phi_fu_97815_p4 = data_2086_V_read.read();
        } else {
            ap_phi_mux_data_2086_V_read2156_phi_phi_fu_97815_p4 = ap_phi_reg_pp0_iter0_data_2086_V_read2156_phi_reg_97811.read();
        }
    } else {
        ap_phi_mux_data_2086_V_read2156_phi_phi_fu_97815_p4 = ap_phi_reg_pp0_iter0_data_2086_V_read2156_phi_reg_97811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2086_V_read2156_rewind_phi_fu_55087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2086_V_read2156_rewind_phi_fu_55087_p6 = data_2086_V_read2156_phi_reg_97811.read();
    } else {
        ap_phi_mux_data_2086_V_read2156_rewind_phi_fu_55087_p6 = data_2086_V_read2156_rewind_reg_55083.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2087_V_read2157_phi_phi_fu_97828_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2087_V_read2157_phi_phi_fu_97828_p4 = ap_phi_mux_data_2087_V_read2157_rewind_phi_fu_55101_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2087_V_read2157_phi_phi_fu_97828_p4 = data_2087_V_read.read();
        } else {
            ap_phi_mux_data_2087_V_read2157_phi_phi_fu_97828_p4 = ap_phi_reg_pp0_iter0_data_2087_V_read2157_phi_reg_97824.read();
        }
    } else {
        ap_phi_mux_data_2087_V_read2157_phi_phi_fu_97828_p4 = ap_phi_reg_pp0_iter0_data_2087_V_read2157_phi_reg_97824.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2087_V_read2157_rewind_phi_fu_55101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2087_V_read2157_rewind_phi_fu_55101_p6 = data_2087_V_read2157_phi_reg_97824.read();
    } else {
        ap_phi_mux_data_2087_V_read2157_rewind_phi_fu_55101_p6 = data_2087_V_read2157_rewind_reg_55097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2088_V_read2158_phi_phi_fu_97841_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2088_V_read2158_phi_phi_fu_97841_p4 = ap_phi_mux_data_2088_V_read2158_rewind_phi_fu_55115_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2088_V_read2158_phi_phi_fu_97841_p4 = data_2088_V_read.read();
        } else {
            ap_phi_mux_data_2088_V_read2158_phi_phi_fu_97841_p4 = ap_phi_reg_pp0_iter0_data_2088_V_read2158_phi_reg_97837.read();
        }
    } else {
        ap_phi_mux_data_2088_V_read2158_phi_phi_fu_97841_p4 = ap_phi_reg_pp0_iter0_data_2088_V_read2158_phi_reg_97837.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2088_V_read2158_rewind_phi_fu_55115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2088_V_read2158_rewind_phi_fu_55115_p6 = data_2088_V_read2158_phi_reg_97837.read();
    } else {
        ap_phi_mux_data_2088_V_read2158_rewind_phi_fu_55115_p6 = data_2088_V_read2158_rewind_reg_55111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2089_V_read2159_phi_phi_fu_97854_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2089_V_read2159_phi_phi_fu_97854_p4 = ap_phi_mux_data_2089_V_read2159_rewind_phi_fu_55129_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2089_V_read2159_phi_phi_fu_97854_p4 = data_2089_V_read.read();
        } else {
            ap_phi_mux_data_2089_V_read2159_phi_phi_fu_97854_p4 = ap_phi_reg_pp0_iter0_data_2089_V_read2159_phi_reg_97850.read();
        }
    } else {
        ap_phi_mux_data_2089_V_read2159_phi_phi_fu_97854_p4 = ap_phi_reg_pp0_iter0_data_2089_V_read2159_phi_reg_97850.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2089_V_read2159_rewind_phi_fu_55129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2089_V_read2159_rewind_phi_fu_55129_p6 = data_2089_V_read2159_phi_reg_97850.read();
    } else {
        ap_phi_mux_data_2089_V_read2159_rewind_phi_fu_55129_p6 = data_2089_V_read2159_rewind_reg_55125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_208_V_read278_phi_phi_fu_73401_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_208_V_read278_phi_phi_fu_73401_p4 = ap_phi_mux_data_208_V_read278_rewind_phi_fu_28795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_208_V_read278_phi_phi_fu_73401_p4 = data_208_V_read.read();
        } else {
            ap_phi_mux_data_208_V_read278_phi_phi_fu_73401_p4 = ap_phi_reg_pp0_iter0_data_208_V_read278_phi_reg_73397.read();
        }
    } else {
        ap_phi_mux_data_208_V_read278_phi_phi_fu_73401_p4 = ap_phi_reg_pp0_iter0_data_208_V_read278_phi_reg_73397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_208_V_read278_rewind_phi_fu_28795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_208_V_read278_rewind_phi_fu_28795_p6 = data_208_V_read278_phi_reg_73397.read();
    } else {
        ap_phi_mux_data_208_V_read278_rewind_phi_fu_28795_p6 = data_208_V_read278_rewind_reg_28791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2090_V_read2160_phi_phi_fu_97867_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2090_V_read2160_phi_phi_fu_97867_p4 = ap_phi_mux_data_2090_V_read2160_rewind_phi_fu_55143_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2090_V_read2160_phi_phi_fu_97867_p4 = data_2090_V_read.read();
        } else {
            ap_phi_mux_data_2090_V_read2160_phi_phi_fu_97867_p4 = ap_phi_reg_pp0_iter0_data_2090_V_read2160_phi_reg_97863.read();
        }
    } else {
        ap_phi_mux_data_2090_V_read2160_phi_phi_fu_97867_p4 = ap_phi_reg_pp0_iter0_data_2090_V_read2160_phi_reg_97863.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2090_V_read2160_rewind_phi_fu_55143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2090_V_read2160_rewind_phi_fu_55143_p6 = data_2090_V_read2160_phi_reg_97863.read();
    } else {
        ap_phi_mux_data_2090_V_read2160_rewind_phi_fu_55143_p6 = data_2090_V_read2160_rewind_reg_55139.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2091_V_read2161_phi_phi_fu_97880_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2091_V_read2161_phi_phi_fu_97880_p4 = ap_phi_mux_data_2091_V_read2161_rewind_phi_fu_55157_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2091_V_read2161_phi_phi_fu_97880_p4 = data_2091_V_read.read();
        } else {
            ap_phi_mux_data_2091_V_read2161_phi_phi_fu_97880_p4 = ap_phi_reg_pp0_iter0_data_2091_V_read2161_phi_reg_97876.read();
        }
    } else {
        ap_phi_mux_data_2091_V_read2161_phi_phi_fu_97880_p4 = ap_phi_reg_pp0_iter0_data_2091_V_read2161_phi_reg_97876.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2091_V_read2161_rewind_phi_fu_55157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2091_V_read2161_rewind_phi_fu_55157_p6 = data_2091_V_read2161_phi_reg_97876.read();
    } else {
        ap_phi_mux_data_2091_V_read2161_rewind_phi_fu_55157_p6 = data_2091_V_read2161_rewind_reg_55153.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2092_V_read2162_phi_phi_fu_97893_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2092_V_read2162_phi_phi_fu_97893_p4 = ap_phi_mux_data_2092_V_read2162_rewind_phi_fu_55171_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2092_V_read2162_phi_phi_fu_97893_p4 = data_2092_V_read.read();
        } else {
            ap_phi_mux_data_2092_V_read2162_phi_phi_fu_97893_p4 = ap_phi_reg_pp0_iter0_data_2092_V_read2162_phi_reg_97889.read();
        }
    } else {
        ap_phi_mux_data_2092_V_read2162_phi_phi_fu_97893_p4 = ap_phi_reg_pp0_iter0_data_2092_V_read2162_phi_reg_97889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2092_V_read2162_rewind_phi_fu_55171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2092_V_read2162_rewind_phi_fu_55171_p6 = data_2092_V_read2162_phi_reg_97889.read();
    } else {
        ap_phi_mux_data_2092_V_read2162_rewind_phi_fu_55171_p6 = data_2092_V_read2162_rewind_reg_55167.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2093_V_read2163_phi_phi_fu_97906_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2093_V_read2163_phi_phi_fu_97906_p4 = ap_phi_mux_data_2093_V_read2163_rewind_phi_fu_55185_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2093_V_read2163_phi_phi_fu_97906_p4 = data_2093_V_read.read();
        } else {
            ap_phi_mux_data_2093_V_read2163_phi_phi_fu_97906_p4 = ap_phi_reg_pp0_iter0_data_2093_V_read2163_phi_reg_97902.read();
        }
    } else {
        ap_phi_mux_data_2093_V_read2163_phi_phi_fu_97906_p4 = ap_phi_reg_pp0_iter0_data_2093_V_read2163_phi_reg_97902.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2093_V_read2163_rewind_phi_fu_55185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2093_V_read2163_rewind_phi_fu_55185_p6 = data_2093_V_read2163_phi_reg_97902.read();
    } else {
        ap_phi_mux_data_2093_V_read2163_rewind_phi_fu_55185_p6 = data_2093_V_read2163_rewind_reg_55181.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2094_V_read2164_phi_phi_fu_97919_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2094_V_read2164_phi_phi_fu_97919_p4 = ap_phi_mux_data_2094_V_read2164_rewind_phi_fu_55199_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2094_V_read2164_phi_phi_fu_97919_p4 = data_2094_V_read.read();
        } else {
            ap_phi_mux_data_2094_V_read2164_phi_phi_fu_97919_p4 = ap_phi_reg_pp0_iter0_data_2094_V_read2164_phi_reg_97915.read();
        }
    } else {
        ap_phi_mux_data_2094_V_read2164_phi_phi_fu_97919_p4 = ap_phi_reg_pp0_iter0_data_2094_V_read2164_phi_reg_97915.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2094_V_read2164_rewind_phi_fu_55199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2094_V_read2164_rewind_phi_fu_55199_p6 = data_2094_V_read2164_phi_reg_97915.read();
    } else {
        ap_phi_mux_data_2094_V_read2164_rewind_phi_fu_55199_p6 = data_2094_V_read2164_rewind_reg_55195.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2095_V_read2165_phi_phi_fu_97932_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2095_V_read2165_phi_phi_fu_97932_p4 = ap_phi_mux_data_2095_V_read2165_rewind_phi_fu_55213_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2095_V_read2165_phi_phi_fu_97932_p4 = data_2095_V_read.read();
        } else {
            ap_phi_mux_data_2095_V_read2165_phi_phi_fu_97932_p4 = ap_phi_reg_pp0_iter0_data_2095_V_read2165_phi_reg_97928.read();
        }
    } else {
        ap_phi_mux_data_2095_V_read2165_phi_phi_fu_97932_p4 = ap_phi_reg_pp0_iter0_data_2095_V_read2165_phi_reg_97928.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2095_V_read2165_rewind_phi_fu_55213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2095_V_read2165_rewind_phi_fu_55213_p6 = data_2095_V_read2165_phi_reg_97928.read();
    } else {
        ap_phi_mux_data_2095_V_read2165_rewind_phi_fu_55213_p6 = data_2095_V_read2165_rewind_reg_55209.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2096_V_read2166_phi_phi_fu_97945_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2096_V_read2166_phi_phi_fu_97945_p4 = ap_phi_mux_data_2096_V_read2166_rewind_phi_fu_55227_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2096_V_read2166_phi_phi_fu_97945_p4 = data_2096_V_read.read();
        } else {
            ap_phi_mux_data_2096_V_read2166_phi_phi_fu_97945_p4 = ap_phi_reg_pp0_iter0_data_2096_V_read2166_phi_reg_97941.read();
        }
    } else {
        ap_phi_mux_data_2096_V_read2166_phi_phi_fu_97945_p4 = ap_phi_reg_pp0_iter0_data_2096_V_read2166_phi_reg_97941.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2096_V_read2166_rewind_phi_fu_55227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2096_V_read2166_rewind_phi_fu_55227_p6 = data_2096_V_read2166_phi_reg_97941.read();
    } else {
        ap_phi_mux_data_2096_V_read2166_rewind_phi_fu_55227_p6 = data_2096_V_read2166_rewind_reg_55223.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2097_V_read2167_phi_phi_fu_97958_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2097_V_read2167_phi_phi_fu_97958_p4 = ap_phi_mux_data_2097_V_read2167_rewind_phi_fu_55241_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2097_V_read2167_phi_phi_fu_97958_p4 = data_2097_V_read.read();
        } else {
            ap_phi_mux_data_2097_V_read2167_phi_phi_fu_97958_p4 = ap_phi_reg_pp0_iter0_data_2097_V_read2167_phi_reg_97954.read();
        }
    } else {
        ap_phi_mux_data_2097_V_read2167_phi_phi_fu_97958_p4 = ap_phi_reg_pp0_iter0_data_2097_V_read2167_phi_reg_97954.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2097_V_read2167_rewind_phi_fu_55241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2097_V_read2167_rewind_phi_fu_55241_p6 = data_2097_V_read2167_phi_reg_97954.read();
    } else {
        ap_phi_mux_data_2097_V_read2167_rewind_phi_fu_55241_p6 = data_2097_V_read2167_rewind_reg_55237.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2098_V_read2168_phi_phi_fu_97971_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2098_V_read2168_phi_phi_fu_97971_p4 = ap_phi_mux_data_2098_V_read2168_rewind_phi_fu_55255_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2098_V_read2168_phi_phi_fu_97971_p4 = data_2098_V_read.read();
        } else {
            ap_phi_mux_data_2098_V_read2168_phi_phi_fu_97971_p4 = ap_phi_reg_pp0_iter0_data_2098_V_read2168_phi_reg_97967.read();
        }
    } else {
        ap_phi_mux_data_2098_V_read2168_phi_phi_fu_97971_p4 = ap_phi_reg_pp0_iter0_data_2098_V_read2168_phi_reg_97967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2098_V_read2168_rewind_phi_fu_55255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2098_V_read2168_rewind_phi_fu_55255_p6 = data_2098_V_read2168_phi_reg_97967.read();
    } else {
        ap_phi_mux_data_2098_V_read2168_rewind_phi_fu_55255_p6 = data_2098_V_read2168_rewind_reg_55251.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2099_V_read2169_phi_phi_fu_97984_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2099_V_read2169_phi_phi_fu_97984_p4 = ap_phi_mux_data_2099_V_read2169_rewind_phi_fu_55269_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2099_V_read2169_phi_phi_fu_97984_p4 = data_2099_V_read.read();
        } else {
            ap_phi_mux_data_2099_V_read2169_phi_phi_fu_97984_p4 = ap_phi_reg_pp0_iter0_data_2099_V_read2169_phi_reg_97980.read();
        }
    } else {
        ap_phi_mux_data_2099_V_read2169_phi_phi_fu_97984_p4 = ap_phi_reg_pp0_iter0_data_2099_V_read2169_phi_reg_97980.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2099_V_read2169_rewind_phi_fu_55269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2099_V_read2169_rewind_phi_fu_55269_p6 = data_2099_V_read2169_phi_reg_97980.read();
    } else {
        ap_phi_mux_data_2099_V_read2169_rewind_phi_fu_55269_p6 = data_2099_V_read2169_rewind_reg_55265.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_209_V_read279_phi_phi_fu_73414_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_209_V_read279_phi_phi_fu_73414_p4 = ap_phi_mux_data_209_V_read279_rewind_phi_fu_28809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_209_V_read279_phi_phi_fu_73414_p4 = data_209_V_read.read();
        } else {
            ap_phi_mux_data_209_V_read279_phi_phi_fu_73414_p4 = ap_phi_reg_pp0_iter0_data_209_V_read279_phi_reg_73410.read();
        }
    } else {
        ap_phi_mux_data_209_V_read279_phi_phi_fu_73414_p4 = ap_phi_reg_pp0_iter0_data_209_V_read279_phi_reg_73410.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_209_V_read279_rewind_phi_fu_28809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_209_V_read279_rewind_phi_fu_28809_p6 = data_209_V_read279_phi_reg_73410.read();
    } else {
        ap_phi_mux_data_209_V_read279_rewind_phi_fu_28809_p6 = data_209_V_read279_rewind_reg_28805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_20_V_read90_phi_phi_fu_70957_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_20_V_read90_phi_phi_fu_70957_p4 = ap_phi_mux_data_20_V_read90_rewind_phi_fu_26163_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_20_V_read90_phi_phi_fu_70957_p4 = data_20_V_read.read();
        } else {
            ap_phi_mux_data_20_V_read90_phi_phi_fu_70957_p4 = ap_phi_reg_pp0_iter0_data_20_V_read90_phi_reg_70953.read();
        }
    } else {
        ap_phi_mux_data_20_V_read90_phi_phi_fu_70957_p4 = ap_phi_reg_pp0_iter0_data_20_V_read90_phi_reg_70953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_20_V_read90_rewind_phi_fu_26163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_20_V_read90_rewind_phi_fu_26163_p6 = data_20_V_read90_phi_reg_70953.read();
    } else {
        ap_phi_mux_data_20_V_read90_rewind_phi_fu_26163_p6 = data_20_V_read90_rewind_reg_26159.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2100_V_read2170_phi_phi_fu_97997_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2100_V_read2170_phi_phi_fu_97997_p4 = ap_phi_mux_data_2100_V_read2170_rewind_phi_fu_55283_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2100_V_read2170_phi_phi_fu_97997_p4 = data_2100_V_read.read();
        } else {
            ap_phi_mux_data_2100_V_read2170_phi_phi_fu_97997_p4 = ap_phi_reg_pp0_iter0_data_2100_V_read2170_phi_reg_97993.read();
        }
    } else {
        ap_phi_mux_data_2100_V_read2170_phi_phi_fu_97997_p4 = ap_phi_reg_pp0_iter0_data_2100_V_read2170_phi_reg_97993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2100_V_read2170_rewind_phi_fu_55283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2100_V_read2170_rewind_phi_fu_55283_p6 = data_2100_V_read2170_phi_reg_97993.read();
    } else {
        ap_phi_mux_data_2100_V_read2170_rewind_phi_fu_55283_p6 = data_2100_V_read2170_rewind_reg_55279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2101_V_read2171_phi_phi_fu_98010_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2101_V_read2171_phi_phi_fu_98010_p4 = ap_phi_mux_data_2101_V_read2171_rewind_phi_fu_55297_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2101_V_read2171_phi_phi_fu_98010_p4 = data_2101_V_read.read();
        } else {
            ap_phi_mux_data_2101_V_read2171_phi_phi_fu_98010_p4 = ap_phi_reg_pp0_iter0_data_2101_V_read2171_phi_reg_98006.read();
        }
    } else {
        ap_phi_mux_data_2101_V_read2171_phi_phi_fu_98010_p4 = ap_phi_reg_pp0_iter0_data_2101_V_read2171_phi_reg_98006.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2101_V_read2171_rewind_phi_fu_55297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2101_V_read2171_rewind_phi_fu_55297_p6 = data_2101_V_read2171_phi_reg_98006.read();
    } else {
        ap_phi_mux_data_2101_V_read2171_rewind_phi_fu_55297_p6 = data_2101_V_read2171_rewind_reg_55293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2102_V_read2172_phi_phi_fu_98023_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2102_V_read2172_phi_phi_fu_98023_p4 = ap_phi_mux_data_2102_V_read2172_rewind_phi_fu_55311_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2102_V_read2172_phi_phi_fu_98023_p4 = data_2102_V_read.read();
        } else {
            ap_phi_mux_data_2102_V_read2172_phi_phi_fu_98023_p4 = ap_phi_reg_pp0_iter0_data_2102_V_read2172_phi_reg_98019.read();
        }
    } else {
        ap_phi_mux_data_2102_V_read2172_phi_phi_fu_98023_p4 = ap_phi_reg_pp0_iter0_data_2102_V_read2172_phi_reg_98019.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2102_V_read2172_rewind_phi_fu_55311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2102_V_read2172_rewind_phi_fu_55311_p6 = data_2102_V_read2172_phi_reg_98019.read();
    } else {
        ap_phi_mux_data_2102_V_read2172_rewind_phi_fu_55311_p6 = data_2102_V_read2172_rewind_reg_55307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2103_V_read2173_phi_phi_fu_98036_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2103_V_read2173_phi_phi_fu_98036_p4 = ap_phi_mux_data_2103_V_read2173_rewind_phi_fu_55325_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2103_V_read2173_phi_phi_fu_98036_p4 = data_2103_V_read.read();
        } else {
            ap_phi_mux_data_2103_V_read2173_phi_phi_fu_98036_p4 = ap_phi_reg_pp0_iter0_data_2103_V_read2173_phi_reg_98032.read();
        }
    } else {
        ap_phi_mux_data_2103_V_read2173_phi_phi_fu_98036_p4 = ap_phi_reg_pp0_iter0_data_2103_V_read2173_phi_reg_98032.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2103_V_read2173_rewind_phi_fu_55325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2103_V_read2173_rewind_phi_fu_55325_p6 = data_2103_V_read2173_phi_reg_98032.read();
    } else {
        ap_phi_mux_data_2103_V_read2173_rewind_phi_fu_55325_p6 = data_2103_V_read2173_rewind_reg_55321.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2104_V_read2174_phi_phi_fu_98049_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2104_V_read2174_phi_phi_fu_98049_p4 = ap_phi_mux_data_2104_V_read2174_rewind_phi_fu_55339_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2104_V_read2174_phi_phi_fu_98049_p4 = data_2104_V_read.read();
        } else {
            ap_phi_mux_data_2104_V_read2174_phi_phi_fu_98049_p4 = ap_phi_reg_pp0_iter0_data_2104_V_read2174_phi_reg_98045.read();
        }
    } else {
        ap_phi_mux_data_2104_V_read2174_phi_phi_fu_98049_p4 = ap_phi_reg_pp0_iter0_data_2104_V_read2174_phi_reg_98045.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2104_V_read2174_rewind_phi_fu_55339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2104_V_read2174_rewind_phi_fu_55339_p6 = data_2104_V_read2174_phi_reg_98045.read();
    } else {
        ap_phi_mux_data_2104_V_read2174_rewind_phi_fu_55339_p6 = data_2104_V_read2174_rewind_reg_55335.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2105_V_read2175_phi_phi_fu_98062_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2105_V_read2175_phi_phi_fu_98062_p4 = ap_phi_mux_data_2105_V_read2175_rewind_phi_fu_55353_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2105_V_read2175_phi_phi_fu_98062_p4 = data_2105_V_read.read();
        } else {
            ap_phi_mux_data_2105_V_read2175_phi_phi_fu_98062_p4 = ap_phi_reg_pp0_iter0_data_2105_V_read2175_phi_reg_98058.read();
        }
    } else {
        ap_phi_mux_data_2105_V_read2175_phi_phi_fu_98062_p4 = ap_phi_reg_pp0_iter0_data_2105_V_read2175_phi_reg_98058.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2105_V_read2175_rewind_phi_fu_55353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2105_V_read2175_rewind_phi_fu_55353_p6 = data_2105_V_read2175_phi_reg_98058.read();
    } else {
        ap_phi_mux_data_2105_V_read2175_rewind_phi_fu_55353_p6 = data_2105_V_read2175_rewind_reg_55349.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2106_V_read2176_phi_phi_fu_98075_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2106_V_read2176_phi_phi_fu_98075_p4 = ap_phi_mux_data_2106_V_read2176_rewind_phi_fu_55367_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2106_V_read2176_phi_phi_fu_98075_p4 = data_2106_V_read.read();
        } else {
            ap_phi_mux_data_2106_V_read2176_phi_phi_fu_98075_p4 = ap_phi_reg_pp0_iter0_data_2106_V_read2176_phi_reg_98071.read();
        }
    } else {
        ap_phi_mux_data_2106_V_read2176_phi_phi_fu_98075_p4 = ap_phi_reg_pp0_iter0_data_2106_V_read2176_phi_reg_98071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2106_V_read2176_rewind_phi_fu_55367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2106_V_read2176_rewind_phi_fu_55367_p6 = data_2106_V_read2176_phi_reg_98071.read();
    } else {
        ap_phi_mux_data_2106_V_read2176_rewind_phi_fu_55367_p6 = data_2106_V_read2176_rewind_reg_55363.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2107_V_read2177_phi_phi_fu_98088_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2107_V_read2177_phi_phi_fu_98088_p4 = ap_phi_mux_data_2107_V_read2177_rewind_phi_fu_55381_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2107_V_read2177_phi_phi_fu_98088_p4 = data_2107_V_read.read();
        } else {
            ap_phi_mux_data_2107_V_read2177_phi_phi_fu_98088_p4 = ap_phi_reg_pp0_iter0_data_2107_V_read2177_phi_reg_98084.read();
        }
    } else {
        ap_phi_mux_data_2107_V_read2177_phi_phi_fu_98088_p4 = ap_phi_reg_pp0_iter0_data_2107_V_read2177_phi_reg_98084.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2107_V_read2177_rewind_phi_fu_55381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2107_V_read2177_rewind_phi_fu_55381_p6 = data_2107_V_read2177_phi_reg_98084.read();
    } else {
        ap_phi_mux_data_2107_V_read2177_rewind_phi_fu_55381_p6 = data_2107_V_read2177_rewind_reg_55377.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2108_V_read2178_phi_phi_fu_98101_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2108_V_read2178_phi_phi_fu_98101_p4 = ap_phi_mux_data_2108_V_read2178_rewind_phi_fu_55395_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2108_V_read2178_phi_phi_fu_98101_p4 = data_2108_V_read.read();
        } else {
            ap_phi_mux_data_2108_V_read2178_phi_phi_fu_98101_p4 = ap_phi_reg_pp0_iter0_data_2108_V_read2178_phi_reg_98097.read();
        }
    } else {
        ap_phi_mux_data_2108_V_read2178_phi_phi_fu_98101_p4 = ap_phi_reg_pp0_iter0_data_2108_V_read2178_phi_reg_98097.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2108_V_read2178_rewind_phi_fu_55395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2108_V_read2178_rewind_phi_fu_55395_p6 = data_2108_V_read2178_phi_reg_98097.read();
    } else {
        ap_phi_mux_data_2108_V_read2178_rewind_phi_fu_55395_p6 = data_2108_V_read2178_rewind_reg_55391.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2109_V_read2179_phi_phi_fu_98114_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2109_V_read2179_phi_phi_fu_98114_p4 = ap_phi_mux_data_2109_V_read2179_rewind_phi_fu_55409_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2109_V_read2179_phi_phi_fu_98114_p4 = data_2109_V_read.read();
        } else {
            ap_phi_mux_data_2109_V_read2179_phi_phi_fu_98114_p4 = ap_phi_reg_pp0_iter0_data_2109_V_read2179_phi_reg_98110.read();
        }
    } else {
        ap_phi_mux_data_2109_V_read2179_phi_phi_fu_98114_p4 = ap_phi_reg_pp0_iter0_data_2109_V_read2179_phi_reg_98110.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2109_V_read2179_rewind_phi_fu_55409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2109_V_read2179_rewind_phi_fu_55409_p6 = data_2109_V_read2179_phi_reg_98110.read();
    } else {
        ap_phi_mux_data_2109_V_read2179_rewind_phi_fu_55409_p6 = data_2109_V_read2179_rewind_reg_55405.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_210_V_read280_phi_phi_fu_73427_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_210_V_read280_phi_phi_fu_73427_p4 = ap_phi_mux_data_210_V_read280_rewind_phi_fu_28823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_210_V_read280_phi_phi_fu_73427_p4 = data_210_V_read.read();
        } else {
            ap_phi_mux_data_210_V_read280_phi_phi_fu_73427_p4 = ap_phi_reg_pp0_iter0_data_210_V_read280_phi_reg_73423.read();
        }
    } else {
        ap_phi_mux_data_210_V_read280_phi_phi_fu_73427_p4 = ap_phi_reg_pp0_iter0_data_210_V_read280_phi_reg_73423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_210_V_read280_rewind_phi_fu_28823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_210_V_read280_rewind_phi_fu_28823_p6 = data_210_V_read280_phi_reg_73423.read();
    } else {
        ap_phi_mux_data_210_V_read280_rewind_phi_fu_28823_p6 = data_210_V_read280_rewind_reg_28819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2110_V_read2180_phi_phi_fu_98127_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2110_V_read2180_phi_phi_fu_98127_p4 = ap_phi_mux_data_2110_V_read2180_rewind_phi_fu_55423_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2110_V_read2180_phi_phi_fu_98127_p4 = data_2110_V_read.read();
        } else {
            ap_phi_mux_data_2110_V_read2180_phi_phi_fu_98127_p4 = ap_phi_reg_pp0_iter0_data_2110_V_read2180_phi_reg_98123.read();
        }
    } else {
        ap_phi_mux_data_2110_V_read2180_phi_phi_fu_98127_p4 = ap_phi_reg_pp0_iter0_data_2110_V_read2180_phi_reg_98123.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2110_V_read2180_rewind_phi_fu_55423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2110_V_read2180_rewind_phi_fu_55423_p6 = data_2110_V_read2180_phi_reg_98123.read();
    } else {
        ap_phi_mux_data_2110_V_read2180_rewind_phi_fu_55423_p6 = data_2110_V_read2180_rewind_reg_55419.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2111_V_read2181_phi_phi_fu_98140_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2111_V_read2181_phi_phi_fu_98140_p4 = ap_phi_mux_data_2111_V_read2181_rewind_phi_fu_55437_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2111_V_read2181_phi_phi_fu_98140_p4 = data_2111_V_read.read();
        } else {
            ap_phi_mux_data_2111_V_read2181_phi_phi_fu_98140_p4 = ap_phi_reg_pp0_iter0_data_2111_V_read2181_phi_reg_98136.read();
        }
    } else {
        ap_phi_mux_data_2111_V_read2181_phi_phi_fu_98140_p4 = ap_phi_reg_pp0_iter0_data_2111_V_read2181_phi_reg_98136.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2111_V_read2181_rewind_phi_fu_55437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2111_V_read2181_rewind_phi_fu_55437_p6 = data_2111_V_read2181_phi_reg_98136.read();
    } else {
        ap_phi_mux_data_2111_V_read2181_rewind_phi_fu_55437_p6 = data_2111_V_read2181_rewind_reg_55433.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2112_V_read2182_phi_phi_fu_98153_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2112_V_read2182_phi_phi_fu_98153_p4 = ap_phi_mux_data_2112_V_read2182_rewind_phi_fu_55451_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2112_V_read2182_phi_phi_fu_98153_p4 = data_2112_V_read.read();
        } else {
            ap_phi_mux_data_2112_V_read2182_phi_phi_fu_98153_p4 = ap_phi_reg_pp0_iter0_data_2112_V_read2182_phi_reg_98149.read();
        }
    } else {
        ap_phi_mux_data_2112_V_read2182_phi_phi_fu_98153_p4 = ap_phi_reg_pp0_iter0_data_2112_V_read2182_phi_reg_98149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2112_V_read2182_rewind_phi_fu_55451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2112_V_read2182_rewind_phi_fu_55451_p6 = data_2112_V_read2182_phi_reg_98149.read();
    } else {
        ap_phi_mux_data_2112_V_read2182_rewind_phi_fu_55451_p6 = data_2112_V_read2182_rewind_reg_55447.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2113_V_read2183_phi_phi_fu_98166_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2113_V_read2183_phi_phi_fu_98166_p4 = ap_phi_mux_data_2113_V_read2183_rewind_phi_fu_55465_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2113_V_read2183_phi_phi_fu_98166_p4 = data_2113_V_read.read();
        } else {
            ap_phi_mux_data_2113_V_read2183_phi_phi_fu_98166_p4 = ap_phi_reg_pp0_iter0_data_2113_V_read2183_phi_reg_98162.read();
        }
    } else {
        ap_phi_mux_data_2113_V_read2183_phi_phi_fu_98166_p4 = ap_phi_reg_pp0_iter0_data_2113_V_read2183_phi_reg_98162.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2113_V_read2183_rewind_phi_fu_55465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2113_V_read2183_rewind_phi_fu_55465_p6 = data_2113_V_read2183_phi_reg_98162.read();
    } else {
        ap_phi_mux_data_2113_V_read2183_rewind_phi_fu_55465_p6 = data_2113_V_read2183_rewind_reg_55461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2114_V_read2184_phi_phi_fu_98179_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2114_V_read2184_phi_phi_fu_98179_p4 = ap_phi_mux_data_2114_V_read2184_rewind_phi_fu_55479_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2114_V_read2184_phi_phi_fu_98179_p4 = data_2114_V_read.read();
        } else {
            ap_phi_mux_data_2114_V_read2184_phi_phi_fu_98179_p4 = ap_phi_reg_pp0_iter0_data_2114_V_read2184_phi_reg_98175.read();
        }
    } else {
        ap_phi_mux_data_2114_V_read2184_phi_phi_fu_98179_p4 = ap_phi_reg_pp0_iter0_data_2114_V_read2184_phi_reg_98175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2114_V_read2184_rewind_phi_fu_55479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2114_V_read2184_rewind_phi_fu_55479_p6 = data_2114_V_read2184_phi_reg_98175.read();
    } else {
        ap_phi_mux_data_2114_V_read2184_rewind_phi_fu_55479_p6 = data_2114_V_read2184_rewind_reg_55475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2115_V_read2185_phi_phi_fu_98192_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2115_V_read2185_phi_phi_fu_98192_p4 = ap_phi_mux_data_2115_V_read2185_rewind_phi_fu_55493_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2115_V_read2185_phi_phi_fu_98192_p4 = data_2115_V_read.read();
        } else {
            ap_phi_mux_data_2115_V_read2185_phi_phi_fu_98192_p4 = ap_phi_reg_pp0_iter0_data_2115_V_read2185_phi_reg_98188.read();
        }
    } else {
        ap_phi_mux_data_2115_V_read2185_phi_phi_fu_98192_p4 = ap_phi_reg_pp0_iter0_data_2115_V_read2185_phi_reg_98188.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2115_V_read2185_rewind_phi_fu_55493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2115_V_read2185_rewind_phi_fu_55493_p6 = data_2115_V_read2185_phi_reg_98188.read();
    } else {
        ap_phi_mux_data_2115_V_read2185_rewind_phi_fu_55493_p6 = data_2115_V_read2185_rewind_reg_55489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2116_V_read2186_phi_phi_fu_98205_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2116_V_read2186_phi_phi_fu_98205_p4 = ap_phi_mux_data_2116_V_read2186_rewind_phi_fu_55507_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2116_V_read2186_phi_phi_fu_98205_p4 = data_2116_V_read.read();
        } else {
            ap_phi_mux_data_2116_V_read2186_phi_phi_fu_98205_p4 = ap_phi_reg_pp0_iter0_data_2116_V_read2186_phi_reg_98201.read();
        }
    } else {
        ap_phi_mux_data_2116_V_read2186_phi_phi_fu_98205_p4 = ap_phi_reg_pp0_iter0_data_2116_V_read2186_phi_reg_98201.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2116_V_read2186_rewind_phi_fu_55507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2116_V_read2186_rewind_phi_fu_55507_p6 = data_2116_V_read2186_phi_reg_98201.read();
    } else {
        ap_phi_mux_data_2116_V_read2186_rewind_phi_fu_55507_p6 = data_2116_V_read2186_rewind_reg_55503.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2117_V_read2187_phi_phi_fu_98218_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2117_V_read2187_phi_phi_fu_98218_p4 = ap_phi_mux_data_2117_V_read2187_rewind_phi_fu_55521_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2117_V_read2187_phi_phi_fu_98218_p4 = data_2117_V_read.read();
        } else {
            ap_phi_mux_data_2117_V_read2187_phi_phi_fu_98218_p4 = ap_phi_reg_pp0_iter0_data_2117_V_read2187_phi_reg_98214.read();
        }
    } else {
        ap_phi_mux_data_2117_V_read2187_phi_phi_fu_98218_p4 = ap_phi_reg_pp0_iter0_data_2117_V_read2187_phi_reg_98214.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2117_V_read2187_rewind_phi_fu_55521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2117_V_read2187_rewind_phi_fu_55521_p6 = data_2117_V_read2187_phi_reg_98214.read();
    } else {
        ap_phi_mux_data_2117_V_read2187_rewind_phi_fu_55521_p6 = data_2117_V_read2187_rewind_reg_55517.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2118_V_read2188_phi_phi_fu_98231_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2118_V_read2188_phi_phi_fu_98231_p4 = ap_phi_mux_data_2118_V_read2188_rewind_phi_fu_55535_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2118_V_read2188_phi_phi_fu_98231_p4 = data_2118_V_read.read();
        } else {
            ap_phi_mux_data_2118_V_read2188_phi_phi_fu_98231_p4 = ap_phi_reg_pp0_iter0_data_2118_V_read2188_phi_reg_98227.read();
        }
    } else {
        ap_phi_mux_data_2118_V_read2188_phi_phi_fu_98231_p4 = ap_phi_reg_pp0_iter0_data_2118_V_read2188_phi_reg_98227.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2118_V_read2188_rewind_phi_fu_55535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2118_V_read2188_rewind_phi_fu_55535_p6 = data_2118_V_read2188_phi_reg_98227.read();
    } else {
        ap_phi_mux_data_2118_V_read2188_rewind_phi_fu_55535_p6 = data_2118_V_read2188_rewind_reg_55531.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2119_V_read2189_phi_phi_fu_98244_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2119_V_read2189_phi_phi_fu_98244_p4 = ap_phi_mux_data_2119_V_read2189_rewind_phi_fu_55549_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2119_V_read2189_phi_phi_fu_98244_p4 = data_2119_V_read.read();
        } else {
            ap_phi_mux_data_2119_V_read2189_phi_phi_fu_98244_p4 = ap_phi_reg_pp0_iter0_data_2119_V_read2189_phi_reg_98240.read();
        }
    } else {
        ap_phi_mux_data_2119_V_read2189_phi_phi_fu_98244_p4 = ap_phi_reg_pp0_iter0_data_2119_V_read2189_phi_reg_98240.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2119_V_read2189_rewind_phi_fu_55549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2119_V_read2189_rewind_phi_fu_55549_p6 = data_2119_V_read2189_phi_reg_98240.read();
    } else {
        ap_phi_mux_data_2119_V_read2189_rewind_phi_fu_55549_p6 = data_2119_V_read2189_rewind_reg_55545.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_211_V_read281_phi_phi_fu_73440_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_211_V_read281_phi_phi_fu_73440_p4 = ap_phi_mux_data_211_V_read281_rewind_phi_fu_28837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_211_V_read281_phi_phi_fu_73440_p4 = data_211_V_read.read();
        } else {
            ap_phi_mux_data_211_V_read281_phi_phi_fu_73440_p4 = ap_phi_reg_pp0_iter0_data_211_V_read281_phi_reg_73436.read();
        }
    } else {
        ap_phi_mux_data_211_V_read281_phi_phi_fu_73440_p4 = ap_phi_reg_pp0_iter0_data_211_V_read281_phi_reg_73436.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_211_V_read281_rewind_phi_fu_28837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_211_V_read281_rewind_phi_fu_28837_p6 = data_211_V_read281_phi_reg_73436.read();
    } else {
        ap_phi_mux_data_211_V_read281_rewind_phi_fu_28837_p6 = data_211_V_read281_rewind_reg_28833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2120_V_read2190_phi_phi_fu_98257_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2120_V_read2190_phi_phi_fu_98257_p4 = ap_phi_mux_data_2120_V_read2190_rewind_phi_fu_55563_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2120_V_read2190_phi_phi_fu_98257_p4 = data_2120_V_read.read();
        } else {
            ap_phi_mux_data_2120_V_read2190_phi_phi_fu_98257_p4 = ap_phi_reg_pp0_iter0_data_2120_V_read2190_phi_reg_98253.read();
        }
    } else {
        ap_phi_mux_data_2120_V_read2190_phi_phi_fu_98257_p4 = ap_phi_reg_pp0_iter0_data_2120_V_read2190_phi_reg_98253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2120_V_read2190_rewind_phi_fu_55563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2120_V_read2190_rewind_phi_fu_55563_p6 = data_2120_V_read2190_phi_reg_98253.read();
    } else {
        ap_phi_mux_data_2120_V_read2190_rewind_phi_fu_55563_p6 = data_2120_V_read2190_rewind_reg_55559.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2121_V_read2191_phi_phi_fu_98270_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2121_V_read2191_phi_phi_fu_98270_p4 = ap_phi_mux_data_2121_V_read2191_rewind_phi_fu_55577_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2121_V_read2191_phi_phi_fu_98270_p4 = data_2121_V_read.read();
        } else {
            ap_phi_mux_data_2121_V_read2191_phi_phi_fu_98270_p4 = ap_phi_reg_pp0_iter0_data_2121_V_read2191_phi_reg_98266.read();
        }
    } else {
        ap_phi_mux_data_2121_V_read2191_phi_phi_fu_98270_p4 = ap_phi_reg_pp0_iter0_data_2121_V_read2191_phi_reg_98266.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2121_V_read2191_rewind_phi_fu_55577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2121_V_read2191_rewind_phi_fu_55577_p6 = data_2121_V_read2191_phi_reg_98266.read();
    } else {
        ap_phi_mux_data_2121_V_read2191_rewind_phi_fu_55577_p6 = data_2121_V_read2191_rewind_reg_55573.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2122_V_read2192_phi_phi_fu_98283_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2122_V_read2192_phi_phi_fu_98283_p4 = ap_phi_mux_data_2122_V_read2192_rewind_phi_fu_55591_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2122_V_read2192_phi_phi_fu_98283_p4 = data_2122_V_read.read();
        } else {
            ap_phi_mux_data_2122_V_read2192_phi_phi_fu_98283_p4 = ap_phi_reg_pp0_iter0_data_2122_V_read2192_phi_reg_98279.read();
        }
    } else {
        ap_phi_mux_data_2122_V_read2192_phi_phi_fu_98283_p4 = ap_phi_reg_pp0_iter0_data_2122_V_read2192_phi_reg_98279.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2122_V_read2192_rewind_phi_fu_55591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2122_V_read2192_rewind_phi_fu_55591_p6 = data_2122_V_read2192_phi_reg_98279.read();
    } else {
        ap_phi_mux_data_2122_V_read2192_rewind_phi_fu_55591_p6 = data_2122_V_read2192_rewind_reg_55587.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2123_V_read2193_phi_phi_fu_98296_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2123_V_read2193_phi_phi_fu_98296_p4 = ap_phi_mux_data_2123_V_read2193_rewind_phi_fu_55605_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2123_V_read2193_phi_phi_fu_98296_p4 = data_2123_V_read.read();
        } else {
            ap_phi_mux_data_2123_V_read2193_phi_phi_fu_98296_p4 = ap_phi_reg_pp0_iter0_data_2123_V_read2193_phi_reg_98292.read();
        }
    } else {
        ap_phi_mux_data_2123_V_read2193_phi_phi_fu_98296_p4 = ap_phi_reg_pp0_iter0_data_2123_V_read2193_phi_reg_98292.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2123_V_read2193_rewind_phi_fu_55605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2123_V_read2193_rewind_phi_fu_55605_p6 = data_2123_V_read2193_phi_reg_98292.read();
    } else {
        ap_phi_mux_data_2123_V_read2193_rewind_phi_fu_55605_p6 = data_2123_V_read2193_rewind_reg_55601.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2124_V_read2194_phi_phi_fu_98309_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2124_V_read2194_phi_phi_fu_98309_p4 = ap_phi_mux_data_2124_V_read2194_rewind_phi_fu_55619_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2124_V_read2194_phi_phi_fu_98309_p4 = data_2124_V_read.read();
        } else {
            ap_phi_mux_data_2124_V_read2194_phi_phi_fu_98309_p4 = ap_phi_reg_pp0_iter0_data_2124_V_read2194_phi_reg_98305.read();
        }
    } else {
        ap_phi_mux_data_2124_V_read2194_phi_phi_fu_98309_p4 = ap_phi_reg_pp0_iter0_data_2124_V_read2194_phi_reg_98305.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2124_V_read2194_rewind_phi_fu_55619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2124_V_read2194_rewind_phi_fu_55619_p6 = data_2124_V_read2194_phi_reg_98305.read();
    } else {
        ap_phi_mux_data_2124_V_read2194_rewind_phi_fu_55619_p6 = data_2124_V_read2194_rewind_reg_55615.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2125_V_read2195_phi_phi_fu_98322_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2125_V_read2195_phi_phi_fu_98322_p4 = ap_phi_mux_data_2125_V_read2195_rewind_phi_fu_55633_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2125_V_read2195_phi_phi_fu_98322_p4 = data_2125_V_read.read();
        } else {
            ap_phi_mux_data_2125_V_read2195_phi_phi_fu_98322_p4 = ap_phi_reg_pp0_iter0_data_2125_V_read2195_phi_reg_98318.read();
        }
    } else {
        ap_phi_mux_data_2125_V_read2195_phi_phi_fu_98322_p4 = ap_phi_reg_pp0_iter0_data_2125_V_read2195_phi_reg_98318.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2125_V_read2195_rewind_phi_fu_55633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2125_V_read2195_rewind_phi_fu_55633_p6 = data_2125_V_read2195_phi_reg_98318.read();
    } else {
        ap_phi_mux_data_2125_V_read2195_rewind_phi_fu_55633_p6 = data_2125_V_read2195_rewind_reg_55629.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2126_V_read2196_phi_phi_fu_98335_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2126_V_read2196_phi_phi_fu_98335_p4 = ap_phi_mux_data_2126_V_read2196_rewind_phi_fu_55647_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2126_V_read2196_phi_phi_fu_98335_p4 = data_2126_V_read.read();
        } else {
            ap_phi_mux_data_2126_V_read2196_phi_phi_fu_98335_p4 = ap_phi_reg_pp0_iter0_data_2126_V_read2196_phi_reg_98331.read();
        }
    } else {
        ap_phi_mux_data_2126_V_read2196_phi_phi_fu_98335_p4 = ap_phi_reg_pp0_iter0_data_2126_V_read2196_phi_reg_98331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2126_V_read2196_rewind_phi_fu_55647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2126_V_read2196_rewind_phi_fu_55647_p6 = data_2126_V_read2196_phi_reg_98331.read();
    } else {
        ap_phi_mux_data_2126_V_read2196_rewind_phi_fu_55647_p6 = data_2126_V_read2196_rewind_reg_55643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2127_V_read2197_phi_phi_fu_98348_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2127_V_read2197_phi_phi_fu_98348_p4 = ap_phi_mux_data_2127_V_read2197_rewind_phi_fu_55661_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2127_V_read2197_phi_phi_fu_98348_p4 = data_2127_V_read.read();
        } else {
            ap_phi_mux_data_2127_V_read2197_phi_phi_fu_98348_p4 = ap_phi_reg_pp0_iter0_data_2127_V_read2197_phi_reg_98344.read();
        }
    } else {
        ap_phi_mux_data_2127_V_read2197_phi_phi_fu_98348_p4 = ap_phi_reg_pp0_iter0_data_2127_V_read2197_phi_reg_98344.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2127_V_read2197_rewind_phi_fu_55661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2127_V_read2197_rewind_phi_fu_55661_p6 = data_2127_V_read2197_phi_reg_98344.read();
    } else {
        ap_phi_mux_data_2127_V_read2197_rewind_phi_fu_55661_p6 = data_2127_V_read2197_rewind_reg_55657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2128_V_read2198_phi_phi_fu_98361_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2128_V_read2198_phi_phi_fu_98361_p4 = ap_phi_mux_data_2128_V_read2198_rewind_phi_fu_55675_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2128_V_read2198_phi_phi_fu_98361_p4 = data_2128_V_read.read();
        } else {
            ap_phi_mux_data_2128_V_read2198_phi_phi_fu_98361_p4 = ap_phi_reg_pp0_iter0_data_2128_V_read2198_phi_reg_98357.read();
        }
    } else {
        ap_phi_mux_data_2128_V_read2198_phi_phi_fu_98361_p4 = ap_phi_reg_pp0_iter0_data_2128_V_read2198_phi_reg_98357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2128_V_read2198_rewind_phi_fu_55675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2128_V_read2198_rewind_phi_fu_55675_p6 = data_2128_V_read2198_phi_reg_98357.read();
    } else {
        ap_phi_mux_data_2128_V_read2198_rewind_phi_fu_55675_p6 = data_2128_V_read2198_rewind_reg_55671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2129_V_read2199_phi_phi_fu_98374_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2129_V_read2199_phi_phi_fu_98374_p4 = ap_phi_mux_data_2129_V_read2199_rewind_phi_fu_55689_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2129_V_read2199_phi_phi_fu_98374_p4 = data_2129_V_read.read();
        } else {
            ap_phi_mux_data_2129_V_read2199_phi_phi_fu_98374_p4 = ap_phi_reg_pp0_iter0_data_2129_V_read2199_phi_reg_98370.read();
        }
    } else {
        ap_phi_mux_data_2129_V_read2199_phi_phi_fu_98374_p4 = ap_phi_reg_pp0_iter0_data_2129_V_read2199_phi_reg_98370.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2129_V_read2199_rewind_phi_fu_55689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2129_V_read2199_rewind_phi_fu_55689_p6 = data_2129_V_read2199_phi_reg_98370.read();
    } else {
        ap_phi_mux_data_2129_V_read2199_rewind_phi_fu_55689_p6 = data_2129_V_read2199_rewind_reg_55685.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_212_V_read282_phi_phi_fu_73453_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_212_V_read282_phi_phi_fu_73453_p4 = ap_phi_mux_data_212_V_read282_rewind_phi_fu_28851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_212_V_read282_phi_phi_fu_73453_p4 = data_212_V_read.read();
        } else {
            ap_phi_mux_data_212_V_read282_phi_phi_fu_73453_p4 = ap_phi_reg_pp0_iter0_data_212_V_read282_phi_reg_73449.read();
        }
    } else {
        ap_phi_mux_data_212_V_read282_phi_phi_fu_73453_p4 = ap_phi_reg_pp0_iter0_data_212_V_read282_phi_reg_73449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_212_V_read282_rewind_phi_fu_28851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_212_V_read282_rewind_phi_fu_28851_p6 = data_212_V_read282_phi_reg_73449.read();
    } else {
        ap_phi_mux_data_212_V_read282_rewind_phi_fu_28851_p6 = data_212_V_read282_rewind_reg_28847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2130_V_read2200_phi_phi_fu_98387_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2130_V_read2200_phi_phi_fu_98387_p4 = ap_phi_mux_data_2130_V_read2200_rewind_phi_fu_55703_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2130_V_read2200_phi_phi_fu_98387_p4 = data_2130_V_read.read();
        } else {
            ap_phi_mux_data_2130_V_read2200_phi_phi_fu_98387_p4 = ap_phi_reg_pp0_iter0_data_2130_V_read2200_phi_reg_98383.read();
        }
    } else {
        ap_phi_mux_data_2130_V_read2200_phi_phi_fu_98387_p4 = ap_phi_reg_pp0_iter0_data_2130_V_read2200_phi_reg_98383.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2130_V_read2200_rewind_phi_fu_55703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2130_V_read2200_rewind_phi_fu_55703_p6 = data_2130_V_read2200_phi_reg_98383.read();
    } else {
        ap_phi_mux_data_2130_V_read2200_rewind_phi_fu_55703_p6 = data_2130_V_read2200_rewind_reg_55699.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2131_V_read2201_phi_phi_fu_98400_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2131_V_read2201_phi_phi_fu_98400_p4 = ap_phi_mux_data_2131_V_read2201_rewind_phi_fu_55717_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2131_V_read2201_phi_phi_fu_98400_p4 = data_2131_V_read.read();
        } else {
            ap_phi_mux_data_2131_V_read2201_phi_phi_fu_98400_p4 = ap_phi_reg_pp0_iter0_data_2131_V_read2201_phi_reg_98396.read();
        }
    } else {
        ap_phi_mux_data_2131_V_read2201_phi_phi_fu_98400_p4 = ap_phi_reg_pp0_iter0_data_2131_V_read2201_phi_reg_98396.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2131_V_read2201_rewind_phi_fu_55717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2131_V_read2201_rewind_phi_fu_55717_p6 = data_2131_V_read2201_phi_reg_98396.read();
    } else {
        ap_phi_mux_data_2131_V_read2201_rewind_phi_fu_55717_p6 = data_2131_V_read2201_rewind_reg_55713.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2132_V_read2202_phi_phi_fu_98413_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2132_V_read2202_phi_phi_fu_98413_p4 = ap_phi_mux_data_2132_V_read2202_rewind_phi_fu_55731_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2132_V_read2202_phi_phi_fu_98413_p4 = data_2132_V_read.read();
        } else {
            ap_phi_mux_data_2132_V_read2202_phi_phi_fu_98413_p4 = ap_phi_reg_pp0_iter0_data_2132_V_read2202_phi_reg_98409.read();
        }
    } else {
        ap_phi_mux_data_2132_V_read2202_phi_phi_fu_98413_p4 = ap_phi_reg_pp0_iter0_data_2132_V_read2202_phi_reg_98409.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2132_V_read2202_rewind_phi_fu_55731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2132_V_read2202_rewind_phi_fu_55731_p6 = data_2132_V_read2202_phi_reg_98409.read();
    } else {
        ap_phi_mux_data_2132_V_read2202_rewind_phi_fu_55731_p6 = data_2132_V_read2202_rewind_reg_55727.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2133_V_read2203_phi_phi_fu_98426_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2133_V_read2203_phi_phi_fu_98426_p4 = ap_phi_mux_data_2133_V_read2203_rewind_phi_fu_55745_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2133_V_read2203_phi_phi_fu_98426_p4 = data_2133_V_read.read();
        } else {
            ap_phi_mux_data_2133_V_read2203_phi_phi_fu_98426_p4 = ap_phi_reg_pp0_iter0_data_2133_V_read2203_phi_reg_98422.read();
        }
    } else {
        ap_phi_mux_data_2133_V_read2203_phi_phi_fu_98426_p4 = ap_phi_reg_pp0_iter0_data_2133_V_read2203_phi_reg_98422.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2133_V_read2203_rewind_phi_fu_55745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2133_V_read2203_rewind_phi_fu_55745_p6 = data_2133_V_read2203_phi_reg_98422.read();
    } else {
        ap_phi_mux_data_2133_V_read2203_rewind_phi_fu_55745_p6 = data_2133_V_read2203_rewind_reg_55741.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2134_V_read2204_phi_phi_fu_98439_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2134_V_read2204_phi_phi_fu_98439_p4 = ap_phi_mux_data_2134_V_read2204_rewind_phi_fu_55759_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2134_V_read2204_phi_phi_fu_98439_p4 = data_2134_V_read.read();
        } else {
            ap_phi_mux_data_2134_V_read2204_phi_phi_fu_98439_p4 = ap_phi_reg_pp0_iter0_data_2134_V_read2204_phi_reg_98435.read();
        }
    } else {
        ap_phi_mux_data_2134_V_read2204_phi_phi_fu_98439_p4 = ap_phi_reg_pp0_iter0_data_2134_V_read2204_phi_reg_98435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2134_V_read2204_rewind_phi_fu_55759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2134_V_read2204_rewind_phi_fu_55759_p6 = data_2134_V_read2204_phi_reg_98435.read();
    } else {
        ap_phi_mux_data_2134_V_read2204_rewind_phi_fu_55759_p6 = data_2134_V_read2204_rewind_reg_55755.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2135_V_read2205_phi_phi_fu_98452_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2135_V_read2205_phi_phi_fu_98452_p4 = ap_phi_mux_data_2135_V_read2205_rewind_phi_fu_55773_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2135_V_read2205_phi_phi_fu_98452_p4 = data_2135_V_read.read();
        } else {
            ap_phi_mux_data_2135_V_read2205_phi_phi_fu_98452_p4 = ap_phi_reg_pp0_iter0_data_2135_V_read2205_phi_reg_98448.read();
        }
    } else {
        ap_phi_mux_data_2135_V_read2205_phi_phi_fu_98452_p4 = ap_phi_reg_pp0_iter0_data_2135_V_read2205_phi_reg_98448.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2135_V_read2205_rewind_phi_fu_55773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2135_V_read2205_rewind_phi_fu_55773_p6 = data_2135_V_read2205_phi_reg_98448.read();
    } else {
        ap_phi_mux_data_2135_V_read2205_rewind_phi_fu_55773_p6 = data_2135_V_read2205_rewind_reg_55769.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2136_V_read2206_phi_phi_fu_98465_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2136_V_read2206_phi_phi_fu_98465_p4 = ap_phi_mux_data_2136_V_read2206_rewind_phi_fu_55787_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2136_V_read2206_phi_phi_fu_98465_p4 = data_2136_V_read.read();
        } else {
            ap_phi_mux_data_2136_V_read2206_phi_phi_fu_98465_p4 = ap_phi_reg_pp0_iter0_data_2136_V_read2206_phi_reg_98461.read();
        }
    } else {
        ap_phi_mux_data_2136_V_read2206_phi_phi_fu_98465_p4 = ap_phi_reg_pp0_iter0_data_2136_V_read2206_phi_reg_98461.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2136_V_read2206_rewind_phi_fu_55787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2136_V_read2206_rewind_phi_fu_55787_p6 = data_2136_V_read2206_phi_reg_98461.read();
    } else {
        ap_phi_mux_data_2136_V_read2206_rewind_phi_fu_55787_p6 = data_2136_V_read2206_rewind_reg_55783.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2137_V_read2207_phi_phi_fu_98478_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2137_V_read2207_phi_phi_fu_98478_p4 = ap_phi_mux_data_2137_V_read2207_rewind_phi_fu_55801_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2137_V_read2207_phi_phi_fu_98478_p4 = data_2137_V_read.read();
        } else {
            ap_phi_mux_data_2137_V_read2207_phi_phi_fu_98478_p4 = ap_phi_reg_pp0_iter0_data_2137_V_read2207_phi_reg_98474.read();
        }
    } else {
        ap_phi_mux_data_2137_V_read2207_phi_phi_fu_98478_p4 = ap_phi_reg_pp0_iter0_data_2137_V_read2207_phi_reg_98474.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2137_V_read2207_rewind_phi_fu_55801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2137_V_read2207_rewind_phi_fu_55801_p6 = data_2137_V_read2207_phi_reg_98474.read();
    } else {
        ap_phi_mux_data_2137_V_read2207_rewind_phi_fu_55801_p6 = data_2137_V_read2207_rewind_reg_55797.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2138_V_read2208_phi_phi_fu_98491_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2138_V_read2208_phi_phi_fu_98491_p4 = ap_phi_mux_data_2138_V_read2208_rewind_phi_fu_55815_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2138_V_read2208_phi_phi_fu_98491_p4 = data_2138_V_read.read();
        } else {
            ap_phi_mux_data_2138_V_read2208_phi_phi_fu_98491_p4 = ap_phi_reg_pp0_iter0_data_2138_V_read2208_phi_reg_98487.read();
        }
    } else {
        ap_phi_mux_data_2138_V_read2208_phi_phi_fu_98491_p4 = ap_phi_reg_pp0_iter0_data_2138_V_read2208_phi_reg_98487.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2138_V_read2208_rewind_phi_fu_55815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2138_V_read2208_rewind_phi_fu_55815_p6 = data_2138_V_read2208_phi_reg_98487.read();
    } else {
        ap_phi_mux_data_2138_V_read2208_rewind_phi_fu_55815_p6 = data_2138_V_read2208_rewind_reg_55811.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2139_V_read2209_phi_phi_fu_98504_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2139_V_read2209_phi_phi_fu_98504_p4 = ap_phi_mux_data_2139_V_read2209_rewind_phi_fu_55829_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2139_V_read2209_phi_phi_fu_98504_p4 = data_2139_V_read.read();
        } else {
            ap_phi_mux_data_2139_V_read2209_phi_phi_fu_98504_p4 = ap_phi_reg_pp0_iter0_data_2139_V_read2209_phi_reg_98500.read();
        }
    } else {
        ap_phi_mux_data_2139_V_read2209_phi_phi_fu_98504_p4 = ap_phi_reg_pp0_iter0_data_2139_V_read2209_phi_reg_98500.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2139_V_read2209_rewind_phi_fu_55829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2139_V_read2209_rewind_phi_fu_55829_p6 = data_2139_V_read2209_phi_reg_98500.read();
    } else {
        ap_phi_mux_data_2139_V_read2209_rewind_phi_fu_55829_p6 = data_2139_V_read2209_rewind_reg_55825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_213_V_read283_phi_phi_fu_73466_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_213_V_read283_phi_phi_fu_73466_p4 = ap_phi_mux_data_213_V_read283_rewind_phi_fu_28865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_213_V_read283_phi_phi_fu_73466_p4 = data_213_V_read.read();
        } else {
            ap_phi_mux_data_213_V_read283_phi_phi_fu_73466_p4 = ap_phi_reg_pp0_iter0_data_213_V_read283_phi_reg_73462.read();
        }
    } else {
        ap_phi_mux_data_213_V_read283_phi_phi_fu_73466_p4 = ap_phi_reg_pp0_iter0_data_213_V_read283_phi_reg_73462.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_213_V_read283_rewind_phi_fu_28865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_213_V_read283_rewind_phi_fu_28865_p6 = data_213_V_read283_phi_reg_73462.read();
    } else {
        ap_phi_mux_data_213_V_read283_rewind_phi_fu_28865_p6 = data_213_V_read283_rewind_reg_28861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2140_V_read2210_phi_phi_fu_98517_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2140_V_read2210_phi_phi_fu_98517_p4 = ap_phi_mux_data_2140_V_read2210_rewind_phi_fu_55843_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2140_V_read2210_phi_phi_fu_98517_p4 = data_2140_V_read.read();
        } else {
            ap_phi_mux_data_2140_V_read2210_phi_phi_fu_98517_p4 = ap_phi_reg_pp0_iter0_data_2140_V_read2210_phi_reg_98513.read();
        }
    } else {
        ap_phi_mux_data_2140_V_read2210_phi_phi_fu_98517_p4 = ap_phi_reg_pp0_iter0_data_2140_V_read2210_phi_reg_98513.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2140_V_read2210_rewind_phi_fu_55843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2140_V_read2210_rewind_phi_fu_55843_p6 = data_2140_V_read2210_phi_reg_98513.read();
    } else {
        ap_phi_mux_data_2140_V_read2210_rewind_phi_fu_55843_p6 = data_2140_V_read2210_rewind_reg_55839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2141_V_read2211_phi_phi_fu_98530_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2141_V_read2211_phi_phi_fu_98530_p4 = ap_phi_mux_data_2141_V_read2211_rewind_phi_fu_55857_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2141_V_read2211_phi_phi_fu_98530_p4 = data_2141_V_read.read();
        } else {
            ap_phi_mux_data_2141_V_read2211_phi_phi_fu_98530_p4 = ap_phi_reg_pp0_iter0_data_2141_V_read2211_phi_reg_98526.read();
        }
    } else {
        ap_phi_mux_data_2141_V_read2211_phi_phi_fu_98530_p4 = ap_phi_reg_pp0_iter0_data_2141_V_read2211_phi_reg_98526.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2141_V_read2211_rewind_phi_fu_55857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2141_V_read2211_rewind_phi_fu_55857_p6 = data_2141_V_read2211_phi_reg_98526.read();
    } else {
        ap_phi_mux_data_2141_V_read2211_rewind_phi_fu_55857_p6 = data_2141_V_read2211_rewind_reg_55853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2142_V_read2212_phi_phi_fu_98543_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2142_V_read2212_phi_phi_fu_98543_p4 = ap_phi_mux_data_2142_V_read2212_rewind_phi_fu_55871_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2142_V_read2212_phi_phi_fu_98543_p4 = data_2142_V_read.read();
        } else {
            ap_phi_mux_data_2142_V_read2212_phi_phi_fu_98543_p4 = ap_phi_reg_pp0_iter0_data_2142_V_read2212_phi_reg_98539.read();
        }
    } else {
        ap_phi_mux_data_2142_V_read2212_phi_phi_fu_98543_p4 = ap_phi_reg_pp0_iter0_data_2142_V_read2212_phi_reg_98539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2142_V_read2212_rewind_phi_fu_55871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2142_V_read2212_rewind_phi_fu_55871_p6 = data_2142_V_read2212_phi_reg_98539.read();
    } else {
        ap_phi_mux_data_2142_V_read2212_rewind_phi_fu_55871_p6 = data_2142_V_read2212_rewind_reg_55867.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2143_V_read2213_phi_phi_fu_98556_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2143_V_read2213_phi_phi_fu_98556_p4 = ap_phi_mux_data_2143_V_read2213_rewind_phi_fu_55885_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2143_V_read2213_phi_phi_fu_98556_p4 = data_2143_V_read.read();
        } else {
            ap_phi_mux_data_2143_V_read2213_phi_phi_fu_98556_p4 = ap_phi_reg_pp0_iter0_data_2143_V_read2213_phi_reg_98552.read();
        }
    } else {
        ap_phi_mux_data_2143_V_read2213_phi_phi_fu_98556_p4 = ap_phi_reg_pp0_iter0_data_2143_V_read2213_phi_reg_98552.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2143_V_read2213_rewind_phi_fu_55885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2143_V_read2213_rewind_phi_fu_55885_p6 = data_2143_V_read2213_phi_reg_98552.read();
    } else {
        ap_phi_mux_data_2143_V_read2213_rewind_phi_fu_55885_p6 = data_2143_V_read2213_rewind_reg_55881.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2144_V_read2214_phi_phi_fu_98569_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2144_V_read2214_phi_phi_fu_98569_p4 = ap_phi_mux_data_2144_V_read2214_rewind_phi_fu_55899_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2144_V_read2214_phi_phi_fu_98569_p4 = data_2144_V_read.read();
        } else {
            ap_phi_mux_data_2144_V_read2214_phi_phi_fu_98569_p4 = ap_phi_reg_pp0_iter0_data_2144_V_read2214_phi_reg_98565.read();
        }
    } else {
        ap_phi_mux_data_2144_V_read2214_phi_phi_fu_98569_p4 = ap_phi_reg_pp0_iter0_data_2144_V_read2214_phi_reg_98565.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2144_V_read2214_rewind_phi_fu_55899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2144_V_read2214_rewind_phi_fu_55899_p6 = data_2144_V_read2214_phi_reg_98565.read();
    } else {
        ap_phi_mux_data_2144_V_read2214_rewind_phi_fu_55899_p6 = data_2144_V_read2214_rewind_reg_55895.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2145_V_read2215_phi_phi_fu_98582_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2145_V_read2215_phi_phi_fu_98582_p4 = ap_phi_mux_data_2145_V_read2215_rewind_phi_fu_55913_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2145_V_read2215_phi_phi_fu_98582_p4 = data_2145_V_read.read();
        } else {
            ap_phi_mux_data_2145_V_read2215_phi_phi_fu_98582_p4 = ap_phi_reg_pp0_iter0_data_2145_V_read2215_phi_reg_98578.read();
        }
    } else {
        ap_phi_mux_data_2145_V_read2215_phi_phi_fu_98582_p4 = ap_phi_reg_pp0_iter0_data_2145_V_read2215_phi_reg_98578.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2145_V_read2215_rewind_phi_fu_55913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2145_V_read2215_rewind_phi_fu_55913_p6 = data_2145_V_read2215_phi_reg_98578.read();
    } else {
        ap_phi_mux_data_2145_V_read2215_rewind_phi_fu_55913_p6 = data_2145_V_read2215_rewind_reg_55909.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2146_V_read2216_phi_phi_fu_98595_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2146_V_read2216_phi_phi_fu_98595_p4 = ap_phi_mux_data_2146_V_read2216_rewind_phi_fu_55927_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2146_V_read2216_phi_phi_fu_98595_p4 = data_2146_V_read.read();
        } else {
            ap_phi_mux_data_2146_V_read2216_phi_phi_fu_98595_p4 = ap_phi_reg_pp0_iter0_data_2146_V_read2216_phi_reg_98591.read();
        }
    } else {
        ap_phi_mux_data_2146_V_read2216_phi_phi_fu_98595_p4 = ap_phi_reg_pp0_iter0_data_2146_V_read2216_phi_reg_98591.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2146_V_read2216_rewind_phi_fu_55927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2146_V_read2216_rewind_phi_fu_55927_p6 = data_2146_V_read2216_phi_reg_98591.read();
    } else {
        ap_phi_mux_data_2146_V_read2216_rewind_phi_fu_55927_p6 = data_2146_V_read2216_rewind_reg_55923.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2147_V_read2217_phi_phi_fu_98608_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2147_V_read2217_phi_phi_fu_98608_p4 = ap_phi_mux_data_2147_V_read2217_rewind_phi_fu_55941_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2147_V_read2217_phi_phi_fu_98608_p4 = data_2147_V_read.read();
        } else {
            ap_phi_mux_data_2147_V_read2217_phi_phi_fu_98608_p4 = ap_phi_reg_pp0_iter0_data_2147_V_read2217_phi_reg_98604.read();
        }
    } else {
        ap_phi_mux_data_2147_V_read2217_phi_phi_fu_98608_p4 = ap_phi_reg_pp0_iter0_data_2147_V_read2217_phi_reg_98604.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2147_V_read2217_rewind_phi_fu_55941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2147_V_read2217_rewind_phi_fu_55941_p6 = data_2147_V_read2217_phi_reg_98604.read();
    } else {
        ap_phi_mux_data_2147_V_read2217_rewind_phi_fu_55941_p6 = data_2147_V_read2217_rewind_reg_55937.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2148_V_read2218_phi_phi_fu_98621_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2148_V_read2218_phi_phi_fu_98621_p4 = ap_phi_mux_data_2148_V_read2218_rewind_phi_fu_55955_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2148_V_read2218_phi_phi_fu_98621_p4 = data_2148_V_read.read();
        } else {
            ap_phi_mux_data_2148_V_read2218_phi_phi_fu_98621_p4 = ap_phi_reg_pp0_iter0_data_2148_V_read2218_phi_reg_98617.read();
        }
    } else {
        ap_phi_mux_data_2148_V_read2218_phi_phi_fu_98621_p4 = ap_phi_reg_pp0_iter0_data_2148_V_read2218_phi_reg_98617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2148_V_read2218_rewind_phi_fu_55955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2148_V_read2218_rewind_phi_fu_55955_p6 = data_2148_V_read2218_phi_reg_98617.read();
    } else {
        ap_phi_mux_data_2148_V_read2218_rewind_phi_fu_55955_p6 = data_2148_V_read2218_rewind_reg_55951.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2149_V_read2219_phi_phi_fu_98634_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2149_V_read2219_phi_phi_fu_98634_p4 = ap_phi_mux_data_2149_V_read2219_rewind_phi_fu_55969_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2149_V_read2219_phi_phi_fu_98634_p4 = data_2149_V_read.read();
        } else {
            ap_phi_mux_data_2149_V_read2219_phi_phi_fu_98634_p4 = ap_phi_reg_pp0_iter0_data_2149_V_read2219_phi_reg_98630.read();
        }
    } else {
        ap_phi_mux_data_2149_V_read2219_phi_phi_fu_98634_p4 = ap_phi_reg_pp0_iter0_data_2149_V_read2219_phi_reg_98630.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2149_V_read2219_rewind_phi_fu_55969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2149_V_read2219_rewind_phi_fu_55969_p6 = data_2149_V_read2219_phi_reg_98630.read();
    } else {
        ap_phi_mux_data_2149_V_read2219_rewind_phi_fu_55969_p6 = data_2149_V_read2219_rewind_reg_55965.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_214_V_read284_phi_phi_fu_73479_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_214_V_read284_phi_phi_fu_73479_p4 = ap_phi_mux_data_214_V_read284_rewind_phi_fu_28879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_214_V_read284_phi_phi_fu_73479_p4 = data_214_V_read.read();
        } else {
            ap_phi_mux_data_214_V_read284_phi_phi_fu_73479_p4 = ap_phi_reg_pp0_iter0_data_214_V_read284_phi_reg_73475.read();
        }
    } else {
        ap_phi_mux_data_214_V_read284_phi_phi_fu_73479_p4 = ap_phi_reg_pp0_iter0_data_214_V_read284_phi_reg_73475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_214_V_read284_rewind_phi_fu_28879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_214_V_read284_rewind_phi_fu_28879_p6 = data_214_V_read284_phi_reg_73475.read();
    } else {
        ap_phi_mux_data_214_V_read284_rewind_phi_fu_28879_p6 = data_214_V_read284_rewind_reg_28875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2150_V_read2220_phi_phi_fu_98647_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2150_V_read2220_phi_phi_fu_98647_p4 = ap_phi_mux_data_2150_V_read2220_rewind_phi_fu_55983_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2150_V_read2220_phi_phi_fu_98647_p4 = data_2150_V_read.read();
        } else {
            ap_phi_mux_data_2150_V_read2220_phi_phi_fu_98647_p4 = ap_phi_reg_pp0_iter0_data_2150_V_read2220_phi_reg_98643.read();
        }
    } else {
        ap_phi_mux_data_2150_V_read2220_phi_phi_fu_98647_p4 = ap_phi_reg_pp0_iter0_data_2150_V_read2220_phi_reg_98643.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2150_V_read2220_rewind_phi_fu_55983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2150_V_read2220_rewind_phi_fu_55983_p6 = data_2150_V_read2220_phi_reg_98643.read();
    } else {
        ap_phi_mux_data_2150_V_read2220_rewind_phi_fu_55983_p6 = data_2150_V_read2220_rewind_reg_55979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2151_V_read2221_phi_phi_fu_98660_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2151_V_read2221_phi_phi_fu_98660_p4 = ap_phi_mux_data_2151_V_read2221_rewind_phi_fu_55997_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2151_V_read2221_phi_phi_fu_98660_p4 = data_2151_V_read.read();
        } else {
            ap_phi_mux_data_2151_V_read2221_phi_phi_fu_98660_p4 = ap_phi_reg_pp0_iter0_data_2151_V_read2221_phi_reg_98656.read();
        }
    } else {
        ap_phi_mux_data_2151_V_read2221_phi_phi_fu_98660_p4 = ap_phi_reg_pp0_iter0_data_2151_V_read2221_phi_reg_98656.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2151_V_read2221_rewind_phi_fu_55997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2151_V_read2221_rewind_phi_fu_55997_p6 = data_2151_V_read2221_phi_reg_98656.read();
    } else {
        ap_phi_mux_data_2151_V_read2221_rewind_phi_fu_55997_p6 = data_2151_V_read2221_rewind_reg_55993.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2152_V_read2222_phi_phi_fu_98673_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2152_V_read2222_phi_phi_fu_98673_p4 = ap_phi_mux_data_2152_V_read2222_rewind_phi_fu_56011_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2152_V_read2222_phi_phi_fu_98673_p4 = data_2152_V_read.read();
        } else {
            ap_phi_mux_data_2152_V_read2222_phi_phi_fu_98673_p4 = ap_phi_reg_pp0_iter0_data_2152_V_read2222_phi_reg_98669.read();
        }
    } else {
        ap_phi_mux_data_2152_V_read2222_phi_phi_fu_98673_p4 = ap_phi_reg_pp0_iter0_data_2152_V_read2222_phi_reg_98669.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2152_V_read2222_rewind_phi_fu_56011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2152_V_read2222_rewind_phi_fu_56011_p6 = data_2152_V_read2222_phi_reg_98669.read();
    } else {
        ap_phi_mux_data_2152_V_read2222_rewind_phi_fu_56011_p6 = data_2152_V_read2222_rewind_reg_56007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2153_V_read2223_phi_phi_fu_98686_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2153_V_read2223_phi_phi_fu_98686_p4 = ap_phi_mux_data_2153_V_read2223_rewind_phi_fu_56025_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2153_V_read2223_phi_phi_fu_98686_p4 = data_2153_V_read.read();
        } else {
            ap_phi_mux_data_2153_V_read2223_phi_phi_fu_98686_p4 = ap_phi_reg_pp0_iter0_data_2153_V_read2223_phi_reg_98682.read();
        }
    } else {
        ap_phi_mux_data_2153_V_read2223_phi_phi_fu_98686_p4 = ap_phi_reg_pp0_iter0_data_2153_V_read2223_phi_reg_98682.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2153_V_read2223_rewind_phi_fu_56025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2153_V_read2223_rewind_phi_fu_56025_p6 = data_2153_V_read2223_phi_reg_98682.read();
    } else {
        ap_phi_mux_data_2153_V_read2223_rewind_phi_fu_56025_p6 = data_2153_V_read2223_rewind_reg_56021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2154_V_read2224_phi_phi_fu_98699_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2154_V_read2224_phi_phi_fu_98699_p4 = ap_phi_mux_data_2154_V_read2224_rewind_phi_fu_56039_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2154_V_read2224_phi_phi_fu_98699_p4 = data_2154_V_read.read();
        } else {
            ap_phi_mux_data_2154_V_read2224_phi_phi_fu_98699_p4 = ap_phi_reg_pp0_iter0_data_2154_V_read2224_phi_reg_98695.read();
        }
    } else {
        ap_phi_mux_data_2154_V_read2224_phi_phi_fu_98699_p4 = ap_phi_reg_pp0_iter0_data_2154_V_read2224_phi_reg_98695.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2154_V_read2224_rewind_phi_fu_56039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2154_V_read2224_rewind_phi_fu_56039_p6 = data_2154_V_read2224_phi_reg_98695.read();
    } else {
        ap_phi_mux_data_2154_V_read2224_rewind_phi_fu_56039_p6 = data_2154_V_read2224_rewind_reg_56035.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2155_V_read2225_phi_phi_fu_98712_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2155_V_read2225_phi_phi_fu_98712_p4 = ap_phi_mux_data_2155_V_read2225_rewind_phi_fu_56053_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2155_V_read2225_phi_phi_fu_98712_p4 = data_2155_V_read.read();
        } else {
            ap_phi_mux_data_2155_V_read2225_phi_phi_fu_98712_p4 = ap_phi_reg_pp0_iter0_data_2155_V_read2225_phi_reg_98708.read();
        }
    } else {
        ap_phi_mux_data_2155_V_read2225_phi_phi_fu_98712_p4 = ap_phi_reg_pp0_iter0_data_2155_V_read2225_phi_reg_98708.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2155_V_read2225_rewind_phi_fu_56053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2155_V_read2225_rewind_phi_fu_56053_p6 = data_2155_V_read2225_phi_reg_98708.read();
    } else {
        ap_phi_mux_data_2155_V_read2225_rewind_phi_fu_56053_p6 = data_2155_V_read2225_rewind_reg_56049.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2156_V_read2226_phi_phi_fu_98725_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2156_V_read2226_phi_phi_fu_98725_p4 = ap_phi_mux_data_2156_V_read2226_rewind_phi_fu_56067_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2156_V_read2226_phi_phi_fu_98725_p4 = data_2156_V_read.read();
        } else {
            ap_phi_mux_data_2156_V_read2226_phi_phi_fu_98725_p4 = ap_phi_reg_pp0_iter0_data_2156_V_read2226_phi_reg_98721.read();
        }
    } else {
        ap_phi_mux_data_2156_V_read2226_phi_phi_fu_98725_p4 = ap_phi_reg_pp0_iter0_data_2156_V_read2226_phi_reg_98721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2156_V_read2226_rewind_phi_fu_56067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2156_V_read2226_rewind_phi_fu_56067_p6 = data_2156_V_read2226_phi_reg_98721.read();
    } else {
        ap_phi_mux_data_2156_V_read2226_rewind_phi_fu_56067_p6 = data_2156_V_read2226_rewind_reg_56063.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2157_V_read2227_phi_phi_fu_98738_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2157_V_read2227_phi_phi_fu_98738_p4 = ap_phi_mux_data_2157_V_read2227_rewind_phi_fu_56081_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2157_V_read2227_phi_phi_fu_98738_p4 = data_2157_V_read.read();
        } else {
            ap_phi_mux_data_2157_V_read2227_phi_phi_fu_98738_p4 = ap_phi_reg_pp0_iter0_data_2157_V_read2227_phi_reg_98734.read();
        }
    } else {
        ap_phi_mux_data_2157_V_read2227_phi_phi_fu_98738_p4 = ap_phi_reg_pp0_iter0_data_2157_V_read2227_phi_reg_98734.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2157_V_read2227_rewind_phi_fu_56081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2157_V_read2227_rewind_phi_fu_56081_p6 = data_2157_V_read2227_phi_reg_98734.read();
    } else {
        ap_phi_mux_data_2157_V_read2227_rewind_phi_fu_56081_p6 = data_2157_V_read2227_rewind_reg_56077.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2158_V_read2228_phi_phi_fu_98751_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2158_V_read2228_phi_phi_fu_98751_p4 = ap_phi_mux_data_2158_V_read2228_rewind_phi_fu_56095_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2158_V_read2228_phi_phi_fu_98751_p4 = data_2158_V_read.read();
        } else {
            ap_phi_mux_data_2158_V_read2228_phi_phi_fu_98751_p4 = ap_phi_reg_pp0_iter0_data_2158_V_read2228_phi_reg_98747.read();
        }
    } else {
        ap_phi_mux_data_2158_V_read2228_phi_phi_fu_98751_p4 = ap_phi_reg_pp0_iter0_data_2158_V_read2228_phi_reg_98747.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2158_V_read2228_rewind_phi_fu_56095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2158_V_read2228_rewind_phi_fu_56095_p6 = data_2158_V_read2228_phi_reg_98747.read();
    } else {
        ap_phi_mux_data_2158_V_read2228_rewind_phi_fu_56095_p6 = data_2158_V_read2228_rewind_reg_56091.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2159_V_read2229_phi_phi_fu_98764_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2159_V_read2229_phi_phi_fu_98764_p4 = ap_phi_mux_data_2159_V_read2229_rewind_phi_fu_56109_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2159_V_read2229_phi_phi_fu_98764_p4 = data_2159_V_read.read();
        } else {
            ap_phi_mux_data_2159_V_read2229_phi_phi_fu_98764_p4 = ap_phi_reg_pp0_iter0_data_2159_V_read2229_phi_reg_98760.read();
        }
    } else {
        ap_phi_mux_data_2159_V_read2229_phi_phi_fu_98764_p4 = ap_phi_reg_pp0_iter0_data_2159_V_read2229_phi_reg_98760.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2159_V_read2229_rewind_phi_fu_56109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2159_V_read2229_rewind_phi_fu_56109_p6 = data_2159_V_read2229_phi_reg_98760.read();
    } else {
        ap_phi_mux_data_2159_V_read2229_rewind_phi_fu_56109_p6 = data_2159_V_read2229_rewind_reg_56105.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_215_V_read285_phi_phi_fu_73492_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_215_V_read285_phi_phi_fu_73492_p4 = ap_phi_mux_data_215_V_read285_rewind_phi_fu_28893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_215_V_read285_phi_phi_fu_73492_p4 = data_215_V_read.read();
        } else {
            ap_phi_mux_data_215_V_read285_phi_phi_fu_73492_p4 = ap_phi_reg_pp0_iter0_data_215_V_read285_phi_reg_73488.read();
        }
    } else {
        ap_phi_mux_data_215_V_read285_phi_phi_fu_73492_p4 = ap_phi_reg_pp0_iter0_data_215_V_read285_phi_reg_73488.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_215_V_read285_rewind_phi_fu_28893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_215_V_read285_rewind_phi_fu_28893_p6 = data_215_V_read285_phi_reg_73488.read();
    } else {
        ap_phi_mux_data_215_V_read285_rewind_phi_fu_28893_p6 = data_215_V_read285_rewind_reg_28889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2160_V_read2230_phi_phi_fu_98777_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2160_V_read2230_phi_phi_fu_98777_p4 = ap_phi_mux_data_2160_V_read2230_rewind_phi_fu_56123_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2160_V_read2230_phi_phi_fu_98777_p4 = data_2160_V_read.read();
        } else {
            ap_phi_mux_data_2160_V_read2230_phi_phi_fu_98777_p4 = ap_phi_reg_pp0_iter0_data_2160_V_read2230_phi_reg_98773.read();
        }
    } else {
        ap_phi_mux_data_2160_V_read2230_phi_phi_fu_98777_p4 = ap_phi_reg_pp0_iter0_data_2160_V_read2230_phi_reg_98773.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2160_V_read2230_rewind_phi_fu_56123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2160_V_read2230_rewind_phi_fu_56123_p6 = data_2160_V_read2230_phi_reg_98773.read();
    } else {
        ap_phi_mux_data_2160_V_read2230_rewind_phi_fu_56123_p6 = data_2160_V_read2230_rewind_reg_56119.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2161_V_read2231_phi_phi_fu_98790_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2161_V_read2231_phi_phi_fu_98790_p4 = ap_phi_mux_data_2161_V_read2231_rewind_phi_fu_56137_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2161_V_read2231_phi_phi_fu_98790_p4 = data_2161_V_read.read();
        } else {
            ap_phi_mux_data_2161_V_read2231_phi_phi_fu_98790_p4 = ap_phi_reg_pp0_iter0_data_2161_V_read2231_phi_reg_98786.read();
        }
    } else {
        ap_phi_mux_data_2161_V_read2231_phi_phi_fu_98790_p4 = ap_phi_reg_pp0_iter0_data_2161_V_read2231_phi_reg_98786.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2161_V_read2231_rewind_phi_fu_56137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2161_V_read2231_rewind_phi_fu_56137_p6 = data_2161_V_read2231_phi_reg_98786.read();
    } else {
        ap_phi_mux_data_2161_V_read2231_rewind_phi_fu_56137_p6 = data_2161_V_read2231_rewind_reg_56133.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2162_V_read2232_phi_phi_fu_98803_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2162_V_read2232_phi_phi_fu_98803_p4 = ap_phi_mux_data_2162_V_read2232_rewind_phi_fu_56151_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2162_V_read2232_phi_phi_fu_98803_p4 = data_2162_V_read.read();
        } else {
            ap_phi_mux_data_2162_V_read2232_phi_phi_fu_98803_p4 = ap_phi_reg_pp0_iter0_data_2162_V_read2232_phi_reg_98799.read();
        }
    } else {
        ap_phi_mux_data_2162_V_read2232_phi_phi_fu_98803_p4 = ap_phi_reg_pp0_iter0_data_2162_V_read2232_phi_reg_98799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2162_V_read2232_rewind_phi_fu_56151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2162_V_read2232_rewind_phi_fu_56151_p6 = data_2162_V_read2232_phi_reg_98799.read();
    } else {
        ap_phi_mux_data_2162_V_read2232_rewind_phi_fu_56151_p6 = data_2162_V_read2232_rewind_reg_56147.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2163_V_read2233_phi_phi_fu_98816_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2163_V_read2233_phi_phi_fu_98816_p4 = ap_phi_mux_data_2163_V_read2233_rewind_phi_fu_56165_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2163_V_read2233_phi_phi_fu_98816_p4 = data_2163_V_read.read();
        } else {
            ap_phi_mux_data_2163_V_read2233_phi_phi_fu_98816_p4 = ap_phi_reg_pp0_iter0_data_2163_V_read2233_phi_reg_98812.read();
        }
    } else {
        ap_phi_mux_data_2163_V_read2233_phi_phi_fu_98816_p4 = ap_phi_reg_pp0_iter0_data_2163_V_read2233_phi_reg_98812.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2163_V_read2233_rewind_phi_fu_56165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2163_V_read2233_rewind_phi_fu_56165_p6 = data_2163_V_read2233_phi_reg_98812.read();
    } else {
        ap_phi_mux_data_2163_V_read2233_rewind_phi_fu_56165_p6 = data_2163_V_read2233_rewind_reg_56161.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2164_V_read2234_phi_phi_fu_98829_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2164_V_read2234_phi_phi_fu_98829_p4 = ap_phi_mux_data_2164_V_read2234_rewind_phi_fu_56179_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2164_V_read2234_phi_phi_fu_98829_p4 = data_2164_V_read.read();
        } else {
            ap_phi_mux_data_2164_V_read2234_phi_phi_fu_98829_p4 = ap_phi_reg_pp0_iter0_data_2164_V_read2234_phi_reg_98825.read();
        }
    } else {
        ap_phi_mux_data_2164_V_read2234_phi_phi_fu_98829_p4 = ap_phi_reg_pp0_iter0_data_2164_V_read2234_phi_reg_98825.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2164_V_read2234_rewind_phi_fu_56179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2164_V_read2234_rewind_phi_fu_56179_p6 = data_2164_V_read2234_phi_reg_98825.read();
    } else {
        ap_phi_mux_data_2164_V_read2234_rewind_phi_fu_56179_p6 = data_2164_V_read2234_rewind_reg_56175.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2165_V_read2235_phi_phi_fu_98842_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2165_V_read2235_phi_phi_fu_98842_p4 = ap_phi_mux_data_2165_V_read2235_rewind_phi_fu_56193_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2165_V_read2235_phi_phi_fu_98842_p4 = data_2165_V_read.read();
        } else {
            ap_phi_mux_data_2165_V_read2235_phi_phi_fu_98842_p4 = ap_phi_reg_pp0_iter0_data_2165_V_read2235_phi_reg_98838.read();
        }
    } else {
        ap_phi_mux_data_2165_V_read2235_phi_phi_fu_98842_p4 = ap_phi_reg_pp0_iter0_data_2165_V_read2235_phi_reg_98838.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2165_V_read2235_rewind_phi_fu_56193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2165_V_read2235_rewind_phi_fu_56193_p6 = data_2165_V_read2235_phi_reg_98838.read();
    } else {
        ap_phi_mux_data_2165_V_read2235_rewind_phi_fu_56193_p6 = data_2165_V_read2235_rewind_reg_56189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2166_V_read2236_phi_phi_fu_98855_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2166_V_read2236_phi_phi_fu_98855_p4 = ap_phi_mux_data_2166_V_read2236_rewind_phi_fu_56207_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2166_V_read2236_phi_phi_fu_98855_p4 = data_2166_V_read.read();
        } else {
            ap_phi_mux_data_2166_V_read2236_phi_phi_fu_98855_p4 = ap_phi_reg_pp0_iter0_data_2166_V_read2236_phi_reg_98851.read();
        }
    } else {
        ap_phi_mux_data_2166_V_read2236_phi_phi_fu_98855_p4 = ap_phi_reg_pp0_iter0_data_2166_V_read2236_phi_reg_98851.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2166_V_read2236_rewind_phi_fu_56207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2166_V_read2236_rewind_phi_fu_56207_p6 = data_2166_V_read2236_phi_reg_98851.read();
    } else {
        ap_phi_mux_data_2166_V_read2236_rewind_phi_fu_56207_p6 = data_2166_V_read2236_rewind_reg_56203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2167_V_read2237_phi_phi_fu_98868_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2167_V_read2237_phi_phi_fu_98868_p4 = ap_phi_mux_data_2167_V_read2237_rewind_phi_fu_56221_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2167_V_read2237_phi_phi_fu_98868_p4 = data_2167_V_read.read();
        } else {
            ap_phi_mux_data_2167_V_read2237_phi_phi_fu_98868_p4 = ap_phi_reg_pp0_iter0_data_2167_V_read2237_phi_reg_98864.read();
        }
    } else {
        ap_phi_mux_data_2167_V_read2237_phi_phi_fu_98868_p4 = ap_phi_reg_pp0_iter0_data_2167_V_read2237_phi_reg_98864.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2167_V_read2237_rewind_phi_fu_56221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2167_V_read2237_rewind_phi_fu_56221_p6 = data_2167_V_read2237_phi_reg_98864.read();
    } else {
        ap_phi_mux_data_2167_V_read2237_rewind_phi_fu_56221_p6 = data_2167_V_read2237_rewind_reg_56217.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2168_V_read2238_phi_phi_fu_98881_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2168_V_read2238_phi_phi_fu_98881_p4 = ap_phi_mux_data_2168_V_read2238_rewind_phi_fu_56235_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2168_V_read2238_phi_phi_fu_98881_p4 = data_2168_V_read.read();
        } else {
            ap_phi_mux_data_2168_V_read2238_phi_phi_fu_98881_p4 = ap_phi_reg_pp0_iter0_data_2168_V_read2238_phi_reg_98877.read();
        }
    } else {
        ap_phi_mux_data_2168_V_read2238_phi_phi_fu_98881_p4 = ap_phi_reg_pp0_iter0_data_2168_V_read2238_phi_reg_98877.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2168_V_read2238_rewind_phi_fu_56235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2168_V_read2238_rewind_phi_fu_56235_p6 = data_2168_V_read2238_phi_reg_98877.read();
    } else {
        ap_phi_mux_data_2168_V_read2238_rewind_phi_fu_56235_p6 = data_2168_V_read2238_rewind_reg_56231.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2169_V_read2239_phi_phi_fu_98894_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2169_V_read2239_phi_phi_fu_98894_p4 = ap_phi_mux_data_2169_V_read2239_rewind_phi_fu_56249_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2169_V_read2239_phi_phi_fu_98894_p4 = data_2169_V_read.read();
        } else {
            ap_phi_mux_data_2169_V_read2239_phi_phi_fu_98894_p4 = ap_phi_reg_pp0_iter0_data_2169_V_read2239_phi_reg_98890.read();
        }
    } else {
        ap_phi_mux_data_2169_V_read2239_phi_phi_fu_98894_p4 = ap_phi_reg_pp0_iter0_data_2169_V_read2239_phi_reg_98890.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2169_V_read2239_rewind_phi_fu_56249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2169_V_read2239_rewind_phi_fu_56249_p6 = data_2169_V_read2239_phi_reg_98890.read();
    } else {
        ap_phi_mux_data_2169_V_read2239_rewind_phi_fu_56249_p6 = data_2169_V_read2239_rewind_reg_56245.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_216_V_read286_phi_phi_fu_73505_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_216_V_read286_phi_phi_fu_73505_p4 = ap_phi_mux_data_216_V_read286_rewind_phi_fu_28907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_216_V_read286_phi_phi_fu_73505_p4 = data_216_V_read.read();
        } else {
            ap_phi_mux_data_216_V_read286_phi_phi_fu_73505_p4 = ap_phi_reg_pp0_iter0_data_216_V_read286_phi_reg_73501.read();
        }
    } else {
        ap_phi_mux_data_216_V_read286_phi_phi_fu_73505_p4 = ap_phi_reg_pp0_iter0_data_216_V_read286_phi_reg_73501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_216_V_read286_rewind_phi_fu_28907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_216_V_read286_rewind_phi_fu_28907_p6 = data_216_V_read286_phi_reg_73501.read();
    } else {
        ap_phi_mux_data_216_V_read286_rewind_phi_fu_28907_p6 = data_216_V_read286_rewind_reg_28903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2170_V_read2240_phi_phi_fu_98907_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2170_V_read2240_phi_phi_fu_98907_p4 = ap_phi_mux_data_2170_V_read2240_rewind_phi_fu_56263_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2170_V_read2240_phi_phi_fu_98907_p4 = data_2170_V_read.read();
        } else {
            ap_phi_mux_data_2170_V_read2240_phi_phi_fu_98907_p4 = ap_phi_reg_pp0_iter0_data_2170_V_read2240_phi_reg_98903.read();
        }
    } else {
        ap_phi_mux_data_2170_V_read2240_phi_phi_fu_98907_p4 = ap_phi_reg_pp0_iter0_data_2170_V_read2240_phi_reg_98903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2170_V_read2240_rewind_phi_fu_56263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2170_V_read2240_rewind_phi_fu_56263_p6 = data_2170_V_read2240_phi_reg_98903.read();
    } else {
        ap_phi_mux_data_2170_V_read2240_rewind_phi_fu_56263_p6 = data_2170_V_read2240_rewind_reg_56259.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2171_V_read2241_phi_phi_fu_98920_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2171_V_read2241_phi_phi_fu_98920_p4 = ap_phi_mux_data_2171_V_read2241_rewind_phi_fu_56277_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2171_V_read2241_phi_phi_fu_98920_p4 = data_2171_V_read.read();
        } else {
            ap_phi_mux_data_2171_V_read2241_phi_phi_fu_98920_p4 = ap_phi_reg_pp0_iter0_data_2171_V_read2241_phi_reg_98916.read();
        }
    } else {
        ap_phi_mux_data_2171_V_read2241_phi_phi_fu_98920_p4 = ap_phi_reg_pp0_iter0_data_2171_V_read2241_phi_reg_98916.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2171_V_read2241_rewind_phi_fu_56277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2171_V_read2241_rewind_phi_fu_56277_p6 = data_2171_V_read2241_phi_reg_98916.read();
    } else {
        ap_phi_mux_data_2171_V_read2241_rewind_phi_fu_56277_p6 = data_2171_V_read2241_rewind_reg_56273.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2172_V_read2242_phi_phi_fu_98933_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2172_V_read2242_phi_phi_fu_98933_p4 = ap_phi_mux_data_2172_V_read2242_rewind_phi_fu_56291_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2172_V_read2242_phi_phi_fu_98933_p4 = data_2172_V_read.read();
        } else {
            ap_phi_mux_data_2172_V_read2242_phi_phi_fu_98933_p4 = ap_phi_reg_pp0_iter0_data_2172_V_read2242_phi_reg_98929.read();
        }
    } else {
        ap_phi_mux_data_2172_V_read2242_phi_phi_fu_98933_p4 = ap_phi_reg_pp0_iter0_data_2172_V_read2242_phi_reg_98929.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2172_V_read2242_rewind_phi_fu_56291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2172_V_read2242_rewind_phi_fu_56291_p6 = data_2172_V_read2242_phi_reg_98929.read();
    } else {
        ap_phi_mux_data_2172_V_read2242_rewind_phi_fu_56291_p6 = data_2172_V_read2242_rewind_reg_56287.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2173_V_read2243_phi_phi_fu_98946_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2173_V_read2243_phi_phi_fu_98946_p4 = ap_phi_mux_data_2173_V_read2243_rewind_phi_fu_56305_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2173_V_read2243_phi_phi_fu_98946_p4 = data_2173_V_read.read();
        } else {
            ap_phi_mux_data_2173_V_read2243_phi_phi_fu_98946_p4 = ap_phi_reg_pp0_iter0_data_2173_V_read2243_phi_reg_98942.read();
        }
    } else {
        ap_phi_mux_data_2173_V_read2243_phi_phi_fu_98946_p4 = ap_phi_reg_pp0_iter0_data_2173_V_read2243_phi_reg_98942.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2173_V_read2243_rewind_phi_fu_56305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2173_V_read2243_rewind_phi_fu_56305_p6 = data_2173_V_read2243_phi_reg_98942.read();
    } else {
        ap_phi_mux_data_2173_V_read2243_rewind_phi_fu_56305_p6 = data_2173_V_read2243_rewind_reg_56301.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2174_V_read2244_phi_phi_fu_98959_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2174_V_read2244_phi_phi_fu_98959_p4 = ap_phi_mux_data_2174_V_read2244_rewind_phi_fu_56319_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2174_V_read2244_phi_phi_fu_98959_p4 = data_2174_V_read.read();
        } else {
            ap_phi_mux_data_2174_V_read2244_phi_phi_fu_98959_p4 = ap_phi_reg_pp0_iter0_data_2174_V_read2244_phi_reg_98955.read();
        }
    } else {
        ap_phi_mux_data_2174_V_read2244_phi_phi_fu_98959_p4 = ap_phi_reg_pp0_iter0_data_2174_V_read2244_phi_reg_98955.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2174_V_read2244_rewind_phi_fu_56319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2174_V_read2244_rewind_phi_fu_56319_p6 = data_2174_V_read2244_phi_reg_98955.read();
    } else {
        ap_phi_mux_data_2174_V_read2244_rewind_phi_fu_56319_p6 = data_2174_V_read2244_rewind_reg_56315.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2175_V_read2245_phi_phi_fu_98972_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2175_V_read2245_phi_phi_fu_98972_p4 = ap_phi_mux_data_2175_V_read2245_rewind_phi_fu_56333_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2175_V_read2245_phi_phi_fu_98972_p4 = data_2175_V_read.read();
        } else {
            ap_phi_mux_data_2175_V_read2245_phi_phi_fu_98972_p4 = ap_phi_reg_pp0_iter0_data_2175_V_read2245_phi_reg_98968.read();
        }
    } else {
        ap_phi_mux_data_2175_V_read2245_phi_phi_fu_98972_p4 = ap_phi_reg_pp0_iter0_data_2175_V_read2245_phi_reg_98968.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2175_V_read2245_rewind_phi_fu_56333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2175_V_read2245_rewind_phi_fu_56333_p6 = data_2175_V_read2245_phi_reg_98968.read();
    } else {
        ap_phi_mux_data_2175_V_read2245_rewind_phi_fu_56333_p6 = data_2175_V_read2245_rewind_reg_56329.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2176_V_read2246_phi_phi_fu_98985_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2176_V_read2246_phi_phi_fu_98985_p4 = ap_phi_mux_data_2176_V_read2246_rewind_phi_fu_56347_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2176_V_read2246_phi_phi_fu_98985_p4 = data_2176_V_read.read();
        } else {
            ap_phi_mux_data_2176_V_read2246_phi_phi_fu_98985_p4 = ap_phi_reg_pp0_iter0_data_2176_V_read2246_phi_reg_98981.read();
        }
    } else {
        ap_phi_mux_data_2176_V_read2246_phi_phi_fu_98985_p4 = ap_phi_reg_pp0_iter0_data_2176_V_read2246_phi_reg_98981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2176_V_read2246_rewind_phi_fu_56347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2176_V_read2246_rewind_phi_fu_56347_p6 = data_2176_V_read2246_phi_reg_98981.read();
    } else {
        ap_phi_mux_data_2176_V_read2246_rewind_phi_fu_56347_p6 = data_2176_V_read2246_rewind_reg_56343.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2177_V_read2247_phi_phi_fu_98998_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2177_V_read2247_phi_phi_fu_98998_p4 = ap_phi_mux_data_2177_V_read2247_rewind_phi_fu_56361_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2177_V_read2247_phi_phi_fu_98998_p4 = data_2177_V_read.read();
        } else {
            ap_phi_mux_data_2177_V_read2247_phi_phi_fu_98998_p4 = ap_phi_reg_pp0_iter0_data_2177_V_read2247_phi_reg_98994.read();
        }
    } else {
        ap_phi_mux_data_2177_V_read2247_phi_phi_fu_98998_p4 = ap_phi_reg_pp0_iter0_data_2177_V_read2247_phi_reg_98994.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2177_V_read2247_rewind_phi_fu_56361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2177_V_read2247_rewind_phi_fu_56361_p6 = data_2177_V_read2247_phi_reg_98994.read();
    } else {
        ap_phi_mux_data_2177_V_read2247_rewind_phi_fu_56361_p6 = data_2177_V_read2247_rewind_reg_56357.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2178_V_read2248_phi_phi_fu_99011_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2178_V_read2248_phi_phi_fu_99011_p4 = ap_phi_mux_data_2178_V_read2248_rewind_phi_fu_56375_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2178_V_read2248_phi_phi_fu_99011_p4 = data_2178_V_read.read();
        } else {
            ap_phi_mux_data_2178_V_read2248_phi_phi_fu_99011_p4 = ap_phi_reg_pp0_iter0_data_2178_V_read2248_phi_reg_99007.read();
        }
    } else {
        ap_phi_mux_data_2178_V_read2248_phi_phi_fu_99011_p4 = ap_phi_reg_pp0_iter0_data_2178_V_read2248_phi_reg_99007.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2178_V_read2248_rewind_phi_fu_56375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2178_V_read2248_rewind_phi_fu_56375_p6 = data_2178_V_read2248_phi_reg_99007.read();
    } else {
        ap_phi_mux_data_2178_V_read2248_rewind_phi_fu_56375_p6 = data_2178_V_read2248_rewind_reg_56371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2179_V_read2249_phi_phi_fu_99024_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2179_V_read2249_phi_phi_fu_99024_p4 = ap_phi_mux_data_2179_V_read2249_rewind_phi_fu_56389_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2179_V_read2249_phi_phi_fu_99024_p4 = data_2179_V_read.read();
        } else {
            ap_phi_mux_data_2179_V_read2249_phi_phi_fu_99024_p4 = ap_phi_reg_pp0_iter0_data_2179_V_read2249_phi_reg_99020.read();
        }
    } else {
        ap_phi_mux_data_2179_V_read2249_phi_phi_fu_99024_p4 = ap_phi_reg_pp0_iter0_data_2179_V_read2249_phi_reg_99020.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2179_V_read2249_rewind_phi_fu_56389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2179_V_read2249_rewind_phi_fu_56389_p6 = data_2179_V_read2249_phi_reg_99020.read();
    } else {
        ap_phi_mux_data_2179_V_read2249_rewind_phi_fu_56389_p6 = data_2179_V_read2249_rewind_reg_56385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_217_V_read287_phi_phi_fu_73518_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_217_V_read287_phi_phi_fu_73518_p4 = ap_phi_mux_data_217_V_read287_rewind_phi_fu_28921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_217_V_read287_phi_phi_fu_73518_p4 = data_217_V_read.read();
        } else {
            ap_phi_mux_data_217_V_read287_phi_phi_fu_73518_p4 = ap_phi_reg_pp0_iter0_data_217_V_read287_phi_reg_73514.read();
        }
    } else {
        ap_phi_mux_data_217_V_read287_phi_phi_fu_73518_p4 = ap_phi_reg_pp0_iter0_data_217_V_read287_phi_reg_73514.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_217_V_read287_rewind_phi_fu_28921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_217_V_read287_rewind_phi_fu_28921_p6 = data_217_V_read287_phi_reg_73514.read();
    } else {
        ap_phi_mux_data_217_V_read287_rewind_phi_fu_28921_p6 = data_217_V_read287_rewind_reg_28917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2180_V_read2250_phi_phi_fu_99037_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2180_V_read2250_phi_phi_fu_99037_p4 = ap_phi_mux_data_2180_V_read2250_rewind_phi_fu_56403_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2180_V_read2250_phi_phi_fu_99037_p4 = data_2180_V_read.read();
        } else {
            ap_phi_mux_data_2180_V_read2250_phi_phi_fu_99037_p4 = ap_phi_reg_pp0_iter0_data_2180_V_read2250_phi_reg_99033.read();
        }
    } else {
        ap_phi_mux_data_2180_V_read2250_phi_phi_fu_99037_p4 = ap_phi_reg_pp0_iter0_data_2180_V_read2250_phi_reg_99033.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2180_V_read2250_rewind_phi_fu_56403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2180_V_read2250_rewind_phi_fu_56403_p6 = data_2180_V_read2250_phi_reg_99033.read();
    } else {
        ap_phi_mux_data_2180_V_read2250_rewind_phi_fu_56403_p6 = data_2180_V_read2250_rewind_reg_56399.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2181_V_read2251_phi_phi_fu_99050_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2181_V_read2251_phi_phi_fu_99050_p4 = ap_phi_mux_data_2181_V_read2251_rewind_phi_fu_56417_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2181_V_read2251_phi_phi_fu_99050_p4 = data_2181_V_read.read();
        } else {
            ap_phi_mux_data_2181_V_read2251_phi_phi_fu_99050_p4 = ap_phi_reg_pp0_iter0_data_2181_V_read2251_phi_reg_99046.read();
        }
    } else {
        ap_phi_mux_data_2181_V_read2251_phi_phi_fu_99050_p4 = ap_phi_reg_pp0_iter0_data_2181_V_read2251_phi_reg_99046.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2181_V_read2251_rewind_phi_fu_56417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2181_V_read2251_rewind_phi_fu_56417_p6 = data_2181_V_read2251_phi_reg_99046.read();
    } else {
        ap_phi_mux_data_2181_V_read2251_rewind_phi_fu_56417_p6 = data_2181_V_read2251_rewind_reg_56413.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2182_V_read2252_phi_phi_fu_99063_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2182_V_read2252_phi_phi_fu_99063_p4 = ap_phi_mux_data_2182_V_read2252_rewind_phi_fu_56431_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2182_V_read2252_phi_phi_fu_99063_p4 = data_2182_V_read.read();
        } else {
            ap_phi_mux_data_2182_V_read2252_phi_phi_fu_99063_p4 = ap_phi_reg_pp0_iter0_data_2182_V_read2252_phi_reg_99059.read();
        }
    } else {
        ap_phi_mux_data_2182_V_read2252_phi_phi_fu_99063_p4 = ap_phi_reg_pp0_iter0_data_2182_V_read2252_phi_reg_99059.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2182_V_read2252_rewind_phi_fu_56431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2182_V_read2252_rewind_phi_fu_56431_p6 = data_2182_V_read2252_phi_reg_99059.read();
    } else {
        ap_phi_mux_data_2182_V_read2252_rewind_phi_fu_56431_p6 = data_2182_V_read2252_rewind_reg_56427.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2183_V_read2253_phi_phi_fu_99076_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2183_V_read2253_phi_phi_fu_99076_p4 = ap_phi_mux_data_2183_V_read2253_rewind_phi_fu_56445_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2183_V_read2253_phi_phi_fu_99076_p4 = data_2183_V_read.read();
        } else {
            ap_phi_mux_data_2183_V_read2253_phi_phi_fu_99076_p4 = ap_phi_reg_pp0_iter0_data_2183_V_read2253_phi_reg_99072.read();
        }
    } else {
        ap_phi_mux_data_2183_V_read2253_phi_phi_fu_99076_p4 = ap_phi_reg_pp0_iter0_data_2183_V_read2253_phi_reg_99072.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2183_V_read2253_rewind_phi_fu_56445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2183_V_read2253_rewind_phi_fu_56445_p6 = data_2183_V_read2253_phi_reg_99072.read();
    } else {
        ap_phi_mux_data_2183_V_read2253_rewind_phi_fu_56445_p6 = data_2183_V_read2253_rewind_reg_56441.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2184_V_read2254_phi_phi_fu_99089_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2184_V_read2254_phi_phi_fu_99089_p4 = ap_phi_mux_data_2184_V_read2254_rewind_phi_fu_56459_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2184_V_read2254_phi_phi_fu_99089_p4 = data_2184_V_read.read();
        } else {
            ap_phi_mux_data_2184_V_read2254_phi_phi_fu_99089_p4 = ap_phi_reg_pp0_iter0_data_2184_V_read2254_phi_reg_99085.read();
        }
    } else {
        ap_phi_mux_data_2184_V_read2254_phi_phi_fu_99089_p4 = ap_phi_reg_pp0_iter0_data_2184_V_read2254_phi_reg_99085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2184_V_read2254_rewind_phi_fu_56459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2184_V_read2254_rewind_phi_fu_56459_p6 = data_2184_V_read2254_phi_reg_99085.read();
    } else {
        ap_phi_mux_data_2184_V_read2254_rewind_phi_fu_56459_p6 = data_2184_V_read2254_rewind_reg_56455.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2185_V_read2255_phi_phi_fu_99102_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2185_V_read2255_phi_phi_fu_99102_p4 = ap_phi_mux_data_2185_V_read2255_rewind_phi_fu_56473_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2185_V_read2255_phi_phi_fu_99102_p4 = data_2185_V_read.read();
        } else {
            ap_phi_mux_data_2185_V_read2255_phi_phi_fu_99102_p4 = ap_phi_reg_pp0_iter0_data_2185_V_read2255_phi_reg_99098.read();
        }
    } else {
        ap_phi_mux_data_2185_V_read2255_phi_phi_fu_99102_p4 = ap_phi_reg_pp0_iter0_data_2185_V_read2255_phi_reg_99098.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2185_V_read2255_rewind_phi_fu_56473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2185_V_read2255_rewind_phi_fu_56473_p6 = data_2185_V_read2255_phi_reg_99098.read();
    } else {
        ap_phi_mux_data_2185_V_read2255_rewind_phi_fu_56473_p6 = data_2185_V_read2255_rewind_reg_56469.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2186_V_read2256_phi_phi_fu_99115_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2186_V_read2256_phi_phi_fu_99115_p4 = ap_phi_mux_data_2186_V_read2256_rewind_phi_fu_56487_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2186_V_read2256_phi_phi_fu_99115_p4 = data_2186_V_read.read();
        } else {
            ap_phi_mux_data_2186_V_read2256_phi_phi_fu_99115_p4 = ap_phi_reg_pp0_iter0_data_2186_V_read2256_phi_reg_99111.read();
        }
    } else {
        ap_phi_mux_data_2186_V_read2256_phi_phi_fu_99115_p4 = ap_phi_reg_pp0_iter0_data_2186_V_read2256_phi_reg_99111.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2186_V_read2256_rewind_phi_fu_56487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2186_V_read2256_rewind_phi_fu_56487_p6 = data_2186_V_read2256_phi_reg_99111.read();
    } else {
        ap_phi_mux_data_2186_V_read2256_rewind_phi_fu_56487_p6 = data_2186_V_read2256_rewind_reg_56483.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2187_V_read2257_phi_phi_fu_99128_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2187_V_read2257_phi_phi_fu_99128_p4 = ap_phi_mux_data_2187_V_read2257_rewind_phi_fu_56501_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2187_V_read2257_phi_phi_fu_99128_p4 = data_2187_V_read.read();
        } else {
            ap_phi_mux_data_2187_V_read2257_phi_phi_fu_99128_p4 = ap_phi_reg_pp0_iter0_data_2187_V_read2257_phi_reg_99124.read();
        }
    } else {
        ap_phi_mux_data_2187_V_read2257_phi_phi_fu_99128_p4 = ap_phi_reg_pp0_iter0_data_2187_V_read2257_phi_reg_99124.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2187_V_read2257_rewind_phi_fu_56501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2187_V_read2257_rewind_phi_fu_56501_p6 = data_2187_V_read2257_phi_reg_99124.read();
    } else {
        ap_phi_mux_data_2187_V_read2257_rewind_phi_fu_56501_p6 = data_2187_V_read2257_rewind_reg_56497.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2188_V_read2258_phi_phi_fu_99141_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2188_V_read2258_phi_phi_fu_99141_p4 = ap_phi_mux_data_2188_V_read2258_rewind_phi_fu_56515_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2188_V_read2258_phi_phi_fu_99141_p4 = data_2188_V_read.read();
        } else {
            ap_phi_mux_data_2188_V_read2258_phi_phi_fu_99141_p4 = ap_phi_reg_pp0_iter0_data_2188_V_read2258_phi_reg_99137.read();
        }
    } else {
        ap_phi_mux_data_2188_V_read2258_phi_phi_fu_99141_p4 = ap_phi_reg_pp0_iter0_data_2188_V_read2258_phi_reg_99137.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2188_V_read2258_rewind_phi_fu_56515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2188_V_read2258_rewind_phi_fu_56515_p6 = data_2188_V_read2258_phi_reg_99137.read();
    } else {
        ap_phi_mux_data_2188_V_read2258_rewind_phi_fu_56515_p6 = data_2188_V_read2258_rewind_reg_56511.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2189_V_read2259_phi_phi_fu_99154_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2189_V_read2259_phi_phi_fu_99154_p4 = ap_phi_mux_data_2189_V_read2259_rewind_phi_fu_56529_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2189_V_read2259_phi_phi_fu_99154_p4 = data_2189_V_read.read();
        } else {
            ap_phi_mux_data_2189_V_read2259_phi_phi_fu_99154_p4 = ap_phi_reg_pp0_iter0_data_2189_V_read2259_phi_reg_99150.read();
        }
    } else {
        ap_phi_mux_data_2189_V_read2259_phi_phi_fu_99154_p4 = ap_phi_reg_pp0_iter0_data_2189_V_read2259_phi_reg_99150.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2189_V_read2259_rewind_phi_fu_56529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2189_V_read2259_rewind_phi_fu_56529_p6 = data_2189_V_read2259_phi_reg_99150.read();
    } else {
        ap_phi_mux_data_2189_V_read2259_rewind_phi_fu_56529_p6 = data_2189_V_read2259_rewind_reg_56525.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_218_V_read288_phi_phi_fu_73531_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_218_V_read288_phi_phi_fu_73531_p4 = ap_phi_mux_data_218_V_read288_rewind_phi_fu_28935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_218_V_read288_phi_phi_fu_73531_p4 = data_218_V_read.read();
        } else {
            ap_phi_mux_data_218_V_read288_phi_phi_fu_73531_p4 = ap_phi_reg_pp0_iter0_data_218_V_read288_phi_reg_73527.read();
        }
    } else {
        ap_phi_mux_data_218_V_read288_phi_phi_fu_73531_p4 = ap_phi_reg_pp0_iter0_data_218_V_read288_phi_reg_73527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_218_V_read288_rewind_phi_fu_28935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_218_V_read288_rewind_phi_fu_28935_p6 = data_218_V_read288_phi_reg_73527.read();
    } else {
        ap_phi_mux_data_218_V_read288_rewind_phi_fu_28935_p6 = data_218_V_read288_rewind_reg_28931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2190_V_read2260_phi_phi_fu_99167_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2190_V_read2260_phi_phi_fu_99167_p4 = ap_phi_mux_data_2190_V_read2260_rewind_phi_fu_56543_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2190_V_read2260_phi_phi_fu_99167_p4 = data_2190_V_read.read();
        } else {
            ap_phi_mux_data_2190_V_read2260_phi_phi_fu_99167_p4 = ap_phi_reg_pp0_iter0_data_2190_V_read2260_phi_reg_99163.read();
        }
    } else {
        ap_phi_mux_data_2190_V_read2260_phi_phi_fu_99167_p4 = ap_phi_reg_pp0_iter0_data_2190_V_read2260_phi_reg_99163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2190_V_read2260_rewind_phi_fu_56543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2190_V_read2260_rewind_phi_fu_56543_p6 = data_2190_V_read2260_phi_reg_99163.read();
    } else {
        ap_phi_mux_data_2190_V_read2260_rewind_phi_fu_56543_p6 = data_2190_V_read2260_rewind_reg_56539.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2191_V_read2261_phi_phi_fu_99180_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2191_V_read2261_phi_phi_fu_99180_p4 = ap_phi_mux_data_2191_V_read2261_rewind_phi_fu_56557_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2191_V_read2261_phi_phi_fu_99180_p4 = data_2191_V_read.read();
        } else {
            ap_phi_mux_data_2191_V_read2261_phi_phi_fu_99180_p4 = ap_phi_reg_pp0_iter0_data_2191_V_read2261_phi_reg_99176.read();
        }
    } else {
        ap_phi_mux_data_2191_V_read2261_phi_phi_fu_99180_p4 = ap_phi_reg_pp0_iter0_data_2191_V_read2261_phi_reg_99176.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2191_V_read2261_rewind_phi_fu_56557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2191_V_read2261_rewind_phi_fu_56557_p6 = data_2191_V_read2261_phi_reg_99176.read();
    } else {
        ap_phi_mux_data_2191_V_read2261_rewind_phi_fu_56557_p6 = data_2191_V_read2261_rewind_reg_56553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2192_V_read2262_phi_phi_fu_99193_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2192_V_read2262_phi_phi_fu_99193_p4 = ap_phi_mux_data_2192_V_read2262_rewind_phi_fu_56571_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2192_V_read2262_phi_phi_fu_99193_p4 = data_2192_V_read.read();
        } else {
            ap_phi_mux_data_2192_V_read2262_phi_phi_fu_99193_p4 = ap_phi_reg_pp0_iter0_data_2192_V_read2262_phi_reg_99189.read();
        }
    } else {
        ap_phi_mux_data_2192_V_read2262_phi_phi_fu_99193_p4 = ap_phi_reg_pp0_iter0_data_2192_V_read2262_phi_reg_99189.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2192_V_read2262_rewind_phi_fu_56571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2192_V_read2262_rewind_phi_fu_56571_p6 = data_2192_V_read2262_phi_reg_99189.read();
    } else {
        ap_phi_mux_data_2192_V_read2262_rewind_phi_fu_56571_p6 = data_2192_V_read2262_rewind_reg_56567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2193_V_read2263_phi_phi_fu_99206_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2193_V_read2263_phi_phi_fu_99206_p4 = ap_phi_mux_data_2193_V_read2263_rewind_phi_fu_56585_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2193_V_read2263_phi_phi_fu_99206_p4 = data_2193_V_read.read();
        } else {
            ap_phi_mux_data_2193_V_read2263_phi_phi_fu_99206_p4 = ap_phi_reg_pp0_iter0_data_2193_V_read2263_phi_reg_99202.read();
        }
    } else {
        ap_phi_mux_data_2193_V_read2263_phi_phi_fu_99206_p4 = ap_phi_reg_pp0_iter0_data_2193_V_read2263_phi_reg_99202.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2193_V_read2263_rewind_phi_fu_56585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2193_V_read2263_rewind_phi_fu_56585_p6 = data_2193_V_read2263_phi_reg_99202.read();
    } else {
        ap_phi_mux_data_2193_V_read2263_rewind_phi_fu_56585_p6 = data_2193_V_read2263_rewind_reg_56581.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2194_V_read2264_phi_phi_fu_99219_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2194_V_read2264_phi_phi_fu_99219_p4 = ap_phi_mux_data_2194_V_read2264_rewind_phi_fu_56599_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2194_V_read2264_phi_phi_fu_99219_p4 = data_2194_V_read.read();
        } else {
            ap_phi_mux_data_2194_V_read2264_phi_phi_fu_99219_p4 = ap_phi_reg_pp0_iter0_data_2194_V_read2264_phi_reg_99215.read();
        }
    } else {
        ap_phi_mux_data_2194_V_read2264_phi_phi_fu_99219_p4 = ap_phi_reg_pp0_iter0_data_2194_V_read2264_phi_reg_99215.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2194_V_read2264_rewind_phi_fu_56599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2194_V_read2264_rewind_phi_fu_56599_p6 = data_2194_V_read2264_phi_reg_99215.read();
    } else {
        ap_phi_mux_data_2194_V_read2264_rewind_phi_fu_56599_p6 = data_2194_V_read2264_rewind_reg_56595.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2195_V_read2265_phi_phi_fu_99232_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2195_V_read2265_phi_phi_fu_99232_p4 = ap_phi_mux_data_2195_V_read2265_rewind_phi_fu_56613_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2195_V_read2265_phi_phi_fu_99232_p4 = data_2195_V_read.read();
        } else {
            ap_phi_mux_data_2195_V_read2265_phi_phi_fu_99232_p4 = ap_phi_reg_pp0_iter0_data_2195_V_read2265_phi_reg_99228.read();
        }
    } else {
        ap_phi_mux_data_2195_V_read2265_phi_phi_fu_99232_p4 = ap_phi_reg_pp0_iter0_data_2195_V_read2265_phi_reg_99228.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2195_V_read2265_rewind_phi_fu_56613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2195_V_read2265_rewind_phi_fu_56613_p6 = data_2195_V_read2265_phi_reg_99228.read();
    } else {
        ap_phi_mux_data_2195_V_read2265_rewind_phi_fu_56613_p6 = data_2195_V_read2265_rewind_reg_56609.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2196_V_read2266_phi_phi_fu_99245_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2196_V_read2266_phi_phi_fu_99245_p4 = ap_phi_mux_data_2196_V_read2266_rewind_phi_fu_56627_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2196_V_read2266_phi_phi_fu_99245_p4 = data_2196_V_read.read();
        } else {
            ap_phi_mux_data_2196_V_read2266_phi_phi_fu_99245_p4 = ap_phi_reg_pp0_iter0_data_2196_V_read2266_phi_reg_99241.read();
        }
    } else {
        ap_phi_mux_data_2196_V_read2266_phi_phi_fu_99245_p4 = ap_phi_reg_pp0_iter0_data_2196_V_read2266_phi_reg_99241.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2196_V_read2266_rewind_phi_fu_56627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2196_V_read2266_rewind_phi_fu_56627_p6 = data_2196_V_read2266_phi_reg_99241.read();
    } else {
        ap_phi_mux_data_2196_V_read2266_rewind_phi_fu_56627_p6 = data_2196_V_read2266_rewind_reg_56623.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2197_V_read2267_phi_phi_fu_99258_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2197_V_read2267_phi_phi_fu_99258_p4 = ap_phi_mux_data_2197_V_read2267_rewind_phi_fu_56641_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2197_V_read2267_phi_phi_fu_99258_p4 = data_2197_V_read.read();
        } else {
            ap_phi_mux_data_2197_V_read2267_phi_phi_fu_99258_p4 = ap_phi_reg_pp0_iter0_data_2197_V_read2267_phi_reg_99254.read();
        }
    } else {
        ap_phi_mux_data_2197_V_read2267_phi_phi_fu_99258_p4 = ap_phi_reg_pp0_iter0_data_2197_V_read2267_phi_reg_99254.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2197_V_read2267_rewind_phi_fu_56641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2197_V_read2267_rewind_phi_fu_56641_p6 = data_2197_V_read2267_phi_reg_99254.read();
    } else {
        ap_phi_mux_data_2197_V_read2267_rewind_phi_fu_56641_p6 = data_2197_V_read2267_rewind_reg_56637.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2198_V_read2268_phi_phi_fu_99271_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2198_V_read2268_phi_phi_fu_99271_p4 = ap_phi_mux_data_2198_V_read2268_rewind_phi_fu_56655_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2198_V_read2268_phi_phi_fu_99271_p4 = data_2198_V_read.read();
        } else {
            ap_phi_mux_data_2198_V_read2268_phi_phi_fu_99271_p4 = ap_phi_reg_pp0_iter0_data_2198_V_read2268_phi_reg_99267.read();
        }
    } else {
        ap_phi_mux_data_2198_V_read2268_phi_phi_fu_99271_p4 = ap_phi_reg_pp0_iter0_data_2198_V_read2268_phi_reg_99267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2198_V_read2268_rewind_phi_fu_56655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2198_V_read2268_rewind_phi_fu_56655_p6 = data_2198_V_read2268_phi_reg_99267.read();
    } else {
        ap_phi_mux_data_2198_V_read2268_rewind_phi_fu_56655_p6 = data_2198_V_read2268_rewind_reg_56651.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2199_V_read2269_phi_phi_fu_99284_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2199_V_read2269_phi_phi_fu_99284_p4 = ap_phi_mux_data_2199_V_read2269_rewind_phi_fu_56669_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2199_V_read2269_phi_phi_fu_99284_p4 = data_2199_V_read.read();
        } else {
            ap_phi_mux_data_2199_V_read2269_phi_phi_fu_99284_p4 = ap_phi_reg_pp0_iter0_data_2199_V_read2269_phi_reg_99280.read();
        }
    } else {
        ap_phi_mux_data_2199_V_read2269_phi_phi_fu_99284_p4 = ap_phi_reg_pp0_iter0_data_2199_V_read2269_phi_reg_99280.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2199_V_read2269_rewind_phi_fu_56669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2199_V_read2269_rewind_phi_fu_56669_p6 = data_2199_V_read2269_phi_reg_99280.read();
    } else {
        ap_phi_mux_data_2199_V_read2269_rewind_phi_fu_56669_p6 = data_2199_V_read2269_rewind_reg_56665.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_219_V_read289_phi_phi_fu_73544_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_219_V_read289_phi_phi_fu_73544_p4 = ap_phi_mux_data_219_V_read289_rewind_phi_fu_28949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_219_V_read289_phi_phi_fu_73544_p4 = data_219_V_read.read();
        } else {
            ap_phi_mux_data_219_V_read289_phi_phi_fu_73544_p4 = ap_phi_reg_pp0_iter0_data_219_V_read289_phi_reg_73540.read();
        }
    } else {
        ap_phi_mux_data_219_V_read289_phi_phi_fu_73544_p4 = ap_phi_reg_pp0_iter0_data_219_V_read289_phi_reg_73540.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_219_V_read289_rewind_phi_fu_28949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_219_V_read289_rewind_phi_fu_28949_p6 = data_219_V_read289_phi_reg_73540.read();
    } else {
        ap_phi_mux_data_219_V_read289_rewind_phi_fu_28949_p6 = data_219_V_read289_rewind_reg_28945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_21_V_read91_phi_phi_fu_70970_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_21_V_read91_phi_phi_fu_70970_p4 = ap_phi_mux_data_21_V_read91_rewind_phi_fu_26177_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_21_V_read91_phi_phi_fu_70970_p4 = data_21_V_read.read();
        } else {
            ap_phi_mux_data_21_V_read91_phi_phi_fu_70970_p4 = ap_phi_reg_pp0_iter0_data_21_V_read91_phi_reg_70966.read();
        }
    } else {
        ap_phi_mux_data_21_V_read91_phi_phi_fu_70970_p4 = ap_phi_reg_pp0_iter0_data_21_V_read91_phi_reg_70966.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_21_V_read91_rewind_phi_fu_26177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_21_V_read91_rewind_phi_fu_26177_p6 = data_21_V_read91_phi_reg_70966.read();
    } else {
        ap_phi_mux_data_21_V_read91_rewind_phi_fu_26177_p6 = data_21_V_read91_rewind_reg_26173.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2200_V_read2270_phi_phi_fu_99297_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2200_V_read2270_phi_phi_fu_99297_p4 = ap_phi_mux_data_2200_V_read2270_rewind_phi_fu_56683_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2200_V_read2270_phi_phi_fu_99297_p4 = data_2200_V_read.read();
        } else {
            ap_phi_mux_data_2200_V_read2270_phi_phi_fu_99297_p4 = ap_phi_reg_pp0_iter0_data_2200_V_read2270_phi_reg_99293.read();
        }
    } else {
        ap_phi_mux_data_2200_V_read2270_phi_phi_fu_99297_p4 = ap_phi_reg_pp0_iter0_data_2200_V_read2270_phi_reg_99293.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2200_V_read2270_rewind_phi_fu_56683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2200_V_read2270_rewind_phi_fu_56683_p6 = data_2200_V_read2270_phi_reg_99293.read();
    } else {
        ap_phi_mux_data_2200_V_read2270_rewind_phi_fu_56683_p6 = data_2200_V_read2270_rewind_reg_56679.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2201_V_read2271_phi_phi_fu_99310_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2201_V_read2271_phi_phi_fu_99310_p4 = ap_phi_mux_data_2201_V_read2271_rewind_phi_fu_56697_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2201_V_read2271_phi_phi_fu_99310_p4 = data_2201_V_read.read();
        } else {
            ap_phi_mux_data_2201_V_read2271_phi_phi_fu_99310_p4 = ap_phi_reg_pp0_iter0_data_2201_V_read2271_phi_reg_99306.read();
        }
    } else {
        ap_phi_mux_data_2201_V_read2271_phi_phi_fu_99310_p4 = ap_phi_reg_pp0_iter0_data_2201_V_read2271_phi_reg_99306.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2201_V_read2271_rewind_phi_fu_56697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2201_V_read2271_rewind_phi_fu_56697_p6 = data_2201_V_read2271_phi_reg_99306.read();
    } else {
        ap_phi_mux_data_2201_V_read2271_rewind_phi_fu_56697_p6 = data_2201_V_read2271_rewind_reg_56693.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2202_V_read2272_phi_phi_fu_99323_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2202_V_read2272_phi_phi_fu_99323_p4 = ap_phi_mux_data_2202_V_read2272_rewind_phi_fu_56711_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2202_V_read2272_phi_phi_fu_99323_p4 = data_2202_V_read.read();
        } else {
            ap_phi_mux_data_2202_V_read2272_phi_phi_fu_99323_p4 = ap_phi_reg_pp0_iter0_data_2202_V_read2272_phi_reg_99319.read();
        }
    } else {
        ap_phi_mux_data_2202_V_read2272_phi_phi_fu_99323_p4 = ap_phi_reg_pp0_iter0_data_2202_V_read2272_phi_reg_99319.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2202_V_read2272_rewind_phi_fu_56711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2202_V_read2272_rewind_phi_fu_56711_p6 = data_2202_V_read2272_phi_reg_99319.read();
    } else {
        ap_phi_mux_data_2202_V_read2272_rewind_phi_fu_56711_p6 = data_2202_V_read2272_rewind_reg_56707.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2203_V_read2273_phi_phi_fu_99336_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2203_V_read2273_phi_phi_fu_99336_p4 = ap_phi_mux_data_2203_V_read2273_rewind_phi_fu_56725_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2203_V_read2273_phi_phi_fu_99336_p4 = data_2203_V_read.read();
        } else {
            ap_phi_mux_data_2203_V_read2273_phi_phi_fu_99336_p4 = ap_phi_reg_pp0_iter0_data_2203_V_read2273_phi_reg_99332.read();
        }
    } else {
        ap_phi_mux_data_2203_V_read2273_phi_phi_fu_99336_p4 = ap_phi_reg_pp0_iter0_data_2203_V_read2273_phi_reg_99332.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2203_V_read2273_rewind_phi_fu_56725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2203_V_read2273_rewind_phi_fu_56725_p6 = data_2203_V_read2273_phi_reg_99332.read();
    } else {
        ap_phi_mux_data_2203_V_read2273_rewind_phi_fu_56725_p6 = data_2203_V_read2273_rewind_reg_56721.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2204_V_read2274_phi_phi_fu_99349_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2204_V_read2274_phi_phi_fu_99349_p4 = ap_phi_mux_data_2204_V_read2274_rewind_phi_fu_56739_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2204_V_read2274_phi_phi_fu_99349_p4 = data_2204_V_read.read();
        } else {
            ap_phi_mux_data_2204_V_read2274_phi_phi_fu_99349_p4 = ap_phi_reg_pp0_iter0_data_2204_V_read2274_phi_reg_99345.read();
        }
    } else {
        ap_phi_mux_data_2204_V_read2274_phi_phi_fu_99349_p4 = ap_phi_reg_pp0_iter0_data_2204_V_read2274_phi_reg_99345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2204_V_read2274_rewind_phi_fu_56739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2204_V_read2274_rewind_phi_fu_56739_p6 = data_2204_V_read2274_phi_reg_99345.read();
    } else {
        ap_phi_mux_data_2204_V_read2274_rewind_phi_fu_56739_p6 = data_2204_V_read2274_rewind_reg_56735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2205_V_read2275_phi_phi_fu_99362_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2205_V_read2275_phi_phi_fu_99362_p4 = ap_phi_mux_data_2205_V_read2275_rewind_phi_fu_56753_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2205_V_read2275_phi_phi_fu_99362_p4 = data_2205_V_read.read();
        } else {
            ap_phi_mux_data_2205_V_read2275_phi_phi_fu_99362_p4 = ap_phi_reg_pp0_iter0_data_2205_V_read2275_phi_reg_99358.read();
        }
    } else {
        ap_phi_mux_data_2205_V_read2275_phi_phi_fu_99362_p4 = ap_phi_reg_pp0_iter0_data_2205_V_read2275_phi_reg_99358.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2205_V_read2275_rewind_phi_fu_56753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2205_V_read2275_rewind_phi_fu_56753_p6 = data_2205_V_read2275_phi_reg_99358.read();
    } else {
        ap_phi_mux_data_2205_V_read2275_rewind_phi_fu_56753_p6 = data_2205_V_read2275_rewind_reg_56749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2206_V_read2276_phi_phi_fu_99375_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2206_V_read2276_phi_phi_fu_99375_p4 = ap_phi_mux_data_2206_V_read2276_rewind_phi_fu_56767_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2206_V_read2276_phi_phi_fu_99375_p4 = data_2206_V_read.read();
        } else {
            ap_phi_mux_data_2206_V_read2276_phi_phi_fu_99375_p4 = ap_phi_reg_pp0_iter0_data_2206_V_read2276_phi_reg_99371.read();
        }
    } else {
        ap_phi_mux_data_2206_V_read2276_phi_phi_fu_99375_p4 = ap_phi_reg_pp0_iter0_data_2206_V_read2276_phi_reg_99371.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2206_V_read2276_rewind_phi_fu_56767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2206_V_read2276_rewind_phi_fu_56767_p6 = data_2206_V_read2276_phi_reg_99371.read();
    } else {
        ap_phi_mux_data_2206_V_read2276_rewind_phi_fu_56767_p6 = data_2206_V_read2276_rewind_reg_56763.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2207_V_read2277_phi_phi_fu_99388_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2207_V_read2277_phi_phi_fu_99388_p4 = ap_phi_mux_data_2207_V_read2277_rewind_phi_fu_56781_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2207_V_read2277_phi_phi_fu_99388_p4 = data_2207_V_read.read();
        } else {
            ap_phi_mux_data_2207_V_read2277_phi_phi_fu_99388_p4 = ap_phi_reg_pp0_iter0_data_2207_V_read2277_phi_reg_99384.read();
        }
    } else {
        ap_phi_mux_data_2207_V_read2277_phi_phi_fu_99388_p4 = ap_phi_reg_pp0_iter0_data_2207_V_read2277_phi_reg_99384.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2207_V_read2277_rewind_phi_fu_56781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2207_V_read2277_rewind_phi_fu_56781_p6 = data_2207_V_read2277_phi_reg_99384.read();
    } else {
        ap_phi_mux_data_2207_V_read2277_rewind_phi_fu_56781_p6 = data_2207_V_read2277_rewind_reg_56777.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2208_V_read2278_phi_phi_fu_99401_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2208_V_read2278_phi_phi_fu_99401_p4 = ap_phi_mux_data_2208_V_read2278_rewind_phi_fu_56795_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2208_V_read2278_phi_phi_fu_99401_p4 = data_2208_V_read.read();
        } else {
            ap_phi_mux_data_2208_V_read2278_phi_phi_fu_99401_p4 = ap_phi_reg_pp0_iter0_data_2208_V_read2278_phi_reg_99397.read();
        }
    } else {
        ap_phi_mux_data_2208_V_read2278_phi_phi_fu_99401_p4 = ap_phi_reg_pp0_iter0_data_2208_V_read2278_phi_reg_99397.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2208_V_read2278_rewind_phi_fu_56795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2208_V_read2278_rewind_phi_fu_56795_p6 = data_2208_V_read2278_phi_reg_99397.read();
    } else {
        ap_phi_mux_data_2208_V_read2278_rewind_phi_fu_56795_p6 = data_2208_V_read2278_rewind_reg_56791.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2209_V_read2279_phi_phi_fu_99414_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2209_V_read2279_phi_phi_fu_99414_p4 = ap_phi_mux_data_2209_V_read2279_rewind_phi_fu_56809_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2209_V_read2279_phi_phi_fu_99414_p4 = data_2209_V_read.read();
        } else {
            ap_phi_mux_data_2209_V_read2279_phi_phi_fu_99414_p4 = ap_phi_reg_pp0_iter0_data_2209_V_read2279_phi_reg_99410.read();
        }
    } else {
        ap_phi_mux_data_2209_V_read2279_phi_phi_fu_99414_p4 = ap_phi_reg_pp0_iter0_data_2209_V_read2279_phi_reg_99410.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2209_V_read2279_rewind_phi_fu_56809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2209_V_read2279_rewind_phi_fu_56809_p6 = data_2209_V_read2279_phi_reg_99410.read();
    } else {
        ap_phi_mux_data_2209_V_read2279_rewind_phi_fu_56809_p6 = data_2209_V_read2279_rewind_reg_56805.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_220_V_read290_phi_phi_fu_73557_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_220_V_read290_phi_phi_fu_73557_p4 = ap_phi_mux_data_220_V_read290_rewind_phi_fu_28963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_220_V_read290_phi_phi_fu_73557_p4 = data_220_V_read.read();
        } else {
            ap_phi_mux_data_220_V_read290_phi_phi_fu_73557_p4 = ap_phi_reg_pp0_iter0_data_220_V_read290_phi_reg_73553.read();
        }
    } else {
        ap_phi_mux_data_220_V_read290_phi_phi_fu_73557_p4 = ap_phi_reg_pp0_iter0_data_220_V_read290_phi_reg_73553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_220_V_read290_rewind_phi_fu_28963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_220_V_read290_rewind_phi_fu_28963_p6 = data_220_V_read290_phi_reg_73553.read();
    } else {
        ap_phi_mux_data_220_V_read290_rewind_phi_fu_28963_p6 = data_220_V_read290_rewind_reg_28959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2210_V_read2280_phi_phi_fu_99427_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2210_V_read2280_phi_phi_fu_99427_p4 = ap_phi_mux_data_2210_V_read2280_rewind_phi_fu_56823_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2210_V_read2280_phi_phi_fu_99427_p4 = data_2210_V_read.read();
        } else {
            ap_phi_mux_data_2210_V_read2280_phi_phi_fu_99427_p4 = ap_phi_reg_pp0_iter0_data_2210_V_read2280_phi_reg_99423.read();
        }
    } else {
        ap_phi_mux_data_2210_V_read2280_phi_phi_fu_99427_p4 = ap_phi_reg_pp0_iter0_data_2210_V_read2280_phi_reg_99423.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2210_V_read2280_rewind_phi_fu_56823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2210_V_read2280_rewind_phi_fu_56823_p6 = data_2210_V_read2280_phi_reg_99423.read();
    } else {
        ap_phi_mux_data_2210_V_read2280_rewind_phi_fu_56823_p6 = data_2210_V_read2280_rewind_reg_56819.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2211_V_read2281_phi_phi_fu_99440_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2211_V_read2281_phi_phi_fu_99440_p4 = ap_phi_mux_data_2211_V_read2281_rewind_phi_fu_56837_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2211_V_read2281_phi_phi_fu_99440_p4 = data_2211_V_read.read();
        } else {
            ap_phi_mux_data_2211_V_read2281_phi_phi_fu_99440_p4 = ap_phi_reg_pp0_iter0_data_2211_V_read2281_phi_reg_99436.read();
        }
    } else {
        ap_phi_mux_data_2211_V_read2281_phi_phi_fu_99440_p4 = ap_phi_reg_pp0_iter0_data_2211_V_read2281_phi_reg_99436.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2211_V_read2281_rewind_phi_fu_56837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2211_V_read2281_rewind_phi_fu_56837_p6 = data_2211_V_read2281_phi_reg_99436.read();
    } else {
        ap_phi_mux_data_2211_V_read2281_rewind_phi_fu_56837_p6 = data_2211_V_read2281_rewind_reg_56833.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2212_V_read2282_phi_phi_fu_99453_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2212_V_read2282_phi_phi_fu_99453_p4 = ap_phi_mux_data_2212_V_read2282_rewind_phi_fu_56851_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2212_V_read2282_phi_phi_fu_99453_p4 = data_2212_V_read.read();
        } else {
            ap_phi_mux_data_2212_V_read2282_phi_phi_fu_99453_p4 = ap_phi_reg_pp0_iter0_data_2212_V_read2282_phi_reg_99449.read();
        }
    } else {
        ap_phi_mux_data_2212_V_read2282_phi_phi_fu_99453_p4 = ap_phi_reg_pp0_iter0_data_2212_V_read2282_phi_reg_99449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2212_V_read2282_rewind_phi_fu_56851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2212_V_read2282_rewind_phi_fu_56851_p6 = data_2212_V_read2282_phi_reg_99449.read();
    } else {
        ap_phi_mux_data_2212_V_read2282_rewind_phi_fu_56851_p6 = data_2212_V_read2282_rewind_reg_56847.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2213_V_read2283_phi_phi_fu_99466_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2213_V_read2283_phi_phi_fu_99466_p4 = ap_phi_mux_data_2213_V_read2283_rewind_phi_fu_56865_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2213_V_read2283_phi_phi_fu_99466_p4 = data_2213_V_read.read();
        } else {
            ap_phi_mux_data_2213_V_read2283_phi_phi_fu_99466_p4 = ap_phi_reg_pp0_iter0_data_2213_V_read2283_phi_reg_99462.read();
        }
    } else {
        ap_phi_mux_data_2213_V_read2283_phi_phi_fu_99466_p4 = ap_phi_reg_pp0_iter0_data_2213_V_read2283_phi_reg_99462.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2213_V_read2283_rewind_phi_fu_56865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2213_V_read2283_rewind_phi_fu_56865_p6 = data_2213_V_read2283_phi_reg_99462.read();
    } else {
        ap_phi_mux_data_2213_V_read2283_rewind_phi_fu_56865_p6 = data_2213_V_read2283_rewind_reg_56861.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2214_V_read2284_phi_phi_fu_99479_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2214_V_read2284_phi_phi_fu_99479_p4 = ap_phi_mux_data_2214_V_read2284_rewind_phi_fu_56879_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2214_V_read2284_phi_phi_fu_99479_p4 = data_2214_V_read.read();
        } else {
            ap_phi_mux_data_2214_V_read2284_phi_phi_fu_99479_p4 = ap_phi_reg_pp0_iter0_data_2214_V_read2284_phi_reg_99475.read();
        }
    } else {
        ap_phi_mux_data_2214_V_read2284_phi_phi_fu_99479_p4 = ap_phi_reg_pp0_iter0_data_2214_V_read2284_phi_reg_99475.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2214_V_read2284_rewind_phi_fu_56879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2214_V_read2284_rewind_phi_fu_56879_p6 = data_2214_V_read2284_phi_reg_99475.read();
    } else {
        ap_phi_mux_data_2214_V_read2284_rewind_phi_fu_56879_p6 = data_2214_V_read2284_rewind_reg_56875.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2215_V_read2285_phi_phi_fu_99492_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2215_V_read2285_phi_phi_fu_99492_p4 = ap_phi_mux_data_2215_V_read2285_rewind_phi_fu_56893_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2215_V_read2285_phi_phi_fu_99492_p4 = data_2215_V_read.read();
        } else {
            ap_phi_mux_data_2215_V_read2285_phi_phi_fu_99492_p4 = ap_phi_reg_pp0_iter0_data_2215_V_read2285_phi_reg_99488.read();
        }
    } else {
        ap_phi_mux_data_2215_V_read2285_phi_phi_fu_99492_p4 = ap_phi_reg_pp0_iter0_data_2215_V_read2285_phi_reg_99488.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2215_V_read2285_rewind_phi_fu_56893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2215_V_read2285_rewind_phi_fu_56893_p6 = data_2215_V_read2285_phi_reg_99488.read();
    } else {
        ap_phi_mux_data_2215_V_read2285_rewind_phi_fu_56893_p6 = data_2215_V_read2285_rewind_reg_56889.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2216_V_read2286_phi_phi_fu_99505_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2216_V_read2286_phi_phi_fu_99505_p4 = ap_phi_mux_data_2216_V_read2286_rewind_phi_fu_56907_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2216_V_read2286_phi_phi_fu_99505_p4 = data_2216_V_read.read();
        } else {
            ap_phi_mux_data_2216_V_read2286_phi_phi_fu_99505_p4 = ap_phi_reg_pp0_iter0_data_2216_V_read2286_phi_reg_99501.read();
        }
    } else {
        ap_phi_mux_data_2216_V_read2286_phi_phi_fu_99505_p4 = ap_phi_reg_pp0_iter0_data_2216_V_read2286_phi_reg_99501.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2216_V_read2286_rewind_phi_fu_56907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2216_V_read2286_rewind_phi_fu_56907_p6 = data_2216_V_read2286_phi_reg_99501.read();
    } else {
        ap_phi_mux_data_2216_V_read2286_rewind_phi_fu_56907_p6 = data_2216_V_read2286_rewind_reg_56903.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2217_V_read2287_phi_phi_fu_99518_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2217_V_read2287_phi_phi_fu_99518_p4 = ap_phi_mux_data_2217_V_read2287_rewind_phi_fu_56921_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2217_V_read2287_phi_phi_fu_99518_p4 = data_2217_V_read.read();
        } else {
            ap_phi_mux_data_2217_V_read2287_phi_phi_fu_99518_p4 = ap_phi_reg_pp0_iter0_data_2217_V_read2287_phi_reg_99514.read();
        }
    } else {
        ap_phi_mux_data_2217_V_read2287_phi_phi_fu_99518_p4 = ap_phi_reg_pp0_iter0_data_2217_V_read2287_phi_reg_99514.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2217_V_read2287_rewind_phi_fu_56921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2217_V_read2287_rewind_phi_fu_56921_p6 = data_2217_V_read2287_phi_reg_99514.read();
    } else {
        ap_phi_mux_data_2217_V_read2287_rewind_phi_fu_56921_p6 = data_2217_V_read2287_rewind_reg_56917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2218_V_read2288_phi_phi_fu_99531_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2218_V_read2288_phi_phi_fu_99531_p4 = ap_phi_mux_data_2218_V_read2288_rewind_phi_fu_56935_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2218_V_read2288_phi_phi_fu_99531_p4 = data_2218_V_read.read();
        } else {
            ap_phi_mux_data_2218_V_read2288_phi_phi_fu_99531_p4 = ap_phi_reg_pp0_iter0_data_2218_V_read2288_phi_reg_99527.read();
        }
    } else {
        ap_phi_mux_data_2218_V_read2288_phi_phi_fu_99531_p4 = ap_phi_reg_pp0_iter0_data_2218_V_read2288_phi_reg_99527.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2218_V_read2288_rewind_phi_fu_56935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2218_V_read2288_rewind_phi_fu_56935_p6 = data_2218_V_read2288_phi_reg_99527.read();
    } else {
        ap_phi_mux_data_2218_V_read2288_rewind_phi_fu_56935_p6 = data_2218_V_read2288_rewind_reg_56931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2219_V_read2289_phi_phi_fu_99544_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2219_V_read2289_phi_phi_fu_99544_p4 = ap_phi_mux_data_2219_V_read2289_rewind_phi_fu_56949_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2219_V_read2289_phi_phi_fu_99544_p4 = data_2219_V_read.read();
        } else {
            ap_phi_mux_data_2219_V_read2289_phi_phi_fu_99544_p4 = ap_phi_reg_pp0_iter0_data_2219_V_read2289_phi_reg_99540.read();
        }
    } else {
        ap_phi_mux_data_2219_V_read2289_phi_phi_fu_99544_p4 = ap_phi_reg_pp0_iter0_data_2219_V_read2289_phi_reg_99540.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2219_V_read2289_rewind_phi_fu_56949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2219_V_read2289_rewind_phi_fu_56949_p6 = data_2219_V_read2289_phi_reg_99540.read();
    } else {
        ap_phi_mux_data_2219_V_read2289_rewind_phi_fu_56949_p6 = data_2219_V_read2289_rewind_reg_56945.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_221_V_read291_phi_phi_fu_73570_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_221_V_read291_phi_phi_fu_73570_p4 = ap_phi_mux_data_221_V_read291_rewind_phi_fu_28977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_221_V_read291_phi_phi_fu_73570_p4 = data_221_V_read.read();
        } else {
            ap_phi_mux_data_221_V_read291_phi_phi_fu_73570_p4 = ap_phi_reg_pp0_iter0_data_221_V_read291_phi_reg_73566.read();
        }
    } else {
        ap_phi_mux_data_221_V_read291_phi_phi_fu_73570_p4 = ap_phi_reg_pp0_iter0_data_221_V_read291_phi_reg_73566.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_221_V_read291_rewind_phi_fu_28977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_221_V_read291_rewind_phi_fu_28977_p6 = data_221_V_read291_phi_reg_73566.read();
    } else {
        ap_phi_mux_data_221_V_read291_rewind_phi_fu_28977_p6 = data_221_V_read291_rewind_reg_28973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2220_V_read2290_phi_phi_fu_99557_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2220_V_read2290_phi_phi_fu_99557_p4 = ap_phi_mux_data_2220_V_read2290_rewind_phi_fu_56963_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2220_V_read2290_phi_phi_fu_99557_p4 = data_2220_V_read.read();
        } else {
            ap_phi_mux_data_2220_V_read2290_phi_phi_fu_99557_p4 = ap_phi_reg_pp0_iter0_data_2220_V_read2290_phi_reg_99553.read();
        }
    } else {
        ap_phi_mux_data_2220_V_read2290_phi_phi_fu_99557_p4 = ap_phi_reg_pp0_iter0_data_2220_V_read2290_phi_reg_99553.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2220_V_read2290_rewind_phi_fu_56963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2220_V_read2290_rewind_phi_fu_56963_p6 = data_2220_V_read2290_phi_reg_99553.read();
    } else {
        ap_phi_mux_data_2220_V_read2290_rewind_phi_fu_56963_p6 = data_2220_V_read2290_rewind_reg_56959.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2221_V_read2291_phi_phi_fu_99570_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2221_V_read2291_phi_phi_fu_99570_p4 = ap_phi_mux_data_2221_V_read2291_rewind_phi_fu_56977_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2221_V_read2291_phi_phi_fu_99570_p4 = data_2221_V_read.read();
        } else {
            ap_phi_mux_data_2221_V_read2291_phi_phi_fu_99570_p4 = ap_phi_reg_pp0_iter0_data_2221_V_read2291_phi_reg_99566.read();
        }
    } else {
        ap_phi_mux_data_2221_V_read2291_phi_phi_fu_99570_p4 = ap_phi_reg_pp0_iter0_data_2221_V_read2291_phi_reg_99566.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2221_V_read2291_rewind_phi_fu_56977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2221_V_read2291_rewind_phi_fu_56977_p6 = data_2221_V_read2291_phi_reg_99566.read();
    } else {
        ap_phi_mux_data_2221_V_read2291_rewind_phi_fu_56977_p6 = data_2221_V_read2291_rewind_reg_56973.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2222_V_read2292_phi_phi_fu_99583_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2222_V_read2292_phi_phi_fu_99583_p4 = ap_phi_mux_data_2222_V_read2292_rewind_phi_fu_56991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2222_V_read2292_phi_phi_fu_99583_p4 = data_2222_V_read.read();
        } else {
            ap_phi_mux_data_2222_V_read2292_phi_phi_fu_99583_p4 = ap_phi_reg_pp0_iter0_data_2222_V_read2292_phi_reg_99579.read();
        }
    } else {
        ap_phi_mux_data_2222_V_read2292_phi_phi_fu_99583_p4 = ap_phi_reg_pp0_iter0_data_2222_V_read2292_phi_reg_99579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2222_V_read2292_rewind_phi_fu_56991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2222_V_read2292_rewind_phi_fu_56991_p6 = data_2222_V_read2292_phi_reg_99579.read();
    } else {
        ap_phi_mux_data_2222_V_read2292_rewind_phi_fu_56991_p6 = data_2222_V_read2292_rewind_reg_56987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2223_V_read2293_phi_phi_fu_99596_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2223_V_read2293_phi_phi_fu_99596_p4 = ap_phi_mux_data_2223_V_read2293_rewind_phi_fu_57005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2223_V_read2293_phi_phi_fu_99596_p4 = data_2223_V_read.read();
        } else {
            ap_phi_mux_data_2223_V_read2293_phi_phi_fu_99596_p4 = ap_phi_reg_pp0_iter0_data_2223_V_read2293_phi_reg_99592.read();
        }
    } else {
        ap_phi_mux_data_2223_V_read2293_phi_phi_fu_99596_p4 = ap_phi_reg_pp0_iter0_data_2223_V_read2293_phi_reg_99592.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2223_V_read2293_rewind_phi_fu_57005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2223_V_read2293_rewind_phi_fu_57005_p6 = data_2223_V_read2293_phi_reg_99592.read();
    } else {
        ap_phi_mux_data_2223_V_read2293_rewind_phi_fu_57005_p6 = data_2223_V_read2293_rewind_reg_57001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2224_V_read2294_phi_phi_fu_99609_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2224_V_read2294_phi_phi_fu_99609_p4 = ap_phi_mux_data_2224_V_read2294_rewind_phi_fu_57019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2224_V_read2294_phi_phi_fu_99609_p4 = data_2224_V_read.read();
        } else {
            ap_phi_mux_data_2224_V_read2294_phi_phi_fu_99609_p4 = ap_phi_reg_pp0_iter0_data_2224_V_read2294_phi_reg_99605.read();
        }
    } else {
        ap_phi_mux_data_2224_V_read2294_phi_phi_fu_99609_p4 = ap_phi_reg_pp0_iter0_data_2224_V_read2294_phi_reg_99605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2224_V_read2294_rewind_phi_fu_57019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2224_V_read2294_rewind_phi_fu_57019_p6 = data_2224_V_read2294_phi_reg_99605.read();
    } else {
        ap_phi_mux_data_2224_V_read2294_rewind_phi_fu_57019_p6 = data_2224_V_read2294_rewind_reg_57015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2225_V_read2295_phi_phi_fu_99622_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2225_V_read2295_phi_phi_fu_99622_p4 = ap_phi_mux_data_2225_V_read2295_rewind_phi_fu_57033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2225_V_read2295_phi_phi_fu_99622_p4 = data_2225_V_read.read();
        } else {
            ap_phi_mux_data_2225_V_read2295_phi_phi_fu_99622_p4 = ap_phi_reg_pp0_iter0_data_2225_V_read2295_phi_reg_99618.read();
        }
    } else {
        ap_phi_mux_data_2225_V_read2295_phi_phi_fu_99622_p4 = ap_phi_reg_pp0_iter0_data_2225_V_read2295_phi_reg_99618.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2225_V_read2295_rewind_phi_fu_57033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2225_V_read2295_rewind_phi_fu_57033_p6 = data_2225_V_read2295_phi_reg_99618.read();
    } else {
        ap_phi_mux_data_2225_V_read2295_rewind_phi_fu_57033_p6 = data_2225_V_read2295_rewind_reg_57029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2226_V_read2296_phi_phi_fu_99635_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2226_V_read2296_phi_phi_fu_99635_p4 = ap_phi_mux_data_2226_V_read2296_rewind_phi_fu_57047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2226_V_read2296_phi_phi_fu_99635_p4 = data_2226_V_read.read();
        } else {
            ap_phi_mux_data_2226_V_read2296_phi_phi_fu_99635_p4 = ap_phi_reg_pp0_iter0_data_2226_V_read2296_phi_reg_99631.read();
        }
    } else {
        ap_phi_mux_data_2226_V_read2296_phi_phi_fu_99635_p4 = ap_phi_reg_pp0_iter0_data_2226_V_read2296_phi_reg_99631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2226_V_read2296_rewind_phi_fu_57047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2226_V_read2296_rewind_phi_fu_57047_p6 = data_2226_V_read2296_phi_reg_99631.read();
    } else {
        ap_phi_mux_data_2226_V_read2296_rewind_phi_fu_57047_p6 = data_2226_V_read2296_rewind_reg_57043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2227_V_read2297_phi_phi_fu_99648_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2227_V_read2297_phi_phi_fu_99648_p4 = ap_phi_mux_data_2227_V_read2297_rewind_phi_fu_57061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2227_V_read2297_phi_phi_fu_99648_p4 = data_2227_V_read.read();
        } else {
            ap_phi_mux_data_2227_V_read2297_phi_phi_fu_99648_p4 = ap_phi_reg_pp0_iter0_data_2227_V_read2297_phi_reg_99644.read();
        }
    } else {
        ap_phi_mux_data_2227_V_read2297_phi_phi_fu_99648_p4 = ap_phi_reg_pp0_iter0_data_2227_V_read2297_phi_reg_99644.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2227_V_read2297_rewind_phi_fu_57061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2227_V_read2297_rewind_phi_fu_57061_p6 = data_2227_V_read2297_phi_reg_99644.read();
    } else {
        ap_phi_mux_data_2227_V_read2297_rewind_phi_fu_57061_p6 = data_2227_V_read2297_rewind_reg_57057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2228_V_read2298_phi_phi_fu_99661_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2228_V_read2298_phi_phi_fu_99661_p4 = ap_phi_mux_data_2228_V_read2298_rewind_phi_fu_57075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2228_V_read2298_phi_phi_fu_99661_p4 = data_2228_V_read.read();
        } else {
            ap_phi_mux_data_2228_V_read2298_phi_phi_fu_99661_p4 = ap_phi_reg_pp0_iter0_data_2228_V_read2298_phi_reg_99657.read();
        }
    } else {
        ap_phi_mux_data_2228_V_read2298_phi_phi_fu_99661_p4 = ap_phi_reg_pp0_iter0_data_2228_V_read2298_phi_reg_99657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2228_V_read2298_rewind_phi_fu_57075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2228_V_read2298_rewind_phi_fu_57075_p6 = data_2228_V_read2298_phi_reg_99657.read();
    } else {
        ap_phi_mux_data_2228_V_read2298_rewind_phi_fu_57075_p6 = data_2228_V_read2298_rewind_reg_57071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2229_V_read2299_phi_phi_fu_99674_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2229_V_read2299_phi_phi_fu_99674_p4 = ap_phi_mux_data_2229_V_read2299_rewind_phi_fu_57089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2229_V_read2299_phi_phi_fu_99674_p4 = data_2229_V_read.read();
        } else {
            ap_phi_mux_data_2229_V_read2299_phi_phi_fu_99674_p4 = ap_phi_reg_pp0_iter0_data_2229_V_read2299_phi_reg_99670.read();
        }
    } else {
        ap_phi_mux_data_2229_V_read2299_phi_phi_fu_99674_p4 = ap_phi_reg_pp0_iter0_data_2229_V_read2299_phi_reg_99670.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2229_V_read2299_rewind_phi_fu_57089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2229_V_read2299_rewind_phi_fu_57089_p6 = data_2229_V_read2299_phi_reg_99670.read();
    } else {
        ap_phi_mux_data_2229_V_read2299_rewind_phi_fu_57089_p6 = data_2229_V_read2299_rewind_reg_57085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_222_V_read292_phi_phi_fu_73583_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_222_V_read292_phi_phi_fu_73583_p4 = ap_phi_mux_data_222_V_read292_rewind_phi_fu_28991_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_222_V_read292_phi_phi_fu_73583_p4 = data_222_V_read.read();
        } else {
            ap_phi_mux_data_222_V_read292_phi_phi_fu_73583_p4 = ap_phi_reg_pp0_iter0_data_222_V_read292_phi_reg_73579.read();
        }
    } else {
        ap_phi_mux_data_222_V_read292_phi_phi_fu_73583_p4 = ap_phi_reg_pp0_iter0_data_222_V_read292_phi_reg_73579.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_222_V_read292_rewind_phi_fu_28991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_222_V_read292_rewind_phi_fu_28991_p6 = data_222_V_read292_phi_reg_73579.read();
    } else {
        ap_phi_mux_data_222_V_read292_rewind_phi_fu_28991_p6 = data_222_V_read292_rewind_reg_28987.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2230_V_read2300_phi_phi_fu_99687_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2230_V_read2300_phi_phi_fu_99687_p4 = ap_phi_mux_data_2230_V_read2300_rewind_phi_fu_57103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2230_V_read2300_phi_phi_fu_99687_p4 = data_2230_V_read.read();
        } else {
            ap_phi_mux_data_2230_V_read2300_phi_phi_fu_99687_p4 = ap_phi_reg_pp0_iter0_data_2230_V_read2300_phi_reg_99683.read();
        }
    } else {
        ap_phi_mux_data_2230_V_read2300_phi_phi_fu_99687_p4 = ap_phi_reg_pp0_iter0_data_2230_V_read2300_phi_reg_99683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2230_V_read2300_rewind_phi_fu_57103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2230_V_read2300_rewind_phi_fu_57103_p6 = data_2230_V_read2300_phi_reg_99683.read();
    } else {
        ap_phi_mux_data_2230_V_read2300_rewind_phi_fu_57103_p6 = data_2230_V_read2300_rewind_reg_57099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2231_V_read2301_phi_phi_fu_99700_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2231_V_read2301_phi_phi_fu_99700_p4 = ap_phi_mux_data_2231_V_read2301_rewind_phi_fu_57117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2231_V_read2301_phi_phi_fu_99700_p4 = data_2231_V_read.read();
        } else {
            ap_phi_mux_data_2231_V_read2301_phi_phi_fu_99700_p4 = ap_phi_reg_pp0_iter0_data_2231_V_read2301_phi_reg_99696.read();
        }
    } else {
        ap_phi_mux_data_2231_V_read2301_phi_phi_fu_99700_p4 = ap_phi_reg_pp0_iter0_data_2231_V_read2301_phi_reg_99696.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2231_V_read2301_rewind_phi_fu_57117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2231_V_read2301_rewind_phi_fu_57117_p6 = data_2231_V_read2301_phi_reg_99696.read();
    } else {
        ap_phi_mux_data_2231_V_read2301_rewind_phi_fu_57117_p6 = data_2231_V_read2301_rewind_reg_57113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2232_V_read2302_phi_phi_fu_99713_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2232_V_read2302_phi_phi_fu_99713_p4 = ap_phi_mux_data_2232_V_read2302_rewind_phi_fu_57131_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2232_V_read2302_phi_phi_fu_99713_p4 = data_2232_V_read.read();
        } else {
            ap_phi_mux_data_2232_V_read2302_phi_phi_fu_99713_p4 = ap_phi_reg_pp0_iter0_data_2232_V_read2302_phi_reg_99709.read();
        }
    } else {
        ap_phi_mux_data_2232_V_read2302_phi_phi_fu_99713_p4 = ap_phi_reg_pp0_iter0_data_2232_V_read2302_phi_reg_99709.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2232_V_read2302_rewind_phi_fu_57131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2232_V_read2302_rewind_phi_fu_57131_p6 = data_2232_V_read2302_phi_reg_99709.read();
    } else {
        ap_phi_mux_data_2232_V_read2302_rewind_phi_fu_57131_p6 = data_2232_V_read2302_rewind_reg_57127.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2233_V_read2303_phi_phi_fu_99726_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2233_V_read2303_phi_phi_fu_99726_p4 = ap_phi_mux_data_2233_V_read2303_rewind_phi_fu_57145_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2233_V_read2303_phi_phi_fu_99726_p4 = data_2233_V_read.read();
        } else {
            ap_phi_mux_data_2233_V_read2303_phi_phi_fu_99726_p4 = ap_phi_reg_pp0_iter0_data_2233_V_read2303_phi_reg_99722.read();
        }
    } else {
        ap_phi_mux_data_2233_V_read2303_phi_phi_fu_99726_p4 = ap_phi_reg_pp0_iter0_data_2233_V_read2303_phi_reg_99722.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2233_V_read2303_rewind_phi_fu_57145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2233_V_read2303_rewind_phi_fu_57145_p6 = data_2233_V_read2303_phi_reg_99722.read();
    } else {
        ap_phi_mux_data_2233_V_read2303_rewind_phi_fu_57145_p6 = data_2233_V_read2303_rewind_reg_57141.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2234_V_read2304_phi_phi_fu_99739_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2234_V_read2304_phi_phi_fu_99739_p4 = ap_phi_mux_data_2234_V_read2304_rewind_phi_fu_57159_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2234_V_read2304_phi_phi_fu_99739_p4 = data_2234_V_read.read();
        } else {
            ap_phi_mux_data_2234_V_read2304_phi_phi_fu_99739_p4 = ap_phi_reg_pp0_iter0_data_2234_V_read2304_phi_reg_99735.read();
        }
    } else {
        ap_phi_mux_data_2234_V_read2304_phi_phi_fu_99739_p4 = ap_phi_reg_pp0_iter0_data_2234_V_read2304_phi_reg_99735.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2234_V_read2304_rewind_phi_fu_57159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2234_V_read2304_rewind_phi_fu_57159_p6 = data_2234_V_read2304_phi_reg_99735.read();
    } else {
        ap_phi_mux_data_2234_V_read2304_rewind_phi_fu_57159_p6 = data_2234_V_read2304_rewind_reg_57155.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2235_V_read2305_phi_phi_fu_99752_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2235_V_read2305_phi_phi_fu_99752_p4 = ap_phi_mux_data_2235_V_read2305_rewind_phi_fu_57173_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2235_V_read2305_phi_phi_fu_99752_p4 = data_2235_V_read.read();
        } else {
            ap_phi_mux_data_2235_V_read2305_phi_phi_fu_99752_p4 = ap_phi_reg_pp0_iter0_data_2235_V_read2305_phi_reg_99748.read();
        }
    } else {
        ap_phi_mux_data_2235_V_read2305_phi_phi_fu_99752_p4 = ap_phi_reg_pp0_iter0_data_2235_V_read2305_phi_reg_99748.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2235_V_read2305_rewind_phi_fu_57173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2235_V_read2305_rewind_phi_fu_57173_p6 = data_2235_V_read2305_phi_reg_99748.read();
    } else {
        ap_phi_mux_data_2235_V_read2305_rewind_phi_fu_57173_p6 = data_2235_V_read2305_rewind_reg_57169.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2236_V_read2306_phi_phi_fu_99765_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2236_V_read2306_phi_phi_fu_99765_p4 = ap_phi_mux_data_2236_V_read2306_rewind_phi_fu_57187_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2236_V_read2306_phi_phi_fu_99765_p4 = data_2236_V_read.read();
        } else {
            ap_phi_mux_data_2236_V_read2306_phi_phi_fu_99765_p4 = ap_phi_reg_pp0_iter0_data_2236_V_read2306_phi_reg_99761.read();
        }
    } else {
        ap_phi_mux_data_2236_V_read2306_phi_phi_fu_99765_p4 = ap_phi_reg_pp0_iter0_data_2236_V_read2306_phi_reg_99761.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2236_V_read2306_rewind_phi_fu_57187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2236_V_read2306_rewind_phi_fu_57187_p6 = data_2236_V_read2306_phi_reg_99761.read();
    } else {
        ap_phi_mux_data_2236_V_read2306_rewind_phi_fu_57187_p6 = data_2236_V_read2306_rewind_reg_57183.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2237_V_read2307_phi_phi_fu_99778_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2237_V_read2307_phi_phi_fu_99778_p4 = ap_phi_mux_data_2237_V_read2307_rewind_phi_fu_57201_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2237_V_read2307_phi_phi_fu_99778_p4 = data_2237_V_read.read();
        } else {
            ap_phi_mux_data_2237_V_read2307_phi_phi_fu_99778_p4 = ap_phi_reg_pp0_iter0_data_2237_V_read2307_phi_reg_99774.read();
        }
    } else {
        ap_phi_mux_data_2237_V_read2307_phi_phi_fu_99778_p4 = ap_phi_reg_pp0_iter0_data_2237_V_read2307_phi_reg_99774.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2237_V_read2307_rewind_phi_fu_57201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2237_V_read2307_rewind_phi_fu_57201_p6 = data_2237_V_read2307_phi_reg_99774.read();
    } else {
        ap_phi_mux_data_2237_V_read2307_rewind_phi_fu_57201_p6 = data_2237_V_read2307_rewind_reg_57197.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2238_V_read2308_phi_phi_fu_99791_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2238_V_read2308_phi_phi_fu_99791_p4 = ap_phi_mux_data_2238_V_read2308_rewind_phi_fu_57215_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2238_V_read2308_phi_phi_fu_99791_p4 = data_2238_V_read.read();
        } else {
            ap_phi_mux_data_2238_V_read2308_phi_phi_fu_99791_p4 = ap_phi_reg_pp0_iter0_data_2238_V_read2308_phi_reg_99787.read();
        }
    } else {
        ap_phi_mux_data_2238_V_read2308_phi_phi_fu_99791_p4 = ap_phi_reg_pp0_iter0_data_2238_V_read2308_phi_reg_99787.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2238_V_read2308_rewind_phi_fu_57215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2238_V_read2308_rewind_phi_fu_57215_p6 = data_2238_V_read2308_phi_reg_99787.read();
    } else {
        ap_phi_mux_data_2238_V_read2308_rewind_phi_fu_57215_p6 = data_2238_V_read2308_rewind_reg_57211.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2239_V_read2309_phi_phi_fu_99804_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2239_V_read2309_phi_phi_fu_99804_p4 = ap_phi_mux_data_2239_V_read2309_rewind_phi_fu_57229_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2239_V_read2309_phi_phi_fu_99804_p4 = data_2239_V_read.read();
        } else {
            ap_phi_mux_data_2239_V_read2309_phi_phi_fu_99804_p4 = ap_phi_reg_pp0_iter0_data_2239_V_read2309_phi_reg_99800.read();
        }
    } else {
        ap_phi_mux_data_2239_V_read2309_phi_phi_fu_99804_p4 = ap_phi_reg_pp0_iter0_data_2239_V_read2309_phi_reg_99800.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2239_V_read2309_rewind_phi_fu_57229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2239_V_read2309_rewind_phi_fu_57229_p6 = data_2239_V_read2309_phi_reg_99800.read();
    } else {
        ap_phi_mux_data_2239_V_read2309_rewind_phi_fu_57229_p6 = data_2239_V_read2309_rewind_reg_57225.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_223_V_read293_phi_phi_fu_73596_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_223_V_read293_phi_phi_fu_73596_p4 = ap_phi_mux_data_223_V_read293_rewind_phi_fu_29005_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_223_V_read293_phi_phi_fu_73596_p4 = data_223_V_read.read();
        } else {
            ap_phi_mux_data_223_V_read293_phi_phi_fu_73596_p4 = ap_phi_reg_pp0_iter0_data_223_V_read293_phi_reg_73592.read();
        }
    } else {
        ap_phi_mux_data_223_V_read293_phi_phi_fu_73596_p4 = ap_phi_reg_pp0_iter0_data_223_V_read293_phi_reg_73592.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_223_V_read293_rewind_phi_fu_29005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_223_V_read293_rewind_phi_fu_29005_p6 = data_223_V_read293_phi_reg_73592.read();
    } else {
        ap_phi_mux_data_223_V_read293_rewind_phi_fu_29005_p6 = data_223_V_read293_rewind_reg_29001.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2240_V_read2310_phi_phi_fu_99817_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2240_V_read2310_phi_phi_fu_99817_p4 = ap_phi_mux_data_2240_V_read2310_rewind_phi_fu_57243_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2240_V_read2310_phi_phi_fu_99817_p4 = data_2240_V_read.read();
        } else {
            ap_phi_mux_data_2240_V_read2310_phi_phi_fu_99817_p4 = ap_phi_reg_pp0_iter0_data_2240_V_read2310_phi_reg_99813.read();
        }
    } else {
        ap_phi_mux_data_2240_V_read2310_phi_phi_fu_99817_p4 = ap_phi_reg_pp0_iter0_data_2240_V_read2310_phi_reg_99813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2240_V_read2310_rewind_phi_fu_57243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2240_V_read2310_rewind_phi_fu_57243_p6 = data_2240_V_read2310_phi_reg_99813.read();
    } else {
        ap_phi_mux_data_2240_V_read2310_rewind_phi_fu_57243_p6 = data_2240_V_read2310_rewind_reg_57239.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2241_V_read2311_phi_phi_fu_99830_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2241_V_read2311_phi_phi_fu_99830_p4 = ap_phi_mux_data_2241_V_read2311_rewind_phi_fu_57257_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2241_V_read2311_phi_phi_fu_99830_p4 = data_2241_V_read.read();
        } else {
            ap_phi_mux_data_2241_V_read2311_phi_phi_fu_99830_p4 = ap_phi_reg_pp0_iter0_data_2241_V_read2311_phi_reg_99826.read();
        }
    } else {
        ap_phi_mux_data_2241_V_read2311_phi_phi_fu_99830_p4 = ap_phi_reg_pp0_iter0_data_2241_V_read2311_phi_reg_99826.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2241_V_read2311_rewind_phi_fu_57257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2241_V_read2311_rewind_phi_fu_57257_p6 = data_2241_V_read2311_phi_reg_99826.read();
    } else {
        ap_phi_mux_data_2241_V_read2311_rewind_phi_fu_57257_p6 = data_2241_V_read2311_rewind_reg_57253.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2242_V_read2312_phi_phi_fu_99843_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2242_V_read2312_phi_phi_fu_99843_p4 = ap_phi_mux_data_2242_V_read2312_rewind_phi_fu_57271_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2242_V_read2312_phi_phi_fu_99843_p4 = data_2242_V_read.read();
        } else {
            ap_phi_mux_data_2242_V_read2312_phi_phi_fu_99843_p4 = ap_phi_reg_pp0_iter0_data_2242_V_read2312_phi_reg_99839.read();
        }
    } else {
        ap_phi_mux_data_2242_V_read2312_phi_phi_fu_99843_p4 = ap_phi_reg_pp0_iter0_data_2242_V_read2312_phi_reg_99839.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2242_V_read2312_rewind_phi_fu_57271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2242_V_read2312_rewind_phi_fu_57271_p6 = data_2242_V_read2312_phi_reg_99839.read();
    } else {
        ap_phi_mux_data_2242_V_read2312_rewind_phi_fu_57271_p6 = data_2242_V_read2312_rewind_reg_57267.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2243_V_read2313_phi_phi_fu_99856_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2243_V_read2313_phi_phi_fu_99856_p4 = ap_phi_mux_data_2243_V_read2313_rewind_phi_fu_57285_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2243_V_read2313_phi_phi_fu_99856_p4 = data_2243_V_read.read();
        } else {
            ap_phi_mux_data_2243_V_read2313_phi_phi_fu_99856_p4 = ap_phi_reg_pp0_iter0_data_2243_V_read2313_phi_reg_99852.read();
        }
    } else {
        ap_phi_mux_data_2243_V_read2313_phi_phi_fu_99856_p4 = ap_phi_reg_pp0_iter0_data_2243_V_read2313_phi_reg_99852.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2243_V_read2313_rewind_phi_fu_57285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2243_V_read2313_rewind_phi_fu_57285_p6 = data_2243_V_read2313_phi_reg_99852.read();
    } else {
        ap_phi_mux_data_2243_V_read2313_rewind_phi_fu_57285_p6 = data_2243_V_read2313_rewind_reg_57281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2244_V_read2314_phi_phi_fu_99869_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2244_V_read2314_phi_phi_fu_99869_p4 = ap_phi_mux_data_2244_V_read2314_rewind_phi_fu_57299_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2244_V_read2314_phi_phi_fu_99869_p4 = data_2244_V_read.read();
        } else {
            ap_phi_mux_data_2244_V_read2314_phi_phi_fu_99869_p4 = ap_phi_reg_pp0_iter0_data_2244_V_read2314_phi_reg_99865.read();
        }
    } else {
        ap_phi_mux_data_2244_V_read2314_phi_phi_fu_99869_p4 = ap_phi_reg_pp0_iter0_data_2244_V_read2314_phi_reg_99865.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2244_V_read2314_rewind_phi_fu_57299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2244_V_read2314_rewind_phi_fu_57299_p6 = data_2244_V_read2314_phi_reg_99865.read();
    } else {
        ap_phi_mux_data_2244_V_read2314_rewind_phi_fu_57299_p6 = data_2244_V_read2314_rewind_reg_57295.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2245_V_read2315_phi_phi_fu_99882_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2245_V_read2315_phi_phi_fu_99882_p4 = ap_phi_mux_data_2245_V_read2315_rewind_phi_fu_57313_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2245_V_read2315_phi_phi_fu_99882_p4 = data_2245_V_read.read();
        } else {
            ap_phi_mux_data_2245_V_read2315_phi_phi_fu_99882_p4 = ap_phi_reg_pp0_iter0_data_2245_V_read2315_phi_reg_99878.read();
        }
    } else {
        ap_phi_mux_data_2245_V_read2315_phi_phi_fu_99882_p4 = ap_phi_reg_pp0_iter0_data_2245_V_read2315_phi_reg_99878.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2245_V_read2315_rewind_phi_fu_57313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2245_V_read2315_rewind_phi_fu_57313_p6 = data_2245_V_read2315_phi_reg_99878.read();
    } else {
        ap_phi_mux_data_2245_V_read2315_rewind_phi_fu_57313_p6 = data_2245_V_read2315_rewind_reg_57309.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2246_V_read2316_phi_phi_fu_99895_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2246_V_read2316_phi_phi_fu_99895_p4 = ap_phi_mux_data_2246_V_read2316_rewind_phi_fu_57327_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2246_V_read2316_phi_phi_fu_99895_p4 = data_2246_V_read.read();
        } else {
            ap_phi_mux_data_2246_V_read2316_phi_phi_fu_99895_p4 = ap_phi_reg_pp0_iter0_data_2246_V_read2316_phi_reg_99891.read();
        }
    } else {
        ap_phi_mux_data_2246_V_read2316_phi_phi_fu_99895_p4 = ap_phi_reg_pp0_iter0_data_2246_V_read2316_phi_reg_99891.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2246_V_read2316_rewind_phi_fu_57327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2246_V_read2316_rewind_phi_fu_57327_p6 = data_2246_V_read2316_phi_reg_99891.read();
    } else {
        ap_phi_mux_data_2246_V_read2316_rewind_phi_fu_57327_p6 = data_2246_V_read2316_rewind_reg_57323.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2247_V_read2317_phi_phi_fu_99908_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2247_V_read2317_phi_phi_fu_99908_p4 = ap_phi_mux_data_2247_V_read2317_rewind_phi_fu_57341_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2247_V_read2317_phi_phi_fu_99908_p4 = data_2247_V_read.read();
        } else {
            ap_phi_mux_data_2247_V_read2317_phi_phi_fu_99908_p4 = ap_phi_reg_pp0_iter0_data_2247_V_read2317_phi_reg_99904.read();
        }
    } else {
        ap_phi_mux_data_2247_V_read2317_phi_phi_fu_99908_p4 = ap_phi_reg_pp0_iter0_data_2247_V_read2317_phi_reg_99904.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2247_V_read2317_rewind_phi_fu_57341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2247_V_read2317_rewind_phi_fu_57341_p6 = data_2247_V_read2317_phi_reg_99904.read();
    } else {
        ap_phi_mux_data_2247_V_read2317_rewind_phi_fu_57341_p6 = data_2247_V_read2317_rewind_reg_57337.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2248_V_read2318_phi_phi_fu_99921_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2248_V_read2318_phi_phi_fu_99921_p4 = ap_phi_mux_data_2248_V_read2318_rewind_phi_fu_57355_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2248_V_read2318_phi_phi_fu_99921_p4 = data_2248_V_read.read();
        } else {
            ap_phi_mux_data_2248_V_read2318_phi_phi_fu_99921_p4 = ap_phi_reg_pp0_iter0_data_2248_V_read2318_phi_reg_99917.read();
        }
    } else {
        ap_phi_mux_data_2248_V_read2318_phi_phi_fu_99921_p4 = ap_phi_reg_pp0_iter0_data_2248_V_read2318_phi_reg_99917.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2248_V_read2318_rewind_phi_fu_57355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2248_V_read2318_rewind_phi_fu_57355_p6 = data_2248_V_read2318_phi_reg_99917.read();
    } else {
        ap_phi_mux_data_2248_V_read2318_rewind_phi_fu_57355_p6 = data_2248_V_read2318_rewind_reg_57351.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2249_V_read2319_phi_phi_fu_99934_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2249_V_read2319_phi_phi_fu_99934_p4 = ap_phi_mux_data_2249_V_read2319_rewind_phi_fu_57369_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2249_V_read2319_phi_phi_fu_99934_p4 = data_2249_V_read.read();
        } else {
            ap_phi_mux_data_2249_V_read2319_phi_phi_fu_99934_p4 = ap_phi_reg_pp0_iter0_data_2249_V_read2319_phi_reg_99930.read();
        }
    } else {
        ap_phi_mux_data_2249_V_read2319_phi_phi_fu_99934_p4 = ap_phi_reg_pp0_iter0_data_2249_V_read2319_phi_reg_99930.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2249_V_read2319_rewind_phi_fu_57369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2249_V_read2319_rewind_phi_fu_57369_p6 = data_2249_V_read2319_phi_reg_99930.read();
    } else {
        ap_phi_mux_data_2249_V_read2319_rewind_phi_fu_57369_p6 = data_2249_V_read2319_rewind_reg_57365.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_224_V_read294_phi_phi_fu_73609_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_224_V_read294_phi_phi_fu_73609_p4 = ap_phi_mux_data_224_V_read294_rewind_phi_fu_29019_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_224_V_read294_phi_phi_fu_73609_p4 = data_224_V_read.read();
        } else {
            ap_phi_mux_data_224_V_read294_phi_phi_fu_73609_p4 = ap_phi_reg_pp0_iter0_data_224_V_read294_phi_reg_73605.read();
        }
    } else {
        ap_phi_mux_data_224_V_read294_phi_phi_fu_73609_p4 = ap_phi_reg_pp0_iter0_data_224_V_read294_phi_reg_73605.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_224_V_read294_rewind_phi_fu_29019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_224_V_read294_rewind_phi_fu_29019_p6 = data_224_V_read294_phi_reg_73605.read();
    } else {
        ap_phi_mux_data_224_V_read294_rewind_phi_fu_29019_p6 = data_224_V_read294_rewind_reg_29015.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2250_V_read2320_phi_phi_fu_99947_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2250_V_read2320_phi_phi_fu_99947_p4 = ap_phi_mux_data_2250_V_read2320_rewind_phi_fu_57383_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2250_V_read2320_phi_phi_fu_99947_p4 = data_2250_V_read.read();
        } else {
            ap_phi_mux_data_2250_V_read2320_phi_phi_fu_99947_p4 = ap_phi_reg_pp0_iter0_data_2250_V_read2320_phi_reg_99943.read();
        }
    } else {
        ap_phi_mux_data_2250_V_read2320_phi_phi_fu_99947_p4 = ap_phi_reg_pp0_iter0_data_2250_V_read2320_phi_reg_99943.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2250_V_read2320_rewind_phi_fu_57383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2250_V_read2320_rewind_phi_fu_57383_p6 = data_2250_V_read2320_phi_reg_99943.read();
    } else {
        ap_phi_mux_data_2250_V_read2320_rewind_phi_fu_57383_p6 = data_2250_V_read2320_rewind_reg_57379.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2251_V_read2321_phi_phi_fu_99960_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2251_V_read2321_phi_phi_fu_99960_p4 = ap_phi_mux_data_2251_V_read2321_rewind_phi_fu_57397_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2251_V_read2321_phi_phi_fu_99960_p4 = data_2251_V_read.read();
        } else {
            ap_phi_mux_data_2251_V_read2321_phi_phi_fu_99960_p4 = ap_phi_reg_pp0_iter0_data_2251_V_read2321_phi_reg_99956.read();
        }
    } else {
        ap_phi_mux_data_2251_V_read2321_phi_phi_fu_99960_p4 = ap_phi_reg_pp0_iter0_data_2251_V_read2321_phi_reg_99956.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2251_V_read2321_rewind_phi_fu_57397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2251_V_read2321_rewind_phi_fu_57397_p6 = data_2251_V_read2321_phi_reg_99956.read();
    } else {
        ap_phi_mux_data_2251_V_read2321_rewind_phi_fu_57397_p6 = data_2251_V_read2321_rewind_reg_57393.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2252_V_read2322_phi_phi_fu_99973_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2252_V_read2322_phi_phi_fu_99973_p4 = ap_phi_mux_data_2252_V_read2322_rewind_phi_fu_57411_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2252_V_read2322_phi_phi_fu_99973_p4 = data_2252_V_read.read();
        } else {
            ap_phi_mux_data_2252_V_read2322_phi_phi_fu_99973_p4 = ap_phi_reg_pp0_iter0_data_2252_V_read2322_phi_reg_99969.read();
        }
    } else {
        ap_phi_mux_data_2252_V_read2322_phi_phi_fu_99973_p4 = ap_phi_reg_pp0_iter0_data_2252_V_read2322_phi_reg_99969.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2252_V_read2322_rewind_phi_fu_57411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2252_V_read2322_rewind_phi_fu_57411_p6 = data_2252_V_read2322_phi_reg_99969.read();
    } else {
        ap_phi_mux_data_2252_V_read2322_rewind_phi_fu_57411_p6 = data_2252_V_read2322_rewind_reg_57407.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2253_V_read2323_phi_phi_fu_99986_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2253_V_read2323_phi_phi_fu_99986_p4 = ap_phi_mux_data_2253_V_read2323_rewind_phi_fu_57425_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2253_V_read2323_phi_phi_fu_99986_p4 = data_2253_V_read.read();
        } else {
            ap_phi_mux_data_2253_V_read2323_phi_phi_fu_99986_p4 = ap_phi_reg_pp0_iter0_data_2253_V_read2323_phi_reg_99982.read();
        }
    } else {
        ap_phi_mux_data_2253_V_read2323_phi_phi_fu_99986_p4 = ap_phi_reg_pp0_iter0_data_2253_V_read2323_phi_reg_99982.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2253_V_read2323_rewind_phi_fu_57425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2253_V_read2323_rewind_phi_fu_57425_p6 = data_2253_V_read2323_phi_reg_99982.read();
    } else {
        ap_phi_mux_data_2253_V_read2323_rewind_phi_fu_57425_p6 = data_2253_V_read2323_rewind_reg_57421.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2254_V_read2324_phi_phi_fu_99999_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2254_V_read2324_phi_phi_fu_99999_p4 = ap_phi_mux_data_2254_V_read2324_rewind_phi_fu_57439_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2254_V_read2324_phi_phi_fu_99999_p4 = data_2254_V_read.read();
        } else {
            ap_phi_mux_data_2254_V_read2324_phi_phi_fu_99999_p4 = ap_phi_reg_pp0_iter0_data_2254_V_read2324_phi_reg_99995.read();
        }
    } else {
        ap_phi_mux_data_2254_V_read2324_phi_phi_fu_99999_p4 = ap_phi_reg_pp0_iter0_data_2254_V_read2324_phi_reg_99995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2254_V_read2324_rewind_phi_fu_57439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2254_V_read2324_rewind_phi_fu_57439_p6 = data_2254_V_read2324_phi_reg_99995.read();
    } else {
        ap_phi_mux_data_2254_V_read2324_rewind_phi_fu_57439_p6 = data_2254_V_read2324_rewind_reg_57435.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2255_V_read2325_phi_phi_fu_100012_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2255_V_read2325_phi_phi_fu_100012_p4 = ap_phi_mux_data_2255_V_read2325_rewind_phi_fu_57453_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2255_V_read2325_phi_phi_fu_100012_p4 = data_2255_V_read.read();
        } else {
            ap_phi_mux_data_2255_V_read2325_phi_phi_fu_100012_p4 = ap_phi_reg_pp0_iter0_data_2255_V_read2325_phi_reg_100008.read();
        }
    } else {
        ap_phi_mux_data_2255_V_read2325_phi_phi_fu_100012_p4 = ap_phi_reg_pp0_iter0_data_2255_V_read2325_phi_reg_100008.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2255_V_read2325_rewind_phi_fu_57453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2255_V_read2325_rewind_phi_fu_57453_p6 = data_2255_V_read2325_phi_reg_100008.read();
    } else {
        ap_phi_mux_data_2255_V_read2325_rewind_phi_fu_57453_p6 = data_2255_V_read2325_rewind_reg_57449.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2256_V_read2326_phi_phi_fu_100025_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2256_V_read2326_phi_phi_fu_100025_p4 = ap_phi_mux_data_2256_V_read2326_rewind_phi_fu_57467_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2256_V_read2326_phi_phi_fu_100025_p4 = data_2256_V_read.read();
        } else {
            ap_phi_mux_data_2256_V_read2326_phi_phi_fu_100025_p4 = ap_phi_reg_pp0_iter0_data_2256_V_read2326_phi_reg_100021.read();
        }
    } else {
        ap_phi_mux_data_2256_V_read2326_phi_phi_fu_100025_p4 = ap_phi_reg_pp0_iter0_data_2256_V_read2326_phi_reg_100021.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2256_V_read2326_rewind_phi_fu_57467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2256_V_read2326_rewind_phi_fu_57467_p6 = data_2256_V_read2326_phi_reg_100021.read();
    } else {
        ap_phi_mux_data_2256_V_read2326_rewind_phi_fu_57467_p6 = data_2256_V_read2326_rewind_reg_57463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2257_V_read2327_phi_phi_fu_100038_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2257_V_read2327_phi_phi_fu_100038_p4 = ap_phi_mux_data_2257_V_read2327_rewind_phi_fu_57481_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2257_V_read2327_phi_phi_fu_100038_p4 = data_2257_V_read.read();
        } else {
            ap_phi_mux_data_2257_V_read2327_phi_phi_fu_100038_p4 = ap_phi_reg_pp0_iter0_data_2257_V_read2327_phi_reg_100034.read();
        }
    } else {
        ap_phi_mux_data_2257_V_read2327_phi_phi_fu_100038_p4 = ap_phi_reg_pp0_iter0_data_2257_V_read2327_phi_reg_100034.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2257_V_read2327_rewind_phi_fu_57481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2257_V_read2327_rewind_phi_fu_57481_p6 = data_2257_V_read2327_phi_reg_100034.read();
    } else {
        ap_phi_mux_data_2257_V_read2327_rewind_phi_fu_57481_p6 = data_2257_V_read2327_rewind_reg_57477.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2258_V_read2328_phi_phi_fu_100051_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2258_V_read2328_phi_phi_fu_100051_p4 = ap_phi_mux_data_2258_V_read2328_rewind_phi_fu_57495_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2258_V_read2328_phi_phi_fu_100051_p4 = data_2258_V_read.read();
        } else {
            ap_phi_mux_data_2258_V_read2328_phi_phi_fu_100051_p4 = ap_phi_reg_pp0_iter0_data_2258_V_read2328_phi_reg_100047.read();
        }
    } else {
        ap_phi_mux_data_2258_V_read2328_phi_phi_fu_100051_p4 = ap_phi_reg_pp0_iter0_data_2258_V_read2328_phi_reg_100047.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2258_V_read2328_rewind_phi_fu_57495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2258_V_read2328_rewind_phi_fu_57495_p6 = data_2258_V_read2328_phi_reg_100047.read();
    } else {
        ap_phi_mux_data_2258_V_read2328_rewind_phi_fu_57495_p6 = data_2258_V_read2328_rewind_reg_57491.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2259_V_read2329_phi_phi_fu_100064_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2259_V_read2329_phi_phi_fu_100064_p4 = ap_phi_mux_data_2259_V_read2329_rewind_phi_fu_57509_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2259_V_read2329_phi_phi_fu_100064_p4 = data_2259_V_read.read();
        } else {
            ap_phi_mux_data_2259_V_read2329_phi_phi_fu_100064_p4 = ap_phi_reg_pp0_iter0_data_2259_V_read2329_phi_reg_100060.read();
        }
    } else {
        ap_phi_mux_data_2259_V_read2329_phi_phi_fu_100064_p4 = ap_phi_reg_pp0_iter0_data_2259_V_read2329_phi_reg_100060.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2259_V_read2329_rewind_phi_fu_57509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2259_V_read2329_rewind_phi_fu_57509_p6 = data_2259_V_read2329_phi_reg_100060.read();
    } else {
        ap_phi_mux_data_2259_V_read2329_rewind_phi_fu_57509_p6 = data_2259_V_read2329_rewind_reg_57505.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_225_V_read295_phi_phi_fu_73622_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_225_V_read295_phi_phi_fu_73622_p4 = ap_phi_mux_data_225_V_read295_rewind_phi_fu_29033_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_225_V_read295_phi_phi_fu_73622_p4 = data_225_V_read.read();
        } else {
            ap_phi_mux_data_225_V_read295_phi_phi_fu_73622_p4 = ap_phi_reg_pp0_iter0_data_225_V_read295_phi_reg_73618.read();
        }
    } else {
        ap_phi_mux_data_225_V_read295_phi_phi_fu_73622_p4 = ap_phi_reg_pp0_iter0_data_225_V_read295_phi_reg_73618.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_225_V_read295_rewind_phi_fu_29033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_225_V_read295_rewind_phi_fu_29033_p6 = data_225_V_read295_phi_reg_73618.read();
    } else {
        ap_phi_mux_data_225_V_read295_rewind_phi_fu_29033_p6 = data_225_V_read295_rewind_reg_29029.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2260_V_read2330_phi_phi_fu_100077_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2260_V_read2330_phi_phi_fu_100077_p4 = ap_phi_mux_data_2260_V_read2330_rewind_phi_fu_57523_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2260_V_read2330_phi_phi_fu_100077_p4 = data_2260_V_read.read();
        } else {
            ap_phi_mux_data_2260_V_read2330_phi_phi_fu_100077_p4 = ap_phi_reg_pp0_iter0_data_2260_V_read2330_phi_reg_100073.read();
        }
    } else {
        ap_phi_mux_data_2260_V_read2330_phi_phi_fu_100077_p4 = ap_phi_reg_pp0_iter0_data_2260_V_read2330_phi_reg_100073.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2260_V_read2330_rewind_phi_fu_57523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2260_V_read2330_rewind_phi_fu_57523_p6 = data_2260_V_read2330_phi_reg_100073.read();
    } else {
        ap_phi_mux_data_2260_V_read2330_rewind_phi_fu_57523_p6 = data_2260_V_read2330_rewind_reg_57519.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2261_V_read2331_phi_phi_fu_100090_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2261_V_read2331_phi_phi_fu_100090_p4 = ap_phi_mux_data_2261_V_read2331_rewind_phi_fu_57537_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2261_V_read2331_phi_phi_fu_100090_p4 = data_2261_V_read.read();
        } else {
            ap_phi_mux_data_2261_V_read2331_phi_phi_fu_100090_p4 = ap_phi_reg_pp0_iter0_data_2261_V_read2331_phi_reg_100086.read();
        }
    } else {
        ap_phi_mux_data_2261_V_read2331_phi_phi_fu_100090_p4 = ap_phi_reg_pp0_iter0_data_2261_V_read2331_phi_reg_100086.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2261_V_read2331_rewind_phi_fu_57537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2261_V_read2331_rewind_phi_fu_57537_p6 = data_2261_V_read2331_phi_reg_100086.read();
    } else {
        ap_phi_mux_data_2261_V_read2331_rewind_phi_fu_57537_p6 = data_2261_V_read2331_rewind_reg_57533.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2262_V_read2332_phi_phi_fu_100103_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2262_V_read2332_phi_phi_fu_100103_p4 = ap_phi_mux_data_2262_V_read2332_rewind_phi_fu_57551_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2262_V_read2332_phi_phi_fu_100103_p4 = data_2262_V_read.read();
        } else {
            ap_phi_mux_data_2262_V_read2332_phi_phi_fu_100103_p4 = ap_phi_reg_pp0_iter0_data_2262_V_read2332_phi_reg_100099.read();
        }
    } else {
        ap_phi_mux_data_2262_V_read2332_phi_phi_fu_100103_p4 = ap_phi_reg_pp0_iter0_data_2262_V_read2332_phi_reg_100099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2262_V_read2332_rewind_phi_fu_57551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2262_V_read2332_rewind_phi_fu_57551_p6 = data_2262_V_read2332_phi_reg_100099.read();
    } else {
        ap_phi_mux_data_2262_V_read2332_rewind_phi_fu_57551_p6 = data_2262_V_read2332_rewind_reg_57547.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2263_V_read2333_phi_phi_fu_100116_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2263_V_read2333_phi_phi_fu_100116_p4 = ap_phi_mux_data_2263_V_read2333_rewind_phi_fu_57565_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2263_V_read2333_phi_phi_fu_100116_p4 = data_2263_V_read.read();
        } else {
            ap_phi_mux_data_2263_V_read2333_phi_phi_fu_100116_p4 = ap_phi_reg_pp0_iter0_data_2263_V_read2333_phi_reg_100112.read();
        }
    } else {
        ap_phi_mux_data_2263_V_read2333_phi_phi_fu_100116_p4 = ap_phi_reg_pp0_iter0_data_2263_V_read2333_phi_reg_100112.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2263_V_read2333_rewind_phi_fu_57565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2263_V_read2333_rewind_phi_fu_57565_p6 = data_2263_V_read2333_phi_reg_100112.read();
    } else {
        ap_phi_mux_data_2263_V_read2333_rewind_phi_fu_57565_p6 = data_2263_V_read2333_rewind_reg_57561.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2264_V_read2334_phi_phi_fu_100129_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2264_V_read2334_phi_phi_fu_100129_p4 = ap_phi_mux_data_2264_V_read2334_rewind_phi_fu_57579_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2264_V_read2334_phi_phi_fu_100129_p4 = data_2264_V_read.read();
        } else {
            ap_phi_mux_data_2264_V_read2334_phi_phi_fu_100129_p4 = ap_phi_reg_pp0_iter0_data_2264_V_read2334_phi_reg_100125.read();
        }
    } else {
        ap_phi_mux_data_2264_V_read2334_phi_phi_fu_100129_p4 = ap_phi_reg_pp0_iter0_data_2264_V_read2334_phi_reg_100125.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2264_V_read2334_rewind_phi_fu_57579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2264_V_read2334_rewind_phi_fu_57579_p6 = data_2264_V_read2334_phi_reg_100125.read();
    } else {
        ap_phi_mux_data_2264_V_read2334_rewind_phi_fu_57579_p6 = data_2264_V_read2334_rewind_reg_57575.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2265_V_read2335_phi_phi_fu_100142_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2265_V_read2335_phi_phi_fu_100142_p4 = ap_phi_mux_data_2265_V_read2335_rewind_phi_fu_57593_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2265_V_read2335_phi_phi_fu_100142_p4 = data_2265_V_read.read();
        } else {
            ap_phi_mux_data_2265_V_read2335_phi_phi_fu_100142_p4 = ap_phi_reg_pp0_iter0_data_2265_V_read2335_phi_reg_100138.read();
        }
    } else {
        ap_phi_mux_data_2265_V_read2335_phi_phi_fu_100142_p4 = ap_phi_reg_pp0_iter0_data_2265_V_read2335_phi_reg_100138.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2265_V_read2335_rewind_phi_fu_57593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2265_V_read2335_rewind_phi_fu_57593_p6 = data_2265_V_read2335_phi_reg_100138.read();
    } else {
        ap_phi_mux_data_2265_V_read2335_rewind_phi_fu_57593_p6 = data_2265_V_read2335_rewind_reg_57589.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2266_V_read2336_phi_phi_fu_100155_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2266_V_read2336_phi_phi_fu_100155_p4 = ap_phi_mux_data_2266_V_read2336_rewind_phi_fu_57607_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2266_V_read2336_phi_phi_fu_100155_p4 = data_2266_V_read.read();
        } else {
            ap_phi_mux_data_2266_V_read2336_phi_phi_fu_100155_p4 = ap_phi_reg_pp0_iter0_data_2266_V_read2336_phi_reg_100151.read();
        }
    } else {
        ap_phi_mux_data_2266_V_read2336_phi_phi_fu_100155_p4 = ap_phi_reg_pp0_iter0_data_2266_V_read2336_phi_reg_100151.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2266_V_read2336_rewind_phi_fu_57607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2266_V_read2336_rewind_phi_fu_57607_p6 = data_2266_V_read2336_phi_reg_100151.read();
    } else {
        ap_phi_mux_data_2266_V_read2336_rewind_phi_fu_57607_p6 = data_2266_V_read2336_rewind_reg_57603.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2267_V_read2337_phi_phi_fu_100168_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2267_V_read2337_phi_phi_fu_100168_p4 = ap_phi_mux_data_2267_V_read2337_rewind_phi_fu_57621_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2267_V_read2337_phi_phi_fu_100168_p4 = data_2267_V_read.read();
        } else {
            ap_phi_mux_data_2267_V_read2337_phi_phi_fu_100168_p4 = ap_phi_reg_pp0_iter0_data_2267_V_read2337_phi_reg_100164.read();
        }
    } else {
        ap_phi_mux_data_2267_V_read2337_phi_phi_fu_100168_p4 = ap_phi_reg_pp0_iter0_data_2267_V_read2337_phi_reg_100164.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2267_V_read2337_rewind_phi_fu_57621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2267_V_read2337_rewind_phi_fu_57621_p6 = data_2267_V_read2337_phi_reg_100164.read();
    } else {
        ap_phi_mux_data_2267_V_read2337_rewind_phi_fu_57621_p6 = data_2267_V_read2337_rewind_reg_57617.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2268_V_read2338_phi_phi_fu_100181_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2268_V_read2338_phi_phi_fu_100181_p4 = ap_phi_mux_data_2268_V_read2338_rewind_phi_fu_57635_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2268_V_read2338_phi_phi_fu_100181_p4 = data_2268_V_read.read();
        } else {
            ap_phi_mux_data_2268_V_read2338_phi_phi_fu_100181_p4 = ap_phi_reg_pp0_iter0_data_2268_V_read2338_phi_reg_100177.read();
        }
    } else {
        ap_phi_mux_data_2268_V_read2338_phi_phi_fu_100181_p4 = ap_phi_reg_pp0_iter0_data_2268_V_read2338_phi_reg_100177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2268_V_read2338_rewind_phi_fu_57635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2268_V_read2338_rewind_phi_fu_57635_p6 = data_2268_V_read2338_phi_reg_100177.read();
    } else {
        ap_phi_mux_data_2268_V_read2338_rewind_phi_fu_57635_p6 = data_2268_V_read2338_rewind_reg_57631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2269_V_read2339_phi_phi_fu_100194_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2269_V_read2339_phi_phi_fu_100194_p4 = ap_phi_mux_data_2269_V_read2339_rewind_phi_fu_57649_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2269_V_read2339_phi_phi_fu_100194_p4 = data_2269_V_read.read();
        } else {
            ap_phi_mux_data_2269_V_read2339_phi_phi_fu_100194_p4 = ap_phi_reg_pp0_iter0_data_2269_V_read2339_phi_reg_100190.read();
        }
    } else {
        ap_phi_mux_data_2269_V_read2339_phi_phi_fu_100194_p4 = ap_phi_reg_pp0_iter0_data_2269_V_read2339_phi_reg_100190.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2269_V_read2339_rewind_phi_fu_57649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2269_V_read2339_rewind_phi_fu_57649_p6 = data_2269_V_read2339_phi_reg_100190.read();
    } else {
        ap_phi_mux_data_2269_V_read2339_rewind_phi_fu_57649_p6 = data_2269_V_read2339_rewind_reg_57645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_226_V_read296_phi_phi_fu_73635_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_226_V_read296_phi_phi_fu_73635_p4 = ap_phi_mux_data_226_V_read296_rewind_phi_fu_29047_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_226_V_read296_phi_phi_fu_73635_p4 = data_226_V_read.read();
        } else {
            ap_phi_mux_data_226_V_read296_phi_phi_fu_73635_p4 = ap_phi_reg_pp0_iter0_data_226_V_read296_phi_reg_73631.read();
        }
    } else {
        ap_phi_mux_data_226_V_read296_phi_phi_fu_73635_p4 = ap_phi_reg_pp0_iter0_data_226_V_read296_phi_reg_73631.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_226_V_read296_rewind_phi_fu_29047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_226_V_read296_rewind_phi_fu_29047_p6 = data_226_V_read296_phi_reg_73631.read();
    } else {
        ap_phi_mux_data_226_V_read296_rewind_phi_fu_29047_p6 = data_226_V_read296_rewind_reg_29043.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2270_V_read2340_phi_phi_fu_100207_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2270_V_read2340_phi_phi_fu_100207_p4 = ap_phi_mux_data_2270_V_read2340_rewind_phi_fu_57663_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2270_V_read2340_phi_phi_fu_100207_p4 = data_2270_V_read.read();
        } else {
            ap_phi_mux_data_2270_V_read2340_phi_phi_fu_100207_p4 = ap_phi_reg_pp0_iter0_data_2270_V_read2340_phi_reg_100203.read();
        }
    } else {
        ap_phi_mux_data_2270_V_read2340_phi_phi_fu_100207_p4 = ap_phi_reg_pp0_iter0_data_2270_V_read2340_phi_reg_100203.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2270_V_read2340_rewind_phi_fu_57663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2270_V_read2340_rewind_phi_fu_57663_p6 = data_2270_V_read2340_phi_reg_100203.read();
    } else {
        ap_phi_mux_data_2270_V_read2340_rewind_phi_fu_57663_p6 = data_2270_V_read2340_rewind_reg_57659.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2271_V_read2341_phi_phi_fu_100220_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2271_V_read2341_phi_phi_fu_100220_p4 = ap_phi_mux_data_2271_V_read2341_rewind_phi_fu_57677_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2271_V_read2341_phi_phi_fu_100220_p4 = data_2271_V_read.read();
        } else {
            ap_phi_mux_data_2271_V_read2341_phi_phi_fu_100220_p4 = ap_phi_reg_pp0_iter0_data_2271_V_read2341_phi_reg_100216.read();
        }
    } else {
        ap_phi_mux_data_2271_V_read2341_phi_phi_fu_100220_p4 = ap_phi_reg_pp0_iter0_data_2271_V_read2341_phi_reg_100216.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2271_V_read2341_rewind_phi_fu_57677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2271_V_read2341_rewind_phi_fu_57677_p6 = data_2271_V_read2341_phi_reg_100216.read();
    } else {
        ap_phi_mux_data_2271_V_read2341_rewind_phi_fu_57677_p6 = data_2271_V_read2341_rewind_reg_57673.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2272_V_read2342_phi_phi_fu_100233_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2272_V_read2342_phi_phi_fu_100233_p4 = ap_phi_mux_data_2272_V_read2342_rewind_phi_fu_57691_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2272_V_read2342_phi_phi_fu_100233_p4 = data_2272_V_read.read();
        } else {
            ap_phi_mux_data_2272_V_read2342_phi_phi_fu_100233_p4 = ap_phi_reg_pp0_iter0_data_2272_V_read2342_phi_reg_100229.read();
        }
    } else {
        ap_phi_mux_data_2272_V_read2342_phi_phi_fu_100233_p4 = ap_phi_reg_pp0_iter0_data_2272_V_read2342_phi_reg_100229.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2272_V_read2342_rewind_phi_fu_57691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2272_V_read2342_rewind_phi_fu_57691_p6 = data_2272_V_read2342_phi_reg_100229.read();
    } else {
        ap_phi_mux_data_2272_V_read2342_rewind_phi_fu_57691_p6 = data_2272_V_read2342_rewind_reg_57687.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2273_V_read2343_phi_phi_fu_100246_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2273_V_read2343_phi_phi_fu_100246_p4 = ap_phi_mux_data_2273_V_read2343_rewind_phi_fu_57705_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2273_V_read2343_phi_phi_fu_100246_p4 = data_2273_V_read.read();
        } else {
            ap_phi_mux_data_2273_V_read2343_phi_phi_fu_100246_p4 = ap_phi_reg_pp0_iter0_data_2273_V_read2343_phi_reg_100242.read();
        }
    } else {
        ap_phi_mux_data_2273_V_read2343_phi_phi_fu_100246_p4 = ap_phi_reg_pp0_iter0_data_2273_V_read2343_phi_reg_100242.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2273_V_read2343_rewind_phi_fu_57705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2273_V_read2343_rewind_phi_fu_57705_p6 = data_2273_V_read2343_phi_reg_100242.read();
    } else {
        ap_phi_mux_data_2273_V_read2343_rewind_phi_fu_57705_p6 = data_2273_V_read2343_rewind_reg_57701.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2274_V_read2344_phi_phi_fu_100259_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2274_V_read2344_phi_phi_fu_100259_p4 = ap_phi_mux_data_2274_V_read2344_rewind_phi_fu_57719_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2274_V_read2344_phi_phi_fu_100259_p4 = data_2274_V_read.read();
        } else {
            ap_phi_mux_data_2274_V_read2344_phi_phi_fu_100259_p4 = ap_phi_reg_pp0_iter0_data_2274_V_read2344_phi_reg_100255.read();
        }
    } else {
        ap_phi_mux_data_2274_V_read2344_phi_phi_fu_100259_p4 = ap_phi_reg_pp0_iter0_data_2274_V_read2344_phi_reg_100255.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2274_V_read2344_rewind_phi_fu_57719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2274_V_read2344_rewind_phi_fu_57719_p6 = data_2274_V_read2344_phi_reg_100255.read();
    } else {
        ap_phi_mux_data_2274_V_read2344_rewind_phi_fu_57719_p6 = data_2274_V_read2344_rewind_reg_57715.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2275_V_read2345_phi_phi_fu_100272_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2275_V_read2345_phi_phi_fu_100272_p4 = ap_phi_mux_data_2275_V_read2345_rewind_phi_fu_57733_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2275_V_read2345_phi_phi_fu_100272_p4 = data_2275_V_read.read();
        } else {
            ap_phi_mux_data_2275_V_read2345_phi_phi_fu_100272_p4 = ap_phi_reg_pp0_iter0_data_2275_V_read2345_phi_reg_100268.read();
        }
    } else {
        ap_phi_mux_data_2275_V_read2345_phi_phi_fu_100272_p4 = ap_phi_reg_pp0_iter0_data_2275_V_read2345_phi_reg_100268.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2275_V_read2345_rewind_phi_fu_57733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2275_V_read2345_rewind_phi_fu_57733_p6 = data_2275_V_read2345_phi_reg_100268.read();
    } else {
        ap_phi_mux_data_2275_V_read2345_rewind_phi_fu_57733_p6 = data_2275_V_read2345_rewind_reg_57729.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2276_V_read2346_phi_phi_fu_100285_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2276_V_read2346_phi_phi_fu_100285_p4 = ap_phi_mux_data_2276_V_read2346_rewind_phi_fu_57747_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2276_V_read2346_phi_phi_fu_100285_p4 = data_2276_V_read.read();
        } else {
            ap_phi_mux_data_2276_V_read2346_phi_phi_fu_100285_p4 = ap_phi_reg_pp0_iter0_data_2276_V_read2346_phi_reg_100281.read();
        }
    } else {
        ap_phi_mux_data_2276_V_read2346_phi_phi_fu_100285_p4 = ap_phi_reg_pp0_iter0_data_2276_V_read2346_phi_reg_100281.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2276_V_read2346_rewind_phi_fu_57747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2276_V_read2346_rewind_phi_fu_57747_p6 = data_2276_V_read2346_phi_reg_100281.read();
    } else {
        ap_phi_mux_data_2276_V_read2346_rewind_phi_fu_57747_p6 = data_2276_V_read2346_rewind_reg_57743.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2277_V_read2347_phi_phi_fu_100298_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2277_V_read2347_phi_phi_fu_100298_p4 = ap_phi_mux_data_2277_V_read2347_rewind_phi_fu_57761_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2277_V_read2347_phi_phi_fu_100298_p4 = data_2277_V_read.read();
        } else {
            ap_phi_mux_data_2277_V_read2347_phi_phi_fu_100298_p4 = ap_phi_reg_pp0_iter0_data_2277_V_read2347_phi_reg_100294.read();
        }
    } else {
        ap_phi_mux_data_2277_V_read2347_phi_phi_fu_100298_p4 = ap_phi_reg_pp0_iter0_data_2277_V_read2347_phi_reg_100294.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2277_V_read2347_rewind_phi_fu_57761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2277_V_read2347_rewind_phi_fu_57761_p6 = data_2277_V_read2347_phi_reg_100294.read();
    } else {
        ap_phi_mux_data_2277_V_read2347_rewind_phi_fu_57761_p6 = data_2277_V_read2347_rewind_reg_57757.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2278_V_read2348_phi_phi_fu_100311_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2278_V_read2348_phi_phi_fu_100311_p4 = ap_phi_mux_data_2278_V_read2348_rewind_phi_fu_57775_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2278_V_read2348_phi_phi_fu_100311_p4 = data_2278_V_read.read();
        } else {
            ap_phi_mux_data_2278_V_read2348_phi_phi_fu_100311_p4 = ap_phi_reg_pp0_iter0_data_2278_V_read2348_phi_reg_100307.read();
        }
    } else {
        ap_phi_mux_data_2278_V_read2348_phi_phi_fu_100311_p4 = ap_phi_reg_pp0_iter0_data_2278_V_read2348_phi_reg_100307.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2278_V_read2348_rewind_phi_fu_57775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2278_V_read2348_rewind_phi_fu_57775_p6 = data_2278_V_read2348_phi_reg_100307.read();
    } else {
        ap_phi_mux_data_2278_V_read2348_rewind_phi_fu_57775_p6 = data_2278_V_read2348_rewind_reg_57771.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2279_V_read2349_phi_phi_fu_100324_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2279_V_read2349_phi_phi_fu_100324_p4 = ap_phi_mux_data_2279_V_read2349_rewind_phi_fu_57789_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2279_V_read2349_phi_phi_fu_100324_p4 = data_2279_V_read.read();
        } else {
            ap_phi_mux_data_2279_V_read2349_phi_phi_fu_100324_p4 = ap_phi_reg_pp0_iter0_data_2279_V_read2349_phi_reg_100320.read();
        }
    } else {
        ap_phi_mux_data_2279_V_read2349_phi_phi_fu_100324_p4 = ap_phi_reg_pp0_iter0_data_2279_V_read2349_phi_reg_100320.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2279_V_read2349_rewind_phi_fu_57789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2279_V_read2349_rewind_phi_fu_57789_p6 = data_2279_V_read2349_phi_reg_100320.read();
    } else {
        ap_phi_mux_data_2279_V_read2349_rewind_phi_fu_57789_p6 = data_2279_V_read2349_rewind_reg_57785.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_227_V_read297_phi_phi_fu_73648_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_227_V_read297_phi_phi_fu_73648_p4 = ap_phi_mux_data_227_V_read297_rewind_phi_fu_29061_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_227_V_read297_phi_phi_fu_73648_p4 = data_227_V_read.read();
        } else {
            ap_phi_mux_data_227_V_read297_phi_phi_fu_73648_p4 = ap_phi_reg_pp0_iter0_data_227_V_read297_phi_reg_73644.read();
        }
    } else {
        ap_phi_mux_data_227_V_read297_phi_phi_fu_73648_p4 = ap_phi_reg_pp0_iter0_data_227_V_read297_phi_reg_73644.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_227_V_read297_rewind_phi_fu_29061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_227_V_read297_rewind_phi_fu_29061_p6 = data_227_V_read297_phi_reg_73644.read();
    } else {
        ap_phi_mux_data_227_V_read297_rewind_phi_fu_29061_p6 = data_227_V_read297_rewind_reg_29057.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2280_V_read2350_phi_phi_fu_100337_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2280_V_read2350_phi_phi_fu_100337_p4 = ap_phi_mux_data_2280_V_read2350_rewind_phi_fu_57803_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2280_V_read2350_phi_phi_fu_100337_p4 = data_2280_V_read.read();
        } else {
            ap_phi_mux_data_2280_V_read2350_phi_phi_fu_100337_p4 = ap_phi_reg_pp0_iter0_data_2280_V_read2350_phi_reg_100333.read();
        }
    } else {
        ap_phi_mux_data_2280_V_read2350_phi_phi_fu_100337_p4 = ap_phi_reg_pp0_iter0_data_2280_V_read2350_phi_reg_100333.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2280_V_read2350_rewind_phi_fu_57803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2280_V_read2350_rewind_phi_fu_57803_p6 = data_2280_V_read2350_phi_reg_100333.read();
    } else {
        ap_phi_mux_data_2280_V_read2350_rewind_phi_fu_57803_p6 = data_2280_V_read2350_rewind_reg_57799.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2281_V_read2351_phi_phi_fu_100350_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2281_V_read2351_phi_phi_fu_100350_p4 = ap_phi_mux_data_2281_V_read2351_rewind_phi_fu_57817_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2281_V_read2351_phi_phi_fu_100350_p4 = data_2281_V_read.read();
        } else {
            ap_phi_mux_data_2281_V_read2351_phi_phi_fu_100350_p4 = ap_phi_reg_pp0_iter0_data_2281_V_read2351_phi_reg_100346.read();
        }
    } else {
        ap_phi_mux_data_2281_V_read2351_phi_phi_fu_100350_p4 = ap_phi_reg_pp0_iter0_data_2281_V_read2351_phi_reg_100346.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2281_V_read2351_rewind_phi_fu_57817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2281_V_read2351_rewind_phi_fu_57817_p6 = data_2281_V_read2351_phi_reg_100346.read();
    } else {
        ap_phi_mux_data_2281_V_read2351_rewind_phi_fu_57817_p6 = data_2281_V_read2351_rewind_reg_57813.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2282_V_read2352_phi_phi_fu_100363_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2282_V_read2352_phi_phi_fu_100363_p4 = ap_phi_mux_data_2282_V_read2352_rewind_phi_fu_57831_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2282_V_read2352_phi_phi_fu_100363_p4 = data_2282_V_read.read();
        } else {
            ap_phi_mux_data_2282_V_read2352_phi_phi_fu_100363_p4 = ap_phi_reg_pp0_iter0_data_2282_V_read2352_phi_reg_100359.read();
        }
    } else {
        ap_phi_mux_data_2282_V_read2352_phi_phi_fu_100363_p4 = ap_phi_reg_pp0_iter0_data_2282_V_read2352_phi_reg_100359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2282_V_read2352_rewind_phi_fu_57831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2282_V_read2352_rewind_phi_fu_57831_p6 = data_2282_V_read2352_phi_reg_100359.read();
    } else {
        ap_phi_mux_data_2282_V_read2352_rewind_phi_fu_57831_p6 = data_2282_V_read2352_rewind_reg_57827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2283_V_read2353_phi_phi_fu_100376_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2283_V_read2353_phi_phi_fu_100376_p4 = ap_phi_mux_data_2283_V_read2353_rewind_phi_fu_57845_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2283_V_read2353_phi_phi_fu_100376_p4 = data_2283_V_read.read();
        } else {
            ap_phi_mux_data_2283_V_read2353_phi_phi_fu_100376_p4 = ap_phi_reg_pp0_iter0_data_2283_V_read2353_phi_reg_100372.read();
        }
    } else {
        ap_phi_mux_data_2283_V_read2353_phi_phi_fu_100376_p4 = ap_phi_reg_pp0_iter0_data_2283_V_read2353_phi_reg_100372.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2283_V_read2353_rewind_phi_fu_57845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2283_V_read2353_rewind_phi_fu_57845_p6 = data_2283_V_read2353_phi_reg_100372.read();
    } else {
        ap_phi_mux_data_2283_V_read2353_rewind_phi_fu_57845_p6 = data_2283_V_read2353_rewind_reg_57841.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2284_V_read2354_phi_phi_fu_100389_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2284_V_read2354_phi_phi_fu_100389_p4 = ap_phi_mux_data_2284_V_read2354_rewind_phi_fu_57859_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2284_V_read2354_phi_phi_fu_100389_p4 = data_2284_V_read.read();
        } else {
            ap_phi_mux_data_2284_V_read2354_phi_phi_fu_100389_p4 = ap_phi_reg_pp0_iter0_data_2284_V_read2354_phi_reg_100385.read();
        }
    } else {
        ap_phi_mux_data_2284_V_read2354_phi_phi_fu_100389_p4 = ap_phi_reg_pp0_iter0_data_2284_V_read2354_phi_reg_100385.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2284_V_read2354_rewind_phi_fu_57859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2284_V_read2354_rewind_phi_fu_57859_p6 = data_2284_V_read2354_phi_reg_100385.read();
    } else {
        ap_phi_mux_data_2284_V_read2354_rewind_phi_fu_57859_p6 = data_2284_V_read2354_rewind_reg_57855.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2285_V_read2355_phi_phi_fu_100402_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2285_V_read2355_phi_phi_fu_100402_p4 = ap_phi_mux_data_2285_V_read2355_rewind_phi_fu_57873_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2285_V_read2355_phi_phi_fu_100402_p4 = data_2285_V_read.read();
        } else {
            ap_phi_mux_data_2285_V_read2355_phi_phi_fu_100402_p4 = ap_phi_reg_pp0_iter0_data_2285_V_read2355_phi_reg_100398.read();
        }
    } else {
        ap_phi_mux_data_2285_V_read2355_phi_phi_fu_100402_p4 = ap_phi_reg_pp0_iter0_data_2285_V_read2355_phi_reg_100398.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2285_V_read2355_rewind_phi_fu_57873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2285_V_read2355_rewind_phi_fu_57873_p6 = data_2285_V_read2355_phi_reg_100398.read();
    } else {
        ap_phi_mux_data_2285_V_read2355_rewind_phi_fu_57873_p6 = data_2285_V_read2355_rewind_reg_57869.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2286_V_read2356_phi_phi_fu_100415_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2286_V_read2356_phi_phi_fu_100415_p4 = ap_phi_mux_data_2286_V_read2356_rewind_phi_fu_57887_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2286_V_read2356_phi_phi_fu_100415_p4 = data_2286_V_read.read();
        } else {
            ap_phi_mux_data_2286_V_read2356_phi_phi_fu_100415_p4 = ap_phi_reg_pp0_iter0_data_2286_V_read2356_phi_reg_100411.read();
        }
    } else {
        ap_phi_mux_data_2286_V_read2356_phi_phi_fu_100415_p4 = ap_phi_reg_pp0_iter0_data_2286_V_read2356_phi_reg_100411.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2286_V_read2356_rewind_phi_fu_57887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2286_V_read2356_rewind_phi_fu_57887_p6 = data_2286_V_read2356_phi_reg_100411.read();
    } else {
        ap_phi_mux_data_2286_V_read2356_rewind_phi_fu_57887_p6 = data_2286_V_read2356_rewind_reg_57883.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2287_V_read2357_phi_phi_fu_100428_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2287_V_read2357_phi_phi_fu_100428_p4 = ap_phi_mux_data_2287_V_read2357_rewind_phi_fu_57901_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2287_V_read2357_phi_phi_fu_100428_p4 = data_2287_V_read.read();
        } else {
            ap_phi_mux_data_2287_V_read2357_phi_phi_fu_100428_p4 = ap_phi_reg_pp0_iter0_data_2287_V_read2357_phi_reg_100424.read();
        }
    } else {
        ap_phi_mux_data_2287_V_read2357_phi_phi_fu_100428_p4 = ap_phi_reg_pp0_iter0_data_2287_V_read2357_phi_reg_100424.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2287_V_read2357_rewind_phi_fu_57901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2287_V_read2357_rewind_phi_fu_57901_p6 = data_2287_V_read2357_phi_reg_100424.read();
    } else {
        ap_phi_mux_data_2287_V_read2357_rewind_phi_fu_57901_p6 = data_2287_V_read2357_rewind_reg_57897.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2288_V_read2358_phi_phi_fu_100441_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2288_V_read2358_phi_phi_fu_100441_p4 = ap_phi_mux_data_2288_V_read2358_rewind_phi_fu_57915_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2288_V_read2358_phi_phi_fu_100441_p4 = data_2288_V_read.read();
        } else {
            ap_phi_mux_data_2288_V_read2358_phi_phi_fu_100441_p4 = ap_phi_reg_pp0_iter0_data_2288_V_read2358_phi_reg_100437.read();
        }
    } else {
        ap_phi_mux_data_2288_V_read2358_phi_phi_fu_100441_p4 = ap_phi_reg_pp0_iter0_data_2288_V_read2358_phi_reg_100437.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2288_V_read2358_rewind_phi_fu_57915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2288_V_read2358_rewind_phi_fu_57915_p6 = data_2288_V_read2358_phi_reg_100437.read();
    } else {
        ap_phi_mux_data_2288_V_read2358_rewind_phi_fu_57915_p6 = data_2288_V_read2358_rewind_reg_57911.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2289_V_read2359_phi_phi_fu_100454_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2289_V_read2359_phi_phi_fu_100454_p4 = ap_phi_mux_data_2289_V_read2359_rewind_phi_fu_57929_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2289_V_read2359_phi_phi_fu_100454_p4 = data_2289_V_read.read();
        } else {
            ap_phi_mux_data_2289_V_read2359_phi_phi_fu_100454_p4 = ap_phi_reg_pp0_iter0_data_2289_V_read2359_phi_reg_100450.read();
        }
    } else {
        ap_phi_mux_data_2289_V_read2359_phi_phi_fu_100454_p4 = ap_phi_reg_pp0_iter0_data_2289_V_read2359_phi_reg_100450.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2289_V_read2359_rewind_phi_fu_57929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2289_V_read2359_rewind_phi_fu_57929_p6 = data_2289_V_read2359_phi_reg_100450.read();
    } else {
        ap_phi_mux_data_2289_V_read2359_rewind_phi_fu_57929_p6 = data_2289_V_read2359_rewind_reg_57925.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_228_V_read298_phi_phi_fu_73661_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_228_V_read298_phi_phi_fu_73661_p4 = ap_phi_mux_data_228_V_read298_rewind_phi_fu_29075_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_228_V_read298_phi_phi_fu_73661_p4 = data_228_V_read.read();
        } else {
            ap_phi_mux_data_228_V_read298_phi_phi_fu_73661_p4 = ap_phi_reg_pp0_iter0_data_228_V_read298_phi_reg_73657.read();
        }
    } else {
        ap_phi_mux_data_228_V_read298_phi_phi_fu_73661_p4 = ap_phi_reg_pp0_iter0_data_228_V_read298_phi_reg_73657.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_228_V_read298_rewind_phi_fu_29075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_228_V_read298_rewind_phi_fu_29075_p6 = data_228_V_read298_phi_reg_73657.read();
    } else {
        ap_phi_mux_data_228_V_read298_rewind_phi_fu_29075_p6 = data_228_V_read298_rewind_reg_29071.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2290_V_read2360_phi_phi_fu_100467_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2290_V_read2360_phi_phi_fu_100467_p4 = ap_phi_mux_data_2290_V_read2360_rewind_phi_fu_57943_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2290_V_read2360_phi_phi_fu_100467_p4 = data_2290_V_read.read();
        } else {
            ap_phi_mux_data_2290_V_read2360_phi_phi_fu_100467_p4 = ap_phi_reg_pp0_iter0_data_2290_V_read2360_phi_reg_100463.read();
        }
    } else {
        ap_phi_mux_data_2290_V_read2360_phi_phi_fu_100467_p4 = ap_phi_reg_pp0_iter0_data_2290_V_read2360_phi_reg_100463.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2290_V_read2360_rewind_phi_fu_57943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2290_V_read2360_rewind_phi_fu_57943_p6 = data_2290_V_read2360_phi_reg_100463.read();
    } else {
        ap_phi_mux_data_2290_V_read2360_rewind_phi_fu_57943_p6 = data_2290_V_read2360_rewind_reg_57939.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2291_V_read2361_phi_phi_fu_100480_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2291_V_read2361_phi_phi_fu_100480_p4 = ap_phi_mux_data_2291_V_read2361_rewind_phi_fu_57957_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2291_V_read2361_phi_phi_fu_100480_p4 = data_2291_V_read.read();
        } else {
            ap_phi_mux_data_2291_V_read2361_phi_phi_fu_100480_p4 = ap_phi_reg_pp0_iter0_data_2291_V_read2361_phi_reg_100476.read();
        }
    } else {
        ap_phi_mux_data_2291_V_read2361_phi_phi_fu_100480_p4 = ap_phi_reg_pp0_iter0_data_2291_V_read2361_phi_reg_100476.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2291_V_read2361_rewind_phi_fu_57957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2291_V_read2361_rewind_phi_fu_57957_p6 = data_2291_V_read2361_phi_reg_100476.read();
    } else {
        ap_phi_mux_data_2291_V_read2361_rewind_phi_fu_57957_p6 = data_2291_V_read2361_rewind_reg_57953.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2292_V_read2362_phi_phi_fu_100493_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2292_V_read2362_phi_phi_fu_100493_p4 = ap_phi_mux_data_2292_V_read2362_rewind_phi_fu_57971_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2292_V_read2362_phi_phi_fu_100493_p4 = data_2292_V_read.read();
        } else {
            ap_phi_mux_data_2292_V_read2362_phi_phi_fu_100493_p4 = ap_phi_reg_pp0_iter0_data_2292_V_read2362_phi_reg_100489.read();
        }
    } else {
        ap_phi_mux_data_2292_V_read2362_phi_phi_fu_100493_p4 = ap_phi_reg_pp0_iter0_data_2292_V_read2362_phi_reg_100489.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2292_V_read2362_rewind_phi_fu_57971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2292_V_read2362_rewind_phi_fu_57971_p6 = data_2292_V_read2362_phi_reg_100489.read();
    } else {
        ap_phi_mux_data_2292_V_read2362_rewind_phi_fu_57971_p6 = data_2292_V_read2362_rewind_reg_57967.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2293_V_read2363_phi_phi_fu_100506_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2293_V_read2363_phi_phi_fu_100506_p4 = ap_phi_mux_data_2293_V_read2363_rewind_phi_fu_57985_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2293_V_read2363_phi_phi_fu_100506_p4 = data_2293_V_read.read();
        } else {
            ap_phi_mux_data_2293_V_read2363_phi_phi_fu_100506_p4 = ap_phi_reg_pp0_iter0_data_2293_V_read2363_phi_reg_100502.read();
        }
    } else {
        ap_phi_mux_data_2293_V_read2363_phi_phi_fu_100506_p4 = ap_phi_reg_pp0_iter0_data_2293_V_read2363_phi_reg_100502.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2293_V_read2363_rewind_phi_fu_57985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2293_V_read2363_rewind_phi_fu_57985_p6 = data_2293_V_read2363_phi_reg_100502.read();
    } else {
        ap_phi_mux_data_2293_V_read2363_rewind_phi_fu_57985_p6 = data_2293_V_read2363_rewind_reg_57981.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2294_V_read2364_phi_phi_fu_100519_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2294_V_read2364_phi_phi_fu_100519_p4 = ap_phi_mux_data_2294_V_read2364_rewind_phi_fu_57999_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2294_V_read2364_phi_phi_fu_100519_p4 = data_2294_V_read.read();
        } else {
            ap_phi_mux_data_2294_V_read2364_phi_phi_fu_100519_p4 = ap_phi_reg_pp0_iter0_data_2294_V_read2364_phi_reg_100515.read();
        }
    } else {
        ap_phi_mux_data_2294_V_read2364_phi_phi_fu_100519_p4 = ap_phi_reg_pp0_iter0_data_2294_V_read2364_phi_reg_100515.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2294_V_read2364_rewind_phi_fu_57999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2294_V_read2364_rewind_phi_fu_57999_p6 = data_2294_V_read2364_phi_reg_100515.read();
    } else {
        ap_phi_mux_data_2294_V_read2364_rewind_phi_fu_57999_p6 = data_2294_V_read2364_rewind_reg_57995.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2295_V_read2365_phi_phi_fu_100532_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2295_V_read2365_phi_phi_fu_100532_p4 = ap_phi_mux_data_2295_V_read2365_rewind_phi_fu_58013_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2295_V_read2365_phi_phi_fu_100532_p4 = data_2295_V_read.read();
        } else {
            ap_phi_mux_data_2295_V_read2365_phi_phi_fu_100532_p4 = ap_phi_reg_pp0_iter0_data_2295_V_read2365_phi_reg_100528.read();
        }
    } else {
        ap_phi_mux_data_2295_V_read2365_phi_phi_fu_100532_p4 = ap_phi_reg_pp0_iter0_data_2295_V_read2365_phi_reg_100528.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2295_V_read2365_rewind_phi_fu_58013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2295_V_read2365_rewind_phi_fu_58013_p6 = data_2295_V_read2365_phi_reg_100528.read();
    } else {
        ap_phi_mux_data_2295_V_read2365_rewind_phi_fu_58013_p6 = data_2295_V_read2365_rewind_reg_58009.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2296_V_read2366_phi_phi_fu_100545_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2296_V_read2366_phi_phi_fu_100545_p4 = ap_phi_mux_data_2296_V_read2366_rewind_phi_fu_58027_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2296_V_read2366_phi_phi_fu_100545_p4 = data_2296_V_read.read();
        } else {
            ap_phi_mux_data_2296_V_read2366_phi_phi_fu_100545_p4 = ap_phi_reg_pp0_iter0_data_2296_V_read2366_phi_reg_100541.read();
        }
    } else {
        ap_phi_mux_data_2296_V_read2366_phi_phi_fu_100545_p4 = ap_phi_reg_pp0_iter0_data_2296_V_read2366_phi_reg_100541.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2296_V_read2366_rewind_phi_fu_58027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2296_V_read2366_rewind_phi_fu_58027_p6 = data_2296_V_read2366_phi_reg_100541.read();
    } else {
        ap_phi_mux_data_2296_V_read2366_rewind_phi_fu_58027_p6 = data_2296_V_read2366_rewind_reg_58023.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2297_V_read2367_phi_phi_fu_100558_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2297_V_read2367_phi_phi_fu_100558_p4 = ap_phi_mux_data_2297_V_read2367_rewind_phi_fu_58041_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2297_V_read2367_phi_phi_fu_100558_p4 = data_2297_V_read.read();
        } else {
            ap_phi_mux_data_2297_V_read2367_phi_phi_fu_100558_p4 = ap_phi_reg_pp0_iter0_data_2297_V_read2367_phi_reg_100554.read();
        }
    } else {
        ap_phi_mux_data_2297_V_read2367_phi_phi_fu_100558_p4 = ap_phi_reg_pp0_iter0_data_2297_V_read2367_phi_reg_100554.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2297_V_read2367_rewind_phi_fu_58041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2297_V_read2367_rewind_phi_fu_58041_p6 = data_2297_V_read2367_phi_reg_100554.read();
    } else {
        ap_phi_mux_data_2297_V_read2367_rewind_phi_fu_58041_p6 = data_2297_V_read2367_rewind_reg_58037.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2298_V_read2368_phi_phi_fu_100571_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2298_V_read2368_phi_phi_fu_100571_p4 = ap_phi_mux_data_2298_V_read2368_rewind_phi_fu_58055_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2298_V_read2368_phi_phi_fu_100571_p4 = data_2298_V_read.read();
        } else {
            ap_phi_mux_data_2298_V_read2368_phi_phi_fu_100571_p4 = ap_phi_reg_pp0_iter0_data_2298_V_read2368_phi_reg_100567.read();
        }
    } else {
        ap_phi_mux_data_2298_V_read2368_phi_phi_fu_100571_p4 = ap_phi_reg_pp0_iter0_data_2298_V_read2368_phi_reg_100567.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2298_V_read2368_rewind_phi_fu_58055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2298_V_read2368_rewind_phi_fu_58055_p6 = data_2298_V_read2368_phi_reg_100567.read();
    } else {
        ap_phi_mux_data_2298_V_read2368_rewind_phi_fu_58055_p6 = data_2298_V_read2368_rewind_reg_58051.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2299_V_read2369_phi_phi_fu_100584_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2299_V_read2369_phi_phi_fu_100584_p4 = ap_phi_mux_data_2299_V_read2369_rewind_phi_fu_58069_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2299_V_read2369_phi_phi_fu_100584_p4 = data_2299_V_read.read();
        } else {
            ap_phi_mux_data_2299_V_read2369_phi_phi_fu_100584_p4 = ap_phi_reg_pp0_iter0_data_2299_V_read2369_phi_reg_100580.read();
        }
    } else {
        ap_phi_mux_data_2299_V_read2369_phi_phi_fu_100584_p4 = ap_phi_reg_pp0_iter0_data_2299_V_read2369_phi_reg_100580.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2299_V_read2369_rewind_phi_fu_58069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2299_V_read2369_rewind_phi_fu_58069_p6 = data_2299_V_read2369_phi_reg_100580.read();
    } else {
        ap_phi_mux_data_2299_V_read2369_rewind_phi_fu_58069_p6 = data_2299_V_read2369_rewind_reg_58065.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_229_V_read299_phi_phi_fu_73674_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_229_V_read299_phi_phi_fu_73674_p4 = ap_phi_mux_data_229_V_read299_rewind_phi_fu_29089_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_229_V_read299_phi_phi_fu_73674_p4 = data_229_V_read.read();
        } else {
            ap_phi_mux_data_229_V_read299_phi_phi_fu_73674_p4 = ap_phi_reg_pp0_iter0_data_229_V_read299_phi_reg_73670.read();
        }
    } else {
        ap_phi_mux_data_229_V_read299_phi_phi_fu_73674_p4 = ap_phi_reg_pp0_iter0_data_229_V_read299_phi_reg_73670.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_229_V_read299_rewind_phi_fu_29089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_229_V_read299_rewind_phi_fu_29089_p6 = data_229_V_read299_phi_reg_73670.read();
    } else {
        ap_phi_mux_data_229_V_read299_rewind_phi_fu_29089_p6 = data_229_V_read299_rewind_reg_29085.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_22_V_read92_phi_phi_fu_70983_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_22_V_read92_phi_phi_fu_70983_p4 = ap_phi_mux_data_22_V_read92_rewind_phi_fu_26191_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_22_V_read92_phi_phi_fu_70983_p4 = data_22_V_read.read();
        } else {
            ap_phi_mux_data_22_V_read92_phi_phi_fu_70983_p4 = ap_phi_reg_pp0_iter0_data_22_V_read92_phi_reg_70979.read();
        }
    } else {
        ap_phi_mux_data_22_V_read92_phi_phi_fu_70983_p4 = ap_phi_reg_pp0_iter0_data_22_V_read92_phi_reg_70979.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_22_V_read92_rewind_phi_fu_26191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_22_V_read92_rewind_phi_fu_26191_p6 = data_22_V_read92_phi_reg_70979.read();
    } else {
        ap_phi_mux_data_22_V_read92_rewind_phi_fu_26191_p6 = data_22_V_read92_rewind_reg_26187.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2300_V_read2370_phi_phi_fu_100597_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2300_V_read2370_phi_phi_fu_100597_p4 = ap_phi_mux_data_2300_V_read2370_rewind_phi_fu_58083_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2300_V_read2370_phi_phi_fu_100597_p4 = data_2300_V_read.read();
        } else {
            ap_phi_mux_data_2300_V_read2370_phi_phi_fu_100597_p4 = ap_phi_reg_pp0_iter0_data_2300_V_read2370_phi_reg_100593.read();
        }
    } else {
        ap_phi_mux_data_2300_V_read2370_phi_phi_fu_100597_p4 = ap_phi_reg_pp0_iter0_data_2300_V_read2370_phi_reg_100593.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2300_V_read2370_rewind_phi_fu_58083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2300_V_read2370_rewind_phi_fu_58083_p6 = data_2300_V_read2370_phi_reg_100593.read();
    } else {
        ap_phi_mux_data_2300_V_read2370_rewind_phi_fu_58083_p6 = data_2300_V_read2370_rewind_reg_58079.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2301_V_read2371_phi_phi_fu_100610_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2301_V_read2371_phi_phi_fu_100610_p4 = ap_phi_mux_data_2301_V_read2371_rewind_phi_fu_58097_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2301_V_read2371_phi_phi_fu_100610_p4 = data_2301_V_read.read();
        } else {
            ap_phi_mux_data_2301_V_read2371_phi_phi_fu_100610_p4 = ap_phi_reg_pp0_iter0_data_2301_V_read2371_phi_reg_100606.read();
        }
    } else {
        ap_phi_mux_data_2301_V_read2371_phi_phi_fu_100610_p4 = ap_phi_reg_pp0_iter0_data_2301_V_read2371_phi_reg_100606.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2301_V_read2371_rewind_phi_fu_58097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2301_V_read2371_rewind_phi_fu_58097_p6 = data_2301_V_read2371_phi_reg_100606.read();
    } else {
        ap_phi_mux_data_2301_V_read2371_rewind_phi_fu_58097_p6 = data_2301_V_read2371_rewind_reg_58093.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2302_V_read2372_phi_phi_fu_100623_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2302_V_read2372_phi_phi_fu_100623_p4 = ap_phi_mux_data_2302_V_read2372_rewind_phi_fu_58111_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2302_V_read2372_phi_phi_fu_100623_p4 = data_2302_V_read.read();
        } else {
            ap_phi_mux_data_2302_V_read2372_phi_phi_fu_100623_p4 = ap_phi_reg_pp0_iter0_data_2302_V_read2372_phi_reg_100619.read();
        }
    } else {
        ap_phi_mux_data_2302_V_read2372_phi_phi_fu_100623_p4 = ap_phi_reg_pp0_iter0_data_2302_V_read2372_phi_reg_100619.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2302_V_read2372_rewind_phi_fu_58111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2302_V_read2372_rewind_phi_fu_58111_p6 = data_2302_V_read2372_phi_reg_100619.read();
    } else {
        ap_phi_mux_data_2302_V_read2372_rewind_phi_fu_58111_p6 = data_2302_V_read2372_rewind_reg_58107.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2303_V_read2373_phi_phi_fu_100636_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2303_V_read2373_phi_phi_fu_100636_p4 = ap_phi_mux_data_2303_V_read2373_rewind_phi_fu_58125_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2303_V_read2373_phi_phi_fu_100636_p4 = data_2303_V_read.read();
        } else {
            ap_phi_mux_data_2303_V_read2373_phi_phi_fu_100636_p4 = ap_phi_reg_pp0_iter0_data_2303_V_read2373_phi_reg_100632.read();
        }
    } else {
        ap_phi_mux_data_2303_V_read2373_phi_phi_fu_100636_p4 = ap_phi_reg_pp0_iter0_data_2303_V_read2373_phi_reg_100632.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2303_V_read2373_rewind_phi_fu_58125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2303_V_read2373_rewind_phi_fu_58125_p6 = data_2303_V_read2373_phi_reg_100632.read();
    } else {
        ap_phi_mux_data_2303_V_read2373_rewind_phi_fu_58125_p6 = data_2303_V_read2373_rewind_reg_58121.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2304_V_read2374_phi_phi_fu_100649_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2304_V_read2374_phi_phi_fu_100649_p4 = ap_phi_mux_data_2304_V_read2374_rewind_phi_fu_58139_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2304_V_read2374_phi_phi_fu_100649_p4 = data_2304_V_read.read();
        } else {
            ap_phi_mux_data_2304_V_read2374_phi_phi_fu_100649_p4 = ap_phi_reg_pp0_iter0_data_2304_V_read2374_phi_reg_100645.read();
        }
    } else {
        ap_phi_mux_data_2304_V_read2374_phi_phi_fu_100649_p4 = ap_phi_reg_pp0_iter0_data_2304_V_read2374_phi_reg_100645.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2304_V_read2374_rewind_phi_fu_58139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2304_V_read2374_rewind_phi_fu_58139_p6 = data_2304_V_read2374_phi_reg_100645.read();
    } else {
        ap_phi_mux_data_2304_V_read2374_rewind_phi_fu_58139_p6 = data_2304_V_read2374_rewind_reg_58135.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2305_V_read2375_phi_phi_fu_100662_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2305_V_read2375_phi_phi_fu_100662_p4 = ap_phi_mux_data_2305_V_read2375_rewind_phi_fu_58153_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2305_V_read2375_phi_phi_fu_100662_p4 = data_2305_V_read.read();
        } else {
            ap_phi_mux_data_2305_V_read2375_phi_phi_fu_100662_p4 = ap_phi_reg_pp0_iter0_data_2305_V_read2375_phi_reg_100658.read();
        }
    } else {
        ap_phi_mux_data_2305_V_read2375_phi_phi_fu_100662_p4 = ap_phi_reg_pp0_iter0_data_2305_V_read2375_phi_reg_100658.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2305_V_read2375_rewind_phi_fu_58153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2305_V_read2375_rewind_phi_fu_58153_p6 = data_2305_V_read2375_phi_reg_100658.read();
    } else {
        ap_phi_mux_data_2305_V_read2375_rewind_phi_fu_58153_p6 = data_2305_V_read2375_rewind_reg_58149.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2306_V_read2376_phi_phi_fu_100675_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2306_V_read2376_phi_phi_fu_100675_p4 = ap_phi_mux_data_2306_V_read2376_rewind_phi_fu_58167_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2306_V_read2376_phi_phi_fu_100675_p4 = data_2306_V_read.read();
        } else {
            ap_phi_mux_data_2306_V_read2376_phi_phi_fu_100675_p4 = ap_phi_reg_pp0_iter0_data_2306_V_read2376_phi_reg_100671.read();
        }
    } else {
        ap_phi_mux_data_2306_V_read2376_phi_phi_fu_100675_p4 = ap_phi_reg_pp0_iter0_data_2306_V_read2376_phi_reg_100671.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2306_V_read2376_rewind_phi_fu_58167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2306_V_read2376_rewind_phi_fu_58167_p6 = data_2306_V_read2376_phi_reg_100671.read();
    } else {
        ap_phi_mux_data_2306_V_read2376_rewind_phi_fu_58167_p6 = data_2306_V_read2376_rewind_reg_58163.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2307_V_read2377_phi_phi_fu_100688_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2307_V_read2377_phi_phi_fu_100688_p4 = ap_phi_mux_data_2307_V_read2377_rewind_phi_fu_58181_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2307_V_read2377_phi_phi_fu_100688_p4 = data_2307_V_read.read();
        } else {
            ap_phi_mux_data_2307_V_read2377_phi_phi_fu_100688_p4 = ap_phi_reg_pp0_iter0_data_2307_V_read2377_phi_reg_100684.read();
        }
    } else {
        ap_phi_mux_data_2307_V_read2377_phi_phi_fu_100688_p4 = ap_phi_reg_pp0_iter0_data_2307_V_read2377_phi_reg_100684.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2307_V_read2377_rewind_phi_fu_58181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2307_V_read2377_rewind_phi_fu_58181_p6 = data_2307_V_read2377_phi_reg_100684.read();
    } else {
        ap_phi_mux_data_2307_V_read2377_rewind_phi_fu_58181_p6 = data_2307_V_read2377_rewind_reg_58177.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2308_V_read2378_phi_phi_fu_100701_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2308_V_read2378_phi_phi_fu_100701_p4 = ap_phi_mux_data_2308_V_read2378_rewind_phi_fu_58195_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2308_V_read2378_phi_phi_fu_100701_p4 = data_2308_V_read.read();
        } else {
            ap_phi_mux_data_2308_V_read2378_phi_phi_fu_100701_p4 = ap_phi_reg_pp0_iter0_data_2308_V_read2378_phi_reg_100697.read();
        }
    } else {
        ap_phi_mux_data_2308_V_read2378_phi_phi_fu_100701_p4 = ap_phi_reg_pp0_iter0_data_2308_V_read2378_phi_reg_100697.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2308_V_read2378_rewind_phi_fu_58195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2308_V_read2378_rewind_phi_fu_58195_p6 = data_2308_V_read2378_phi_reg_100697.read();
    } else {
        ap_phi_mux_data_2308_V_read2378_rewind_phi_fu_58195_p6 = data_2308_V_read2378_rewind_reg_58191.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2309_V_read2379_phi_phi_fu_100714_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2309_V_read2379_phi_phi_fu_100714_p4 = ap_phi_mux_data_2309_V_read2379_rewind_phi_fu_58209_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2309_V_read2379_phi_phi_fu_100714_p4 = data_2309_V_read.read();
        } else {
            ap_phi_mux_data_2309_V_read2379_phi_phi_fu_100714_p4 = ap_phi_reg_pp0_iter0_data_2309_V_read2379_phi_reg_100710.read();
        }
    } else {
        ap_phi_mux_data_2309_V_read2379_phi_phi_fu_100714_p4 = ap_phi_reg_pp0_iter0_data_2309_V_read2379_phi_reg_100710.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2309_V_read2379_rewind_phi_fu_58209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2309_V_read2379_rewind_phi_fu_58209_p6 = data_2309_V_read2379_phi_reg_100710.read();
    } else {
        ap_phi_mux_data_2309_V_read2379_rewind_phi_fu_58209_p6 = data_2309_V_read2379_rewind_reg_58205.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_230_V_read300_phi_phi_fu_73687_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_230_V_read300_phi_phi_fu_73687_p4 = ap_phi_mux_data_230_V_read300_rewind_phi_fu_29103_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_230_V_read300_phi_phi_fu_73687_p4 = data_230_V_read.read();
        } else {
            ap_phi_mux_data_230_V_read300_phi_phi_fu_73687_p4 = ap_phi_reg_pp0_iter0_data_230_V_read300_phi_reg_73683.read();
        }
    } else {
        ap_phi_mux_data_230_V_read300_phi_phi_fu_73687_p4 = ap_phi_reg_pp0_iter0_data_230_V_read300_phi_reg_73683.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_230_V_read300_rewind_phi_fu_29103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_230_V_read300_rewind_phi_fu_29103_p6 = data_230_V_read300_phi_reg_73683.read();
    } else {
        ap_phi_mux_data_230_V_read300_rewind_phi_fu_29103_p6 = data_230_V_read300_rewind_reg_29099.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2310_V_read2380_phi_phi_fu_100727_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2310_V_read2380_phi_phi_fu_100727_p4 = ap_phi_mux_data_2310_V_read2380_rewind_phi_fu_58223_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2310_V_read2380_phi_phi_fu_100727_p4 = data_2310_V_read.read();
        } else {
            ap_phi_mux_data_2310_V_read2380_phi_phi_fu_100727_p4 = ap_phi_reg_pp0_iter0_data_2310_V_read2380_phi_reg_100723.read();
        }
    } else {
        ap_phi_mux_data_2310_V_read2380_phi_phi_fu_100727_p4 = ap_phi_reg_pp0_iter0_data_2310_V_read2380_phi_reg_100723.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2310_V_read2380_rewind_phi_fu_58223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2310_V_read2380_rewind_phi_fu_58223_p6 = data_2310_V_read2380_phi_reg_100723.read();
    } else {
        ap_phi_mux_data_2310_V_read2380_rewind_phi_fu_58223_p6 = data_2310_V_read2380_rewind_reg_58219.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2311_V_read2381_phi_phi_fu_100740_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2311_V_read2381_phi_phi_fu_100740_p4 = ap_phi_mux_data_2311_V_read2381_rewind_phi_fu_58237_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2311_V_read2381_phi_phi_fu_100740_p4 = data_2311_V_read.read();
        } else {
            ap_phi_mux_data_2311_V_read2381_phi_phi_fu_100740_p4 = ap_phi_reg_pp0_iter0_data_2311_V_read2381_phi_reg_100736.read();
        }
    } else {
        ap_phi_mux_data_2311_V_read2381_phi_phi_fu_100740_p4 = ap_phi_reg_pp0_iter0_data_2311_V_read2381_phi_reg_100736.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2311_V_read2381_rewind_phi_fu_58237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2311_V_read2381_rewind_phi_fu_58237_p6 = data_2311_V_read2381_phi_reg_100736.read();
    } else {
        ap_phi_mux_data_2311_V_read2381_rewind_phi_fu_58237_p6 = data_2311_V_read2381_rewind_reg_58233.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2312_V_read2382_phi_phi_fu_100753_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2312_V_read2382_phi_phi_fu_100753_p4 = ap_phi_mux_data_2312_V_read2382_rewind_phi_fu_58251_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2312_V_read2382_phi_phi_fu_100753_p4 = data_2312_V_read.read();
        } else {
            ap_phi_mux_data_2312_V_read2382_phi_phi_fu_100753_p4 = ap_phi_reg_pp0_iter0_data_2312_V_read2382_phi_reg_100749.read();
        }
    } else {
        ap_phi_mux_data_2312_V_read2382_phi_phi_fu_100753_p4 = ap_phi_reg_pp0_iter0_data_2312_V_read2382_phi_reg_100749.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2312_V_read2382_rewind_phi_fu_58251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2312_V_read2382_rewind_phi_fu_58251_p6 = data_2312_V_read2382_phi_reg_100749.read();
    } else {
        ap_phi_mux_data_2312_V_read2382_rewind_phi_fu_58251_p6 = data_2312_V_read2382_rewind_reg_58247.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2313_V_read2383_phi_phi_fu_100766_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2313_V_read2383_phi_phi_fu_100766_p4 = ap_phi_mux_data_2313_V_read2383_rewind_phi_fu_58265_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2313_V_read2383_phi_phi_fu_100766_p4 = data_2313_V_read.read();
        } else {
            ap_phi_mux_data_2313_V_read2383_phi_phi_fu_100766_p4 = ap_phi_reg_pp0_iter0_data_2313_V_read2383_phi_reg_100762.read();
        }
    } else {
        ap_phi_mux_data_2313_V_read2383_phi_phi_fu_100766_p4 = ap_phi_reg_pp0_iter0_data_2313_V_read2383_phi_reg_100762.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2313_V_read2383_rewind_phi_fu_58265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2313_V_read2383_rewind_phi_fu_58265_p6 = data_2313_V_read2383_phi_reg_100762.read();
    } else {
        ap_phi_mux_data_2313_V_read2383_rewind_phi_fu_58265_p6 = data_2313_V_read2383_rewind_reg_58261.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2314_V_read2384_phi_phi_fu_100779_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2314_V_read2384_phi_phi_fu_100779_p4 = ap_phi_mux_data_2314_V_read2384_rewind_phi_fu_58279_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2314_V_read2384_phi_phi_fu_100779_p4 = data_2314_V_read.read();
        } else {
            ap_phi_mux_data_2314_V_read2384_phi_phi_fu_100779_p4 = ap_phi_reg_pp0_iter0_data_2314_V_read2384_phi_reg_100775.read();
        }
    } else {
        ap_phi_mux_data_2314_V_read2384_phi_phi_fu_100779_p4 = ap_phi_reg_pp0_iter0_data_2314_V_read2384_phi_reg_100775.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2314_V_read2384_rewind_phi_fu_58279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2314_V_read2384_rewind_phi_fu_58279_p6 = data_2314_V_read2384_phi_reg_100775.read();
    } else {
        ap_phi_mux_data_2314_V_read2384_rewind_phi_fu_58279_p6 = data_2314_V_read2384_rewind_reg_58275.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2315_V_read2385_phi_phi_fu_100792_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2315_V_read2385_phi_phi_fu_100792_p4 = ap_phi_mux_data_2315_V_read2385_rewind_phi_fu_58293_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2315_V_read2385_phi_phi_fu_100792_p4 = data_2315_V_read.read();
        } else {
            ap_phi_mux_data_2315_V_read2385_phi_phi_fu_100792_p4 = ap_phi_reg_pp0_iter0_data_2315_V_read2385_phi_reg_100788.read();
        }
    } else {
        ap_phi_mux_data_2315_V_read2385_phi_phi_fu_100792_p4 = ap_phi_reg_pp0_iter0_data_2315_V_read2385_phi_reg_100788.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2315_V_read2385_rewind_phi_fu_58293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2315_V_read2385_rewind_phi_fu_58293_p6 = data_2315_V_read2385_phi_reg_100788.read();
    } else {
        ap_phi_mux_data_2315_V_read2385_rewind_phi_fu_58293_p6 = data_2315_V_read2385_rewind_reg_58289.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2316_V_read2386_phi_phi_fu_100805_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2316_V_read2386_phi_phi_fu_100805_p4 = ap_phi_mux_data_2316_V_read2386_rewind_phi_fu_58307_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2316_V_read2386_phi_phi_fu_100805_p4 = data_2316_V_read.read();
        } else {
            ap_phi_mux_data_2316_V_read2386_phi_phi_fu_100805_p4 = ap_phi_reg_pp0_iter0_data_2316_V_read2386_phi_reg_100801.read();
        }
    } else {
        ap_phi_mux_data_2316_V_read2386_phi_phi_fu_100805_p4 = ap_phi_reg_pp0_iter0_data_2316_V_read2386_phi_reg_100801.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2316_V_read2386_rewind_phi_fu_58307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2316_V_read2386_rewind_phi_fu_58307_p6 = data_2316_V_read2386_phi_reg_100801.read();
    } else {
        ap_phi_mux_data_2316_V_read2386_rewind_phi_fu_58307_p6 = data_2316_V_read2386_rewind_reg_58303.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2317_V_read2387_phi_phi_fu_100818_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2317_V_read2387_phi_phi_fu_100818_p4 = ap_phi_mux_data_2317_V_read2387_rewind_phi_fu_58321_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2317_V_read2387_phi_phi_fu_100818_p4 = data_2317_V_read.read();
        } else {
            ap_phi_mux_data_2317_V_read2387_phi_phi_fu_100818_p4 = ap_phi_reg_pp0_iter0_data_2317_V_read2387_phi_reg_100814.read();
        }
    } else {
        ap_phi_mux_data_2317_V_read2387_phi_phi_fu_100818_p4 = ap_phi_reg_pp0_iter0_data_2317_V_read2387_phi_reg_100814.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2317_V_read2387_rewind_phi_fu_58321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2317_V_read2387_rewind_phi_fu_58321_p6 = data_2317_V_read2387_phi_reg_100814.read();
    } else {
        ap_phi_mux_data_2317_V_read2387_rewind_phi_fu_58321_p6 = data_2317_V_read2387_rewind_reg_58317.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2318_V_read2388_phi_phi_fu_100831_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2318_V_read2388_phi_phi_fu_100831_p4 = ap_phi_mux_data_2318_V_read2388_rewind_phi_fu_58335_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2318_V_read2388_phi_phi_fu_100831_p4 = data_2318_V_read.read();
        } else {
            ap_phi_mux_data_2318_V_read2388_phi_phi_fu_100831_p4 = ap_phi_reg_pp0_iter0_data_2318_V_read2388_phi_reg_100827.read();
        }
    } else {
        ap_phi_mux_data_2318_V_read2388_phi_phi_fu_100831_p4 = ap_phi_reg_pp0_iter0_data_2318_V_read2388_phi_reg_100827.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2318_V_read2388_rewind_phi_fu_58335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2318_V_read2388_rewind_phi_fu_58335_p6 = data_2318_V_read2388_phi_reg_100827.read();
    } else {
        ap_phi_mux_data_2318_V_read2388_rewind_phi_fu_58335_p6 = data_2318_V_read2388_rewind_reg_58331.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2319_V_read2389_phi_phi_fu_100844_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2319_V_read2389_phi_phi_fu_100844_p4 = ap_phi_mux_data_2319_V_read2389_rewind_phi_fu_58349_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2319_V_read2389_phi_phi_fu_100844_p4 = data_2319_V_read.read();
        } else {
            ap_phi_mux_data_2319_V_read2389_phi_phi_fu_100844_p4 = ap_phi_reg_pp0_iter0_data_2319_V_read2389_phi_reg_100840.read();
        }
    } else {
        ap_phi_mux_data_2319_V_read2389_phi_phi_fu_100844_p4 = ap_phi_reg_pp0_iter0_data_2319_V_read2389_phi_reg_100840.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2319_V_read2389_rewind_phi_fu_58349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2319_V_read2389_rewind_phi_fu_58349_p6 = data_2319_V_read2389_phi_reg_100840.read();
    } else {
        ap_phi_mux_data_2319_V_read2389_rewind_phi_fu_58349_p6 = data_2319_V_read2389_rewind_reg_58345.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_231_V_read301_phi_phi_fu_73700_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_231_V_read301_phi_phi_fu_73700_p4 = ap_phi_mux_data_231_V_read301_rewind_phi_fu_29117_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_231_V_read301_phi_phi_fu_73700_p4 = data_231_V_read.read();
        } else {
            ap_phi_mux_data_231_V_read301_phi_phi_fu_73700_p4 = ap_phi_reg_pp0_iter0_data_231_V_read301_phi_reg_73696.read();
        }
    } else {
        ap_phi_mux_data_231_V_read301_phi_phi_fu_73700_p4 = ap_phi_reg_pp0_iter0_data_231_V_read301_phi_reg_73696.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_231_V_read301_rewind_phi_fu_29117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_231_V_read301_rewind_phi_fu_29117_p6 = data_231_V_read301_phi_reg_73696.read();
    } else {
        ap_phi_mux_data_231_V_read301_rewind_phi_fu_29117_p6 = data_231_V_read301_rewind_reg_29113.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2320_V_read2390_phi_phi_fu_100857_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2320_V_read2390_phi_phi_fu_100857_p4 = ap_phi_mux_data_2320_V_read2390_rewind_phi_fu_58363_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2320_V_read2390_phi_phi_fu_100857_p4 = data_2320_V_read.read();
        } else {
            ap_phi_mux_data_2320_V_read2390_phi_phi_fu_100857_p4 = ap_phi_reg_pp0_iter0_data_2320_V_read2390_phi_reg_100853.read();
        }
    } else {
        ap_phi_mux_data_2320_V_read2390_phi_phi_fu_100857_p4 = ap_phi_reg_pp0_iter0_data_2320_V_read2390_phi_reg_100853.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2320_V_read2390_rewind_phi_fu_58363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2320_V_read2390_rewind_phi_fu_58363_p6 = data_2320_V_read2390_phi_reg_100853.read();
    } else {
        ap_phi_mux_data_2320_V_read2390_rewind_phi_fu_58363_p6 = data_2320_V_read2390_rewind_reg_58359.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2321_V_read2391_phi_phi_fu_100870_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2321_V_read2391_phi_phi_fu_100870_p4 = ap_phi_mux_data_2321_V_read2391_rewind_phi_fu_58377_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2321_V_read2391_phi_phi_fu_100870_p4 = data_2321_V_read.read();
        } else {
            ap_phi_mux_data_2321_V_read2391_phi_phi_fu_100870_p4 = ap_phi_reg_pp0_iter0_data_2321_V_read2391_phi_reg_100866.read();
        }
    } else {
        ap_phi_mux_data_2321_V_read2391_phi_phi_fu_100870_p4 = ap_phi_reg_pp0_iter0_data_2321_V_read2391_phi_reg_100866.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2321_V_read2391_rewind_phi_fu_58377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2321_V_read2391_rewind_phi_fu_58377_p6 = data_2321_V_read2391_phi_reg_100866.read();
    } else {
        ap_phi_mux_data_2321_V_read2391_rewind_phi_fu_58377_p6 = data_2321_V_read2391_rewind_reg_58373.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2322_V_read2392_phi_phi_fu_100883_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2322_V_read2392_phi_phi_fu_100883_p4 = ap_phi_mux_data_2322_V_read2392_rewind_phi_fu_58391_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2322_V_read2392_phi_phi_fu_100883_p4 = data_2322_V_read.read();
        } else {
            ap_phi_mux_data_2322_V_read2392_phi_phi_fu_100883_p4 = ap_phi_reg_pp0_iter0_data_2322_V_read2392_phi_reg_100879.read();
        }
    } else {
        ap_phi_mux_data_2322_V_read2392_phi_phi_fu_100883_p4 = ap_phi_reg_pp0_iter0_data_2322_V_read2392_phi_reg_100879.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2322_V_read2392_rewind_phi_fu_58391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2322_V_read2392_rewind_phi_fu_58391_p6 = data_2322_V_read2392_phi_reg_100879.read();
    } else {
        ap_phi_mux_data_2322_V_read2392_rewind_phi_fu_58391_p6 = data_2322_V_read2392_rewind_reg_58387.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2323_V_read2393_phi_phi_fu_100896_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2323_V_read2393_phi_phi_fu_100896_p4 = ap_phi_mux_data_2323_V_read2393_rewind_phi_fu_58405_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2323_V_read2393_phi_phi_fu_100896_p4 = data_2323_V_read.read();
        } else {
            ap_phi_mux_data_2323_V_read2393_phi_phi_fu_100896_p4 = ap_phi_reg_pp0_iter0_data_2323_V_read2393_phi_reg_100892.read();
        }
    } else {
        ap_phi_mux_data_2323_V_read2393_phi_phi_fu_100896_p4 = ap_phi_reg_pp0_iter0_data_2323_V_read2393_phi_reg_100892.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2323_V_read2393_rewind_phi_fu_58405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2323_V_read2393_rewind_phi_fu_58405_p6 = data_2323_V_read2393_phi_reg_100892.read();
    } else {
        ap_phi_mux_data_2323_V_read2393_rewind_phi_fu_58405_p6 = data_2323_V_read2393_rewind_reg_58401.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2324_V_read2394_phi_phi_fu_100909_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2324_V_read2394_phi_phi_fu_100909_p4 = ap_phi_mux_data_2324_V_read2394_rewind_phi_fu_58419_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2324_V_read2394_phi_phi_fu_100909_p4 = data_2324_V_read.read();
        } else {
            ap_phi_mux_data_2324_V_read2394_phi_phi_fu_100909_p4 = ap_phi_reg_pp0_iter0_data_2324_V_read2394_phi_reg_100905.read();
        }
    } else {
        ap_phi_mux_data_2324_V_read2394_phi_phi_fu_100909_p4 = ap_phi_reg_pp0_iter0_data_2324_V_read2394_phi_reg_100905.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2324_V_read2394_rewind_phi_fu_58419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2324_V_read2394_rewind_phi_fu_58419_p6 = data_2324_V_read2394_phi_reg_100905.read();
    } else {
        ap_phi_mux_data_2324_V_read2394_rewind_phi_fu_58419_p6 = data_2324_V_read2394_rewind_reg_58415.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2325_V_read2395_phi_phi_fu_100922_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2325_V_read2395_phi_phi_fu_100922_p4 = ap_phi_mux_data_2325_V_read2395_rewind_phi_fu_58433_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2325_V_read2395_phi_phi_fu_100922_p4 = data_2325_V_read.read();
        } else {
            ap_phi_mux_data_2325_V_read2395_phi_phi_fu_100922_p4 = ap_phi_reg_pp0_iter0_data_2325_V_read2395_phi_reg_100918.read();
        }
    } else {
        ap_phi_mux_data_2325_V_read2395_phi_phi_fu_100922_p4 = ap_phi_reg_pp0_iter0_data_2325_V_read2395_phi_reg_100918.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2325_V_read2395_rewind_phi_fu_58433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2325_V_read2395_rewind_phi_fu_58433_p6 = data_2325_V_read2395_phi_reg_100918.read();
    } else {
        ap_phi_mux_data_2325_V_read2395_rewind_phi_fu_58433_p6 = data_2325_V_read2395_rewind_reg_58429.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2326_V_read2396_phi_phi_fu_100935_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2326_V_read2396_phi_phi_fu_100935_p4 = ap_phi_mux_data_2326_V_read2396_rewind_phi_fu_58447_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2326_V_read2396_phi_phi_fu_100935_p4 = data_2326_V_read.read();
        } else {
            ap_phi_mux_data_2326_V_read2396_phi_phi_fu_100935_p4 = ap_phi_reg_pp0_iter0_data_2326_V_read2396_phi_reg_100931.read();
        }
    } else {
        ap_phi_mux_data_2326_V_read2396_phi_phi_fu_100935_p4 = ap_phi_reg_pp0_iter0_data_2326_V_read2396_phi_reg_100931.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2326_V_read2396_rewind_phi_fu_58447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2326_V_read2396_rewind_phi_fu_58447_p6 = data_2326_V_read2396_phi_reg_100931.read();
    } else {
        ap_phi_mux_data_2326_V_read2396_rewind_phi_fu_58447_p6 = data_2326_V_read2396_rewind_reg_58443.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2327_V_read2397_phi_phi_fu_100948_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2327_V_read2397_phi_phi_fu_100948_p4 = ap_phi_mux_data_2327_V_read2397_rewind_phi_fu_58461_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2327_V_read2397_phi_phi_fu_100948_p4 = data_2327_V_read.read();
        } else {
            ap_phi_mux_data_2327_V_read2397_phi_phi_fu_100948_p4 = ap_phi_reg_pp0_iter0_data_2327_V_read2397_phi_reg_100944.read();
        }
    } else {
        ap_phi_mux_data_2327_V_read2397_phi_phi_fu_100948_p4 = ap_phi_reg_pp0_iter0_data_2327_V_read2397_phi_reg_100944.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2327_V_read2397_rewind_phi_fu_58461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2327_V_read2397_rewind_phi_fu_58461_p6 = data_2327_V_read2397_phi_reg_100944.read();
    } else {
        ap_phi_mux_data_2327_V_read2397_rewind_phi_fu_58461_p6 = data_2327_V_read2397_rewind_reg_58457.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2328_V_read2398_phi_phi_fu_100961_p4() {
    if (esl_seteq<1,1,1>(ap_condition_19451.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_0)) {
            ap_phi_mux_data_2328_V_read2398_phi_phi_fu_100961_p4 = ap_phi_mux_data_2328_V_read2398_rewind_phi_fu_58475_p6.read();
        } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_25867_p6.read(), ap_const_lv1_1)) {
            ap_phi_mux_data_2328_V_read2398_phi_phi_fu_100961_p4 = data_2328_V_read.read();
        } else {
            ap_phi_mux_data_2328_V_read2398_phi_phi_fu_100961_p4 = ap_phi_reg_pp0_iter0_data_2328_V_read2398_phi_reg_100957.read();
        }
    } else {
        ap_phi_mux_data_2328_V_read2398_phi_phi_fu_100961_p4 = ap_phi_reg_pp0_iter0_data_2328_V_read2398_phi_reg_100957.read();
    }
}

void dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_53_33_5_3_0_config4_s::thread_ap_phi_mux_data_2328_V_read2398_rewind_phi_fu_58475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln46_reg_120908.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2328_V_read2398_rewind_phi_fu_58475_p6 = data_2328_V_read2398_phi_reg_100957.read();
    } else {
        ap_phi_mux_data_2328_V_read2398_rewind_phi_fu_58475_p6 = data_2328_V_read2398_rewind_reg_58471.read();
    }
}

}

