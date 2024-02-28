#include "dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_703_fu_14724_p2() {
    add_ln703_703_fu_14724_p2 = (!trunc_ln708_701_fu_14624_p4.read().is_01() || !trunc_ln708_696_fu_14548_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_701_fu_14624_p4.read()) + sc_biguint<18>(trunc_ln708_696_fu_14548_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_704_fu_14730_p2() {
    add_ln703_704_fu_14730_p2 = (!trunc_ln708_695_fu_14538_p4.read().is_01() || !add_ln703_703_fu_14724_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_695_fu_14538_p4.read()) + sc_biguint<18>(add_ln703_703_fu_14724_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_705_fu_14736_p2() {
    add_ln703_705_fu_14736_p2 = (!add_ln703_702_fu_14718_p2.read().is_01() || !add_ln703_704_fu_14730_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_702_fu_14718_p2.read()) + sc_biguint<18>(add_ln703_704_fu_14730_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_706_fu_14742_p2() {
    add_ln703_706_fu_14742_p2 = (!trunc_ln708_702_fu_14633_p4.read().is_01() || !trunc_ln708_584_fu_12510_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_702_fu_14633_p4.read()) + sc_biguint<18>(trunc_ln708_584_fu_12510_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_707_fu_14748_p2() {
    add_ln703_707_fu_14748_p2 = (!trunc_ln708_706_fu_14673_p4.read().is_01() || !trunc_ln708_705_fu_14664_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_706_fu_14673_p4.read()) + sc_biguint<18>(trunc_ln708_705_fu_14664_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_708_fu_14754_p2() {
    add_ln703_708_fu_14754_p2 = (!trunc_ln708_703_fu_14642_p4.read().is_01() || !add_ln703_707_fu_14748_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_703_fu_14642_p4.read()) + sc_biguint<18>(add_ln703_707_fu_14748_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_709_fu_26288_p2() {
    add_ln703_709_fu_26288_p2 = (!add_ln703_706_reg_36081.read().is_01() || !add_ln703_708_reg_36086.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_706_reg_36081.read()) + sc_biguint<18>(add_ln703_708_reg_36086.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_70_fu_25439_p2() {
    add_ln703_70_fu_25439_p2 = (!add_ln703_67_reg_35176.read().is_01() || !add_ln703_69_reg_35181.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_67_reg_35176.read()) + sc_biguint<18>(add_ln703_69_reg_35181.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_710_fu_26292_p2() {
    add_ln703_710_fu_26292_p2 = (!add_ln703_705_reg_36076.read().is_01() || !add_ln703_709_fu_26288_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_705_reg_36076.read()) + sc_biguint<18>(add_ln703_709_fu_26288_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_711_fu_14760_p2() {
    add_ln703_711_fu_14760_p2 = (!trunc_ln708_708_fu_14691_p4.read().is_01() || !trunc_ln708_707_fu_14682_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_708_fu_14691_p4.read()) + sc_biguint<18>(trunc_ln708_707_fu_14682_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_712_fu_14766_p2() {
    add_ln703_712_fu_14766_p2 = (!sext_ln708_167_fu_14502_p1.read().is_01() || !trunc_ln708_710_fu_14709_p4.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_167_fu_14502_p1.read()) + sc_biguint<18>(trunc_ln708_710_fu_14709_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_713_fu_14772_p2() {
    add_ln703_713_fu_14772_p2 = (!trunc_ln708_709_fu_14700_p4.read().is_01() || !add_ln703_712_fu_14766_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_709_fu_14700_p4.read()) + sc_biguint<18>(add_ln703_712_fu_14766_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_714_fu_14778_p2() {
    add_ln703_714_fu_14778_p2 = (!add_ln703_711_fu_14760_p2.read().is_01() || !add_ln703_713_fu_14772_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_711_fu_14760_p2.read()) + sc_biguint<18>(add_ln703_713_fu_14772_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_715_fu_14784_p2() {
    add_ln703_715_fu_14784_p2 = (!sext_ln708_170_fu_14620_p1.read().is_01() || !sext_ln708_169_fu_14588_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_170_fu_14620_p1.read()) + sc_bigint<18>(sext_ln708_169_fu_14588_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_716_fu_26297_p2() {
    add_ln703_716_fu_26297_p2 = (!sext_ln708_168_fu_26285_p1.read().is_01() || !add_ln703_715_reg_36096.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_168_fu_26285_p1.read()) + sc_biguint<18>(add_ln703_715_reg_36096.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_717_fu_14790_p2() {
    add_ln703_717_fu_14790_p2 = (!sext_ln1118_402_fu_14575_p1.read().is_01() || !ap_const_lv15_91.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_402_fu_14575_p1.read()) + sc_biguint<15>(ap_const_lv15_91));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_718_fu_14800_p2() {
    add_ln703_718_fu_14800_p2 = (!sext_ln1118_404_fu_14660_p1.read().is_01() || !sext_ln703_144_fu_14796_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_404_fu_14660_p1.read()) + sc_bigint<17>(sext_ln703_144_fu_14796_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_719_fu_26305_p2() {
    add_ln703_719_fu_26305_p2 = (!add_ln703_716_fu_26297_p2.read().is_01() || !sext_ln703_145_fu_26302_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_716_fu_26297_p2.read()) + sc_bigint<18>(sext_ln703_145_fu_26302_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_71_fu_25443_p2() {
    add_ln703_71_fu_25443_p2 = (!add_ln703_66_reg_35171.read().is_01() || !add_ln703_70_fu_25439_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_66_reg_35171.read()) + sc_biguint<18>(add_ln703_70_fu_25439_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_720_fu_26311_p2() {
    add_ln703_720_fu_26311_p2 = (!add_ln703_714_reg_36091.read().is_01() || !add_ln703_719_fu_26305_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_714_reg_36091.read()) + sc_biguint<18>(add_ln703_719_fu_26305_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_722_fu_15039_p2() {
    add_ln703_722_fu_15039_p2 = (!trunc_ln708_714_fu_14860_p4.read().is_01() || !trunc_ln708_712_fu_14819_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_714_fu_14860_p4.read()) + sc_biguint<18>(trunc_ln708_712_fu_14819_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_723_fu_15045_p2() {
    add_ln703_723_fu_15045_p2 = (!trunc_ln708_717_fu_14887_p4.read().is_01() || !trunc_ln708_716_fu_14878_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_717_fu_14887_p4.read()) + sc_biguint<18>(trunc_ln708_716_fu_14878_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_724_fu_15051_p2() {
    add_ln703_724_fu_15051_p2 = (!trunc_ln708_715_fu_14869_p4.read().is_01() || !add_ln703_723_fu_15045_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_715_fu_14869_p4.read()) + sc_biguint<18>(add_ln703_723_fu_15045_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_725_fu_15057_p2() {
    add_ln703_725_fu_15057_p2 = (!add_ln703_722_fu_15039_p2.read().is_01() || !add_ln703_724_fu_15051_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_722_fu_15039_p2.read()) + sc_biguint<18>(add_ln703_724_fu_15051_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_726_fu_15063_p2() {
    add_ln703_726_fu_15063_p2 = (!trunc_ln708_719_fu_14905_p4.read().is_01() || !trunc_ln708_718_fu_14896_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_719_fu_14905_p4.read()) + sc_biguint<18>(trunc_ln708_718_fu_14896_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_727_fu_15069_p2() {
    add_ln703_727_fu_15069_p2 = (!trunc_ln708_296_fu_7314_p4.read().is_01() || !trunc_ln708_724_fu_14962_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_296_fu_7314_p4.read()) + sc_biguint<18>(trunc_ln708_724_fu_14962_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_728_fu_15075_p2() {
    add_ln703_728_fu_15075_p2 = (!trunc_ln708_722_fu_14940_p4.read().is_01() || !add_ln703_727_fu_15069_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_722_fu_14940_p4.read()) + sc_biguint<18>(add_ln703_727_fu_15069_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_729_fu_26322_p2() {
    add_ln703_729_fu_26322_p2 = (!add_ln703_726_reg_36111.read().is_01() || !add_ln703_728_reg_36116.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_726_reg_36111.read()) + sc_biguint<18>(add_ln703_728_reg_36116.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_72_fu_2765_p2() {
    add_ln703_72_fu_2765_p2 = (!sext_ln708_14_fu_2496_p1.read().is_01() || !sext_ln708_13_fu_2339_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_14_fu_2496_p1.read()) + sc_bigint<18>(sext_ln708_13_fu_2339_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_730_fu_26326_p2() {
    add_ln703_730_fu_26326_p2 = (!add_ln703_725_reg_36106.read().is_01() || !add_ln703_729_fu_26322_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_725_reg_36106.read()) + sc_biguint<18>(add_ln703_729_fu_26322_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_731_fu_15081_p2() {
    add_ln703_731_fu_15081_p2 = (!sext_ln708_171_fu_14815_p1.read().is_01() || !trunc_ln708_729_fu_15030_p4.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_171_fu_14815_p1.read()) + sc_biguint<18>(trunc_ln708_729_fu_15030_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_732_fu_15087_p2() {
    add_ln703_732_fu_15087_p2 = (!sext_ln708_174_fu_14958_p1.read().is_01() || !sext_ln708_173_fu_14936_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_174_fu_14958_p1.read()) + sc_bigint<18>(sext_ln708_173_fu_14936_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_733_fu_15093_p2() {
    add_ln703_733_fu_15093_p2 = (!sext_ln708_172_fu_14923_p1.read().is_01() || !add_ln703_732_fu_15087_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_172_fu_14923_p1.read()) + sc_biguint<18>(add_ln703_732_fu_15087_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_734_fu_15099_p2() {
    add_ln703_734_fu_15099_p2 = (!add_ln703_731_fu_15081_p2.read().is_01() || !add_ln703_733_fu_15093_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_731_fu_15081_p2.read()) + sc_biguint<18>(add_ln703_733_fu_15093_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_735_fu_15105_p2() {
    add_ln703_735_fu_15105_p2 = (!sext_ln1118_408_fu_14993_p1.read().is_01() || !sext_ln1118_410_fu_15026_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_408_fu_14993_p1.read()) + sc_bigint<16>(sext_ln1118_410_fu_15026_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_736_fu_15115_p2() {
    add_ln703_736_fu_15115_p2 = (!sext_ln1118_407_fu_14980_p1.read().is_01() || !sext_ln703_146_fu_15111_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_407_fu_14980_p1.read()) + sc_bigint<17>(sext_ln703_146_fu_15111_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_737_fu_15121_p2() {
    add_ln703_737_fu_15121_p2 = (!sext_ln1118_406_fu_14856_p1.read().is_01() || !ap_const_lv12_C8.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_406_fu_14856_p1.read()) + sc_biguint<12>(ap_const_lv12_C8));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_738_fu_15131_p2() {
    add_ln703_738_fu_15131_p2 = (!sext_ln1118_409_fu_15013_p1.read().is_01() || !sext_ln703_147_fu_15127_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_409_fu_15013_p1.read()) + sc_bigint<13>(sext_ln703_147_fu_15127_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_739_fu_15141_p2() {
    add_ln703_739_fu_15141_p2 = (!add_ln703_736_fu_15115_p2.read().is_01() || !sext_ln703_148_fu_15137_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(add_ln703_736_fu_15115_p2.read()) + sc_bigint<17>(sext_ln703_148_fu_15137_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_73_fu_2771_p2() {
    add_ln703_73_fu_2771_p2 = (!sext_ln708_fu_2228_p1.read().is_01() || !sext_ln708_16_fu_2719_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_fu_2228_p1.read()) + sc_bigint<18>(sext_ln708_16_fu_2719_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_740_fu_26334_p2() {
    add_ln703_740_fu_26334_p2 = (!add_ln703_734_reg_36121.read().is_01() || !sext_ln703_149_fu_26331_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_734_reg_36121.read()) + sc_bigint<18>(sext_ln703_149_fu_26331_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_742_fu_15359_p2() {
    add_ln703_742_fu_15359_p2 = (!trunc_ln708_732_fu_15169_p4.read().is_01() || !trunc_ln708_731_fu_15160_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_732_fu_15169_p4.read()) + sc_biguint<18>(trunc_ln708_731_fu_15160_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_743_fu_15365_p2() {
    add_ln703_743_fu_15365_p2 = (!trunc_ln708_737_fu_15222_p4.read().is_01() || !trunc_ln708_735_fu_15200_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_737_fu_15222_p4.read()) + sc_biguint<18>(trunc_ln708_735_fu_15200_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_744_fu_15371_p2() {
    add_ln703_744_fu_15371_p2 = (!trunc_ln708_734_fu_15191_p4.read().is_01() || !add_ln703_743_fu_15365_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_734_fu_15191_p4.read()) + sc_biguint<18>(add_ln703_743_fu_15365_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_745_fu_15377_p2() {
    add_ln703_745_fu_15377_p2 = (!add_ln703_742_fu_15359_p2.read().is_01() || !add_ln703_744_fu_15371_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_742_fu_15359_p2.read()) + sc_biguint<18>(add_ln703_744_fu_15371_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_746_fu_15383_p2() {
    add_ln703_746_fu_15383_p2 = (!trunc_ln708_741_fu_15262_p4.read().is_01() || !trunc_ln708_740_fu_15253_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_741_fu_15262_p4.read()) + sc_biguint<18>(trunc_ln708_740_fu_15253_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_747_fu_15389_p2() {
    add_ln703_747_fu_15389_p2 = (!trunc_ln708_745_fu_15302_p4.read().is_01() || !trunc_ln708_744_fu_15293_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_745_fu_15302_p4.read()) + sc_biguint<18>(trunc_ln708_744_fu_15293_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_748_fu_15395_p2() {
    add_ln703_748_fu_15395_p2 = (!trunc_ln708_742_fu_15271_p4.read().is_01() || !add_ln703_747_fu_15389_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_742_fu_15271_p4.read()) + sc_biguint<18>(add_ln703_747_fu_15389_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_749_fu_26348_p2() {
    add_ln703_749_fu_26348_p2 = (!add_ln703_746_reg_36141.read().is_01() || !add_ln703_748_reg_36146.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_746_reg_36141.read()) + sc_biguint<18>(add_ln703_748_reg_36146.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_74_fu_2777_p2() {
    add_ln703_74_fu_2777_p2 = (!sext_ln708_15_fu_2690_p1.read().is_01() || !add_ln703_73_fu_2771_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_15_fu_2690_p1.read()) + sc_biguint<18>(add_ln703_73_fu_2771_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_750_fu_26352_p2() {
    add_ln703_750_fu_26352_p2 = (!add_ln703_745_reg_36136.read().is_01() || !add_ln703_749_fu_26348_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_745_reg_36136.read()) + sc_biguint<18>(add_ln703_749_fu_26348_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_751_fu_15401_p2() {
    add_ln703_751_fu_15401_p2 = (!sext_ln708_175_fu_15156_p1.read().is_01() || !trunc_ln708_749_fu_15350_p4.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_175_fu_15156_p1.read()) + sc_biguint<18>(trunc_ln708_749_fu_15350_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_752_fu_15407_p2() {
    add_ln703_752_fu_15407_p2 = (!sext_ln708_176_fu_15218_p1.read().is_01() || !sext_ln708_179_fu_15320_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_176_fu_15218_p1.read()) + sc_bigint<18>(sext_ln708_179_fu_15320_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_753_fu_15413_p2() {
    add_ln703_753_fu_15413_p2 = (!sext_ln708_178_fu_15289_p1.read().is_01() || !add_ln703_752_fu_15407_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_178_fu_15289_p1.read()) + sc_biguint<18>(add_ln703_752_fu_15407_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_754_fu_15419_p2() {
    add_ln703_754_fu_15419_p2 = (!add_ln703_751_fu_15401_p2.read().is_01() || !add_ln703_753_fu_15413_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_751_fu_15401_p2.read()) + sc_biguint<18>(add_ln703_753_fu_15413_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_755_fu_15425_p2() {
    add_ln703_755_fu_15425_p2 = (!sext_ln1118_413_fu_15333_p1.read().is_01() || !sext_ln1118_412_fu_15249_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_413_fu_15333_p1.read()) + sc_bigint<17>(sext_ln1118_412_fu_15249_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_756_fu_26360_p2() {
    add_ln703_756_fu_26360_p2 = (!sext_ln708_177_fu_26345_p1.read().is_01() || !sext_ln703_150_fu_26357_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_177_fu_26345_p1.read()) + sc_bigint<18>(sext_ln703_150_fu_26357_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_757_fu_15431_p2() {
    add_ln703_757_fu_15431_p2 = (!sext_ln1118_411_fu_15187_p1.read().is_01() || !ap_const_lv16_1F.is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_411_fu_15187_p1.read()) + sc_biguint<16>(ap_const_lv16_1F));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_758_fu_15441_p2() {
    add_ln703_758_fu_15441_p2 = (!sext_ln1118_414_fu_15346_p1.read().is_01() || !sext_ln703_151_fu_15437_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_414_fu_15346_p1.read()) + sc_bigint<17>(sext_ln703_151_fu_15437_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_759_fu_26369_p2() {
    add_ln703_759_fu_26369_p2 = (!add_ln703_756_fu_26360_p2.read().is_01() || !sext_ln703_152_fu_26366_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_756_fu_26360_p2.read()) + sc_bigint<18>(sext_ln703_152_fu_26366_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_75_fu_2783_p2() {
    add_ln703_75_fu_2783_p2 = (!add_ln703_72_fu_2765_p2.read().is_01() || !add_ln703_74_fu_2777_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_72_fu_2765_p2.read()) + sc_biguint<18>(add_ln703_74_fu_2777_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_760_fu_26375_p2() {
    add_ln703_760_fu_26375_p2 = (!add_ln703_754_reg_36151.read().is_01() || !add_ln703_759_fu_26369_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_754_reg_36151.read()) + sc_biguint<18>(add_ln703_759_fu_26369_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_762_fu_15712_p2() {
    add_ln703_762_fu_15712_p2 = (!trunc_ln708_752_fu_15503_p4.read().is_01() || !trunc_ln708_750_fu_15447_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_752_fu_15503_p4.read()) + sc_biguint<18>(trunc_ln708_750_fu_15447_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_763_fu_15718_p2() {
    add_ln703_763_fu_15718_p2 = (!trunc_ln708_757_fu_15576_p4.read().is_01() || !trunc_ln708_755_fu_15553_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_757_fu_15576_p4.read()) + sc_biguint<18>(trunc_ln708_755_fu_15553_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_764_fu_15724_p2() {
    add_ln703_764_fu_15724_p2 = (!trunc_ln708_753_fu_15513_p4.read().is_01() || !add_ln703_763_fu_15718_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_753_fu_15513_p4.read()) + sc_biguint<18>(add_ln703_763_fu_15718_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_765_fu_15730_p2() {
    add_ln703_765_fu_15730_p2 = (!add_ln703_762_fu_15712_p2.read().is_01() || !add_ln703_764_fu_15724_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_762_fu_15712_p2.read()) + sc_biguint<18>(add_ln703_764_fu_15724_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_766_fu_15736_p2() {
    add_ln703_766_fu_15736_p2 = (!trunc_ln708_760_fu_15607_p4.read().is_01() || !trunc_ln708_758_fu_15585_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_760_fu_15607_p4.read()) + sc_biguint<18>(trunc_ln708_758_fu_15585_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_767_fu_15742_p2() {
    add_ln703_767_fu_15742_p2 = (!trunc_ln708_764_fu_15647_p4.read().is_01() || !trunc_ln708_763_fu_15638_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_764_fu_15647_p4.read()) + sc_biguint<18>(trunc_ln708_763_fu_15638_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_768_fu_15748_p2() {
    add_ln703_768_fu_15748_p2 = (!trunc_ln708_761_fu_15616_p4.read().is_01() || !add_ln703_767_fu_15742_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_761_fu_15616_p4.read()) + sc_biguint<18>(add_ln703_767_fu_15742_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_769_fu_26389_p2() {
    add_ln703_769_fu_26389_p2 = (!add_ln703_766_reg_36176.read().is_01() || !add_ln703_768_reg_36181.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_766_reg_36176.read()) + sc_biguint<18>(add_ln703_768_reg_36181.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_76_fu_2789_p2() {
    add_ln703_76_fu_2789_p2 = (!sext_ln1118_121_fu_2562_p1.read().is_01() || !sext_ln1118_95_fu_2409_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_121_fu_2562_p1.read()) + sc_bigint<17>(sext_ln1118_95_fu_2409_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_770_fu_26393_p2() {
    add_ln703_770_fu_26393_p2 = (!add_ln703_765_reg_36171.read().is_01() || !add_ln703_769_fu_26389_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_765_reg_36171.read()) + sc_biguint<18>(add_ln703_769_fu_26389_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_771_fu_15754_p2() {
    add_ln703_771_fu_15754_p2 = (!trunc_ln708_767_fu_15674_p4.read().is_01() || !trunc_ln708_766_fu_15665_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_767_fu_15674_p4.read()) + sc_biguint<18>(trunc_ln708_766_fu_15665_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_772_fu_15760_p2() {
    add_ln703_772_fu_15760_p2 = (!sext_ln708_182_fu_15634_p1.read().is_01() || !sext_ln708_180_fu_15465_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_182_fu_15634_p1.read()) + sc_bigint<18>(sext_ln708_180_fu_15465_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_773_fu_15766_p2() {
    add_ln703_773_fu_15766_p2 = (!trunc_ln708_769_fu_15703_p4.read().is_01() || !add_ln703_772_fu_15760_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_769_fu_15703_p4.read()) + sc_biguint<18>(add_ln703_772_fu_15760_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_774_fu_15772_p2() {
    add_ln703_774_fu_15772_p2 = (!add_ln703_771_fu_15754_p2.read().is_01() || !add_ln703_773_fu_15766_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_771_fu_15754_p2.read()) + sc_biguint<18>(add_ln703_773_fu_15766_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_775_fu_15778_p2() {
    add_ln703_775_fu_15778_p2 = (!sext_ln708_181_fu_15531_p1.read().is_01() || !sext_ln708_184_fu_15699_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_181_fu_15531_p1.read()) + sc_bigint<18>(sext_ln708_184_fu_15699_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_776_fu_26398_p2() {
    add_ln703_776_fu_26398_p2 = (!sext_ln708_183_fu_26386_p1.read().is_01() || !add_ln703_775_reg_36191.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_183_fu_26386_p1.read()) + sc_biguint<18>(add_ln703_775_reg_36191.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_777_fu_15784_p2() {
    add_ln703_777_fu_15784_p2 = (!sext_ln1118_420_fu_15603_p1.read().is_01() || !ap_const_lv15_7F1A.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_420_fu_15603_p1.read()) + sc_bigint<15>(ap_const_lv15_7F1A));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_778_fu_15794_p2() {
    add_ln703_778_fu_15794_p2 = (!sext_ln1118_419_fu_15572_p1.read().is_01() || !sext_ln703_153_fu_15790_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_419_fu_15572_p1.read()) + sc_bigint<16>(sext_ln703_153_fu_15790_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_779_fu_26406_p2() {
    add_ln703_779_fu_26406_p2 = (!add_ln703_776_fu_26398_p2.read().is_01() || !sext_ln703_154_fu_26403_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_776_fu_26398_p2.read()) + sc_bigint<18>(sext_ln703_154_fu_26403_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_77_fu_25451_p2() {
    add_ln703_77_fu_25451_p2 = (!sext_ln708_12_fu_25436_p1.read().is_01() || !sext_ln703_40_fu_25448_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_12_fu_25436_p1.read()) + sc_bigint<18>(sext_ln703_40_fu_25448_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_780_fu_26412_p2() {
    add_ln703_780_fu_26412_p2 = (!add_ln703_774_reg_36186.read().is_01() || !add_ln703_779_fu_26406_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_774_reg_36186.read()) + sc_biguint<18>(add_ln703_779_fu_26406_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_782_fu_16042_p2() {
    add_ln703_782_fu_16042_p2 = (!trunc_ln708_774_fu_15848_p4.read().is_01() || !trunc_ln708_771_fu_15813_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_774_fu_15848_p4.read()) + sc_biguint<18>(trunc_ln708_771_fu_15813_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_783_fu_16048_p2() {
    add_ln703_783_fu_16048_p2 = (!trunc_ln708_780_fu_15920_p4.read().is_01() || !trunc_ln708_778_fu_15892_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_780_fu_15920_p4.read()) + sc_biguint<18>(trunc_ln708_778_fu_15892_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_784_fu_16054_p2() {
    add_ln703_784_fu_16054_p2 = (!trunc_ln708_777_fu_15883_p4.read().is_01() || !add_ln703_783_fu_16048_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_777_fu_15883_p4.read()) + sc_biguint<18>(add_ln703_783_fu_16048_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_785_fu_16060_p2() {
    add_ln703_785_fu_16060_p2 = (!add_ln703_782_fu_16042_p2.read().is_01() || !add_ln703_784_fu_16054_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_782_fu_16042_p2.read()) + sc_biguint<18>(add_ln703_784_fu_16054_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_786_fu_16066_p2() {
    add_ln703_786_fu_16066_p2 = (!trunc_ln708_782_fu_15939_p4.read().is_01() || !trunc_ln708_781_fu_15930_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_782_fu_15939_p4.read()) + sc_biguint<18>(trunc_ln708_781_fu_15930_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_787_fu_16072_p2() {
    add_ln703_787_fu_16072_p2 = (!trunc_ln708_786_fu_15979_p4.read().is_01() || !trunc_ln708_784_fu_15957_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_786_fu_15979_p4.read()) + sc_biguint<18>(trunc_ln708_784_fu_15957_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_788_fu_16078_p2() {
    add_ln703_788_fu_16078_p2 = (!trunc_ln708_783_fu_15948_p4.read().is_01() || !add_ln703_787_fu_16072_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_783_fu_15948_p4.read()) + sc_biguint<18>(add_ln703_787_fu_16072_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_789_fu_26423_p2() {
    add_ln703_789_fu_26423_p2 = (!add_ln703_786_reg_36206.read().is_01() || !add_ln703_788_reg_36211.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_786_reg_36206.read()) + sc_biguint<18>(add_ln703_788_reg_36211.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_78_fu_2795_p2() {
    add_ln703_78_fu_2795_p2 = (!sext_ln1118_88_fu_2372_p1.read().is_01() || !ap_const_lv15_64.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_88_fu_2372_p1.read()) + sc_biguint<15>(ap_const_lv15_64));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_790_fu_26427_p2() {
    add_ln703_790_fu_26427_p2 = (!add_ln703_785_reg_36201.read().is_01() || !add_ln703_789_fu_26423_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_785_reg_36201.read()) + sc_biguint<18>(add_ln703_789_fu_26423_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_791_fu_16084_p2() {
    add_ln703_791_fu_16084_p2 = (!sext_ln708_185_fu_15809_p1.read().is_01() || !trunc_ln708_789_fu_16033_p4.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_185_fu_15809_p1.read()) + sc_biguint<18>(trunc_ln708_789_fu_16033_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_792_fu_16090_p2() {
    add_ln703_792_fu_16090_p2 = (!sext_ln708_188_fu_16029_p1.read().is_01() || !sext_ln708_187_fu_15910_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_188_fu_16029_p1.read()) + sc_bigint<18>(sext_ln708_187_fu_15910_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_793_fu_16096_p2() {
    add_ln703_793_fu_16096_p2 = (!sext_ln708_186_fu_15831_p1.read().is_01() || !add_ln703_792_fu_16090_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_186_fu_15831_p1.read()) + sc_biguint<18>(add_ln703_792_fu_16090_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_794_fu_16102_p2() {
    add_ln703_794_fu_16102_p2 = (!add_ln703_791_fu_16084_p2.read().is_01() || !add_ln703_793_fu_16096_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_791_fu_16084_p2.read()) + sc_biguint<18>(add_ln703_793_fu_16096_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_795_fu_16108_p2() {
    add_ln703_795_fu_16108_p2 = (!sext_ln1118_421_fu_15844_p1.read().is_01() || !sext_ln1118_424_fu_15975_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_421_fu_15844_p1.read()) + sc_bigint<16>(sext_ln1118_424_fu_15975_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_796_fu_16118_p2() {
    add_ln703_796_fu_16118_p2 = (!sext_ln1118_422_fu_15866_p1.read().is_01() || !sext_ln703_155_fu_16114_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_422_fu_15866_p1.read()) + sc_bigint<17>(sext_ln703_155_fu_16114_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_797_fu_16124_p2() {
    add_ln703_797_fu_16124_p2 = (!sext_ln1118_426_fu_16016_p1.read().is_01() || !ap_const_lv14_A.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_426_fu_16016_p1.read()) + sc_biguint<14>(ap_const_lv14_A));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_798_fu_16134_p2() {
    add_ln703_798_fu_16134_p2 = (!sext_ln1118_423_fu_15879_p1.read().is_01() || !sext_ln703_156_fu_16130_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_423_fu_15879_p1.read()) + sc_bigint<15>(sext_ln703_156_fu_16130_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_799_fu_16144_p2() {
    add_ln703_799_fu_16144_p2 = (!add_ln703_796_fu_16118_p2.read().is_01() || !sext_ln703_157_fu_16140_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(add_ln703_796_fu_16118_p2.read()) + sc_bigint<17>(sext_ln703_157_fu_16140_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_79_fu_2805_p2() {
    add_ln703_79_fu_2805_p2 = (!sext_ln1118_115_fu_2529_p1.read().is_01() || !sext_ln703_41_fu_2801_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_115_fu_2529_p1.read()) + sc_bigint<16>(sext_ln703_41_fu_2801_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_800_fu_26435_p2() {
    add_ln703_800_fu_26435_p2 = (!add_ln703_794_reg_36216.read().is_01() || !sext_ln703_158_fu_26432_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_794_reg_36216.read()) + sc_bigint<18>(sext_ln703_158_fu_26432_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_802_fu_16371_p2() {
    add_ln703_802_fu_16371_p2 = (!trunc_ln708_792_fu_16172_p4.read().is_01() || !trunc_ln708_790_fu_16150_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_792_fu_16172_p4.read()) + sc_biguint<18>(trunc_ln708_790_fu_16150_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_803_fu_16377_p2() {
    add_ln703_803_fu_16377_p2 = (!trunc_ln708_796_fu_16212_p4.read().is_01() || !trunc_ln708_794_fu_16190_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_796_fu_16212_p4.read()) + sc_biguint<18>(trunc_ln708_794_fu_16190_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_804_fu_16383_p2() {
    add_ln703_804_fu_16383_p2 = (!trunc_ln708_793_fu_16181_p4.read().is_01() || !add_ln703_803_fu_16377_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_793_fu_16181_p4.read()) + sc_biguint<18>(add_ln703_803_fu_16377_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_805_fu_16389_p2() {
    add_ln703_805_fu_16389_p2 = (!add_ln703_802_fu_16371_p2.read().is_01() || !add_ln703_804_fu_16383_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_802_fu_16371_p2.read()) + sc_biguint<18>(add_ln703_804_fu_16383_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_806_fu_16395_p2() {
    add_ln703_806_fu_16395_p2 = (!trunc_ln708_800_fu_16269_p4.read().is_01() || !trunc_ln708_798_fu_16247_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_800_fu_16269_p4.read()) + sc_biguint<18>(trunc_ln708_798_fu_16247_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_807_fu_16401_p2() {
    add_ln703_807_fu_16401_p2 = (!trunc_ln708_803_fu_16296_p4.read().is_01() || !trunc_ln708_802_fu_16287_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_803_fu_16296_p4.read()) + sc_biguint<18>(trunc_ln708_802_fu_16287_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_808_fu_16407_p2() {
    add_ln703_808_fu_16407_p2 = (!trunc_ln708_801_fu_16278_p4.read().is_01() || !add_ln703_807_fu_16401_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_801_fu_16278_p4.read()) + sc_biguint<18>(add_ln703_807_fu_16401_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_809_fu_26446_p2() {
    add_ln703_809_fu_26446_p2 = (!add_ln703_806_reg_36231.read().is_01() || !add_ln703_808_reg_36236.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_806_reg_36231.read()) + sc_biguint<18>(add_ln703_808_reg_36236.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_80_fu_25460_p2() {
    add_ln703_80_fu_25460_p2 = (!add_ln703_77_fu_25451_p2.read().is_01() || !sext_ln703_42_fu_25457_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_77_fu_25451_p2.read()) + sc_bigint<18>(sext_ln703_42_fu_25457_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_810_fu_26450_p2() {
    add_ln703_810_fu_26450_p2 = (!add_ln703_805_reg_36226.read().is_01() || !add_ln703_809_fu_26446_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_805_reg_36226.read()) + sc_biguint<18>(add_ln703_809_fu_26446_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_811_fu_16413_p2() {
    add_ln703_811_fu_16413_p2 = (!trunc_ln708_806_fu_16327_p4.read().is_01() || !trunc_ln708_805_fu_16318_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_806_fu_16327_p4.read()) + sc_biguint<18>(trunc_ln708_805_fu_16318_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_812_fu_16419_p2() {
    add_ln703_812_fu_16419_p2 = (!sext_ln708_191_fu_16314_p1.read().is_01() || !sext_ln708_190_fu_16265_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_191_fu_16314_p1.read()) + sc_bigint<18>(sext_ln708_190_fu_16265_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_813_fu_16425_p2() {
    add_ln703_813_fu_16425_p2 = (!trunc_ln708_809_fu_16362_p4.read().is_01() || !add_ln703_812_fu_16419_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_809_fu_16362_p4.read()) + sc_biguint<18>(add_ln703_812_fu_16419_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_814_fu_16431_p2() {
    add_ln703_814_fu_16431_p2 = (!add_ln703_811_fu_16413_p2.read().is_01() || !add_ln703_813_fu_16425_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_811_fu_16413_p2.read()) + sc_biguint<18>(add_ln703_813_fu_16425_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_815_fu_16437_p2() {
    add_ln703_815_fu_16437_p2 = (!sext_ln708_189_fu_16168_p1.read().is_01() || !sext_ln708_193_fu_16358_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_189_fu_16168_p1.read()) + sc_bigint<18>(sext_ln708_193_fu_16358_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_816_fu_16443_p2() {
    add_ln703_816_fu_16443_p2 = (!sext_ln708_192_fu_16345_p1.read().is_01() || !add_ln703_815_fu_16437_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_192_fu_16345_p1.read()) + sc_biguint<18>(add_ln703_815_fu_16437_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_817_fu_16449_p2() {
    add_ln703_817_fu_16449_p2 = (!sext_ln1118_428_fu_16243_p1.read().is_01() || !ap_const_lv14_3F2B.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_428_fu_16243_p1.read()) + sc_bigint<14>(ap_const_lv14_3F2B));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_818_fu_16459_p2() {
    add_ln703_818_fu_16459_p2 = (!sext_ln1118_427_fu_16208_p1.read().is_01() || !sext_ln703_159_fu_16455_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_427_fu_16208_p1.read()) + sc_bigint<17>(sext_ln703_159_fu_16455_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_819_fu_16469_p2() {
    add_ln703_819_fu_16469_p2 = (!add_ln703_816_fu_16443_p2.read().is_01() || !sext_ln703_160_fu_16465_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_816_fu_16443_p2.read()) + sc_bigint<18>(sext_ln703_160_fu_16465_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_81_fu_25466_p2() {
    add_ln703_81_fu_25466_p2 = (!add_ln703_75_reg_35186.read().is_01() || !add_ln703_80_fu_25460_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_75_reg_35186.read()) + sc_biguint<18>(add_ln703_80_fu_25460_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_820_fu_26455_p2() {
    add_ln703_820_fu_26455_p2 = (!add_ln703_814_reg_36241.read().is_01() || !add_ln703_819_reg_36246.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_814_reg_36241.read()) + sc_biguint<18>(add_ln703_819_reg_36246.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_822_fu_16785_p2() {
    add_ln703_822_fu_16785_p2 = (!trunc_ln708_812_fu_16528_p4.read().is_01() || !trunc_ln708_810_fu_16505_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_812_fu_16528_p4.read()) + sc_biguint<18>(trunc_ln708_810_fu_16505_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_823_fu_16791_p2() {
    add_ln703_823_fu_16791_p2 = (!trunc_ln708_816_fu_16592_p4.read().is_01() || !trunc_ln708_815_fu_16559_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_816_fu_16592_p4.read()) + sc_biguint<18>(trunc_ln708_815_fu_16559_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_824_fu_16797_p2() {
    add_ln703_824_fu_16797_p2 = (!trunc_ln708_814_fu_16550_p4.read().is_01() || !add_ln703_823_fu_16791_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_814_fu_16550_p4.read()) + sc_biguint<18>(add_ln703_823_fu_16791_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_825_fu_16803_p2() {
    add_ln703_825_fu_16803_p2 = (!add_ln703_822_fu_16785_p2.read().is_01() || !add_ln703_824_fu_16797_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_822_fu_16785_p2.read()) + sc_biguint<18>(add_ln703_824_fu_16797_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_826_fu_16809_p2() {
    add_ln703_826_fu_16809_p2 = (!trunc_ln708_819_fu_16624_p4.read().is_01() || !trunc_ln708_817_fu_16602_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_819_fu_16624_p4.read()) + sc_biguint<18>(trunc_ln708_817_fu_16602_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_827_fu_16815_p2() {
    add_ln703_827_fu_16815_p2 = (!trunc_ln708_822_fu_16685_p4.read().is_01() || !trunc_ln708_821_fu_16642_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_822_fu_16685_p4.read()) + sc_biguint<18>(trunc_ln708_821_fu_16642_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_828_fu_16821_p2() {
    add_ln703_828_fu_16821_p2 = (!trunc_ln708_820_fu_16633_p4.read().is_01() || !add_ln703_827_fu_16815_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_820_fu_16633_p4.read()) + sc_biguint<18>(add_ln703_827_fu_16815_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_829_fu_26465_p2() {
    add_ln703_829_fu_26465_p2 = (!add_ln703_826_reg_36256.read().is_01() || !add_ln703_828_reg_36261.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_826_reg_36256.read()) + sc_biguint<18>(add_ln703_828_reg_36261.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_830_fu_26469_p2() {
    add_ln703_830_fu_26469_p2 = (!add_ln703_825_reg_36251.read().is_01() || !add_ln703_829_fu_26465_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_825_reg_36251.read()) + sc_biguint<18>(add_ln703_829_fu_26465_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_831_fu_16827_p2() {
    add_ln703_831_fu_16827_p2 = (!trunc_ln708_828_fu_16763_p4.read().is_01() || !trunc_ln708_827_fu_16754_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_828_fu_16763_p4.read()) + sc_biguint<18>(trunc_ln708_827_fu_16754_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_832_fu_16833_p2() {
    add_ln703_832_fu_16833_p2 = (!sext_ln708_196_fu_16704_p1.read().is_01() || !sext_ln708_195_fu_16546_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_196_fu_16704_p1.read()) + sc_bigint<18>(sext_ln708_195_fu_16546_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_833_fu_16839_p2() {
    add_ln703_833_fu_16839_p2 = (!sext_ln708_194_fu_16524_p1.read().is_01() || !add_ln703_832_fu_16833_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_194_fu_16524_p1.read()) + sc_biguint<18>(add_ln703_832_fu_16833_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_834_fu_16845_p2() {
    add_ln703_834_fu_16845_p2 = (!add_ln703_831_fu_16827_p2.read().is_01() || !add_ln703_833_fu_16839_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_831_fu_16827_p2.read()) + sc_biguint<18>(add_ln703_833_fu_16839_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_835_fu_16851_p2() {
    add_ln703_835_fu_16851_p2 = (!sext_ln1118_437_fu_16737_p1.read().is_01() || !sext_ln1118_432_fu_16620_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_437_fu_16737_p1.read()) + sc_bigint<17>(sext_ln1118_432_fu_16620_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_836_fu_16861_p2() {
    add_ln703_836_fu_16861_p2 = (!sext_ln708_197_fu_16781_p1.read().is_01() || !sext_ln703_161_fu_16857_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_197_fu_16781_p1.read()) + sc_bigint<18>(sext_ln703_161_fu_16857_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_837_fu_16867_p2() {
    add_ln703_837_fu_16867_p2 = (!sext_ln1118_436_fu_16724_p1.read().is_01() || !ap_const_lv14_3F71.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_436_fu_16724_p1.read()) + sc_bigint<14>(ap_const_lv14_3F71));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_838_fu_16877_p2() {
    add_ln703_838_fu_16877_p2 = (!sext_ln1118_438_fu_16750_p1.read().is_01() || !sext_ln703_162_fu_16873_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_438_fu_16750_p1.read()) + sc_bigint<17>(sext_ln703_162_fu_16873_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_839_fu_16887_p2() {
    add_ln703_839_fu_16887_p2 = (!add_ln703_836_fu_16861_p2.read().is_01() || !sext_ln703_163_fu_16883_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_836_fu_16861_p2.read()) + sc_bigint<18>(sext_ln703_163_fu_16883_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_83_fu_3044_p2() {
    add_ln703_83_fu_3044_p2 = (!trunc_ln708_82_fu_2820_p4.read().is_01() || !trunc_ln708_81_fu_2811_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_82_fu_2820_p4.read()) + sc_biguint<18>(trunc_ln708_81_fu_2811_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_840_fu_26474_p2() {
    add_ln703_840_fu_26474_p2 = (!add_ln703_834_reg_36266.read().is_01() || !add_ln703_839_reg_36271.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_834_reg_36266.read()) + sc_biguint<18>(add_ln703_839_reg_36271.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_842_fu_17112_p2() {
    add_ln703_842_fu_17112_p2 = (!trunc_ln708_831_fu_16902_p4.read().is_01() || !trunc_ln708_830_fu_16893_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_831_fu_16902_p4.read()) + sc_biguint<18>(trunc_ln708_830_fu_16893_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_843_fu_17118_p2() {
    add_ln703_843_fu_17118_p2 = (!trunc_ln708_834_fu_16929_p4.read().is_01() || !trunc_ln708_833_fu_16920_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_834_fu_16929_p4.read()) + sc_biguint<18>(trunc_ln708_833_fu_16920_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_844_fu_17124_p2() {
    add_ln703_844_fu_17124_p2 = (!trunc_ln708_832_fu_16911_p4.read().is_01() || !add_ln703_843_fu_17118_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_832_fu_16911_p4.read()) + sc_biguint<18>(add_ln703_843_fu_17118_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_845_fu_17130_p2() {
    add_ln703_845_fu_17130_p2 = (!add_ln703_842_fu_17112_p2.read().is_01() || !add_ln703_844_fu_17124_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_842_fu_17112_p2.read()) + sc_biguint<18>(add_ln703_844_fu_17124_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_846_fu_17136_p2() {
    add_ln703_846_fu_17136_p2 = (!trunc_ln708_836_fu_16947_p4.read().is_01() || !trunc_ln708_835_fu_16938_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_836_fu_16947_p4.read()) + sc_biguint<18>(trunc_ln708_835_fu_16938_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_847_fu_17142_p2() {
    add_ln703_847_fu_17142_p2 = (!trunc_ln708_841_fu_17023_p4.read().is_01() || !trunc_ln708_840_fu_17014_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_841_fu_17023_p4.read()) + sc_biguint<18>(trunc_ln708_840_fu_17014_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_848_fu_17148_p2() {
    add_ln703_848_fu_17148_p2 = (!trunc_ln708_839_fu_17005_p4.read().is_01() || !add_ln703_847_fu_17142_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_839_fu_17005_p4.read()) + sc_biguint<18>(add_ln703_847_fu_17142_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_849_fu_26484_p2() {
    add_ln703_849_fu_26484_p2 = (!add_ln703_846_reg_36281.read().is_01() || !add_ln703_848_reg_36286.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_846_reg_36281.read()) + sc_biguint<18>(add_ln703_848_reg_36286.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_84_fu_3050_p2() {
    add_ln703_84_fu_3050_p2 = (!trunc_ln708_87_fu_2873_p4.read().is_01() || !trunc_ln708_86_fu_2864_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_87_fu_2873_p4.read()) + sc_biguint<18>(trunc_ln708_86_fu_2864_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_850_fu_26488_p2() {
    add_ln703_850_fu_26488_p2 = (!add_ln703_845_reg_36276.read().is_01() || !add_ln703_849_fu_26484_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_845_reg_36276.read()) + sc_biguint<18>(add_ln703_849_fu_26484_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_851_fu_17154_p2() {
    add_ln703_851_fu_17154_p2 = (!trunc_ln708_843_fu_17041_p4.read().is_01() || !trunc_ln708_842_fu_17032_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_843_fu_17041_p4.read()) + sc_biguint<18>(trunc_ln708_842_fu_17032_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_852_fu_17160_p2() {
    add_ln703_852_fu_17160_p2 = (!trunc_ln708_847_fu_17081_p4.read().is_01() || !trunc_ln708_846_fu_17072_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_847_fu_17081_p4.read()) + sc_biguint<18>(trunc_ln708_846_fu_17072_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_853_fu_17166_p2() {
    add_ln703_853_fu_17166_p2 = (!trunc_ln708_845_fu_17063_p4.read().is_01() || !add_ln703_852_fu_17160_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_845_fu_17063_p4.read()) + sc_biguint<18>(add_ln703_852_fu_17160_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_854_fu_17172_p2() {
    add_ln703_854_fu_17172_p2 = (!add_ln703_851_fu_17154_p2.read().is_01() || !add_ln703_853_fu_17166_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_851_fu_17154_p2.read()) + sc_biguint<18>(add_ln703_853_fu_17166_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_855_fu_17178_p2() {
    add_ln703_855_fu_17178_p2 = (!sext_ln708_199_fu_17099_p1.read().is_01() || !sext_ln708_198_fu_17059_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_199_fu_17099_p1.read()) + sc_bigint<18>(sext_ln708_198_fu_17059_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_856_fu_17184_p2() {
    add_ln703_856_fu_17184_p2 = (!trunc_ln708_849_fu_17103_p4.read().is_01() || !add_ln703_855_fu_17178_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_849_fu_17103_p4.read()) + sc_biguint<18>(add_ln703_855_fu_17178_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_857_fu_17190_p2() {
    add_ln703_857_fu_17190_p2 = (!sext_ln1118_442_fu_17001_p1.read().is_01() || !ap_const_lv16_5B.is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_442_fu_17001_p1.read()) + sc_biguint<16>(ap_const_lv16_5B));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_858_fu_17200_p2() {
    add_ln703_858_fu_17200_p2 = (!sext_ln1118_439_fu_16965_p1.read().is_01() || !sext_ln703_164_fu_17196_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_439_fu_16965_p1.read()) + sc_bigint<17>(sext_ln703_164_fu_17196_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_859_fu_17210_p2() {
    add_ln703_859_fu_17210_p2 = (!add_ln703_856_fu_17184_p2.read().is_01() || !sext_ln703_165_fu_17206_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_856_fu_17184_p2.read()) + sc_bigint<18>(sext_ln703_165_fu_17206_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_85_fu_3056_p2() {
    add_ln703_85_fu_3056_p2 = (!trunc_ln708_85_fu_2855_p4.read().is_01() || !add_ln703_84_fu_3050_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_85_fu_2855_p4.read()) + sc_biguint<18>(add_ln703_84_fu_3050_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_860_fu_26493_p2() {
    add_ln703_860_fu_26493_p2 = (!add_ln703_854_reg_36291.read().is_01() || !add_ln703_859_reg_36296.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_854_reg_36291.read()) + sc_biguint<18>(add_ln703_859_reg_36296.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_862_fu_17463_p2() {
    add_ln703_862_fu_17463_p2 = (!trunc_ln708_853_fu_17258_p4.read().is_01() || !trunc_ln708_852_fu_17249_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_853_fu_17258_p4.read()) + sc_biguint<18>(trunc_ln708_852_fu_17249_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_863_fu_17469_p2() {
    add_ln703_863_fu_17469_p2 = (!trunc_ln708_856_fu_17285_p4.read().is_01() || !trunc_ln708_855_fu_17276_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_856_fu_17285_p4.read()) + sc_biguint<18>(trunc_ln708_855_fu_17276_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_864_fu_17475_p2() {
    add_ln703_864_fu_17475_p2 = (!trunc_ln708_854_fu_17267_p4.read().is_01() || !add_ln703_863_fu_17469_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_854_fu_17267_p4.read()) + sc_biguint<18>(add_ln703_863_fu_17469_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_865_fu_17481_p2() {
    add_ln703_865_fu_17481_p2 = (!add_ln703_862_fu_17463_p2.read().is_01() || !add_ln703_864_fu_17475_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_862_fu_17463_p2.read()) + sc_biguint<18>(add_ln703_864_fu_17475_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_866_fu_17487_p2() {
    add_ln703_866_fu_17487_p2 = (!trunc_ln708_858_fu_17303_p4.read().is_01() || !trunc_ln708_857_fu_17294_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_858_fu_17303_p4.read()) + sc_biguint<18>(trunc_ln708_857_fu_17294_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_867_fu_17493_p2() {
    add_ln703_867_fu_17493_p2 = (!trunc_ln708_861_fu_17330_p4.read().is_01() || !trunc_ln708_860_fu_17321_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_861_fu_17330_p4.read()) + sc_biguint<18>(trunc_ln708_860_fu_17321_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_868_fu_17499_p2() {
    add_ln703_868_fu_17499_p2 = (!trunc_ln708_859_fu_17312_p4.read().is_01() || !add_ln703_867_fu_17493_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_859_fu_17312_p4.read()) + sc_biguint<18>(add_ln703_867_fu_17493_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_869_fu_26503_p2() {
    add_ln703_869_fu_26503_p2 = (!add_ln703_866_reg_36306.read().is_01() || !add_ln703_868_reg_36311.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_866_reg_36306.read()) + sc_biguint<18>(add_ln703_868_reg_36311.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_86_fu_3062_p2() {
    add_ln703_86_fu_3062_p2 = (!add_ln703_83_fu_3044_p2.read().is_01() || !add_ln703_85_fu_3056_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_83_fu_3044_p2.read()) + sc_biguint<18>(add_ln703_85_fu_3056_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_870_fu_26507_p2() {
    add_ln703_870_fu_26507_p2 = (!add_ln703_865_reg_36301.read().is_01() || !add_ln703_869_fu_26503_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_865_reg_36301.read()) + sc_biguint<18>(add_ln703_869_fu_26503_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_871_fu_17505_p2() {
    add_ln703_871_fu_17505_p2 = (!trunc_ln708_863_fu_17348_p4.read().is_01() || !trunc_ln708_862_fu_17339_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_863_fu_17348_p4.read()) + sc_biguint<18>(trunc_ln708_862_fu_17339_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_872_fu_17511_p2() {
    add_ln703_872_fu_17511_p2 = (!trunc_ln708_866_fu_17375_p4.read().is_01() || !trunc_ln708_865_fu_17366_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_866_fu_17375_p4.read()) + sc_biguint<18>(trunc_ln708_865_fu_17366_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_873_fu_17517_p2() {
    add_ln703_873_fu_17517_p2 = (!trunc_ln708_864_fu_17357_p4.read().is_01() || !add_ln703_872_fu_17511_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_864_fu_17357_p4.read()) + sc_biguint<18>(add_ln703_872_fu_17511_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_874_fu_17523_p2() {
    add_ln703_874_fu_17523_p2 = (!add_ln703_871_fu_17505_p2.read().is_01() || !add_ln703_873_fu_17517_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_871_fu_17505_p2.read()) + sc_biguint<18>(add_ln703_873_fu_17517_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_875_fu_17529_p2() {
    add_ln703_875_fu_17529_p2 = (!sext_ln703_166_fu_17459_p1.read().is_01() || !sext_ln1118_443_fu_17225_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln703_166_fu_17459_p1.read()) + sc_bigint<17>(sext_ln1118_443_fu_17225_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_876_fu_17539_p2() {
    add_ln703_876_fu_17539_p2 = (!trunc_ln708_868_fu_17404_p4.read().is_01() || !sext_ln703_167_fu_17535_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_868_fu_17404_p4.read()) + sc_bigint<18>(sext_ln703_167_fu_17535_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_877_fu_17545_p2() {
    add_ln703_877_fu_17545_p2 = (!sext_ln1118_445_fu_17400_p1.read().is_01() || !ap_const_lv12_EAA.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_445_fu_17400_p1.read()) + sc_bigint<12>(ap_const_lv12_EAA));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_878_fu_17555_p2() {
    add_ln703_878_fu_17555_p2 = (!sext_ln1118_444_fu_17245_p1.read().is_01() || !sext_ln703_168_fu_17551_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_444_fu_17245_p1.read()) + sc_bigint<15>(sext_ln703_168_fu_17551_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_879_fu_17565_p2() {
    add_ln703_879_fu_17565_p2 = (!add_ln703_876_fu_17539_p2.read().is_01() || !sext_ln703_169_fu_17561_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_876_fu_17539_p2.read()) + sc_bigint<18>(sext_ln703_169_fu_17561_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_87_fu_3068_p2() {
    add_ln703_87_fu_3068_p2 = (!trunc_ln708_93_fu_2943_p4.read().is_01() || !trunc_ln708_90_fu_2908_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_93_fu_2943_p4.read()) + sc_biguint<18>(trunc_ln708_90_fu_2908_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_880_fu_26512_p2() {
    add_ln703_880_fu_26512_p2 = (!add_ln703_874_reg_36316.read().is_01() || !add_ln703_879_reg_36321.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_874_reg_36316.read()) + sc_biguint<18>(add_ln703_879_reg_36321.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_882_fu_17816_p2() {
    add_ln703_882_fu_17816_p2 = (!trunc_ln708_873_fu_17613_p4.read().is_01() || !trunc_ln708_872_fu_17604_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_873_fu_17613_p4.read()) + sc_biguint<18>(trunc_ln708_872_fu_17604_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_883_fu_17822_p2() {
    add_ln703_883_fu_17822_p2 = (!trunc_ln708_879_fu_17702_p4.read().is_01() || !trunc_ln708_876_fu_17667_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_879_fu_17702_p4.read()) + sc_biguint<18>(trunc_ln708_876_fu_17667_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_884_fu_17828_p2() {
    add_ln703_884_fu_17828_p2 = (!trunc_ln708_874_fu_17622_p4.read().is_01() || !add_ln703_883_fu_17822_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_874_fu_17622_p4.read()) + sc_biguint<18>(add_ln703_883_fu_17822_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_885_fu_17834_p2() {
    add_ln703_885_fu_17834_p2 = (!add_ln703_882_fu_17816_p2.read().is_01() || !add_ln703_884_fu_17828_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_882_fu_17816_p2.read()) + sc_biguint<18>(add_ln703_884_fu_17828_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_886_fu_17840_p2() {
    add_ln703_886_fu_17840_p2 = (!trunc_ln708_881_fu_17720_p4.read().is_01() || !trunc_ln708_880_fu_17711_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_881_fu_17720_p4.read()) + sc_biguint<18>(trunc_ln708_880_fu_17711_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_887_fu_17846_p2() {
    add_ln703_887_fu_17846_p2 = (!trunc_ln708_884_fu_17747_p4.read().is_01() || !trunc_ln708_883_fu_17738_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_884_fu_17747_p4.read()) + sc_biguint<18>(trunc_ln708_883_fu_17738_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_888_fu_17852_p2() {
    add_ln703_888_fu_17852_p2 = (!trunc_ln708_882_fu_17729_p4.read().is_01() || !add_ln703_887_fu_17846_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_882_fu_17729_p4.read()) + sc_biguint<18>(add_ln703_887_fu_17846_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_889_fu_26522_p2() {
    add_ln703_889_fu_26522_p2 = (!add_ln703_886_reg_36331.read().is_01() || !add_ln703_888_reg_36336.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_886_reg_36331.read()) + sc_biguint<18>(add_ln703_888_reg_36336.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_88_fu_3074_p2() {
    add_ln703_88_fu_3074_p2 = (!trunc_ln708_96_fu_2970_p4.read().is_01() || !trunc_ln708_95_fu_2961_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_96_fu_2970_p4.read()) + sc_biguint<18>(trunc_ln708_95_fu_2961_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_890_fu_26526_p2() {
    add_ln703_890_fu_26526_p2 = (!add_ln703_885_reg_36326.read().is_01() || !add_ln703_889_fu_26522_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_885_reg_36326.read()) + sc_biguint<18>(add_ln703_889_fu_26522_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_891_fu_17858_p2() {
    add_ln703_891_fu_17858_p2 = (!trunc_ln708_886_fu_17765_p4.read().is_01() || !trunc_ln708_885_fu_17756_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_886_fu_17765_p4.read()) + sc_biguint<18>(trunc_ln708_885_fu_17756_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_892_fu_17864_p2() {
    add_ln703_892_fu_17864_p2 = (!sext_ln708_200_fu_17600_p1.read().is_01() || !sext_ln708_201_fu_17698_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_200_fu_17600_p1.read()) + sc_bigint<18>(sext_ln708_201_fu_17698_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_893_fu_17870_p2() {
    add_ln703_893_fu_17870_p2 = (!trunc_ln708_889_fu_17807_p4.read().is_01() || !add_ln703_892_fu_17864_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_889_fu_17807_p4.read()) + sc_biguint<18>(add_ln703_892_fu_17864_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_894_fu_17876_p2() {
    add_ln703_894_fu_17876_p2 = (!add_ln703_891_fu_17858_p2.read().is_01() || !add_ln703_893_fu_17870_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_891_fu_17858_p2.read()) + sc_biguint<18>(add_ln703_893_fu_17870_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_895_fu_17882_p2() {
    add_ln703_895_fu_17882_p2 = (!sext_ln1118_454_fu_17803_p1.read().is_01() || !sext_ln1118_453_fu_17790_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_454_fu_17803_p1.read()) + sc_bigint<16>(sext_ln1118_453_fu_17790_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_896_fu_17892_p2() {
    add_ln703_896_fu_17892_p2 = (!sext_ln1118_452_fu_17685_p1.read().is_01() || !sext_ln703_170_fu_17888_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_452_fu_17685_p1.read()) + sc_bigint<17>(sext_ln703_170_fu_17888_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_897_fu_17898_p2() {
    add_ln703_897_fu_17898_p2 = (!sext_ln1118_448_fu_17587_p1.read().is_01() || !ap_const_lv14_3E3D.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_448_fu_17587_p1.read()) + sc_bigint<14>(ap_const_lv14_3E3D));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_898_fu_17908_p2() {
    add_ln703_898_fu_17908_p2 = (!sext_ln1118_451_fu_17663_p1.read().is_01() || !sext_ln703_172_fu_17904_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_451_fu_17663_p1.read()) + sc_bigint<15>(sext_ln703_172_fu_17904_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_899_fu_26537_p2() {
    add_ln703_899_fu_26537_p2 = (!sext_ln703_171_fu_26531_p1.read().is_01() || !sext_ln703_173_fu_26534_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln703_171_fu_26531_p1.read()) + sc_bigint<18>(sext_ln703_173_fu_26534_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_89_fu_3080_p2() {
    add_ln703_89_fu_3080_p2 = (!trunc_ln708_94_fu_2952_p4.read().is_01() || !add_ln703_88_fu_3074_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_94_fu_2952_p4.read()) + sc_biguint<18>(add_ln703_88_fu_3074_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_900_fu_26543_p2() {
    add_ln703_900_fu_26543_p2 = (!add_ln703_894_reg_36341.read().is_01() || !add_ln703_899_fu_26537_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_894_reg_36341.read()) + sc_biguint<18>(add_ln703_899_fu_26537_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_902_fu_18173_p2() {
    add_ln703_902_fu_18173_p2 = (!trunc_ln708_893_fu_17958_p4.read().is_01() || !trunc_ln708_890_fu_17914_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_893_fu_17958_p4.read()) + sc_biguint<18>(trunc_ln708_890_fu_17914_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_903_fu_18179_p2() {
    add_ln703_903_fu_18179_p2 = (!trunc_ln708_897_fu_17998_p4.read().is_01() || !trunc_ln708_896_fu_17989_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_897_fu_17998_p4.read()) + sc_biguint<18>(trunc_ln708_896_fu_17989_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_904_fu_18185_p2() {
    add_ln703_904_fu_18185_p2 = (!trunc_ln708_894_fu_17967_p4.read().is_01() || !add_ln703_903_fu_18179_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_894_fu_17967_p4.read()) + sc_biguint<18>(add_ln703_903_fu_18179_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_905_fu_18191_p2() {
    add_ln703_905_fu_18191_p2 = (!add_ln703_902_fu_18173_p2.read().is_01() || !add_ln703_904_fu_18185_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_902_fu_18173_p2.read()) + sc_biguint<18>(add_ln703_904_fu_18185_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_906_fu_18197_p2() {
    add_ln703_906_fu_18197_p2 = (!trunc_ln708_901_fu_18061_p4.read().is_01() || !trunc_ln708_898_fu_18025_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_901_fu_18061_p4.read()) + sc_biguint<18>(trunc_ln708_898_fu_18025_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_907_fu_18203_p2() {
    add_ln703_907_fu_18203_p2 = (!sext_ln708_202_fu_17932_p1.read().is_01() || !trunc_ln708_906_fu_18118_p4.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_202_fu_17932_p1.read()) + sc_biguint<18>(trunc_ln708_906_fu_18118_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_908_fu_18209_p2() {
    add_ln703_908_fu_18209_p2 = (!trunc_ln708_905_fu_18109_p4.read().is_01() || !add_ln703_907_fu_18203_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_905_fu_18109_p4.read()) + sc_biguint<18>(add_ln703_907_fu_18203_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_909_fu_26557_p2() {
    add_ln703_909_fu_26557_p2 = (!add_ln703_906_reg_36366.read().is_01() || !add_ln703_908_reg_36371.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_906_reg_36366.read()) + sc_biguint<18>(add_ln703_908_reg_36371.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_90_fu_25477_p2() {
    add_ln703_90_fu_25477_p2 = (!add_ln703_87_reg_35206.read().is_01() || !add_ln703_89_reg_35211.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_87_reg_35206.read()) + sc_biguint<18>(add_ln703_89_reg_35211.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_910_fu_26561_p2() {
    add_ln703_910_fu_26561_p2 = (!add_ln703_905_reg_36361.read().is_01() || !add_ln703_909_fu_26557_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_905_reg_36361.read()) + sc_biguint<18>(add_ln703_909_fu_26557_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_911_fu_18215_p2() {
    add_ln703_911_fu_18215_p2 = (!sext_ln708_205_fu_18079_p1.read().is_01() || !sext_ln708_204_fu_18044_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_205_fu_18079_p1.read()) + sc_bigint<18>(sext_ln708_204_fu_18044_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_912_fu_18221_p2() {
    add_ln703_912_fu_18221_p2 = (!sext_ln708_208_fu_18136_p1.read().is_01() || !sext_ln708_207_fu_18105_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_208_fu_18136_p1.read()) + sc_bigint<18>(sext_ln708_207_fu_18105_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_913_fu_18227_p2() {
    add_ln703_913_fu_18227_p2 = (!sext_ln708_206_fu_18092_p1.read().is_01() || !add_ln703_912_fu_18221_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_206_fu_18092_p1.read()) + sc_biguint<18>(add_ln703_912_fu_18221_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_914_fu_18233_p2() {
    add_ln703_914_fu_18233_p2 = (!add_ln703_911_fu_18215_p2.read().is_01() || !add_ln703_913_fu_18227_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_911_fu_18215_p2.read()) + sc_biguint<18>(add_ln703_913_fu_18227_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_915_fu_18239_p2() {
    add_ln703_915_fu_18239_p2 = (!sext_ln1118_455_fu_17985_p1.read().is_01() || !sext_ln1118_457_fu_18057_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_455_fu_17985_p1.read()) + sc_bigint<17>(sext_ln1118_457_fu_18057_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_916_fu_26569_p2() {
    add_ln703_916_fu_26569_p2 = (!sext_ln708_203_fu_26554_p1.read().is_01() || !sext_ln703_175_fu_26566_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_203_fu_26554_p1.read()) + sc_bigint<18>(sext_ln703_175_fu_26566_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_917_fu_18245_p2() {
    add_ln703_917_fu_18245_p2 = (!sext_ln703_174_fu_18169_p1.read().is_01() || !ap_const_lv15_7EED.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_174_fu_18169_p1.read()) + sc_bigint<15>(ap_const_lv15_7EED));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_918_fu_18255_p2() {
    add_ln703_918_fu_18255_p2 = (!sext_ln1118_458_fu_18156_p1.read().is_01() || !sext_ln703_176_fu_18251_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_458_fu_18156_p1.read()) + sc_bigint<16>(sext_ln703_176_fu_18251_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_919_fu_26578_p2() {
    add_ln703_919_fu_26578_p2 = (!add_ln703_916_fu_26569_p2.read().is_01() || !sext_ln703_177_fu_26575_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_916_fu_26569_p2.read()) + sc_bigint<18>(sext_ln703_177_fu_26575_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_91_fu_25481_p2() {
    add_ln703_91_fu_25481_p2 = (!add_ln703_86_reg_35201.read().is_01() || !add_ln703_90_fu_25477_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_86_reg_35201.read()) + sc_biguint<18>(add_ln703_90_fu_25477_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_920_fu_26584_p2() {
    add_ln703_920_fu_26584_p2 = (!add_ln703_914_reg_36376.read().is_01() || !add_ln703_919_fu_26578_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_914_reg_36376.read()) + sc_biguint<18>(add_ln703_919_fu_26578_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_922_fu_18481_p2() {
    add_ln703_922_fu_18481_p2 = (!trunc_ln708_911_fu_18270_p4.read().is_01() || !trunc_ln708_910_fu_18261_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_911_fu_18270_p4.read()) + sc_biguint<18>(trunc_ln708_910_fu_18261_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_923_fu_18487_p2() {
    add_ln703_923_fu_18487_p2 = (!trunc_ln708_914_fu_18297_p4.read().is_01() || !trunc_ln708_913_fu_18288_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_914_fu_18297_p4.read()) + sc_biguint<18>(trunc_ln708_913_fu_18288_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_924_fu_18493_p2() {
    add_ln703_924_fu_18493_p2 = (!trunc_ln708_912_fu_18279_p4.read().is_01() || !add_ln703_923_fu_18487_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_912_fu_18279_p4.read()) + sc_biguint<18>(add_ln703_923_fu_18487_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_925_fu_18499_p2() {
    add_ln703_925_fu_18499_p2 = (!add_ln703_922_fu_18481_p2.read().is_01() || !add_ln703_924_fu_18493_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_922_fu_18481_p2.read()) + sc_biguint<18>(add_ln703_924_fu_18493_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_926_fu_18505_p2() {
    add_ln703_926_fu_18505_p2 = (!trunc_ln708_919_fu_18379_p4.read().is_01() || !trunc_ln708_916_fu_18344_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_919_fu_18379_p4.read()) + sc_biguint<18>(trunc_ln708_916_fu_18344_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_927_fu_18511_p2() {
    add_ln703_927_fu_18511_p2 = (!trunc_ln708_925_fu_18445_p4.read().is_01() || !trunc_ln708_923_fu_18423_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_925_fu_18445_p4.read()) + sc_biguint<18>(trunc_ln708_923_fu_18423_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_928_fu_18517_p2() {
    add_ln703_928_fu_18517_p2 = (!trunc_ln708_921_fu_18401_p4.read().is_01() || !add_ln703_927_fu_18511_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_921_fu_18401_p4.read()) + sc_biguint<18>(add_ln703_927_fu_18511_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_929_fu_26595_p2() {
    add_ln703_929_fu_26595_p2 = (!add_ln703_926_reg_36396.read().is_01() || !add_ln703_928_reg_36401.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_926_reg_36396.read()) + sc_biguint<18>(add_ln703_928_reg_36401.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_92_fu_3086_p2() {
    add_ln703_92_fu_3086_p2 = (!trunc_ln708_99_fu_3026_p4.read().is_01() || !trunc_ln708_98_fu_3017_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_99_fu_3026_p4.read()) + sc_biguint<18>(trunc_ln708_98_fu_3017_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_930_fu_26599_p2() {
    add_ln703_930_fu_26599_p2 = (!add_ln703_925_reg_36391.read().is_01() || !add_ln703_929_fu_26595_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_925_reg_36391.read()) + sc_biguint<18>(add_ln703_929_fu_26595_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_931_fu_18523_p2() {
    add_ln703_931_fu_18523_p2 = (!trunc_ln708_927_fu_18463_p4.read().is_01() || !trunc_ln708_926_fu_18454_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_927_fu_18463_p4.read()) + sc_biguint<18>(trunc_ln708_926_fu_18454_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_932_fu_18529_p2() {
    add_ln703_932_fu_18529_p2 = (!sext_ln708_211_fu_18419_p1.read().is_01() || !sext_ln708_210_fu_18397_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_211_fu_18419_p1.read()) + sc_bigint<18>(sext_ln708_210_fu_18397_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_933_fu_18535_p2() {
    add_ln703_933_fu_18535_p2 = (!trunc_ln708_928_fu_18472_p4.read().is_01() || !add_ln703_932_fu_18529_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_928_fu_18472_p4.read()) + sc_biguint<18>(add_ln703_932_fu_18529_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_934_fu_18541_p2() {
    add_ln703_934_fu_18541_p2 = (!add_ln703_931_fu_18523_p2.read().is_01() || !add_ln703_933_fu_18535_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_931_fu_18523_p2.read()) + sc_biguint<18>(add_ln703_933_fu_18535_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_935_fu_18547_p2() {
    add_ln703_935_fu_18547_p2 = (!sext_ln708_209_fu_18375_p1.read().is_01() || !sext_ln708_192_fu_16345_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_209_fu_18375_p1.read()) + sc_bigint<18>(sext_ln708_192_fu_16345_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_936_fu_18553_p2() {
    add_ln703_936_fu_18553_p2 = (!sext_ln708_212_fu_18441_p1.read().is_01() || !add_ln703_935_fu_18547_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_212_fu_18441_p1.read()) + sc_biguint<18>(add_ln703_935_fu_18547_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_937_fu_18559_p2() {
    add_ln703_937_fu_18559_p2 = (!sext_ln1118_460_fu_18340_p1.read().is_01() || !ap_const_lv14_84.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_460_fu_18340_p1.read()) + sc_biguint<14>(ap_const_lv14_84));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_938_fu_18569_p2() {
    add_ln703_938_fu_18569_p2 = (!sext_ln1118_461_fu_18362_p1.read().is_01() || !sext_ln703_178_fu_18565_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_461_fu_18362_p1.read()) + sc_bigint<16>(sext_ln703_178_fu_18565_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_939_fu_18579_p2() {
    add_ln703_939_fu_18579_p2 = (!add_ln703_936_fu_18553_p2.read().is_01() || !sext_ln703_179_fu_18575_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_936_fu_18553_p2.read()) + sc_bigint<18>(sext_ln703_179_fu_18575_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_93_fu_3092_p2() {
    add_ln703_93_fu_3092_p2 = (!sext_ln708_18_fu_2904_p1.read().is_01() || !sext_ln708_17_fu_2851_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_18_fu_2904_p1.read()) + sc_bigint<18>(sext_ln708_17_fu_2851_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_940_fu_26604_p2() {
    add_ln703_940_fu_26604_p2 = (!add_ln703_934_reg_36406.read().is_01() || !add_ln703_939_reg_36411.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_934_reg_36406.read()) + sc_biguint<18>(add_ln703_939_reg_36411.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_942_fu_18824_p2() {
    add_ln703_942_fu_18824_p2 = (!trunc_ln708_932_fu_18620_p4.read().is_01() || !trunc_ln708_930_fu_18598_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_932_fu_18620_p4.read()) + sc_biguint<18>(trunc_ln708_930_fu_18598_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_943_fu_18830_p2() {
    add_ln703_943_fu_18830_p2 = (!trunc_ln708_936_fu_18660_p4.read().is_01() || !trunc_ln708_934_fu_18638_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_936_fu_18660_p4.read()) + sc_biguint<18>(trunc_ln708_934_fu_18638_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_944_fu_18836_p2() {
    add_ln703_944_fu_18836_p2 = (!trunc_ln708_933_fu_18629_p4.read().is_01() || !add_ln703_943_fu_18830_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_933_fu_18629_p4.read()) + sc_biguint<18>(add_ln703_943_fu_18830_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_945_fu_18842_p2() {
    add_ln703_945_fu_18842_p2 = (!add_ln703_942_fu_18824_p2.read().is_01() || !add_ln703_944_fu_18836_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_942_fu_18824_p2.read()) + sc_biguint<18>(add_ln703_944_fu_18836_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_946_fu_18848_p2() {
    add_ln703_946_fu_18848_p2 = (!trunc_ln708_940_fu_18735_p4.read().is_01() || !trunc_ln708_939_fu_18726_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_940_fu_18735_p4.read()) + sc_biguint<18>(trunc_ln708_939_fu_18726_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_947_fu_18854_p2() {
    add_ln703_947_fu_18854_p2 = (!trunc_ln708_945_fu_18784_p4.read().is_01() || !trunc_ln708_944_fu_18775_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_945_fu_18784_p4.read()) + sc_biguint<18>(trunc_ln708_944_fu_18775_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_948_fu_18860_p2() {
    add_ln703_948_fu_18860_p2 = (!trunc_ln708_941_fu_18744_p4.read().is_01() || !add_ln703_947_fu_18854_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_941_fu_18744_p4.read()) + sc_biguint<18>(add_ln703_947_fu_18854_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_949_fu_26617_p2() {
    add_ln703_949_fu_26617_p2 = (!add_ln703_946_reg_36426.read().is_01() || !add_ln703_948_reg_36431.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_946_reg_36426.read()) + sc_biguint<18>(add_ln703_948_reg_36431.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_94_fu_3098_p2() {
    add_ln703_94_fu_3098_p2 = (!trunc_ln708_100_fu_3035_p4.read().is_01() || !add_ln703_93_fu_3092_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_100_fu_3035_p4.read()) + sc_biguint<18>(add_ln703_93_fu_3092_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_950_fu_26621_p2() {
    add_ln703_950_fu_26621_p2 = (!add_ln703_945_reg_36421.read().is_01() || !add_ln703_949_fu_26617_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_945_reg_36421.read()) + sc_biguint<18>(add_ln703_949_fu_26617_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_951_fu_18866_p2() {
    add_ln703_951_fu_18866_p2 = (!trunc_ln708_948_fu_18815_p4.read().is_01() || !trunc_ln708_946_fu_18793_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_948_fu_18815_p4.read()) + sc_biguint<18>(trunc_ln708_946_fu_18793_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_952_fu_18872_p2() {
    add_ln703_952_fu_18872_p2 = (!sext_ln708_215_fu_18762_p1.read().is_01() || !sext_ln708_214_fu_18678_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_215_fu_18762_p1.read()) + sc_bigint<18>(sext_ln708_214_fu_18678_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_953_fu_18878_p2() {
    add_ln703_953_fu_18878_p2 = (!sext_ln708_213_fu_18616_p1.read().is_01() || !add_ln703_952_fu_18872_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_213_fu_18616_p1.read()) + sc_biguint<18>(add_ln703_952_fu_18872_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_954_fu_18884_p2() {
    add_ln703_954_fu_18884_p2 = (!add_ln703_951_fu_18866_p2.read().is_01() || !add_ln703_953_fu_18878_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_951_fu_18866_p2.read()) + sc_biguint<18>(add_ln703_953_fu_18878_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_955_fu_18890_p2() {
    add_ln703_955_fu_18890_p2 = (!sext_ln1118_467_fu_18811_p1.read().is_01() || !sext_ln1118_463_fu_18656_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_467_fu_18811_p1.read()) + sc_bigint<17>(sext_ln1118_463_fu_18656_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_956_fu_26629_p2() {
    add_ln703_956_fu_26629_p2 = (!sext_ln708_216_fu_26614_p1.read().is_01() || !sext_ln703_180_fu_26626_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_216_fu_26614_p1.read()) + sc_bigint<18>(sext_ln703_180_fu_26626_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_957_fu_18896_p2() {
    add_ln703_957_fu_18896_p2 = (!sext_ln1118_462_fu_18594_p1.read().is_01() || !ap_const_lv15_B4.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_462_fu_18594_p1.read()) + sc_biguint<15>(ap_const_lv15_B4));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_958_fu_18906_p2() {
    add_ln703_958_fu_18906_p2 = (!sext_ln1118_466_fu_18722_p1.read().is_01() || !sext_ln703_181_fu_18902_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_466_fu_18722_p1.read()) + sc_bigint<16>(sext_ln703_181_fu_18902_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_959_fu_26638_p2() {
    add_ln703_959_fu_26638_p2 = (!add_ln703_956_fu_26629_p2.read().is_01() || !sext_ln703_182_fu_26635_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_956_fu_26629_p2.read()) + sc_bigint<18>(sext_ln703_182_fu_26635_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_95_fu_3104_p2() {
    add_ln703_95_fu_3104_p2 = (!add_ln703_92_fu_3086_p2.read().is_01() || !add_ln703_94_fu_3098_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_92_fu_3086_p2.read()) + sc_biguint<18>(add_ln703_94_fu_3098_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_960_fu_26644_p2() {
    add_ln703_960_fu_26644_p2 = (!add_ln703_954_reg_36436.read().is_01() || !add_ln703_959_fu_26638_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_954_reg_36436.read()) + sc_biguint<18>(add_ln703_959_fu_26638_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_962_fu_19154_p2() {
    add_ln703_962_fu_19154_p2 = (!trunc_ln708_953_fu_18978_p4.read().is_01() || !trunc_ln708_402_fu_9188_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_953_fu_18978_p4.read()) + sc_biguint<18>(trunc_ln708_402_fu_9188_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_963_fu_19160_p2() {
    add_ln703_963_fu_19160_p2 = (!trunc_ln708_960_fu_19082_p4.read().is_01() || !trunc_ln708_955_fu_18996_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_960_fu_19082_p4.read()) + sc_biguint<18>(trunc_ln708_955_fu_18996_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_964_fu_19166_p2() {
    add_ln703_964_fu_19166_p2 = (!trunc_ln708_954_fu_18987_p4.read().is_01() || !add_ln703_963_fu_19160_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_954_fu_18987_p4.read()) + sc_biguint<18>(add_ln703_963_fu_19160_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_965_fu_19172_p2() {
    add_ln703_965_fu_19172_p2 = (!add_ln703_962_fu_19154_p2.read().is_01() || !add_ln703_964_fu_19166_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_962_fu_19154_p2.read()) + sc_biguint<18>(add_ln703_964_fu_19166_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_966_fu_19178_p2() {
    add_ln703_966_fu_19178_p2 = (!trunc_ln708_962_fu_19100_p4.read().is_01() || !trunc_ln708_961_fu_19091_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_962_fu_19100_p4.read()) + sc_biguint<18>(trunc_ln708_961_fu_19091_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_967_fu_19184_p2() {
    add_ln703_967_fu_19184_p2 = (!trunc_ln708_965_fu_19127_p4.read().is_01() || !trunc_ln708_964_fu_19118_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_965_fu_19127_p4.read()) + sc_biguint<18>(trunc_ln708_964_fu_19118_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_968_fu_19190_p2() {
    add_ln703_968_fu_19190_p2 = (!trunc_ln708_963_fu_19109_p4.read().is_01() || !add_ln703_967_fu_19184_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_963_fu_19109_p4.read()) + sc_biguint<18>(add_ln703_967_fu_19184_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_969_fu_26655_p2() {
    add_ln703_969_fu_26655_p2 = (!add_ln703_966_reg_36456.read().is_01() || !add_ln703_968_reg_36461.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_966_reg_36456.read()) + sc_biguint<18>(add_ln703_968_reg_36461.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_96_fu_3110_p2() {
    add_ln703_96_fu_3110_p2 = (!sext_ln1118_149_fu_2891_p1.read().is_01() || !sext_ln1118_148_fu_2838_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_149_fu_2891_p1.read()) + sc_bigint<17>(sext_ln1118_148_fu_2838_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_970_fu_26659_p2() {
    add_ln703_970_fu_26659_p2 = (!add_ln703_965_reg_36451.read().is_01() || !add_ln703_969_fu_26655_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_965_reg_36451.read()) + sc_biguint<18>(add_ln703_969_fu_26655_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_971_fu_19196_p2() {
    add_ln703_971_fu_19196_p2 = (!trunc_ln708_967_fu_19145_p4.read().is_01() || !trunc_ln708_966_fu_19136_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_967_fu_19145_p4.read()) + sc_biguint<18>(trunc_ln708_966_fu_19136_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_972_fu_19202_p2() {
    add_ln703_972_fu_19202_p2 = (!sext_ln708_219_fu_18974_p1.read().is_01() || !sext_ln708_218_fu_18961_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_219_fu_18974_p1.read()) + sc_bigint<18>(sext_ln708_218_fu_18961_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_973_fu_19208_p2() {
    add_ln703_973_fu_19208_p2 = (!sext_ln708_217_fu_18928_p1.read().is_01() || !add_ln703_972_fu_19202_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_217_fu_18928_p1.read()) + sc_biguint<18>(add_ln703_972_fu_19202_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_974_fu_19214_p2() {
    add_ln703_974_fu_19214_p2 = (!add_ln703_971_fu_19196_p2.read().is_01() || !add_ln703_973_fu_19208_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_971_fu_19196_p2.read()) + sc_biguint<18>(add_ln703_973_fu_19208_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_975_fu_19220_p2() {
    add_ln703_975_fu_19220_p2 = (!sext_ln708_220_fu_19027_p1.read().is_01() || !sext_ln708_222_fu_19078_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_220_fu_19027_p1.read()) + sc_bigint<18>(sext_ln708_222_fu_19078_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_976_fu_19226_p2() {
    add_ln703_976_fu_19226_p2 = (!sext_ln708_221_fu_19040_p1.read().is_01() || !add_ln703_975_fu_19220_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_221_fu_19040_p1.read()) + sc_biguint<18>(add_ln703_975_fu_19220_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_977_fu_19232_p2() {
    add_ln703_977_fu_19232_p2 = (!sext_ln1118_468_fu_18948_p1.read().is_01() || !ap_const_lv13_9C.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_468_fu_18948_p1.read()) + sc_biguint<13>(ap_const_lv13_9C));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_978_fu_19242_p2() {
    add_ln703_978_fu_19242_p2 = (!sext_ln1118_469_fu_19014_p1.read().is_01() || !sext_ln703_183_fu_19238_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_469_fu_19014_p1.read()) + sc_bigint<15>(sext_ln703_183_fu_19238_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_979_fu_19252_p2() {
    add_ln703_979_fu_19252_p2 = (!add_ln703_976_fu_19226_p2.read().is_01() || !sext_ln703_184_fu_19248_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_976_fu_19226_p2.read()) + sc_bigint<18>(sext_ln703_184_fu_19248_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_97_fu_3120_p2() {
    add_ln703_97_fu_3120_p2 = (!sext_ln708_19_fu_2926_p1.read().is_01() || !sext_ln703_43_fu_3116_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_19_fu_2926_p1.read()) + sc_bigint<18>(sext_ln703_43_fu_3116_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_980_fu_26664_p2() {
    add_ln703_980_fu_26664_p2 = (!add_ln703_974_reg_36466.read().is_01() || !add_ln703_979_reg_36471.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_974_reg_36466.read()) + sc_biguint<18>(add_ln703_979_reg_36471.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_982_fu_19525_p2() {
    add_ln703_982_fu_19525_p2 = (!trunc_ln708_972_fu_19313_p4.read().is_01() || !trunc_ln708_968_fu_19258_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_972_fu_19313_p4.read()) + sc_biguint<18>(trunc_ln708_968_fu_19258_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_983_fu_19531_p2() {
    add_ln703_983_fu_19531_p2 = (!trunc_ln708_978_fu_19375_p4.read().is_01() || !trunc_ln708_977_fu_19366_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_978_fu_19375_p4.read()) + sc_biguint<18>(trunc_ln708_977_fu_19366_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_984_fu_19537_p2() {
    add_ln703_984_fu_19537_p2 = (!trunc_ln708_973_fu_19322_p4.read().is_01() || !add_ln703_983_fu_19531_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_973_fu_19322_p4.read()) + sc_biguint<18>(add_ln703_983_fu_19531_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_985_fu_19543_p2() {
    add_ln703_985_fu_19543_p2 = (!add_ln703_982_fu_19525_p2.read().is_01() || !add_ln703_984_fu_19537_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_982_fu_19525_p2.read()) + sc_biguint<18>(add_ln703_984_fu_19537_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_986_fu_19549_p2() {
    add_ln703_986_fu_19549_p2 = (!trunc_ln708_980_fu_19405_p4.read().is_01() || !trunc_ln708_979_fu_19384_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_980_fu_19405_p4.read()) + sc_biguint<18>(trunc_ln708_979_fu_19384_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_987_fu_19555_p2() {
    add_ln703_987_fu_19555_p2 = (!trunc_ln708_986_fu_19503_p4.read().is_01() || !trunc_ln708_985_fu_19494_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_986_fu_19503_p4.read()) + sc_biguint<18>(trunc_ln708_985_fu_19494_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_988_fu_19561_p2() {
    add_ln703_988_fu_19561_p2 = (!trunc_ln708_982_fu_19428_p4.read().is_01() || !add_ln703_987_fu_19555_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_982_fu_19428_p4.read()) + sc_biguint<18>(add_ln703_987_fu_19555_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_989_fu_26677_p2() {
    add_ln703_989_fu_26677_p2 = (!add_ln703_986_reg_36486.read().is_01() || !add_ln703_988_reg_36491.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_986_reg_36486.read()) + sc_biguint<18>(add_ln703_988_reg_36491.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_98_fu_3126_p2() {
    add_ln703_98_fu_3126_p2 = (!sext_ln1118_152_fu_3013_p1.read().is_01() || !ap_const_lv13_1EB7.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_152_fu_3013_p1.read()) + sc_bigint<13>(ap_const_lv13_1EB7));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_990_fu_26681_p2() {
    add_ln703_990_fu_26681_p2 = (!add_ln703_985_reg_36481.read().is_01() || !add_ln703_989_fu_26677_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_985_reg_36481.read()) + sc_biguint<18>(add_ln703_989_fu_26677_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_991_fu_19567_p2() {
    add_ln703_991_fu_19567_p2 = (!sext_ln708_224_fu_19289_p1.read().is_01() || !sext_ln708_223_fu_19276_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_224_fu_19289_p1.read()) + sc_bigint<18>(sext_ln708_223_fu_19276_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_992_fu_19573_p2() {
    add_ln703_992_fu_19573_p2 = (!sext_ln708_228_fu_19490_p1.read().is_01() || !sext_ln708_227_fu_19424_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_228_fu_19490_p1.read()) + sc_bigint<18>(sext_ln708_227_fu_19424_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_993_fu_19579_p2() {
    add_ln703_993_fu_19579_p2 = (!sext_ln708_226_fu_19362_p1.read().is_01() || !add_ln703_992_fu_19573_p2.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_226_fu_19362_p1.read()) + sc_biguint<18>(add_ln703_992_fu_19573_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_994_fu_19585_p2() {
    add_ln703_994_fu_19585_p2 = (!add_ln703_991_fu_19567_p2.read().is_01() || !add_ln703_993_fu_19579_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_991_fu_19567_p2.read()) + sc_biguint<18>(add_ln703_993_fu_19579_p2.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_995_fu_19591_p2() {
    add_ln703_995_fu_19591_p2 = (!sext_ln1118_472_fu_19340_p1.read().is_01() || !sext_ln703_185_fu_19521_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_472_fu_19340_p1.read()) + sc_bigint<17>(sext_ln703_185_fu_19521_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_996_fu_26689_p2() {
    add_ln703_996_fu_26689_p2 = (!sext_ln708_225_fu_26674_p1.read().is_01() || !sext_ln703_186_fu_26686_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(sext_ln708_225_fu_26674_p1.read()) + sc_bigint<18>(sext_ln703_186_fu_26686_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_997_fu_19597_p2() {
    add_ln703_997_fu_19597_p2 = (!sext_ln1118_473_fu_19446_p1.read().is_01() || !ap_const_lv15_7EF0.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_473_fu_19446_p1.read()) + sc_bigint<15>(ap_const_lv15_7EF0));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_998_fu_19607_p2() {
    add_ln703_998_fu_19607_p2 = (!sext_ln1118_471_fu_19309_p1.read().is_01() || !sext_ln703_187_fu_19603_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln1118_471_fu_19309_p1.read()) + sc_bigint<16>(sext_ln703_187_fu_19603_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_999_fu_26698_p2() {
    add_ln703_999_fu_26698_p2 = (!add_ln703_996_fu_26689_p2.read().is_01() || !sext_ln703_188_fu_26695_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(add_ln703_996_fu_26689_p2.read()) + sc_bigint<18>(sext_ln703_188_fu_26695_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_99_fu_3136_p2() {
    add_ln703_99_fu_3136_p2 = (!sext_ln1118_150_fu_2939_p1.read().is_01() || !sext_ln703_44_fu_3132_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(sext_ln1118_150_fu_2939_p1.read()) + sc_bigint<17>(sext_ln703_44_fu_3132_p1.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_add_ln703_fu_2723_p2() {
    add_ln703_fu_2723_p2 = (!trunc_ln708_s_fu_2107_p4.read().is_01() || !trunc_ln_fu_2078_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(trunc_ln708_s_fu_2107_p4.read()) + sc_biguint<18>(trunc_ln_fu_2078_p4.read()));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_0() {
    ap_return_0 = acc_0_V_fu_25471_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_1() {
    ap_return_1 = acc_1_V_fu_25490_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_10() {
    ap_return_10 = acc_10_V_fu_25750_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_11() {
    ap_return_11 = acc_11_V_fu_25769_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_12() {
    ap_return_12 = acc_12_V_fu_25788_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_13() {
    ap_return_13 = acc_13_V_fu_25820_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_14() {
    ap_return_14 = acc_14_V_fu_25857_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_15() {
    ap_return_15 = acc_15_V_fu_25876_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_16() {
    ap_return_16 = acc_16_V_fu_25913_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_17() {
    ap_return_17 = acc_17_V_fu_25932_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_18() {
    ap_return_18 = acc_18_V_fu_25951_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_19() {
    ap_return_19 = acc_19_V_fu_25970_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_2() {
    ap_return_2 = acc_2_V_fu_25513_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_20() {
    ap_return_20 = acc_20_V_fu_25989_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_21() {
    ap_return_21 = acc_21_V_fu_26008_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_22() {
    ap_return_22 = acc_22_V_fu_26027_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_23() {
    ap_return_23 = acc_23_V_fu_26046_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_24() {
    ap_return_24 = acc_24_V_fu_26083_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_25() {
    ap_return_25 = acc_25_V_fu_26102_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_26() {
    ap_return_26 = acc_26_V_fu_26121_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_27() {
    ap_return_27 = acc_27_V_fu_26140_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_28() {
    ap_return_28 = acc_28_V_fu_26172_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_29() {
    ap_return_29 = acc_29_V_fu_26213_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_3() {
    ap_return_3 = acc_3_V_fu_25532_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_30() {
    ap_return_30 = acc_30_V_fu_26260_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_31() {
    ap_return_31 = acc_31_V_fu_26279_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_32() {
    ap_return_32 = acc_32_V_fu_26316_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_33() {
    ap_return_33 = acc_33_V_fu_26339_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_34() {
    ap_return_34 = acc_34_V_fu_26380_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_35() {
    ap_return_35 = acc_35_V_fu_26417_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_36() {
    ap_return_36 = acc_36_V_fu_26440_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_37() {
    ap_return_37 = acc_37_V_fu_26459_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_38() {
    ap_return_38 = acc_38_V_fu_26478_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_39() {
    ap_return_39 = acc_39_V_fu_26497_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_4() {
    ap_return_4 = acc_4_V_fu_25573_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_40() {
    ap_return_40 = acc_40_V_fu_26516_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_41() {
    ap_return_41 = acc_41_V_fu_26548_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_42() {
    ap_return_42 = acc_42_V_fu_26589_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_43() {
    ap_return_43 = acc_43_V_fu_26608_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_44() {
    ap_return_44 = acc_44_V_fu_26649_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_45() {
    ap_return_45 = acc_45_V_fu_26668_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_46() {
    ap_return_46 = acc_46_V_fu_26709_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_47() {
    ap_return_47 = acc_47_V_fu_26756_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_48() {
    ap_return_48 = acc_48_V_fu_26775_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_49() {
    ap_return_49 = acc_49_V_fu_26794_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_5() {
    ap_return_5 = acc_5_V_fu_25592_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_50() {
    ap_return_50 = acc_50_V_fu_26813_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_51() {
    ap_return_51 = acc_51_V_fu_26832_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_52() {
    ap_return_52 = acc_52_V_fu_26851_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_53() {
    ap_return_53 = acc_53_V_fu_26870_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_54() {
    ap_return_54 = acc_54_V_fu_26889_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_55() {
    ap_return_55 = acc_55_V_fu_26908_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_56() {
    ap_return_56 = acc_56_V_fu_26949_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_57() {
    ap_return_57 = acc_57_V_fu_26990_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_58() {
    ap_return_58 = acc_58_V_fu_27037_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_59() {
    ap_return_59 = acc_59_V_fu_27056_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_6() {
    ap_return_6 = acc_6_V_fu_25639_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_60() {
    ap_return_60 = acc_60_V_fu_27099_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_61() {
    ap_return_61 = acc_61_V_fu_27118_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_62() {
    ap_return_62 = acc_62_V_fu_27137_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_63() {
    ap_return_63 = acc_63_V_fu_27160_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_7() {
    ap_return_7 = acc_7_V_fu_25675_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_8() {
    ap_return_8 = acc_8_V_fu_25694_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_ap_return_9() {
    ap_return_9 = acc_9_V_fu_25713_p2.read();
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1000_fu_34018_p0() {
    mul_ln1118_1000_fu_34018_p0 =  (sc_lv<18>) (sext_ln1118_82_fu_2326_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1000_fu_34018_p1() {
    mul_ln1118_1000_fu_34018_p1 =  (sc_lv<10>) (ap_const_lv28_151);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1001_fu_34025_p0() {
    mul_ln1118_1001_fu_34025_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1001_fu_34025_p1() {
    mul_ln1118_1001_fu_34025_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEFD);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1002_fu_34032_p0() {
    mul_ln1118_1002_fu_34032_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1002_fu_34032_p1() {
    mul_ln1118_1002_fu_34032_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFC19);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1003_fu_34039_p0() {
    mul_ln1118_1003_fu_34039_p0 =  (sc_lv<18>) (sext_ln1118_109_fu_2483_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1003_fu_34039_p1() {
    mul_ln1118_1003_fu_34039_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF4D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1004_fu_34046_p0() {
    mul_ln1118_1004_fu_34046_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_2500_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1004_fu_34046_p1() {
    mul_ln1118_1004_fu_34046_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE2E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1005_fu_34053_p0() {
    mul_ln1118_1005_fu_34053_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1005_fu_34053_p1() {
    mul_ln1118_1005_fu_34053_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDDA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1006_fu_34060_p0() {
    mul_ln1118_1006_fu_34060_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1006_fu_34060_p1() {
    mul_ln1118_1006_fu_34060_p1 =  (sc_lv<11>) (ap_const_lv28_3A5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1007_fu_34067_p0() {
    mul_ln1118_1007_fu_34067_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1007_fu_34067_p1() {
    mul_ln1118_1007_fu_34067_p1 =  (sc_lv<12>) (ap_const_lv28_FFFFAE1);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1008_fu_34074_p0() {
    mul_ln1118_1008_fu_34074_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1008_fu_34074_p1() {
    mul_ln1118_1008_fu_34074_p1 =  (sc_lv<11>) (ap_const_lv28_2FB);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1009_fu_34081_p0() {
    mul_ln1118_1009_fu_34081_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1009_fu_34081_p1() {
    mul_ln1118_1009_fu_34081_p1 =  (sc_lv<11>) (ap_const_lv28_25F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_100_fu_27732_p0() {
    mul_ln1118_100_fu_27732_p0 =  (sc_lv<18>) (sext_ln1118_77_fu_2306_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_100_fu_27732_p1() {
    mul_ln1118_100_fu_27732_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFF92);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1010_fu_34088_p0() {
    mul_ln1118_1010_fu_34088_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1010_fu_34088_p1() {
    mul_ln1118_1010_fu_34088_p1 =  (sc_lv<10>) (ap_const_lv28_1A1);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1011_fu_34095_p0() {
    mul_ln1118_1011_fu_34095_p0 =  (sc_lv<18>) (sext_ln1118_44_fu_2087_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1011_fu_34095_p1() {
    mul_ln1118_1011_fu_34095_p1 =  (sc_lv<8>) (ap_const_lv26_79);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1012_fu_34102_p0() {
    mul_ln1118_1012_fu_34102_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1012_fu_34102_p1() {
    mul_ln1118_1012_fu_34102_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCA2);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1013_fu_34109_p0() {
    mul_ln1118_1013_fu_34109_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1013_fu_34109_p1() {
    mul_ln1118_1013_fu_34109_p1 =  (sc_lv<11>) (ap_const_lv28_2D2);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1014_fu_34116_p0() {
    mul_ln1118_1014_fu_34116_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1014_fu_34116_p1() {
    mul_ln1118_1014_fu_34116_p1 =  (sc_lv<12>) (ap_const_lv28_FFFFAAC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1015_fu_34123_p0() {
    mul_ln1118_1015_fu_34123_p0 =  (sc_lv<18>) (sext_ln1118_63_fu_2199_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1015_fu_34123_p1() {
    mul_ln1118_1015_fu_34123_p1 =  (sc_lv<9>) (ap_const_lv27_AC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1016_fu_34130_p0() {
    mul_ln1118_1016_fu_34130_p0 =  (sc_lv<18>) (sext_ln1118_77_fu_2306_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1016_fu_34130_p1() {
    mul_ln1118_1016_fu_34130_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFF8D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1017_fu_34137_p0() {
    mul_ln1118_1017_fu_34137_p0 =  (sc_lv<18>) (sext_ln1118_90_fu_2380_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1017_fu_34137_p1() {
    mul_ln1118_1017_fu_34137_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF5C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1018_fu_34144_p0() {
    mul_ln1118_1018_fu_34144_p0 =  (sc_lv<18>) (sext_ln1118_96_fu_2413_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1018_fu_34144_p1() {
    mul_ln1118_1018_fu_34144_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF2A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1019_fu_34151_p0() {
    mul_ln1118_1019_fu_34151_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1019_fu_34151_p1() {
    mul_ln1118_1019_fu_34151_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEEA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_101_fu_27739_p0() {
    mul_ln1118_101_fu_27739_p0 =  (sc_lv<18>) (sext_ln1118_84_fu_2347_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_101_fu_27739_p1() {
    mul_ln1118_101_fu_27739_p1 =  (sc_lv<9>) (ap_const_lv27_BD);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1020_fu_34158_p0() {
    mul_ln1118_1020_fu_34158_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1020_fu_34158_p1() {
    mul_ln1118_1020_fu_34158_p1 =  (sc_lv<10>) (ap_const_lv28_135);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1021_fu_34165_p0() {
    mul_ln1118_1021_fu_34165_p0 =  (sc_lv<18>) (sext_ln1118_120_fu_2549_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1021_fu_34165_p1() {
    mul_ln1118_1021_fu_34165_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF0A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1022_fu_34172_p0() {
    mul_ln1118_1022_fu_34172_p0 =  (sc_lv<18>) (sext_ln1118_124_fu_2574_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1022_fu_34172_p1() {
    mul_ln1118_1022_fu_34172_p1 =  (sc_lv<8>) (ap_const_lv26_52);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1023_fu_34179_p0() {
    mul_ln1118_1023_fu_34179_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1023_fu_34179_p1() {
    mul_ln1118_1023_fu_34179_p1 =  (sc_lv<11>) (ap_const_lv28_27A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1024_fu_34186_p0() {
    mul_ln1118_1024_fu_34186_p0 =  (sc_lv<18>) (sext_ln1118_138_fu_2657_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1024_fu_34186_p1() {
    mul_ln1118_1024_fu_34186_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE5B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1025_fu_34193_p0() {
    mul_ln1118_1025_fu_34193_p0 =  (sc_lv<18>) (sext_ln1118_146_fu_2702_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1025_fu_34193_p1() {
    mul_ln1118_1025_fu_34193_p1 =  (sc_lv<9>) (ap_const_lv27_CA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1026_fu_34200_p0() {
    mul_ln1118_1026_fu_34200_p0 =  (sc_lv<18>) (sext_ln1118_45_fu_2091_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1026_fu_34200_p1() {
    mul_ln1118_1026_fu_34200_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE06);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1027_fu_34207_p0() {
    mul_ln1118_1027_fu_34207_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1027_fu_34207_p1() {
    mul_ln1118_1027_fu_34207_p1 =  (sc_lv<11>) (ap_const_lv28_383);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1028_fu_34214_p0() {
    mul_ln1118_1028_fu_34214_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1028_fu_34214_p1() {
    mul_ln1118_1028_fu_34214_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE3D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1029_fu_34221_p0() {
    mul_ln1118_1029_fu_34221_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1029_fu_34221_p1() {
    mul_ln1118_1029_fu_34221_p1 =  (sc_lv<12>) (ap_const_lv28_41D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_102_fu_27746_p0() {
    mul_ln1118_102_fu_27746_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_102_fu_27746_p1() {
    mul_ln1118_102_fu_27746_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEE9);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1030_fu_34228_p0() {
    mul_ln1118_1030_fu_34228_p0 =  (sc_lv<18>) (sext_ln1118_64_fu_2203_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1030_fu_34228_p1() {
    mul_ln1118_1030_fu_34228_p1 =  (sc_lv<7>) (ap_const_lv25_1FFFFD9);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1031_fu_34235_p0() {
    mul_ln1118_1031_fu_34235_p0 =  (sc_lv<18>) (sext_ln1118_70_fu_2240_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1031_fu_34235_p1() {
    mul_ln1118_1031_fu_34235_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF4E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1032_fu_34242_p0() {
    mul_ln1118_1032_fu_34242_p0 =  (sc_lv<18>) (sext_ln1118_85_fu_2351_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1032_fu_34242_p1() {
    mul_ln1118_1032_fu_34242_p1 =  (sc_lv<7>) (ap_const_lv25_1FFFFC3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1033_fu_34249_p0() {
    mul_ln1118_1033_fu_34249_p0 =  (sc_lv<18>) (sext_ln1118_90_fu_2380_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1033_fu_34249_p1() {
    mul_ln1118_1033_fu_34249_p1 =  (sc_lv<9>) (ap_const_lv27_A4);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1034_fu_34256_p0() {
    mul_ln1118_1034_fu_34256_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1034_fu_34256_p1() {
    mul_ln1118_1034_fu_34256_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEDA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1035_fu_34263_p0() {
    mul_ln1118_1035_fu_34263_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1035_fu_34263_p1() {
    mul_ln1118_1035_fu_34263_p1 =  (sc_lv<10>) (ap_const_lv28_1EE);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1036_fu_34270_p0() {
    mul_ln1118_1036_fu_34270_p0 =  (sc_lv<18>) (sext_ln1118_108_fu_2479_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1036_fu_34270_p1() {
    mul_ln1118_1036_fu_34270_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFF9B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1037_fu_34277_p0() {
    mul_ln1118_1037_fu_34277_p0 =  (sc_lv<18>) (sext_ln1118_112_fu_2508_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1037_fu_34277_p1() {
    mul_ln1118_1037_fu_34277_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF68);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1038_fu_34284_p0() {
    mul_ln1118_1038_fu_34284_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1038_fu_34284_p1() {
    mul_ln1118_1038_fu_34284_p1 =  (sc_lv<11>) (ap_const_lv28_2CD);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1039_fu_34291_p0() {
    mul_ln1118_1039_fu_34291_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1039_fu_34291_p1() {
    mul_ln1118_1039_fu_34291_p1 =  (sc_lv<10>) (ap_const_lv28_186);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_103_fu_27753_p0() {
    mul_ln1118_103_fu_27753_p0 =  (sc_lv<18>) (sext_ln1118_96_fu_2413_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_103_fu_27753_p1() {
    mul_ln1118_103_fu_27753_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF31);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1040_fu_34298_p0() {
    mul_ln1118_1040_fu_34298_p0 =  (sc_lv<18>) (sext_ln1118_130_fu_2607_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1040_fu_34298_p1() {
    mul_ln1118_1040_fu_34298_p1 =  (sc_lv<9>) (ap_const_lv27_8E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1041_fu_34305_p0() {
    mul_ln1118_1041_fu_34305_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1041_fu_34305_p1() {
    mul_ln1118_1041_fu_34305_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE16);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1042_fu_34312_p0() {
    mul_ln1118_1042_fu_34312_p0 =  (sc_lv<18>) (sext_ln1118_138_fu_2657_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1042_fu_34312_p1() {
    mul_ln1118_1042_fu_34312_p1 =  (sc_lv<11>) (ap_const_lv28_20A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1043_fu_34319_p0() {
    mul_ln1118_1043_fu_34319_p0 =  (sc_lv<18>) (sext_ln1118_147_fu_2706_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1043_fu_34319_p1() {
    mul_ln1118_1043_fu_34319_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFFBD);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1044_fu_34326_p0() {
    mul_ln1118_1044_fu_34326_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1044_fu_34326_p1() {
    mul_ln1118_1044_fu_34326_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDA6);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1045_fu_34333_p0() {
    mul_ln1118_1045_fu_34333_p0 =  (sc_lv<18>) (sext_ln1118_45_fu_2091_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1045_fu_34333_p1() {
    mul_ln1118_1045_fu_34333_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFD65);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1046_fu_34340_p0() {
    mul_ln1118_1046_fu_34340_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1046_fu_34340_p1() {
    mul_ln1118_1046_fu_34340_p1 =  (sc_lv<11>) (ap_const_lv28_2C1);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1047_fu_34347_p0() {
    mul_ln1118_1047_fu_34347_p0 =  (sc_lv<18>) (sext_ln1118_58_fu_2161_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1047_fu_34347_p1() {
    mul_ln1118_1047_fu_34347_p1 =  (sc_lv<9>) (ap_const_lv27_C7);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1048_fu_34354_p0() {
    mul_ln1118_1048_fu_34354_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1048_fu_34354_p1() {
    mul_ln1118_1048_fu_34354_p1 =  (sc_lv<11>) (ap_const_lv28_31D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1049_fu_34361_p0() {
    mul_ln1118_1049_fu_34361_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1049_fu_34361_p1() {
    mul_ln1118_1049_fu_34361_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEAC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_104_fu_27760_p0() {
    mul_ln1118_104_fu_27760_p0 =  (sc_lv<18>) (sext_ln1118_103_fu_2450_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_104_fu_27760_p1() {
    mul_ln1118_104_fu_27760_p1 =  (sc_lv<8>) (ap_const_lv26_5F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1050_fu_34368_p0() {
    mul_ln1118_1050_fu_34368_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1050_fu_34368_p1() {
    mul_ln1118_1050_fu_34368_p1 =  (sc_lv<11>) (ap_const_lv28_28F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1051_fu_34375_p0() {
    mul_ln1118_1051_fu_34375_p0 =  (sc_lv<18>) (sext_ln1118_83_fu_2343_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1051_fu_34375_p1() {
    mul_ln1118_1051_fu_34375_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE29);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1052_fu_34382_p0() {
    mul_ln1118_1052_fu_34382_p0 =  (sc_lv<18>) (sext_ln1118_89_fu_2376_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1052_fu_34382_p1() {
    mul_ln1118_1052_fu_34382_p1 =  (sc_lv<7>) (ap_const_lv25_1FFFFCE);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1053_fu_34389_p0() {
    mul_ln1118_1053_fu_34389_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1053_fu_34389_p1() {
    mul_ln1118_1053_fu_34389_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE2C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1054_fu_34396_p0() {
    mul_ln1118_1054_fu_34396_p0 =  (sc_lv<18>) (sext_ln1118_100_fu_2438_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1054_fu_34396_p1() {
    mul_ln1118_1054_fu_34396_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF5A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1055_fu_34403_p0() {
    mul_ln1118_1055_fu_34403_p0 =  (sc_lv<18>) (sext_ln1118_120_fu_2549_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1055_fu_34403_p1() {
    mul_ln1118_1055_fu_34403_p1 =  (sc_lv<9>) (ap_const_lv27_BC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1056_fu_34410_p0() {
    mul_ln1118_1056_fu_34410_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1056_fu_34410_p1() {
    mul_ln1118_1056_fu_34410_p1 =  (sc_lv<12>) (ap_const_lv28_421);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1057_fu_34417_p0() {
    mul_ln1118_1057_fu_34417_p0 =  (sc_lv<18>) (sext_ln1118_129_fu_2603_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1057_fu_34417_p1() {
    mul_ln1118_1057_fu_34417_p1 =  (sc_lv<8>) (ap_const_lv26_5C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1058_fu_34424_p0() {
    mul_ln1118_1058_fu_34424_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1058_fu_34424_p1() {
    mul_ln1118_1058_fu_34424_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEA5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1059_fu_34431_p0() {
    mul_ln1118_1059_fu_34431_p0 =  (sc_lv<18>) (sext_ln1118_138_fu_2657_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1059_fu_34431_p1() {
    mul_ln1118_1059_fu_34431_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEB2);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_105_fu_27767_p0() {
    mul_ln1118_105_fu_27767_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_105_fu_27767_p1() {
    mul_ln1118_105_fu_27767_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE94);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1060_fu_34438_p0() {
    mul_ln1118_1060_fu_34438_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1060_fu_34438_p1() {
    mul_ln1118_1060_fu_34438_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE33);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1061_fu_34445_p0() {
    mul_ln1118_1061_fu_34445_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1061_fu_34445_p1() {
    mul_ln1118_1061_fu_34445_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE77);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1062_fu_34452_p0() {
    mul_ln1118_1062_fu_34452_p0 =  (sc_lv<18>) (sext_ln1118_45_fu_2091_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1062_fu_34452_p1() {
    mul_ln1118_1062_fu_34452_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEE8);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1063_fu_34459_p0() {
    mul_ln1118_1063_fu_34459_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1063_fu_34459_p1() {
    mul_ln1118_1063_fu_34459_p1 =  (sc_lv<11>) (ap_const_lv28_32B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1064_fu_34466_p0() {
    mul_ln1118_1064_fu_34466_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1064_fu_34466_p1() {
    mul_ln1118_1064_fu_34466_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE15);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1065_fu_34473_p0() {
    mul_ln1118_1065_fu_34473_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1065_fu_34473_p1() {
    mul_ln1118_1065_fu_34473_p1 =  (sc_lv<12>) (ap_const_lv28_49B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1066_fu_34480_p0() {
    mul_ln1118_1066_fu_34480_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1066_fu_34480_p1() {
    mul_ln1118_1066_fu_34480_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE8B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1067_fu_34487_p0() {
    mul_ln1118_1067_fu_34487_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1067_fu_34487_p1() {
    mul_ln1118_1067_fu_34487_p1 =  (sc_lv<11>) (ap_const_lv28_2B3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1068_fu_34494_p0() {
    mul_ln1118_1068_fu_34494_p0 =  (sc_lv<18>) (sext_ln1118_77_fu_2306_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1068_fu_34494_p1() {
    mul_ln1118_1068_fu_34494_p1 =  (sc_lv<8>) (ap_const_lv26_73);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1069_fu_34501_p0() {
    mul_ln1118_1069_fu_34501_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1069_fu_34501_p1() {
    mul_ln1118_1069_fu_34501_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFED8);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_106_fu_27774_p0() {
    mul_ln1118_106_fu_27774_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_2500_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_106_fu_27774_p1() {
    mul_ln1118_106_fu_27774_p1 =  (sc_lv<10>) (ap_const_lv28_1F5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1070_fu_34508_p0() {
    mul_ln1118_1070_fu_34508_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1070_fu_34508_p1() {
    mul_ln1118_1070_fu_34508_p1 =  (sc_lv<10>) (ap_const_lv28_175);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1071_fu_34515_p0() {
    mul_ln1118_1071_fu_34515_p0 =  (sc_lv<18>) (sext_ln1118_103_fu_2450_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1071_fu_34515_p1() {
    mul_ln1118_1071_fu_34515_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFF9B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1072_fu_34522_p0() {
    mul_ln1118_1072_fu_34522_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1072_fu_34522_p1() {
    mul_ln1118_1072_fu_34522_p1 =  (sc_lv<10>) (ap_const_lv28_162);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1073_fu_34529_p0() {
    mul_ln1118_1073_fu_34529_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_2500_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1073_fu_34529_p1() {
    mul_ln1118_1073_fu_34529_p1 =  (sc_lv<11>) (ap_const_lv28_274);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1074_fu_34536_p0() {
    mul_ln1118_1074_fu_34536_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1074_fu_34536_p1() {
    mul_ln1118_1074_fu_34536_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDB6);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1075_fu_34543_p0() {
    mul_ln1118_1075_fu_34543_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1075_fu_34543_p1() {
    mul_ln1118_1075_fu_34543_p1 =  (sc_lv<11>) (ap_const_lv28_2D5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1076_fu_34550_p0() {
    mul_ln1118_1076_fu_34550_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1076_fu_34550_p1() {
    mul_ln1118_1076_fu_34550_p1 =  (sc_lv<10>) (ap_const_lv28_1B8);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1077_fu_34557_p0() {
    mul_ln1118_1077_fu_34557_p0 =  (sc_lv<18>) (sext_ln1118_134_fu_2632_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1077_fu_34557_p1() {
    mul_ln1118_1077_fu_34557_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFF95);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1078_fu_34564_p0() {
    mul_ln1118_1078_fu_34564_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1078_fu_34564_p1() {
    mul_ln1118_1078_fu_34564_p1 =  (sc_lv<11>) (ap_const_lv28_20F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1079_fu_34571_p0() {
    mul_ln1118_1079_fu_34571_p0 =  (sc_lv<18>) (sext_ln1118_43_fu_2074_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1079_fu_34571_p1() {
    mul_ln1118_1079_fu_34571_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF43);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_107_fu_27781_p0() {
    mul_ln1118_107_fu_27781_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_107_fu_27781_p1() {
    mul_ln1118_107_fu_27781_p1 =  (sc_lv<11>) (ap_const_lv28_24D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1080_fu_34578_p0() {
    mul_ln1118_1080_fu_34578_p0 =  (sc_lv<18>) (sext_ln1118_47_fu_2099_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1080_fu_34578_p1() {
    mul_ln1118_1080_fu_34578_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF26);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1081_fu_34585_p0() {
    mul_ln1118_1081_fu_34585_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1081_fu_34585_p1() {
    mul_ln1118_1081_fu_34585_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE29);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1082_fu_34592_p0() {
    mul_ln1118_1082_fu_34592_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1082_fu_34592_p1() {
    mul_ln1118_1082_fu_34592_p1 =  (sc_lv<10>) (ap_const_lv28_12D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1083_fu_34599_p0() {
    mul_ln1118_1083_fu_34599_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1083_fu_34599_p1() {
    mul_ln1118_1083_fu_34599_p1 =  (sc_lv<10>) (ap_const_lv28_134);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1084_fu_34606_p0() {
    mul_ln1118_1084_fu_34606_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1084_fu_34606_p1() {
    mul_ln1118_1084_fu_34606_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFD4B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1085_fu_34613_p0() {
    mul_ln1118_1085_fu_34613_p0 =  (sc_lv<18>) (sext_ln1118_78_fu_2310_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1085_fu_34613_p1() {
    mul_ln1118_1085_fu_34613_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF14);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1086_fu_34620_p0() {
    mul_ln1118_1086_fu_34620_p0 =  (sc_lv<18>) (sext_ln1118_84_fu_2347_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1086_fu_34620_p1() {
    mul_ln1118_1086_fu_34620_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF44);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1087_fu_34627_p0() {
    mul_ln1118_1087_fu_34627_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1087_fu_34627_p1() {
    mul_ln1118_1087_fu_34627_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE66);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1088_fu_34634_p0() {
    mul_ln1118_1088_fu_34634_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1088_fu_34634_p1() {
    mul_ln1118_1088_fu_34634_p1 =  (sc_lv<11>) (ap_const_lv28_38B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1089_fu_34641_p0() {
    mul_ln1118_1089_fu_34641_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1089_fu_34641_p1() {
    mul_ln1118_1089_fu_34641_p1 =  (sc_lv<13>) (ap_const_lv28_FFFF703);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_108_fu_27788_p0() {
    mul_ln1118_108_fu_27788_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_108_fu_27788_p1() {
    mul_ln1118_108_fu_27788_p1 =  (sc_lv<10>) (ap_const_lv28_1D3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1090_fu_34648_p0() {
    mul_ln1118_1090_fu_34648_p0 =  (sc_lv<18>) (sext_ln1118_108_fu_2479_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1090_fu_34648_p1() {
    mul_ln1118_1090_fu_34648_p1 =  (sc_lv<8>) (ap_const_lv26_56);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1091_fu_34655_p0() {
    mul_ln1118_1091_fu_34655_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_2500_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1091_fu_34655_p1() {
    mul_ln1118_1091_fu_34655_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCDA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1092_fu_34662_p0() {
    mul_ln1118_1092_fu_34662_p0 =  (sc_lv<18>) (sext_ln1118_120_fu_2549_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1092_fu_34662_p1() {
    mul_ln1118_1092_fu_34662_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF5A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1093_fu_34669_p0() {
    mul_ln1118_1093_fu_34669_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1093_fu_34669_p1() {
    mul_ln1118_1093_fu_34669_p1 =  (sc_lv<11>) (ap_const_lv28_271);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1094_fu_34676_p0() {
    mul_ln1118_1094_fu_34676_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1094_fu_34676_p1() {
    mul_ln1118_1094_fu_34676_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEEB);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1095_fu_34683_p0() {
    mul_ln1118_1095_fu_34683_p0 =  (sc_lv<18>) (sext_ln1118_141_fu_2669_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1095_fu_34683_p1() {
    mul_ln1118_1095_fu_34683_p1 =  (sc_lv<7>) (ap_const_lv25_2C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1096_fu_34690_p0() {
    mul_ln1118_1096_fu_34690_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1096_fu_34690_p1() {
    mul_ln1118_1096_fu_34690_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE41);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1097_fu_34697_p0() {
    mul_ln1118_1097_fu_34697_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1097_fu_34697_p1() {
    mul_ln1118_1097_fu_34697_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFD6E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1098_fu_34704_p0() {
    mul_ln1118_1098_fu_34704_p0 =  (sc_lv<18>) (sext_ln1118_45_fu_2091_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1098_fu_34704_p1() {
    mul_ln1118_1098_fu_34704_p1 =  (sc_lv<10>) (ap_const_lv28_1EF);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1099_fu_34711_p0() {
    mul_ln1118_1099_fu_34711_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1099_fu_34711_p1() {
    mul_ln1118_1099_fu_34711_p1 =  (sc_lv<10>) (ap_const_lv28_190);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_109_fu_27795_p0() {
    mul_ln1118_109_fu_27795_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_109_fu_27795_p1() {
    mul_ln1118_109_fu_27795_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEE9);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1100_fu_34718_p0() {
    mul_ln1118_1100_fu_34718_p0 =  (sc_lv<18>) (sext_ln1118_58_fu_2161_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1100_fu_34718_p1() {
    mul_ln1118_1100_fu_34718_p1 =  (sc_lv<9>) (ap_const_lv27_EC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1101_fu_34725_p0() {
    mul_ln1118_1101_fu_34725_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1101_fu_34725_p1() {
    mul_ln1118_1101_fu_34725_p1 =  (sc_lv<11>) (ap_const_lv28_20E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1102_fu_34732_p0() {
    mul_ln1118_1102_fu_34732_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1102_fu_34732_p1() {
    mul_ln1118_1102_fu_34732_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCFB);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1103_fu_34739_p0() {
    mul_ln1118_1103_fu_34739_p0 =  (sc_lv<18>) (sext_ln1118_70_fu_2240_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1103_fu_34739_p1() {
    mul_ln1118_1103_fu_34739_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF0C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1104_fu_34746_p0() {
    mul_ln1118_1104_fu_34746_p0 =  (sc_lv<18>) (sext_ln1118_78_fu_2310_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1104_fu_34746_p1() {
    mul_ln1118_1104_fu_34746_p1 =  (sc_lv<9>) (ap_const_lv27_E2);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1105_fu_34753_p0() {
    mul_ln1118_1105_fu_34753_p0 =  (sc_lv<18>) (sext_ln1118_83_fu_2343_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1105_fu_34753_p1() {
    mul_ln1118_1105_fu_34753_p1 =  (sc_lv<12>) (ap_const_lv28_FFFF870);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1106_fu_34760_p0() {
    mul_ln1118_1106_fu_34760_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1106_fu_34760_p1() {
    mul_ln1118_1106_fu_34760_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEC9);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1107_fu_34767_p0() {
    mul_ln1118_1107_fu_34767_p0 =  (sc_lv<18>) (sext_ln1118_100_fu_2438_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1107_fu_34767_p1() {
    mul_ln1118_1107_fu_34767_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF5C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1108_fu_34774_p0() {
    mul_ln1118_1108_fu_34774_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1108_fu_34774_p1() {
    mul_ln1118_1108_fu_34774_p1 =  (sc_lv<11>) (ap_const_lv28_20F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1109_fu_34781_p0() {
    mul_ln1118_1109_fu_34781_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_2500_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1109_fu_34781_p1() {
    mul_ln1118_1109_fu_34781_p1 =  (sc_lv<11>) (ap_const_lv28_279);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_110_fu_27802_p0() {
    mul_ln1118_110_fu_27802_p0 =  (sc_lv<18>) (sext_ln1118_138_fu_2657_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_110_fu_27802_p1() {
    mul_ln1118_110_fu_27802_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFD5F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1110_fu_34788_p0() {
    mul_ln1118_1110_fu_34788_p0 =  (sc_lv<18>) (sext_ln1118_120_fu_2549_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1110_fu_34788_p1() {
    mul_ln1118_1110_fu_34788_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF56);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1111_fu_34795_p0() {
    mul_ln1118_1111_fu_34795_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1111_fu_34795_p1() {
    mul_ln1118_1111_fu_34795_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE84);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1112_fu_34802_p0() {
    mul_ln1118_1112_fu_34802_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1112_fu_34802_p1() {
    mul_ln1118_1112_fu_34802_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCF5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1113_fu_34809_p0() {
    mul_ln1118_1113_fu_34809_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1113_fu_34809_p1() {
    mul_ln1118_1113_fu_34809_p1 =  (sc_lv<11>) (ap_const_lv28_2BD);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1114_fu_34816_p0() {
    mul_ln1118_1114_fu_34816_p0 =  (sc_lv<18>) (sext_ln1118_138_fu_2657_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1114_fu_34816_p1() {
    mul_ln1118_1114_fu_34816_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE5C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1115_fu_34823_p0() {
    mul_ln1118_1115_fu_34823_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1115_fu_34823_p1() {
    mul_ln1118_1115_fu_34823_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFD9A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1116_fu_34830_p0() {
    mul_ln1118_1116_fu_34830_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1116_fu_34830_p1() {
    mul_ln1118_1116_fu_34830_p1 =  (sc_lv<11>) (ap_const_lv28_269);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1117_fu_34837_p0() {
    mul_ln1118_1117_fu_34837_p0 =  (sc_lv<18>) (sext_ln1118_45_fu_2091_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1117_fu_34837_p1() {
    mul_ln1118_1117_fu_34837_p1 =  (sc_lv<11>) (ap_const_lv28_250);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1118_fu_34844_p0() {
    mul_ln1118_1118_fu_34844_p0 =  (sc_lv<18>) (sext_ln1118_52_fu_2128_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1118_fu_34844_p1() {
    mul_ln1118_1118_fu_34844_p1 =  (sc_lv<8>) (ap_const_lv26_52);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1119_fu_34851_p0() {
    mul_ln1118_1119_fu_34851_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1119_fu_34851_p1() {
    mul_ln1118_1119_fu_34851_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFC8D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_111_fu_27809_p0() {
    mul_ln1118_111_fu_27809_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_111_fu_27809_p1() {
    mul_ln1118_111_fu_27809_p1 =  (sc_lv<11>) (ap_const_lv28_222);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1120_fu_34858_p0() {
    mul_ln1118_1120_fu_34858_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1120_fu_34858_p1() {
    mul_ln1118_1120_fu_34858_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE2A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1121_fu_34865_p0() {
    mul_ln1118_1121_fu_34865_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1121_fu_34865_p1() {
    mul_ln1118_1121_fu_34865_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE6D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1122_fu_34872_p0() {
    mul_ln1118_1122_fu_34872_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1122_fu_34872_p1() {
    mul_ln1118_1122_fu_34872_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCFC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1123_fu_34879_p0() {
    mul_ln1118_1123_fu_34879_p0 =  (sc_lv<18>) (sext_ln1118_82_fu_2326_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1123_fu_34879_p1() {
    mul_ln1118_1123_fu_34879_p1 =  (sc_lv<11>) (ap_const_lv28_322);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1124_fu_34886_p0() {
    mul_ln1118_1124_fu_34886_p0 =  (sc_lv<18>) (sext_ln1118_83_fu_2343_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1124_fu_34886_p1() {
    mul_ln1118_1124_fu_34886_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEEF);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1125_fu_34893_p0() {
    mul_ln1118_1125_fu_34893_p0 =  (sc_lv<18>) (sext_ln1118_96_fu_2413_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1125_fu_34893_p1() {
    mul_ln1118_1125_fu_34893_p1 =  (sc_lv<9>) (ap_const_lv27_85);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1126_fu_34900_p0() {
    mul_ln1118_1126_fu_34900_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1126_fu_34900_p1() {
    mul_ln1118_1126_fu_34900_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEF6);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1127_fu_34907_p0() {
    mul_ln1118_1127_fu_34907_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1127_fu_34907_p1() {
    mul_ln1118_1127_fu_34907_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFC1E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1128_fu_34914_p0() {
    mul_ln1118_1128_fu_34914_p0 =  (sc_lv<18>) (sext_ln1118_111_fu_2504_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1128_fu_34914_p1() {
    mul_ln1118_1128_fu_34914_p1 =  (sc_lv<8>) (ap_const_lv26_5E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1129_fu_34921_p0() {
    mul_ln1118_1129_fu_34921_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1129_fu_34921_p1() {
    mul_ln1118_1129_fu_34921_p1 =  (sc_lv<10>) (ap_const_lv28_14A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_112_fu_27816_p0() {
    mul_ln1118_112_fu_27816_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_112_fu_27816_p1() {
    mul_ln1118_112_fu_27816_p1 =  (sc_lv<10>) (ap_const_lv28_145);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1130_fu_34928_p0() {
    mul_ln1118_1130_fu_34928_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1130_fu_34928_p1() {
    mul_ln1118_1130_fu_34928_p1 =  (sc_lv<13>) (ap_const_lv28_FFFF4B8);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1131_fu_34935_p0() {
    mul_ln1118_1131_fu_34935_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1131_fu_34935_p1() {
    mul_ln1118_1131_fu_34935_p1 =  (sc_lv<11>) (ap_const_lv28_269);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1132_fu_34942_p0() {
    mul_ln1118_1132_fu_34942_p0 =  (sc_lv<18>) (sext_ln1118_139_fu_2661_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1132_fu_34942_p1() {
    mul_ln1118_1132_fu_34942_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF03);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1133_fu_34949_p0() {
    mul_ln1118_1133_fu_34949_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1133_fu_34949_p1() {
    mul_ln1118_1133_fu_34949_p1 =  (sc_lv<11>) (ap_const_lv28_238);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1134_fu_34956_p0() {
    mul_ln1118_1134_fu_34956_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1134_fu_34956_p1() {
    mul_ln1118_1134_fu_34956_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDED);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1135_fu_34963_p0() {
    mul_ln1118_1135_fu_34963_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1135_fu_34963_p1() {
    mul_ln1118_1135_fu_34963_p1 =  (sc_lv<11>) (ap_const_lv28_297);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1136_fu_34970_p0() {
    mul_ln1118_1136_fu_34970_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1136_fu_34970_p1() {
    mul_ln1118_1136_fu_34970_p1 =  (sc_lv<12>) (ap_const_lv28_FFFFB67);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1137_fu_34977_p0() {
    mul_ln1118_1137_fu_34977_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1137_fu_34977_p1() {
    mul_ln1118_1137_fu_34977_p1 =  (sc_lv<10>) (ap_const_lv28_13E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1138_fu_34984_p0() {
    mul_ln1118_1138_fu_34984_p0 =  (sc_lv<18>) (sext_ln1118_82_fu_2326_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1138_fu_34984_p1() {
    mul_ln1118_1138_fu_34984_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFED0);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1139_fu_34991_p0() {
    mul_ln1118_1139_fu_34991_p0 =  (sc_lv<18>) (sext_ln1118_87_fu_2359_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1139_fu_34991_p1() {
    mul_ln1118_1139_fu_34991_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFFB6);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_113_fu_27823_p0() {
    mul_ln1118_113_fu_27823_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_113_fu_27823_p1() {
    mul_ln1118_113_fu_27823_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCE6);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1140_fu_34998_p0() {
    mul_ln1118_1140_fu_34998_p0 =  (sc_lv<18>) (sext_ln1118_90_fu_2380_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1140_fu_34998_p1() {
    mul_ln1118_1140_fu_34998_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF35);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1141_fu_35005_p0() {
    mul_ln1118_1141_fu_35005_p0 =  (sc_lv<18>) (sext_ln1118_96_fu_2413_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1141_fu_35005_p1() {
    mul_ln1118_1141_fu_35005_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF68);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1142_fu_35012_p0() {
    mul_ln1118_1142_fu_35012_p0 =  (sc_lv<18>) (sext_ln1118_100_fu_2438_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1142_fu_35012_p1() {
    mul_ln1118_1142_fu_35012_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF54);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1143_fu_35019_p0() {
    mul_ln1118_1143_fu_35019_p0 =  (sc_lv<18>) (sext_ln1118_109_fu_2483_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1143_fu_35019_p1() {
    mul_ln1118_1143_fu_35019_p1 =  (sc_lv<9>) (ap_const_lv27_9B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1144_fu_35026_p0() {
    mul_ln1118_1144_fu_35026_p0 =  (sc_lv<18>) (sext_ln1118_111_fu_2504_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1144_fu_35026_p1() {
    mul_ln1118_1144_fu_35026_p1 =  (sc_lv<8>) (ap_const_lv26_68);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1145_fu_35033_p0() {
    mul_ln1118_1145_fu_35033_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1145_fu_35033_p1() {
    mul_ln1118_1145_fu_35033_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE90);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1146_fu_35040_p0() {
    mul_ln1118_1146_fu_35040_p0 =  (sc_lv<18>) (sext_ln1118_124_fu_2574_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1146_fu_35040_p1() {
    mul_ln1118_1146_fu_35040_p1 =  (sc_lv<8>) (ap_const_lv26_45);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1147_fu_35047_p0() {
    mul_ln1118_1147_fu_35047_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1147_fu_35047_p1() {
    mul_ln1118_1147_fu_35047_p1 =  (sc_lv<11>) (ap_const_lv28_22A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1148_fu_35054_p0() {
    mul_ln1118_1148_fu_35054_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1148_fu_35054_p1() {
    mul_ln1118_1148_fu_35054_p1 =  (sc_lv<10>) (ap_const_lv28_113);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1149_fu_35061_p0() {
    mul_ln1118_1149_fu_35061_p0 =  (sc_lv<18>) (sext_ln1118_43_fu_2074_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1149_fu_35061_p1() {
    mul_ln1118_1149_fu_35061_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF0E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_114_fu_27830_p0() {
    mul_ln1118_114_fu_27830_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_114_fu_27830_p1() {
    mul_ln1118_114_fu_27830_p1 =  (sc_lv<11>) (ap_const_lv28_301);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1150_fu_35068_p0() {
    mul_ln1118_1150_fu_35068_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1150_fu_35068_p1() {
    mul_ln1118_1150_fu_35068_p1 =  (sc_lv<10>) (ap_const_lv28_1D4);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1151_fu_35075_p0() {
    mul_ln1118_1151_fu_35075_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1151_fu_35075_p1() {
    mul_ln1118_1151_fu_35075_p1 =  (sc_lv<11>) (ap_const_lv28_31F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1152_fu_35082_p0() {
    mul_ln1118_1152_fu_35082_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1152_fu_35082_p1() {
    mul_ln1118_1152_fu_35082_p1 =  (sc_lv<11>) (ap_const_lv28_2BF);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1153_fu_35089_p0() {
    mul_ln1118_1153_fu_35089_p0 =  (sc_lv<18>) (sext_ln1118_77_fu_2306_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1153_fu_35089_p1() {
    mul_ln1118_1153_fu_35089_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFFAC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1154_fu_35096_p0() {
    mul_ln1118_1154_fu_35096_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1154_fu_35096_p1() {
    mul_ln1118_1154_fu_35096_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEA1);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1155_fu_35103_p0() {
    mul_ln1118_1155_fu_35103_p0 =  (sc_lv<18>) (sext_ln1118_98_fu_2421_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1155_fu_35103_p1() {
    mul_ln1118_1155_fu_35103_p1 =  (sc_lv<7>) (ap_const_lv25_1FFFFCC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1156_fu_35110_p0() {
    mul_ln1118_1156_fu_35110_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1156_fu_35110_p1() {
    mul_ln1118_1156_fu_35110_p1 =  (sc_lv<10>) (ap_const_lv28_17D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1157_fu_35117_p0() {
    mul_ln1118_1157_fu_35117_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1157_fu_35117_p1() {
    mul_ln1118_1157_fu_35117_p1 =  (sc_lv<10>) (ap_const_lv28_121);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1158_fu_35124_p0() {
    mul_ln1118_1158_fu_35124_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_2500_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1158_fu_35124_p1() {
    mul_ln1118_1158_fu_35124_p1 =  (sc_lv<10>) (ap_const_lv28_1B6);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1159_fu_35131_p0() {
    mul_ln1118_1159_fu_35131_p0 =  (sc_lv<18>) (sext_ln1118_120_fu_2549_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1159_fu_35131_p1() {
    mul_ln1118_1159_fu_35131_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF2E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_115_fu_27837_p0() {
    mul_ln1118_115_fu_27837_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_115_fu_27837_p1() {
    mul_ln1118_115_fu_27837_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCBC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1160_fu_35138_p0() {
    mul_ln1118_1160_fu_35138_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1160_fu_35138_p1() {
    mul_ln1118_1160_fu_35138_p1 =  (sc_lv<12>) (ap_const_lv28_470);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1161_fu_35145_p0() {
    mul_ln1118_1161_fu_35145_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1161_fu_35145_p1() {
    mul_ln1118_1161_fu_35145_p1 =  (sc_lv<11>) (ap_const_lv28_317);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1162_fu_35152_p1() {
    mul_ln1118_1162_fu_35152_p1 =  (sc_lv<6>) (ap_const_lv24_FFFFE7);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1163_fu_35159_p0() {
    mul_ln1118_1163_fu_35159_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_1163_fu_35159_p1() {
    mul_ln1118_1163_fu_35159_p1 =  (sc_lv<11>) (ap_const_lv28_277);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_116_fu_27844_p0() {
    mul_ln1118_116_fu_27844_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_116_fu_27844_p1() {
    mul_ln1118_116_fu_27844_p1 =  (sc_lv<10>) (ap_const_lv28_1A8);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_117_fu_27851_p0() {
    mul_ln1118_117_fu_27851_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_117_fu_27851_p1() {
    mul_ln1118_117_fu_27851_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE18);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_118_fu_27858_p0() {
    mul_ln1118_118_fu_27858_p0 =  (sc_lv<18>) (sext_ln1118_82_fu_2326_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_118_fu_27858_p1() {
    mul_ln1118_118_fu_27858_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCB3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_119_fu_27865_p0() {
    mul_ln1118_119_fu_27865_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_119_fu_27865_p1() {
    mul_ln1118_119_fu_27865_p1 =  (sc_lv<11>) (ap_const_lv28_20C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_120_fu_27872_p0() {
    mul_ln1118_120_fu_27872_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_120_fu_27872_p1() {
    mul_ln1118_120_fu_27872_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE36);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_121_fu_27879_p1() {
    mul_ln1118_121_fu_27879_p1 =  (sc_lv<6>) (ap_const_lv24_FFFFE3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_122_fu_27886_p0() {
    mul_ln1118_122_fu_27886_p0 =  (sc_lv<18>) (sext_ln1118_109_fu_2483_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_122_fu_27886_p1() {
    mul_ln1118_122_fu_27886_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF76);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_123_fu_27893_p0() {
    mul_ln1118_123_fu_27893_p0 =  (sc_lv<18>) (sext_ln1118_113_fu_2512_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_123_fu_27893_p1() {
    mul_ln1118_123_fu_27893_p1 =  (sc_lv<7>) (ap_const_lv25_1FFFFC3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_124_fu_27900_p0() {
    mul_ln1118_124_fu_27900_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_124_fu_27900_p1() {
    mul_ln1118_124_fu_27900_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDCA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_125_fu_27907_p0() {
    mul_ln1118_125_fu_27907_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_125_fu_27907_p1() {
    mul_ln1118_125_fu_27907_p1 =  (sc_lv<11>) (ap_const_lv28_387);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_126_fu_27914_p0() {
    mul_ln1118_126_fu_27914_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_126_fu_27914_p1() {
    mul_ln1118_126_fu_27914_p1 =  (sc_lv<11>) (ap_const_lv28_239);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_127_fu_27921_p0() {
    mul_ln1118_127_fu_27921_p0 =  (sc_lv<18>) (sext_ln1118_143_fu_2677_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_127_fu_27921_p1() {
    mul_ln1118_127_fu_27921_p1 =  (sc_lv<8>) (ap_const_lv26_58);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_128_fu_27928_p0() {
    mul_ln1118_128_fu_27928_p0 =  (sc_lv<18>) (sext_ln1118_43_fu_2074_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_128_fu_27928_p1() {
    mul_ln1118_128_fu_27928_p1 =  (sc_lv<9>) (ap_const_lv27_B4);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_129_fu_27935_p0() {
    mul_ln1118_129_fu_27935_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_129_fu_27935_p1() {
    mul_ln1118_129_fu_27935_p1 =  (sc_lv<11>) (ap_const_lv28_31B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_130_fu_27942_p0() {
    mul_ln1118_130_fu_27942_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_130_fu_27942_p1() {
    mul_ln1118_130_fu_27942_p1 =  (sc_lv<12>) (ap_const_lv28_FFFFB70);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_131_fu_27949_p0() {
    mul_ln1118_131_fu_27949_p0 =  (sc_lv<18>) (sext_ln1118_63_fu_2199_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_131_fu_27949_p1() {
    mul_ln1118_131_fu_27949_p1 =  (sc_lv<9>) (ap_const_lv27_83);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_132_fu_27956_p0() {
    mul_ln1118_132_fu_27956_p0 =  (sc_lv<18>) (sext_ln1118_72_fu_2248_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_132_fu_27956_p1() {
    mul_ln1118_132_fu_27956_p1 =  (sc_lv<7>) (ap_const_lv25_33);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_133_fu_27963_p0() {
    mul_ln1118_133_fu_27963_p0 =  (sc_lv<18>) (sext_ln1118_78_fu_2310_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_133_fu_27963_p1() {
    mul_ln1118_133_fu_27963_p1 =  (sc_lv<9>) (ap_const_lv27_D3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_134_fu_27970_p0() {
    mul_ln1118_134_fu_27970_p0 =  (sc_lv<18>) (sext_ln1118_84_fu_2347_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_134_fu_27970_p1() {
    mul_ln1118_134_fu_27970_p1 =  (sc_lv<9>) (ap_const_lv27_91);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_135_fu_27977_p0() {
    mul_ln1118_135_fu_27977_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_135_fu_27977_p1() {
    mul_ln1118_135_fu_27977_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE25);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_136_fu_27984_p0() {
    mul_ln1118_136_fu_27984_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_136_fu_27984_p1() {
    mul_ln1118_136_fu_27984_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE1E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_137_fu_27991_p0() {
    mul_ln1118_137_fu_27991_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_137_fu_27991_p1() {
    mul_ln1118_137_fu_27991_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE84);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_138_fu_27998_p0() {
    mul_ln1118_138_fu_27998_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_138_fu_27998_p1() {
    mul_ln1118_138_fu_27998_p1 =  (sc_lv<10>) (ap_const_lv28_116);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_139_fu_28005_p0() {
    mul_ln1118_139_fu_28005_p0 =  (sc_lv<18>) (sext_ln1118_112_fu_2508_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_139_fu_28005_p1() {
    mul_ln1118_139_fu_28005_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF58);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_140_fu_28012_p0() {
    mul_ln1118_140_fu_28012_p0 =  (sc_lv<18>) (sext_ln1118_120_fu_2549_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_140_fu_28012_p1() {
    mul_ln1118_140_fu_28012_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF30);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_141_fu_28019_p0() {
    mul_ln1118_141_fu_28019_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_141_fu_28019_p1() {
    mul_ln1118_141_fu_28019_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEEE);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_142_fu_28026_p0() {
    mul_ln1118_142_fu_28026_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_142_fu_28026_p1() {
    mul_ln1118_142_fu_28026_p1 =  (sc_lv<11>) (ap_const_lv28_219);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_143_fu_28033_p0() {
    mul_ln1118_143_fu_28033_p0 =  (sc_lv<18>) (sext_ln1118_134_fu_2632_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_143_fu_28033_p1() {
    mul_ln1118_143_fu_28033_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFFA5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_144_fu_28040_p0() {
    mul_ln1118_144_fu_28040_p0 =  (sc_lv<18>) (sext_ln1118_44_fu_2087_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_144_fu_28040_p1() {
    mul_ln1118_144_fu_28040_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFFAF);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_145_fu_28047_p0() {
    mul_ln1118_145_fu_28047_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_145_fu_28047_p1() {
    mul_ln1118_145_fu_28047_p1 =  (sc_lv<10>) (ap_const_lv28_1D3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_146_fu_28054_p0() {
    mul_ln1118_146_fu_28054_p0 =  (sc_lv<18>) (sext_ln1118_58_fu_2161_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_146_fu_28054_p1() {
    mul_ln1118_146_fu_28054_p1 =  (sc_lv<9>) (ap_const_lv27_EE);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_147_fu_28061_p0() {
    mul_ln1118_147_fu_28061_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_147_fu_28061_p1() {
    mul_ln1118_147_fu_28061_p1 =  (sc_lv<12>) (ap_const_lv28_531);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_148_fu_28068_p0() {
    mul_ln1118_148_fu_28068_p0 =  (sc_lv<18>) (sext_ln1118_64_fu_2203_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_148_fu_28068_p1() {
    mul_ln1118_148_fu_28068_p1 =  (sc_lv<7>) (ap_const_lv25_1FFFFCE);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_149_fu_28075_p0() {
    mul_ln1118_149_fu_28075_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_149_fu_28075_p1() {
    mul_ln1118_149_fu_28075_p1 =  (sc_lv<11>) (ap_const_lv28_38F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_150_fu_28082_p0() {
    mul_ln1118_150_fu_28082_p0 =  (sc_lv<18>) (sext_ln1118_82_fu_2326_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_150_fu_28082_p1() {
    mul_ln1118_150_fu_28082_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFD4A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_151_fu_28089_p0() {
    mul_ln1118_151_fu_28089_p0 =  (sc_lv<18>) (sext_ln1118_86_fu_2355_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_151_fu_28089_p1() {
    mul_ln1118_151_fu_28089_p1 =  (sc_lv<6>) (ap_const_lv24_19);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_152_fu_28096_p0() {
    mul_ln1118_152_fu_28096_p0 =  (sc_lv<18>) (sext_ln1118_93_fu_2392_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_152_fu_28096_p1() {
    mul_ln1118_152_fu_28096_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFF87);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_153_fu_28103_p0() {
    mul_ln1118_153_fu_28103_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_153_fu_28103_p1() {
    mul_ln1118_153_fu_28103_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE86);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_154_fu_28110_p0() {
    mul_ln1118_154_fu_28110_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_154_fu_28110_p1() {
    mul_ln1118_154_fu_28110_p1 =  (sc_lv<10>) (ap_const_lv28_10D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_155_fu_28117_p0() {
    mul_ln1118_155_fu_28117_p0 =  (sc_lv<18>) (sext_ln1118_112_fu_2508_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_155_fu_28117_p1() {
    mul_ln1118_155_fu_28117_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF3B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_156_fu_28124_p0() {
    mul_ln1118_156_fu_28124_p0 =  (sc_lv<18>) (sext_ln1118_117_fu_2537_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_156_fu_28124_p1() {
    mul_ln1118_156_fu_28124_p1 =  (sc_lv<8>) (ap_const_lv26_5E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_157_fu_28131_p0() {
    mul_ln1118_157_fu_28131_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_157_fu_28131_p1() {
    mul_ln1118_157_fu_28131_p1 =  (sc_lv<13>) (ap_const_lv28_943);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_158_fu_28138_p0() {
    mul_ln1118_158_fu_28138_p0 =  (sc_lv<18>) (sext_ln1118_130_fu_2607_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_158_fu_28138_p1() {
    mul_ln1118_158_fu_28138_p1 =  (sc_lv<9>) (ap_const_lv27_E8);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_159_fu_28145_p0() {
    mul_ln1118_159_fu_28145_p0 =  (sc_lv<18>) (sext_ln1118_137_fu_2644_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_159_fu_28145_p1() {
    mul_ln1118_159_fu_28145_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF7A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_160_fu_28152_p0() {
    mul_ln1118_160_fu_28152_p0 =  (sc_lv<18>) (sext_ln1118_138_fu_2657_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_160_fu_28152_p1() {
    mul_ln1118_160_fu_28152_p1 =  (sc_lv<10>) (ap_const_lv28_106);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_161_fu_28159_p0() {
    mul_ln1118_161_fu_28159_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_161_fu_28159_p1() {
    mul_ln1118_161_fu_28159_p1 =  (sc_lv<11>) (ap_const_lv28_244);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_162_fu_28166_p0() {
    mul_ln1118_162_fu_28166_p0 =  (sc_lv<18>) (sext_ln1118_43_fu_2074_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_162_fu_28166_p1() {
    mul_ln1118_162_fu_28166_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF5F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_163_fu_28173_p0() {
    mul_ln1118_163_fu_28173_p0 =  (sc_lv<18>) (sext_ln1118_51_fu_2124_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_163_fu_28173_p1() {
    mul_ln1118_163_fu_28173_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF6A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_164_fu_28180_p0() {
    mul_ln1118_164_fu_28180_p0 =  (sc_lv<18>) (sext_ln1118_55_fu_2149_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_164_fu_28180_p1() {
    mul_ln1118_164_fu_28180_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFF91);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_165_fu_28187_p0() {
    mul_ln1118_165_fu_28187_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_165_fu_28187_p1() {
    mul_ln1118_165_fu_28187_p1 =  (sc_lv<10>) (ap_const_lv28_1CF);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_166_fu_28194_p0() {
    mul_ln1118_166_fu_28194_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_166_fu_28194_p1() {
    mul_ln1118_166_fu_28194_p1 =  (sc_lv<11>) (ap_const_lv28_2E9);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_167_fu_28201_p0() {
    mul_ln1118_167_fu_28201_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_167_fu_28201_p1() {
    mul_ln1118_167_fu_28201_p1 =  (sc_lv<12>) (ap_const_lv28_476);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_168_fu_28208_p0() {
    mul_ln1118_168_fu_28208_p0 =  (sc_lv<18>) (sext_ln1118_78_fu_2310_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_168_fu_28208_p1() {
    mul_ln1118_168_fu_28208_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF3F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_169_fu_28215_p0() {
    mul_ln1118_169_fu_28215_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_169_fu_28215_p1() {
    mul_ln1118_169_fu_28215_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCAB);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_170_fu_28222_p0() {
    mul_ln1118_170_fu_28222_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_170_fu_28222_p1() {
    mul_ln1118_170_fu_28222_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDAC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_171_fu_28229_p0() {
    mul_ln1118_171_fu_28229_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_171_fu_28229_p1() {
    mul_ln1118_171_fu_28229_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFC0C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_172_fu_28236_p0() {
    mul_ln1118_172_fu_28236_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_172_fu_28236_p1() {
    mul_ln1118_172_fu_28236_p1 =  (sc_lv<12>) (ap_const_lv28_FFFFA21);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_173_fu_4671_p0() {
    mul_ln1118_173_fu_4671_p0 =  (sc_lv<18>) (sext_ln1118_131_fu_2611_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_173_fu_4671_p2() {
    mul_ln1118_173_fu_4671_p2 = (!mul_ln1118_173_fu_4671_p0.read().is_01() || !ap_const_lv23_D.is_01())? sc_lv<23>(): sc_bigint<18>(mul_ln1118_173_fu_4671_p0.read()) * sc_biguint<23>(ap_const_lv23_D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_174_fu_28243_p0() {
    mul_ln1118_174_fu_28243_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_174_fu_28243_p1() {
    mul_ln1118_174_fu_28243_p1 =  (sc_lv<11>) (ap_const_lv28_211);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_175_fu_28250_p0() {
    mul_ln1118_175_fu_28250_p0 =  (sc_lv<18>) (sext_ln1118_138_fu_2657_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_175_fu_28250_p1() {
    mul_ln1118_175_fu_28250_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE3C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_176_fu_28257_p0() {
    mul_ln1118_176_fu_28257_p0 =  (sc_lv<18>) (sext_ln1118_147_fu_2706_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_176_fu_28257_p1() {
    mul_ln1118_176_fu_28257_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFFA5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_177_fu_28264_p0() {
    mul_ln1118_177_fu_28264_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_177_fu_28264_p1() {
    mul_ln1118_177_fu_28264_p1 =  (sc_lv<11>) (ap_const_lv28_267);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_178_fu_28271_p0() {
    mul_ln1118_178_fu_28271_p0 =  (sc_lv<18>) (sext_ln1118_47_fu_2099_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_178_fu_28271_p1() {
    mul_ln1118_178_fu_28271_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF46);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_179_fu_28278_p0() {
    mul_ln1118_179_fu_28278_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_179_fu_28278_p1() {
    mul_ln1118_179_fu_28278_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCF4);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_180_fu_28285_p0() {
    mul_ln1118_180_fu_28285_p0 =  (sc_lv<18>) (sext_ln1118_58_fu_2161_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_180_fu_28285_p1() {
    mul_ln1118_180_fu_28285_p1 =  (sc_lv<9>) (ap_const_lv27_A1);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_181_fu_28292_p0() {
    mul_ln1118_181_fu_28292_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_181_fu_28292_p1() {
    mul_ln1118_181_fu_28292_p1 =  (sc_lv<12>) (ap_const_lv28_FFFFA48);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_182_fu_28299_p0() {
    mul_ln1118_182_fu_28299_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_182_fu_28299_p1() {
    mul_ln1118_182_fu_28299_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDAB);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_183_fu_28306_p0() {
    mul_ln1118_183_fu_28306_p0 =  (sc_lv<18>) (sext_ln1118_82_fu_2326_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_183_fu_28306_p1() {
    mul_ln1118_183_fu_28306_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE06);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_184_fu_28313_p0() {
    mul_ln1118_184_fu_28313_p0 =  (sc_lv<18>) (sext_ln1118_93_fu_2392_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_184_fu_28313_p1() {
    mul_ln1118_184_fu_28313_p1 =  (sc_lv<8>) (ap_const_lv26_6A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_185_fu_28320_p0() {
    mul_ln1118_185_fu_28320_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_185_fu_28320_p1() {
    mul_ln1118_185_fu_28320_p1 =  (sc_lv<11>) (ap_const_lv28_2B8);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_186_fu_28327_p0() {
    mul_ln1118_186_fu_28327_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_186_fu_28327_p1() {
    mul_ln1118_186_fu_28327_p1 =  (sc_lv<10>) (ap_const_lv28_19B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_187_fu_28334_p0() {
    mul_ln1118_187_fu_28334_p0 =  (sc_lv<18>) (sext_ln1118_107_fu_2475_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_187_fu_28334_p1() {
    mul_ln1118_187_fu_28334_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFEF2);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_188_fu_28341_p0() {
    mul_ln1118_188_fu_28341_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_2500_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_188_fu_28341_p1() {
    mul_ln1118_188_fu_28341_p1 =  (sc_lv<12>) (ap_const_lv28_4B5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_189_fu_28348_p0() {
    mul_ln1118_189_fu_28348_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_189_fu_28348_p1() {
    mul_ln1118_189_fu_28348_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE8C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_190_fu_28355_p0() {
    mul_ln1118_190_fu_28355_p0 =  (sc_lv<18>) (sext_ln1118_124_fu_2574_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_190_fu_28355_p1() {
    mul_ln1118_190_fu_28355_p1 =  (sc_lv<8>) (ap_const_lv26_66);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_191_fu_28362_p0() {
    mul_ln1118_191_fu_28362_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_191_fu_28362_p1() {
    mul_ln1118_191_fu_28362_p1 =  (sc_lv<12>) (ap_const_lv28_4F4);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_192_fu_28369_p0() {
    mul_ln1118_192_fu_28369_p0 =  (sc_lv<18>) (sext_ln1118_139_fu_2661_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_192_fu_28369_p1() {
    mul_ln1118_192_fu_28369_p1 =  (sc_lv<9>) (ap_const_lv27_CC);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_193_fu_28376_p0() {
    mul_ln1118_193_fu_28376_p0 =  (sc_lv<18>) (sext_ln1118_144_fu_2694_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_193_fu_28376_p1() {
    mul_ln1118_193_fu_28376_p1 =  (sc_lv<10>) (ap_const_lv28_1D2);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_194_fu_28383_p0() {
    mul_ln1118_194_fu_28383_p0 =  (sc_lv<18>) (sext_ln1118_43_fu_2074_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_194_fu_28383_p1() {
    mul_ln1118_194_fu_28383_p1 =  (sc_lv<9>) (ap_const_lv27_8D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_195_fu_28390_p0() {
    mul_ln1118_195_fu_28390_p0 =  (sc_lv<18>) (sext_ln1118_44_fu_2087_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_195_fu_28390_p1() {
    mul_ln1118_195_fu_28390_p1 =  (sc_lv<8>) (ap_const_lv26_5A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_196_fu_28397_p0() {
    mul_ln1118_196_fu_28397_p0 =  (sc_lv<18>) (sext_ln1118_52_fu_2128_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_196_fu_28397_p1() {
    mul_ln1118_196_fu_28397_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFFA9);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_197_fu_28404_p0() {
    mul_ln1118_197_fu_28404_p0 =  (sc_lv<18>) (sext_ln1118_53_fu_2141_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_197_fu_28404_p1() {
    mul_ln1118_197_fu_28404_p1 =  (sc_lv<7>) (ap_const_lv25_31);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_198_fu_28411_p0() {
    mul_ln1118_198_fu_28411_p0 =  (sc_lv<18>) (sext_ln1118_59_fu_2174_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_198_fu_28411_p1() {
    mul_ln1118_198_fu_28411_p1 =  (sc_lv<8>) (ap_const_lv26_71);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_199_fu_28418_p0() {
    mul_ln1118_199_fu_28418_p0 =  (sc_lv<18>) (sext_ln1118_70_fu_2240_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_199_fu_28418_p1() {
    mul_ln1118_199_fu_28418_p1 =  (sc_lv<9>) (ap_const_lv27_9B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_200_fu_28425_p0() {
    mul_ln1118_200_fu_28425_p0 =  (sc_lv<18>) (sext_ln1118_77_fu_2306_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_200_fu_28425_p1() {
    mul_ln1118_200_fu_28425_p1 =  (sc_lv<8>) (ap_const_lv26_4F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_201_fu_28432_p0() {
    mul_ln1118_201_fu_28432_p0 =  (sc_lv<18>) (sext_ln1118_85_fu_2351_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_201_fu_28432_p1() {
    mul_ln1118_201_fu_28432_p1 =  (sc_lv<7>) (ap_const_lv25_1FFFFC5);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_202_fu_28439_p0() {
    mul_ln1118_202_fu_28439_p0 =  (sc_lv<18>) (sext_ln1118_92_fu_2388_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_202_fu_28439_p1() {
    mul_ln1118_202_fu_28439_p1 =  (sc_lv<6>) (ap_const_lv24_19);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_203_fu_28446_p0() {
    mul_ln1118_203_fu_28446_p0 =  (sc_lv<18>) (sext_ln1118_96_fu_2413_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_203_fu_28446_p1() {
    mul_ln1118_203_fu_28446_p1 =  (sc_lv<9>) (ap_const_lv27_C2);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_204_fu_28453_p0() {
    mul_ln1118_204_fu_28453_p0 =  (sc_lv<18>) (sext_ln1118_111_fu_2504_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_204_fu_28453_p1() {
    mul_ln1118_204_fu_28453_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFFB1);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_205_fu_28460_p0() {
    mul_ln1118_205_fu_28460_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_205_fu_28460_p1() {
    mul_ln1118_205_fu_28460_p1 =  (sc_lv<10>) (ap_const_lv28_194);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_206_fu_28467_p0() {
    mul_ln1118_206_fu_28467_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_206_fu_28467_p1() {
    mul_ln1118_206_fu_28467_p1 =  (sc_lv<10>) (ap_const_lv28_154);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_207_fu_28474_p0() {
    mul_ln1118_207_fu_28474_p0 =  (sc_lv<18>) (sext_ln1118_147_fu_2706_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_207_fu_28474_p1() {
    mul_ln1118_207_fu_28474_p1 =  (sc_lv<8>) (ap_const_lv26_49);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_208_fu_28481_p0() {
    mul_ln1118_208_fu_28481_p0 =  (sc_lv<18>) (sext_ln1118_47_fu_2099_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_208_fu_28481_p1() {
    mul_ln1118_208_fu_28481_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF55);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_209_fu_28488_p0() {
    mul_ln1118_209_fu_28488_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_209_fu_28488_p1() {
    mul_ln1118_209_fu_28488_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCDF);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_210_fu_28495_p0() {
    mul_ln1118_210_fu_28495_p0 =  (sc_lv<18>) (sext_ln1118_57_fu_2157_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_210_fu_28495_p1() {
    mul_ln1118_210_fu_28495_p1 =  (sc_lv<11>) (ap_const_lv28_257);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_211_fu_28502_p0() {
    mul_ln1118_211_fu_28502_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_211_fu_28502_p1() {
    mul_ln1118_211_fu_28502_p1 =  (sc_lv<12>) (ap_const_lv28_FFFFA92);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_212_fu_28509_p0() {
    mul_ln1118_212_fu_28509_p0 =  (sc_lv<18>) (sext_ln1118_63_fu_2199_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_212_fu_28509_p1() {
    mul_ln1118_212_fu_28509_p1 =  (sc_lv<9>) (ap_const_lv27_FA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_213_fu_28516_p0() {
    mul_ln1118_213_fu_28516_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_213_fu_28516_p1() {
    mul_ln1118_213_fu_28516_p1 =  (sc_lv<10>) (ap_const_lv28_138);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_214_fu_28523_p1() {
    mul_ln1118_214_fu_28523_p1 =  (sc_lv<6>) (ap_const_lv24_1B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_215_fu_28530_p0() {
    mul_ln1118_215_fu_28530_p0 =  (sc_lv<18>) (sext_ln1118_87_fu_2359_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_215_fu_28530_p1() {
    mul_ln1118_215_fu_28530_p1 =  (sc_lv<8>) (ap_const_lv26_3FFFF89);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_216_fu_28537_p0() {
    mul_ln1118_216_fu_28537_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_216_fu_28537_p1() {
    mul_ln1118_216_fu_28537_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDD6);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_217_fu_28544_p0() {
    mul_ln1118_217_fu_28544_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_217_fu_28544_p1() {
    mul_ln1118_217_fu_28544_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDAA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_218_fu_28551_p0() {
    mul_ln1118_218_fu_28551_p0 =  (sc_lv<18>) (sext_ln1118_101_fu_2442_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_218_fu_28551_p1() {
    mul_ln1118_218_fu_28551_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFED4);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_219_fu_28558_p0() {
    mul_ln1118_219_fu_28558_p0 =  (sc_lv<18>) (sext_ln1118_106_fu_2471_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_219_fu_28558_p1() {
    mul_ln1118_219_fu_28558_p1 =  (sc_lv<7>) (ap_const_lv25_26);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_220_fu_28565_p0() {
    mul_ln1118_220_fu_28565_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_220_fu_28565_p1() {
    mul_ln1118_220_fu_28565_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE0A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_221_fu_28572_p0() {
    mul_ln1118_221_fu_28572_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_221_fu_28572_p1() {
    mul_ln1118_221_fu_28572_p1 =  (sc_lv<11>) (ap_const_lv28_244);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_222_fu_28579_p0() {
    mul_ln1118_222_fu_28579_p0 =  (sc_lv<18>) (sext_ln1118_139_fu_2661_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_222_fu_28579_p1() {
    mul_ln1118_222_fu_28579_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF7D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_223_fu_28586_p0() {
    mul_ln1118_223_fu_28586_p0 =  (sc_lv<18>) (sext_ln1118_147_fu_2706_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_223_fu_28586_p1() {
    mul_ln1118_223_fu_28586_p1 =  (sc_lv<8>) (ap_const_lv26_4A);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_224_fu_28593_p0() {
    mul_ln1118_224_fu_28593_p0 =  (sc_lv<18>) (sext_ln1118_41_fu_2066_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_224_fu_28593_p1() {
    mul_ln1118_224_fu_28593_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFD8E);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_225_fu_28600_p0() {
    mul_ln1118_225_fu_28600_p0 =  (sc_lv<18>) (sext_ln1118_47_fu_2099_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_225_fu_28600_p1() {
    mul_ln1118_225_fu_28600_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF39);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_226_fu_28607_p0() {
    mul_ln1118_226_fu_28607_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_226_fu_28607_p1() {
    mul_ln1118_226_fu_28607_p1 =  (sc_lv<10>) (ap_const_lv28_1EF);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_227_fu_28614_p0() {
    mul_ln1118_227_fu_28614_p0 =  (sc_lv<18>) (sext_ln1118_58_fu_2161_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_227_fu_28614_p1() {
    mul_ln1118_227_fu_28614_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF5C);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_228_fu_28621_p0() {
    mul_ln1118_228_fu_28621_p0 =  (sc_lv<18>) (sext_ln1118_60_fu_2178_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_228_fu_28621_p1() {
    mul_ln1118_228_fu_28621_p1 =  (sc_lv<12>) (ap_const_lv28_418);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_229_fu_28628_p0() {
    mul_ln1118_229_fu_28628_p0 =  (sc_lv<18>) (sext_ln1118_62_fu_2195_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_229_fu_28628_p1() {
    mul_ln1118_229_fu_28628_p1 =  (sc_lv<10>) (ap_const_lv28_138);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_230_fu_28635_p0() {
    mul_ln1118_230_fu_28635_p0 =  (sc_lv<18>) (sext_ln1118_68_fu_2232_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_230_fu_28635_p1() {
    mul_ln1118_230_fu_28635_p1 =  (sc_lv<10>) (ap_const_lv28_145);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_231_fu_28642_p0() {
    mul_ln1118_231_fu_28642_p0 =  (sc_lv<18>) (sext_ln1118_78_fu_2310_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_231_fu_28642_p1() {
    mul_ln1118_231_fu_28642_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF51);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_232_fu_28649_p0() {
    mul_ln1118_232_fu_28649_p0 =  (sc_lv<18>) (sext_ln1118_83_fu_2343_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_232_fu_28649_p1() {
    mul_ln1118_232_fu_28649_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFD56);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_233_fu_28656_p0() {
    mul_ln1118_233_fu_28656_p0 =  (sc_lv<18>) (sext_ln1118_91_fu_2384_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_233_fu_28656_p1() {
    mul_ln1118_233_fu_28656_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFDC7);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_234_fu_28663_p0() {
    mul_ln1118_234_fu_28663_p0 =  (sc_lv<18>) (sext_ln1118_99_fu_2425_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_234_fu_28663_p1() {
    mul_ln1118_234_fu_28663_p1 =  (sc_lv<11>) (ap_const_lv28_361);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_235_fu_28670_p0() {
    mul_ln1118_235_fu_28670_p0 =  (sc_lv<18>) (sext_ln1118_102_fu_2446_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_235_fu_28670_p1() {
    mul_ln1118_235_fu_28670_p1 =  (sc_lv<7>) (ap_const_lv25_37);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_236_fu_28677_p0() {
    mul_ln1118_236_fu_28677_p0 =  (sc_lv<18>) (sext_ln1118_110_fu_2500_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_236_fu_28677_p1() {
    mul_ln1118_236_fu_28677_p1 =  (sc_lv<10>) (ap_const_lv28_1AB);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_237_fu_28684_p0() {
    mul_ln1118_237_fu_28684_p0 =  (sc_lv<18>) (sext_ln1118_118_fu_2541_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_237_fu_28684_p1() {
    mul_ln1118_237_fu_28684_p1 =  (sc_lv<10>) (ap_const_lv28_FFFFE64);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_238_fu_28691_p0() {
    mul_ln1118_238_fu_28691_p0 =  (sc_lv<18>) (sext_ln1118_125_fu_2578_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_238_fu_28691_p1() {
    mul_ln1118_238_fu_28691_p1 =  (sc_lv<10>) (ap_const_lv28_13F);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_239_fu_28698_p0() {
    mul_ln1118_239_fu_28698_p0 =  (sc_lv<18>) (sext_ln1118_128_fu_2599_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_239_fu_28698_p1() {
    mul_ln1118_239_fu_28698_p1 =  (sc_lv<11>) (ap_const_lv28_FFFFCB7);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_240_fu_28705_p0() {
    mul_ln1118_240_fu_28705_p0 =  (sc_lv<18>) (sext_ln1118_133_fu_2628_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_240_fu_28705_p1() {
    mul_ln1118_240_fu_28705_p1 =  (sc_lv<11>) (ap_const_lv28_2E3);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_241_fu_28712_p0() {
    mul_ln1118_241_fu_28712_p0 =  (sc_lv<18>) (sext_ln1118_139_fu_2661_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_241_fu_28712_p1() {
    mul_ln1118_241_fu_28712_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF2B);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_242_fu_28719_p0() {
    mul_ln1118_242_fu_28719_p0 =  (sc_lv<18>) (sext_ln1118_146_fu_2702_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_242_fu_28719_p1() {
    mul_ln1118_242_fu_28719_p1 =  (sc_lv<9>) (ap_const_lv27_CF);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_243_fu_28726_p0() {
    mul_ln1118_243_fu_28726_p0 =  (sc_lv<18>) (sext_ln1118_43_fu_2074_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_243_fu_28726_p1() {
    mul_ln1118_243_fu_28726_p1 =  (sc_lv<9>) (ap_const_lv27_7FFFF2D);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_244_fu_28733_p0() {
    mul_ln1118_244_fu_28733_p0 =  (sc_lv<18>) (sext_ln1118_45_fu_2091_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_244_fu_28733_p1() {
    mul_ln1118_244_fu_28733_p1 =  (sc_lv<10>) (ap_const_lv28_1DA);
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_245_fu_28740_p0() {
    mul_ln1118_245_fu_28740_p0 =  (sc_lv<18>) (sext_ln1118_49_fu_2116_p1.read());
}

void dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config3_s::thread_mul_ln1118_245_fu_28740_p1() {
    mul_ln1118_245_fu_28740_p1 =  (sc_lv<10>) (ap_const_lv28_183);
}

}

