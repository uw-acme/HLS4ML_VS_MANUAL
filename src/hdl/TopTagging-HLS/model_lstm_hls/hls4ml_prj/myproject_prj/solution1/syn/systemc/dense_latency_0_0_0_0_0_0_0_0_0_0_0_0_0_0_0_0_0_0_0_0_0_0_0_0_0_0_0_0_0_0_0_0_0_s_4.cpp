#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_673_fu_4179392_p2() {
    add_ln703_673_fu_4179392_p2 = (!sext_ln203_777_fu_4176303_p1.read().is_01() || !sext_ln203_762_fu_4176168_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_777_fu_4176303_p1.read()) + sc_bigint<14>(sext_ln203_762_fu_4176168_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_674_fu_4179402_p2() {
    add_ln703_674_fu_4179402_p2 = (!mult_798_V_reg_4187160.read().is_01() || !sext_ln703_446_fu_4179398_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_798_V_reg_4187160.read()) + sc_bigint<16>(sext_ln703_446_fu_4179398_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_675_fu_4179407_p2() {
    add_ln703_675_fu_4179407_p2 = (!add_ln703_672_fu_4179387_p2.read().is_01() || !add_ln703_674_fu_4179402_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_672_fu_4179387_p2.read()) + sc_biguint<16>(add_ln703_674_fu_4179402_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_676_fu_4179413_p2() {
    add_ln703_676_fu_4179413_p2 = (!mult_1118_V_fu_4176615_p1.read().is_01() || !mult_1054_V_reg_4188309.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1118_V_fu_4176615_p1.read()) + sc_biguint<16>(mult_1054_V_reg_4188309.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_677_fu_4179418_p2() {
    add_ln703_677_fu_4179418_p2 = (!mult_990_V_fu_4176429_p1.read().is_01() || !add_ln703_676_fu_4179413_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_990_V_fu_4176429_p1.read()) + sc_biguint<16>(add_ln703_676_fu_4179413_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_678_fu_4179424_p2() {
    add_ln703_678_fu_4179424_p2 = (!mult_1246_V_reg_4189125.read().is_01() || !ap_const_lv16_38.is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1246_V_reg_4189125.read()) + sc_biguint<16>(ap_const_lv16_38));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_679_fu_4179429_p2() {
    add_ln703_679_fu_4179429_p2 = (!mult_1182_V_fu_4176738_p1.read().is_01() || !add_ln703_678_fu_4179424_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1182_V_fu_4176738_p1.read()) + sc_biguint<16>(add_ln703_678_fu_4179424_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_67_fu_4176918_p2() {
    add_ln703_67_fu_4176918_p2 = (!mult_384_V_fu_4174941_p1.read().is_01() || !mult_320_V_fu_4174806_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_384_V_fu_4174941_p1.read()) + sc_bigint<16>(mult_320_V_fu_4174806_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_680_fu_4179435_p2() {
    add_ln703_680_fu_4179435_p2 = (!add_ln703_677_fu_4179418_p2.read().is_01() || !add_ln703_679_fu_4179429_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_677_fu_4179418_p2.read()) + sc_biguint<16>(add_ln703_679_fu_4179429_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_681_fu_4182366_p2() {
    add_ln703_681_fu_4182366_p2 = (!add_ln703_675_reg_4190250.read().is_01() || !add_ln703_680_reg_4190255.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_675_reg_4190250.read()) + sc_biguint<16>(add_ln703_680_reg_4190255.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_683_fu_4159392_p2() {
    add_ln703_683_fu_4159392_p2 = (!sext_ln203_609_fu_4155967_p1.read().is_01() || !sext_ln203_589_fu_4155021_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_609_fu_4155967_p1.read()) + sc_bigint<14>(sext_ln203_589_fu_4155021_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_684_fu_4173802_p2() {
    add_ln703_684_fu_4173802_p2 = (!mult_287_V_fu_4160236_p1.read().is_01() || !mult_223_V_reg_4184379.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_287_V_fu_4160236_p1.read()) + sc_biguint<16>(mult_223_V_reg_4184379.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_685_fu_4173807_p2() {
    add_ln703_685_fu_4173807_p2 = (!mult_159_V_fu_4159904_p1.read().is_01() || !add_ln703_684_fu_4173802_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_159_V_fu_4159904_p1.read()) + sc_biguint<16>(add_ln703_684_fu_4173802_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_686_fu_4173813_p2() {
    add_ln703_686_fu_4173813_p2 = (!sext_ln703_447_fu_4173799_p1.read().is_01() || !add_ln703_685_fu_4173807_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_447_fu_4173799_p1.read()) + sc_biguint<16>(add_ln703_685_fu_4173807_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_687_fu_4179441_p2() {
    add_ln703_687_fu_4179441_p2 = (!mult_415_V_fu_4175019_p1.read().is_01() || !mult_351_V_reg_4185294.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_415_V_fu_4175019_p1.read()) + sc_biguint<16>(mult_351_V_reg_4185294.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_688_fu_4173819_p2() {
    add_ln703_688_fu_4173819_p2 = (!sext_ln203_713_fu_4164270_p1.read().is_01() || !sext_ln203_703_fu_4163363_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_713_fu_4164270_p1.read()) + sc_bigint<15>(sext_ln203_703_fu_4163363_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_689_fu_4179449_p2() {
    add_ln703_689_fu_4179449_p2 = (!mult_479_V_fu_4175169_p1.read().is_01() || !sext_ln703_448_fu_4179446_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_479_V_fu_4175169_p1.read()) + sc_bigint<16>(sext_ln703_448_fu_4179446_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_68_fu_4176924_p2() {
    add_ln703_68_fu_4176924_p2 = (!mult_576_V_fu_4175367_p1.read().is_01() || !mult_512_V_fu_4175247_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_576_V_fu_4175367_p1.read()) + sc_bigint<16>(mult_512_V_fu_4175247_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_690_fu_4179455_p2() {
    add_ln703_690_fu_4179455_p2 = (!add_ln703_687_fu_4179441_p2.read().is_01() || !add_ln703_689_fu_4179449_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_687_fu_4179441_p2.read()) + sc_biguint<16>(add_ln703_689_fu_4179449_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_691_fu_4179461_p2() {
    add_ln703_691_fu_4179461_p2 = (!add_ln703_686_reg_4189500.read().is_01() || !add_ln703_690_fu_4179455_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_686_reg_4189500.read()) + sc_biguint<16>(add_ln703_690_fu_4179455_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_692_fu_4179466_p2() {
    add_ln703_692_fu_4179466_p2 = (!mult_735_V_fu_4175688_p1.read().is_01() || !mult_671_V_reg_4186622.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_735_V_fu_4175688_p1.read()) + sc_biguint<16>(mult_671_V_reg_4186622.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_693_fu_4179471_p2() {
    add_ln703_693_fu_4179471_p2 = (!mult_927_V_fu_4176306_p1.read().is_01() || !mult_863_V_fu_4176171_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_927_V_fu_4176306_p1.read()) + sc_bigint<16>(mult_863_V_fu_4176171_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_694_fu_4179477_p2() {
    add_ln703_694_fu_4179477_p2 = (!mult_799_V_fu_4175970_p1.read().is_01() || !add_ln703_693_fu_4179471_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_799_V_fu_4175970_p1.read()) + sc_biguint<16>(add_ln703_693_fu_4179471_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_695_fu_4179483_p2() {
    add_ln703_695_fu_4179483_p2 = (!add_ln703_692_fu_4179466_p2.read().is_01() || !add_ln703_694_fu_4179477_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_692_fu_4179466_p2.read()) + sc_biguint<16>(add_ln703_694_fu_4179477_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_696_fu_4179489_p2() {
    add_ln703_696_fu_4179489_p2 = (!mult_1119_V_reg_4188595.read().is_01() || !mult_1055_V_fu_4176528_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1119_V_reg_4188595.read()) + sc_bigint<16>(mult_1055_V_fu_4176528_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_697_fu_4179494_p2() {
    add_ln703_697_fu_4179494_p2 = (!mult_991_V_fu_4176432_p1.read().is_01() || !add_ln703_696_fu_4179489_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_991_V_fu_4176432_p1.read()) + sc_biguint<16>(add_ln703_696_fu_4179489_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_698_fu_4179500_p2() {
    add_ln703_698_fu_4179500_p2 = (!sext_ln203_833_fu_4176870_p1.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_833_fu_4176870_p1.read()) + sc_biguint<12>(ap_const_lv12_36));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_699_fu_4179510_p2() {
    add_ln703_699_fu_4179510_p2 = (!mult_1183_V_fu_4176741_p1.read().is_01() || !sext_ln703_449_fu_4179506_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1183_V_fu_4176741_p1.read()) + sc_bigint<16>(sext_ln703_449_fu_4179506_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_69_fu_4176930_p2() {
    add_ln703_69_fu_4176930_p2 = (!mult_448_V_reg_4185689.read().is_01() || !add_ln703_68_fu_4176924_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_448_V_reg_4185689.read()) + sc_biguint<16>(add_ln703_68_fu_4176924_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_700_fu_4179516_p2() {
    add_ln703_700_fu_4179516_p2 = (!add_ln703_697_fu_4179494_p2.read().is_01() || !add_ln703_699_fu_4179510_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_697_fu_4179494_p2.read()) + sc_biguint<16>(add_ln703_699_fu_4179510_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_701_fu_4182375_p2() {
    add_ln703_701_fu_4182375_p2 = (!add_ln703_695_reg_4190265.read().is_01() || !add_ln703_700_reg_4190270.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_695_reg_4190265.read()) + sc_biguint<16>(add_ln703_700_reg_4190270.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_703_fu_4173825_p2() {
    add_ln703_703_fu_4173825_p2 = (!mult_96_V_reg_4183802.read().is_01() || !mult_32_V_fu_4159505_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_96_V_reg_4183802.read()) + sc_bigint<16>(mult_32_V_fu_4159505_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_704_fu_4173830_p2() {
    add_ln703_704_fu_4173830_p2 = (!mult_288_V_reg_4184666.read().is_01() || !mult_224_V_reg_4184384.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_288_V_reg_4184666.read()) + sc_biguint<16>(mult_224_V_reg_4184384.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_705_fu_4173834_p2() {
    add_ln703_705_fu_4173834_p2 = (!mult_160_V_fu_4159907_p1.read().is_01() || !add_ln703_704_fu_4173830_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_160_V_fu_4159907_p1.read()) + sc_biguint<16>(add_ln703_704_fu_4173830_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_706_fu_4173840_p2() {
    add_ln703_706_fu_4173840_p2 = (!add_ln703_703_fu_4173825_p2.read().is_01() || !add_ln703_705_fu_4173834_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_703_fu_4173825_p2.read()) + sc_biguint<16>(add_ln703_705_fu_4173834_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_707_fu_4179522_p2() {
    add_ln703_707_fu_4179522_p2 = (!sext_ln203_680_fu_4175022_p1.read().is_01() || !sext_ln203_659_fu_4174878_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_680_fu_4175022_p1.read()) + sc_bigint<14>(sext_ln203_659_fu_4174878_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_708_fu_4179532_p2() {
    add_ln703_708_fu_4179532_p2 = (!mult_608_V_fu_4175427_p1.read().is_01() || !mult_544_V_reg_4186085.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_608_V_fu_4175427_p1.read()) + sc_biguint<16>(mult_544_V_reg_4186085.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_709_fu_4179537_p2() {
    add_ln703_709_fu_4179537_p2 = (!mult_480_V_fu_4175172_p1.read().is_01() || !add_ln703_708_fu_4179532_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_480_V_fu_4175172_p1.read()) + sc_biguint<16>(add_ln703_708_fu_4179532_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_70_fu_4176935_p2() {
    add_ln703_70_fu_4176935_p2 = (!add_ln703_67_fu_4176918_p2.read().is_01() || !add_ln703_69_fu_4176930_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_67_fu_4176918_p2.read()) + sc_biguint<16>(add_ln703_69_fu_4176930_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_710_fu_4179543_p2() {
    add_ln703_710_fu_4179543_p2 = (!sext_ln703_450_fu_4179528_p1.read().is_01() || !add_ln703_709_fu_4179537_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_450_fu_4179528_p1.read()) + sc_biguint<16>(add_ln703_709_fu_4179537_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_711_fu_4179549_p2() {
    add_ln703_711_fu_4179549_p2 = (!add_ln703_706_reg_4189510.read().is_01() || !add_ln703_710_fu_4179543_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_706_reg_4189510.read()) + sc_biguint<16>(add_ln703_710_fu_4179543_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_712_fu_4179554_p2() {
    add_ln703_712_fu_4179554_p2 = (!mult_736_V_fu_4175691_p1.read().is_01() || !mult_672_V_fu_4175553_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_736_V_fu_4175691_p1.read()) + sc_bigint<16>(mult_672_V_fu_4175553_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_713_fu_4179560_p2() {
    add_ln703_713_fu_4179560_p2 = (!mult_928_V_reg_4187738.read().is_01() || !mult_864_V_fu_4176174_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_928_V_reg_4187738.read()) + sc_bigint<16>(mult_864_V_fu_4176174_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_714_fu_4179565_p2() {
    add_ln703_714_fu_4179565_p2 = (!mult_800_V_reg_4187170.read().is_01() || !add_ln703_713_fu_4179560_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_800_V_reg_4187170.read()) + sc_biguint<16>(add_ln703_713_fu_4179560_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_715_fu_4179570_p2() {
    add_ln703_715_fu_4179570_p2 = (!add_ln703_712_fu_4179554_p2.read().is_01() || !add_ln703_714_fu_4179565_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_712_fu_4179554_p2.read()) + sc_biguint<16>(add_ln703_714_fu_4179565_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_716_fu_4179576_p2() {
    add_ln703_716_fu_4179576_p2 = (!mult_1120_V_fu_4176618_p1.read().is_01() || !mult_1056_V_reg_4188319.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1120_V_fu_4176618_p1.read()) + sc_biguint<16>(mult_1056_V_reg_4188319.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_717_fu_4179581_p2() {
    add_ln703_717_fu_4179581_p2 = (!mult_992_V_fu_4176435_p1.read().is_01() || !add_ln703_716_fu_4179576_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_992_V_fu_4176435_p1.read()) + sc_biguint<16>(add_ln703_716_fu_4179576_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_718_fu_4179587_p2() {
    add_ln703_718_fu_4179587_p2 = (!sext_ln203_834_fu_4176873_p1.read().is_01() || !ap_const_lv12_2A.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_834_fu_4176873_p1.read()) + sc_biguint<12>(ap_const_lv12_2A));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_719_fu_4179597_p2() {
    add_ln703_719_fu_4179597_p2 = (!mult_1184_V_reg_4188885.read().is_01() || !sext_ln703_451_fu_4179593_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1184_V_reg_4188885.read()) + sc_bigint<16>(sext_ln703_451_fu_4179593_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_71_fu_4176941_p2() {
    add_ln703_71_fu_4176941_p2 = (!add_ln703_66_reg_4189250.read().is_01() || !add_ln703_70_fu_4176935_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_66_reg_4189250.read()) + sc_biguint<16>(add_ln703_70_fu_4176935_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_720_fu_4179602_p2() {
    add_ln703_720_fu_4179602_p2 = (!add_ln703_717_fu_4179581_p2.read().is_01() || !add_ln703_719_fu_4179597_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_717_fu_4179581_p2.read()) + sc_biguint<16>(add_ln703_719_fu_4179597_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_721_fu_4182384_p2() {
    add_ln703_721_fu_4182384_p2 = (!add_ln703_715_reg_4190280.read().is_01() || !add_ln703_720_reg_4190285.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_715_reg_4190280.read()) + sc_biguint<16>(add_ln703_720_reg_4190285.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_723_fu_4173846_p2() {
    add_ln703_723_fu_4173846_p2 = (!sext_ln203_610_fu_4159643_p1.read().is_01() || !sext_ln203_590_fu_4159508_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_610_fu_4159643_p1.read()) + sc_bigint<15>(sext_ln203_590_fu_4159508_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_724_fu_4173856_p2() {
    add_ln703_724_fu_4173856_p2 = (!sext_ln203_647_fu_4160239_p1.read().is_01() || !sext_ln203_632_fu_4160104_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_647_fu_4160239_p1.read()) + sc_bigint<15>(sext_ln203_632_fu_4160104_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_725_fu_4173866_p2() {
    add_ln703_725_fu_4173866_p2 = (!mult_161_V_fu_4159910_p1.read().is_01() || !sext_ln703_453_fu_4173862_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_161_V_fu_4159910_p1.read()) + sc_bigint<16>(sext_ln703_453_fu_4173862_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_726_fu_4173872_p2() {
    add_ln703_726_fu_4173872_p2 = (!sext_ln703_452_fu_4173852_p1.read().is_01() || !add_ln703_725_fu_4173866_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_452_fu_4173852_p1.read()) + sc_biguint<16>(add_ln703_725_fu_4173866_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_727_fu_4179608_p2() {
    add_ln703_727_fu_4179608_p2 = (!sext_ln203_691_fu_4175103_p1.read().is_01() || !sext_ln203_660_fu_4174881_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_691_fu_4175103_p1.read()) + sc_bigint<15>(sext_ln203_660_fu_4174881_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_728_fu_4179618_p2() {
    add_ln703_728_fu_4179618_p2 = (!mult_673_V_reg_4186632.read().is_01() || !mult_609_V_fu_4175430_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_673_V_reg_4186632.read()) + sc_bigint<16>(mult_609_V_fu_4175430_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_729_fu_4179623_p2() {
    add_ln703_729_fu_4179623_p2 = (!mult_545_V_fu_4175298_p1.read().is_01() || !add_ln703_728_fu_4179618_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_545_V_fu_4175298_p1.read()) + sc_biguint<16>(add_ln703_728_fu_4179618_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_72_fu_4176946_p2() {
    add_ln703_72_fu_4176946_p2 = (!mult_704_V_reg_4186744.read().is_01() || !mult_640_V_reg_4186485.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_704_V_reg_4186744.read()) + sc_biguint<16>(mult_640_V_reg_4186485.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_730_fu_4179629_p2() {
    add_ln703_730_fu_4179629_p2 = (!sext_ln703_454_fu_4179614_p1.read().is_01() || !add_ln703_729_fu_4179623_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_454_fu_4179614_p1.read()) + sc_biguint<16>(add_ln703_729_fu_4179623_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_731_fu_4179635_p2() {
    add_ln703_731_fu_4179635_p2 = (!add_ln703_726_reg_4189515.read().is_01() || !add_ln703_730_fu_4179629_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_726_reg_4189515.read()) + sc_biguint<16>(add_ln703_730_fu_4179629_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_732_fu_4179640_p2() {
    add_ln703_732_fu_4179640_p2 = (!mult_780_V_fu_4175896_p1.read().is_01() || !mult_737_V_fu_4175694_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_780_V_fu_4175896_p1.read()) + sc_bigint<16>(mult_737_V_fu_4175694_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_733_fu_4179646_p2() {
    add_ln703_733_fu_4179646_p2 = (!mult_993_V_fu_4176438_p1.read().is_01() || !mult_929_V_fu_4176309_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_993_V_fu_4176438_p1.read()) + sc_bigint<16>(mult_929_V_fu_4176309_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_734_fu_4182393_p2() {
    add_ln703_734_fu_4182393_p2 = (!mult_865_V_fu_4182090_p1.read().is_01() || !add_ln703_733_reg_4190300.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_865_V_fu_4182090_p1.read()) + sc_biguint<16>(add_ln703_733_reg_4190300.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_735_fu_4182398_p2() {
    add_ln703_735_fu_4182398_p2 = (!add_ln703_732_reg_4190295.read().is_01() || !add_ln703_734_fu_4182393_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_732_reg_4190295.read()) + sc_biguint<16>(add_ln703_734_fu_4182393_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_736_fu_4179652_p2() {
    add_ln703_736_fu_4179652_p2 = (!mult_1185_V_fu_4176744_p1.read().is_01() || !mult_1121_V_reg_4188605.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1185_V_fu_4176744_p1.read()) + sc_biguint<16>(mult_1121_V_reg_4188605.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_737_fu_4179657_p2() {
    add_ln703_737_fu_4179657_p2 = (!mult_1057_V_reg_4188324.read().is_01() || !add_ln703_736_fu_4179652_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1057_V_reg_4188324.read()) + sc_biguint<16>(add_ln703_736_fu_4179652_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_738_fu_4179662_p2() {
    add_ln703_738_fu_4179662_p2 = (!sext_ln203_3_fu_4175025_p1.read().is_01() || !ap_const_lv9_5D.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_3_fu_4175025_p1.read()) + sc_biguint<9>(ap_const_lv9_5D));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_739_fu_4179672_p2() {
    add_ln703_739_fu_4179672_p2 = (!mult_1249_V_fu_4176876_p1.read().is_01() || !sext_ln703_61_fu_4179668_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1249_V_fu_4176876_p1.read()) + sc_bigint<16>(sext_ln703_61_fu_4179668_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_73_fu_4176950_p2() {
    add_ln703_73_fu_4176950_p2 = (!mult_896_V_fu_4176243_p1.read().is_01() || !mult_832_V_fu_4176120_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_896_V_fu_4176243_p1.read()) + sc_bigint<16>(mult_832_V_fu_4176120_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_740_fu_4179678_p2() {
    add_ln703_740_fu_4179678_p2 = (!add_ln703_737_fu_4179657_p2.read().is_01() || !add_ln703_739_fu_4179672_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_737_fu_4179657_p2.read()) + sc_biguint<16>(add_ln703_739_fu_4179672_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_741_fu_4182403_p2() {
    add_ln703_741_fu_4182403_p2 = (!add_ln703_735_fu_4182398_p2.read().is_01() || !add_ln703_740_reg_4190305.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_735_fu_4182398_p2.read()) + sc_biguint<16>(add_ln703_740_reg_4190305.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_743_fu_4173878_p2() {
    add_ln703_743_fu_4173878_p2 = (!mult_98_V_fu_4159646_p1.read().is_01() || !mult_34_V_fu_4159511_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_98_V_fu_4159646_p1.read()) + sc_bigint<16>(mult_34_V_fu_4159511_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_744_fu_4173884_p2() {
    add_ln703_744_fu_4173884_p2 = (!mult_290_V_fu_4160242_p1.read().is_01() || !mult_226_V_fu_4160107_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_290_V_fu_4160242_p1.read()) + sc_bigint<16>(mult_226_V_fu_4160107_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_745_fu_4173890_p2() {
    add_ln703_745_fu_4173890_p2 = (!mult_162_V_fu_4159913_p1.read().is_01() || !add_ln703_744_fu_4173884_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_162_V_fu_4159913_p1.read()) + sc_biguint<16>(add_ln703_744_fu_4173884_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_746_fu_4173896_p2() {
    add_ln703_746_fu_4173896_p2 = (!add_ln703_743_fu_4173878_p2.read().is_01() || !add_ln703_745_fu_4173890_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_743_fu_4173878_p2.read()) + sc_biguint<16>(add_ln703_745_fu_4173890_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_747_fu_4173902_p2() {
    add_ln703_747_fu_4173902_p2 = (!sext_ln203_681_fu_4161652_p1.read().is_01() || !sext_ln203_661_fu_4160819_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_681_fu_4161652_p1.read()) + sc_bigint<14>(sext_ln203_661_fu_4160819_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_748_fu_4173908_p2() {
    add_ln703_748_fu_4173908_p2 = (!sext_ln203_727_fu_4165209_p1.read().is_01() || !sext_ln203_714_fu_4164319_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_727_fu_4165209_p1.read()) + sc_bigint<15>(sext_ln203_714_fu_4164319_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_749_fu_4179690_p2() {
    add_ln703_749_fu_4179690_p2 = (!mult_546_V_fu_4175301_p1.read().is_01() || !sext_ln703_456_fu_4179687_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_546_V_fu_4175301_p1.read()) + sc_bigint<16>(sext_ln703_456_fu_4179687_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_74_fu_4176956_p2() {
    add_ln703_74_fu_4176956_p2 = (!mult_768_V_reg_4187035.read().is_01() || !add_ln703_73_fu_4176950_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_768_V_reg_4187035.read()) + sc_biguint<16>(add_ln703_73_fu_4176950_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_750_fu_4179696_p2() {
    add_ln703_750_fu_4179696_p2 = (!sext_ln703_455_fu_4179684_p1.read().is_01() || !add_ln703_749_fu_4179690_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_455_fu_4179684_p1.read()) + sc_biguint<16>(add_ln703_749_fu_4179690_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_751_fu_4179702_p2() {
    add_ln703_751_fu_4179702_p2 = (!add_ln703_746_reg_4189520.read().is_01() || !add_ln703_750_fu_4179696_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_746_reg_4189520.read()) + sc_biguint<16>(add_ln703_750_fu_4179696_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_752_fu_4179707_p2() {
    add_ln703_752_fu_4179707_p2 = (!mult_802_V_fu_4176008_p1.read().is_01() || !mult_738_V_fu_4175697_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_802_V_fu_4176008_p1.read()) + sc_bigint<16>(mult_738_V_fu_4175697_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_753_fu_4179713_p2() {
    add_ln703_753_fu_4179713_p2 = (!mult_994_V_fu_4176441_p1.read().is_01() || !mult_930_V_fu_4176312_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_994_V_fu_4176441_p1.read()) + sc_bigint<16>(mult_930_V_fu_4176312_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_754_fu_4182413_p2() {
    add_ln703_754_fu_4182413_p2 = (!mult_866_V_fu_4182093_p1.read().is_01() || !add_ln703_753_reg_4190320.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_866_V_fu_4182093_p1.read()) + sc_biguint<16>(add_ln703_753_reg_4190320.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_755_fu_4182418_p2() {
    add_ln703_755_fu_4182418_p2 = (!add_ln703_752_reg_4190315.read().is_01() || !add_ln703_754_fu_4182413_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_752_reg_4190315.read()) + sc_biguint<16>(add_ln703_754_fu_4182413_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_756_fu_4173914_p2() {
    add_ln703_756_fu_4173914_p2 = (!sext_ln203_808_fu_4171835_p1.read().is_01() || !sext_ln203_797_fu_4170905_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_808_fu_4171835_p1.read()) + sc_bigint<15>(sext_ln203_797_fu_4170905_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_757_fu_4173924_p2() {
    add_ln703_757_fu_4173924_p2 = (!mult_1058_V_fu_4170138_p1.read().is_01() || !sext_ln703_457_fu_4173920_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1058_V_fu_4170138_p1.read()) + sc_bigint<16>(sext_ln703_457_fu_4173920_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_758_fu_4179719_p2() {
    add_ln703_758_fu_4179719_p2 = (!sext_ln203_5_fu_4175175_p1.read().is_01() || !ap_const_lv8_D0.is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_5_fu_4175175_p1.read()) + sc_bigint<8>(ap_const_lv8_D0));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_759_fu_4179729_p2() {
    add_ln703_759_fu_4179729_p2 = (!mult_1250_V_reg_4189145.read().is_01() || !sext_ln703_62_fu_4179725_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1250_V_reg_4189145.read()) + sc_bigint<16>(sext_ln703_62_fu_4179725_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_75_fu_4176961_p2() {
    add_ln703_75_fu_4176961_p2 = (!add_ln703_72_fu_4176946_p2.read().is_01() || !add_ln703_74_fu_4176956_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_72_fu_4176946_p2.read()) + sc_biguint<16>(add_ln703_74_fu_4176956_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_760_fu_4179734_p2() {
    add_ln703_760_fu_4179734_p2 = (!add_ln703_757_reg_4189535.read().is_01() || !add_ln703_759_fu_4179729_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_757_reg_4189535.read()) + sc_biguint<16>(add_ln703_759_fu_4179729_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_761_fu_4182423_p2() {
    add_ln703_761_fu_4182423_p2 = (!add_ln703_755_fu_4182418_p2.read().is_01() || !add_ln703_760_reg_4190325.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_755_fu_4182418_p2.read()) + sc_biguint<16>(add_ln703_760_reg_4190325.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_763_fu_4173930_p2() {
    add_ln703_763_fu_4173930_p2 = (!mult_99_V_fu_4159649_p1.read().is_01() || !mult_35_V_fu_4159514_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_99_V_fu_4159649_p1.read()) + sc_bigint<16>(mult_35_V_fu_4159514_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_764_fu_4173936_p2() {
    add_ln703_764_fu_4173936_p2 = (!sext_ln203_648_fu_4160245_p1.read().is_01() || !sext_ln203_629_fu_4160062_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_648_fu_4160245_p1.read()) + sc_bigint<15>(sext_ln203_629_fu_4160062_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_765_fu_4173946_p2() {
    add_ln703_765_fu_4173946_p2 = (!mult_163_V_fu_4159916_p1.read().is_01() || !sext_ln703_458_fu_4173942_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_163_V_fu_4159916_p1.read()) + sc_bigint<16>(sext_ln703_458_fu_4173942_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_766_fu_4173952_p2() {
    add_ln703_766_fu_4173952_p2 = (!add_ln703_763_fu_4173930_p2.read().is_01() || !add_ln703_765_fu_4173946_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_763_fu_4173930_p2.read()) + sc_biguint<16>(add_ln703_765_fu_4173946_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_767_fu_4179739_p2() {
    add_ln703_767_fu_4179739_p2 = (!sext_ln203_682_fu_4175028_p1.read().is_01() || !sext_ln203_662_fu_4174884_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_682_fu_4175028_p1.read()) + sc_bigint<15>(sext_ln203_662_fu_4174884_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_768_fu_4179749_p2() {
    add_ln703_768_fu_4179749_p2 = (!mult_611_V_reg_4186355.read().is_01() || !mult_547_V_fu_4175304_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_611_V_reg_4186355.read()) + sc_bigint<16>(mult_547_V_fu_4175304_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_769_fu_4179754_p2() {
    add_ln703_769_fu_4179754_p2 = (!mult_483_V_reg_4185835.read().is_01() || !add_ln703_768_fu_4179749_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_483_V_reg_4185835.read()) + sc_biguint<16>(add_ln703_768_fu_4179749_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_76_fu_4176967_p2() {
    add_ln703_76_fu_4176967_p2 = (!mult_1088_V_fu_4176561_p1.read().is_01() || !mult_1024_V_reg_4188173.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1088_V_fu_4176561_p1.read()) + sc_biguint<16>(mult_1024_V_reg_4188173.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_770_fu_4179759_p2() {
    add_ln703_770_fu_4179759_p2 = (!sext_ln703_459_fu_4179745_p1.read().is_01() || !add_ln703_769_fu_4179754_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_459_fu_4179745_p1.read()) + sc_biguint<16>(add_ln703_769_fu_4179754_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_771_fu_4179765_p2() {
    add_ln703_771_fu_4179765_p2 = (!add_ln703_766_reg_4189540.read().is_01() || !add_ln703_770_fu_4179759_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_766_reg_4189540.read()) + sc_biguint<16>(add_ln703_770_fu_4179759_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_772_fu_4179770_p2() {
    add_ln703_772_fu_4179770_p2 = (!mult_739_V_fu_4175700_p1.read().is_01() || !mult_675_V_fu_4175556_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_739_V_fu_4175700_p1.read()) + sc_bigint<16>(mult_675_V_fu_4175556_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_773_fu_4179776_p2() {
    add_ln703_773_fu_4179776_p2 = (!sext_ln203_778_fu_4176315_p1.read().is_01() || !sext_ln203_763_fu_4176180_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_778_fu_4176315_p1.read()) + sc_bigint<15>(sext_ln203_763_fu_4176180_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_774_fu_4179782_p2() {
    add_ln703_774_fu_4179782_p2 = (!sext_ln203_752_fu_4176012_p1.read().is_01() || !add_ln703_773_fu_4179776_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_752_fu_4176012_p1.read()) + sc_biguint<15>(add_ln703_773_fu_4179776_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_775_fu_4179792_p2() {
    add_ln703_775_fu_4179792_p2 = (!add_ln703_772_fu_4179770_p2.read().is_01() || !sext_ln703_460_fu_4179788_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_772_fu_4179770_p2.read()) + sc_bigint<16>(sext_ln703_460_fu_4179788_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_776_fu_4179798_p2() {
    add_ln703_776_fu_4179798_p2 = (!mult_1123_V_fu_4176621_p1.read().is_01() || !mult_1059_V_fu_4176531_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1123_V_fu_4176621_p1.read()) + sc_bigint<16>(mult_1059_V_fu_4176531_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_777_fu_4179804_p2() {
    add_ln703_777_fu_4179804_p2 = (!mult_995_V_fu_4176444_p1.read().is_01() || !add_ln703_776_fu_4179798_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_995_V_fu_4176444_p1.read()) + sc_biguint<16>(add_ln703_776_fu_4179798_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_778_fu_4179810_p2() {
    add_ln703_778_fu_4179810_p2 = (!mult_1251_V_fu_4176879_p1.read().is_01() || !ap_const_lv16_FFFA.is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1251_V_fu_4176879_p1.read()) + sc_bigint<16>(ap_const_lv16_FFFA));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_779_fu_4179816_p2() {
    add_ln703_779_fu_4179816_p2 = (!mult_1187_V_fu_4176747_p1.read().is_01() || !add_ln703_778_fu_4179810_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1187_V_fu_4176747_p1.read()) + sc_biguint<16>(add_ln703_778_fu_4179810_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_77_fu_4176972_p2() {
    add_ln703_77_fu_4176972_p2 = (!mult_960_V_reg_4187868.read().is_01() || !add_ln703_76_fu_4176967_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_960_V_reg_4187868.read()) + sc_biguint<16>(add_ln703_76_fu_4176967_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_780_fu_4179822_p2() {
    add_ln703_780_fu_4179822_p2 = (!add_ln703_777_fu_4179804_p2.read().is_01() || !add_ln703_779_fu_4179816_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_777_fu_4179804_p2.read()) + sc_biguint<16>(add_ln703_779_fu_4179816_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_781_fu_4182433_p2() {
    add_ln703_781_fu_4182433_p2 = (!add_ln703_775_reg_4190335.read().is_01() || !add_ln703_780_reg_4190340.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_775_reg_4190335.read()) + sc_biguint<16>(add_ln703_780_reg_4190340.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_783_fu_4173958_p2() {
    add_ln703_783_fu_4173958_p2 = (!mult_100_V_fu_4159652_p1.read().is_01() || !mult_36_V_fu_4159517_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_100_V_fu_4159652_p1.read()) + sc_bigint<16>(mult_36_V_fu_4159517_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_784_fu_4173964_p2() {
    add_ln703_784_fu_4173964_p2 = (!mult_356_V_fu_4160833_p1.read().is_01() || !mult_292_V_fu_4160248_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_356_V_fu_4160833_p1.read()) + sc_bigint<16>(mult_292_V_fu_4160248_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_785_fu_4173970_p2() {
    add_ln703_785_fu_4173970_p2 = (!mult_228_V_fu_4160110_p1.read().is_01() || !add_ln703_784_fu_4173964_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_228_V_fu_4160110_p1.read()) + sc_biguint<16>(add_ln703_784_fu_4173964_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_786_fu_4173976_p2() {
    add_ln703_786_fu_4173976_p2 = (!add_ln703_783_fu_4173958_p2.read().is_01() || !add_ln703_785_fu_4173970_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_783_fu_4173958_p2.read()) + sc_biguint<16>(add_ln703_785_fu_4173970_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_787_fu_4179828_p2() {
    add_ln703_787_fu_4179828_p2 = (!mult_484_V_fu_4175178_p1.read().is_01() || !mult_420_V_fu_4175031_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_484_V_fu_4175178_p1.read()) + sc_bigint<16>(mult_420_V_fu_4175031_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_788_fu_4179834_p2() {
    add_ln703_788_fu_4179834_p2 = (!mult_740_V_fu_4175703_p1.read().is_01() || !mult_676_V_fu_4175562_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_740_V_fu_4175703_p1.read()) + sc_bigint<16>(mult_676_V_fu_4175562_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_789_fu_4179840_p2() {
    add_ln703_789_fu_4179840_p2 = (!mult_612_V_fu_4175433_p1.read().is_01() || !add_ln703_788_fu_4179834_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_612_V_fu_4175433_p1.read()) + sc_biguint<16>(add_ln703_788_fu_4179834_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_78_fu_4176977_p2() {
    add_ln703_78_fu_4176977_p2 = (!mult_1216_V_fu_4176807_p1.read().is_01() || !ap_const_lv16_1A.is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1216_V_fu_4176807_p1.read()) + sc_biguint<16>(ap_const_lv16_1A));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_790_fu_4179846_p2() {
    add_ln703_790_fu_4179846_p2 = (!add_ln703_787_fu_4179828_p2.read().is_01() || !add_ln703_789_fu_4179840_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_787_fu_4179828_p2.read()) + sc_biguint<16>(add_ln703_789_fu_4179840_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_791_fu_4179852_p2() {
    add_ln703_791_fu_4179852_p2 = (!add_ln703_786_reg_4189545.read().is_01() || !add_ln703_790_fu_4179846_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_786_reg_4189545.read()) + sc_biguint<16>(add_ln703_790_fu_4179846_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_792_fu_4179857_p2() {
    add_ln703_792_fu_4179857_p2 = (!mult_868_V_fu_4176183_p1.read().is_01() || !mult_804_V_fu_4176015_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_868_V_fu_4176183_p1.read()) + sc_bigint<16>(mult_804_V_fu_4176015_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_793_fu_4179863_p2() {
    add_ln703_793_fu_4179863_p2 = (!mult_1060_V_fu_4176534_p1.read().is_01() || !mult_996_V_fu_4176447_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1060_V_fu_4176534_p1.read()) + sc_bigint<16>(mult_996_V_fu_4176447_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_794_fu_4179869_p2() {
    add_ln703_794_fu_4179869_p2 = (!mult_932_V_fu_4176318_p1.read().is_01() || !add_ln703_793_fu_4179863_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_932_V_fu_4176318_p1.read()) + sc_biguint<16>(add_ln703_793_fu_4179863_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_795_fu_4179875_p2() {
    add_ln703_795_fu_4179875_p2 = (!add_ln703_792_fu_4179857_p2.read().is_01() || !add_ln703_794_fu_4179869_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_792_fu_4179857_p2.read()) + sc_biguint<16>(add_ln703_794_fu_4179869_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_796_fu_4173982_p2() {
    add_ln703_796_fu_4173982_p2 = (!sext_ln203_835_fu_4172669_p1.read().is_01() || !sext_ln203_808_fu_4171835_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_835_fu_4172669_p1.read()) + sc_bigint<15>(sext_ln203_808_fu_4171835_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_797_fu_4179884_p2() {
    add_ln703_797_fu_4179884_p2 = (!mult_1124_V_fu_4176624_p1.read().is_01() || !sext_ln703_461_fu_4179881_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1124_V_fu_4176624_p1.read()) + sc_bigint<16>(sext_ln703_461_fu_4179881_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_798_fu_4159398_p2() {
    add_ln703_798_fu_4159398_p2 = (!sext_ln203_7_fu_4159009_p1.read().is_01() || !ap_const_lv10_3A0.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_7_fu_4159009_p1.read()) + sc_bigint<10>(ap_const_lv10_3A0));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_799_fu_4159408_p2() {
    add_ln703_799_fu_4159408_p2 = (!sext_ln203_2_fu_4156760_p1.read().is_01() || !sext_ln703_63_fu_4159404_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_2_fu_4156760_p1.read()) + sc_bigint<14>(sext_ln703_63_fu_4159404_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_79_fu_4176983_p2() {
    add_ln703_79_fu_4176983_p2 = (!mult_1152_V_fu_4176678_p1.read().is_01() || !add_ln703_78_fu_4176977_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1152_V_fu_4176678_p1.read()) + sc_biguint<16>(add_ln703_78_fu_4176977_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_800_fu_4179893_p2() {
    add_ln703_800_fu_4179893_p2 = (!add_ln703_797_fu_4179884_p2.read().is_01() || !sext_ln703_64_fu_4179890_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_797_fu_4179884_p2.read()) + sc_bigint<16>(sext_ln703_64_fu_4179890_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_801_fu_4182442_p2() {
    add_ln703_801_fu_4182442_p2 = (!add_ln703_795_reg_4190350.read().is_01() || !add_ln703_800_reg_4190355.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_795_reg_4190350.read()) + sc_biguint<16>(add_ln703_800_reg_4190355.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_803_fu_4173988_p2() {
    add_ln703_803_fu_4173988_p2 = (!sext_ln203_611_fu_4159655_p1.read().is_01() || !sext_ln203_591_fu_4159520_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_611_fu_4159655_p1.read()) + sc_bigint<14>(sext_ln203_591_fu_4159520_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_804_fu_4173998_p2() {
    add_ln703_804_fu_4173998_p2 = (!mult_293_V_fu_4160251_p1.read().is_01() || !mult_229_V_fu_4160113_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_293_V_fu_4160251_p1.read()) + sc_bigint<16>(mult_229_V_fu_4160113_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_805_fu_4174004_p2() {
    add_ln703_805_fu_4174004_p2 = (!mult_165_V_fu_4159919_p1.read().is_01() || !add_ln703_804_fu_4173998_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_165_V_fu_4159919_p1.read()) + sc_biguint<16>(add_ln703_804_fu_4173998_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_806_fu_4174010_p2() {
    add_ln703_806_fu_4174010_p2 = (!sext_ln703_462_fu_4173994_p1.read().is_01() || !add_ln703_805_fu_4174004_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_462_fu_4173994_p1.read()) + sc_biguint<16>(add_ln703_805_fu_4174004_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_807_fu_4179899_p2() {
    add_ln703_807_fu_4179899_p2 = (!mult_421_V_fu_4175034_p1.read().is_01() || !mult_357_V_fu_4174887_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_421_V_fu_4175034_p1.read()) + sc_bigint<16>(mult_357_V_fu_4174887_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_808_fu_4179905_p2() {
    add_ln703_808_fu_4179905_p2 = (!mult_677_V_reg_4186648.read().is_01() || !mult_613_V_fu_4175436_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_677_V_reg_4186648.read()) + sc_bigint<16>(mult_613_V_fu_4175436_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_809_fu_4179910_p2() {
    add_ln703_809_fu_4179910_p2 = (!mult_549_V_fu_4175307_p1.read().is_01() || !add_ln703_808_fu_4179905_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_549_V_fu_4175307_p1.read()) + sc_biguint<16>(add_ln703_808_fu_4179905_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_80_fu_4176989_p2() {
    add_ln703_80_fu_4176989_p2 = (!add_ln703_77_fu_4176972_p2.read().is_01() || !add_ln703_79_fu_4176983_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_77_fu_4176972_p2.read()) + sc_biguint<16>(add_ln703_79_fu_4176983_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_810_fu_4179916_p2() {
    add_ln703_810_fu_4179916_p2 = (!add_ln703_807_fu_4179899_p2.read().is_01() || !add_ln703_809_fu_4179910_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_807_fu_4179899_p2.read()) + sc_biguint<16>(add_ln703_809_fu_4179910_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_811_fu_4179922_p2() {
    add_ln703_811_fu_4179922_p2 = (!add_ln703_806_reg_4189555.read().is_01() || !add_ln703_810_fu_4179916_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_806_reg_4189555.read()) + sc_biguint<16>(add_ln703_810_fu_4179916_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_812_fu_4179927_p2() {
    add_ln703_812_fu_4179927_p2 = (!mult_805_V_fu_4176018_p1.read().is_01() || !mult_741_V_fu_4175706_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_805_V_fu_4176018_p1.read()) + sc_bigint<16>(mult_741_V_fu_4175706_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_813_fu_4179933_p2() {
    add_ln703_813_fu_4179933_p2 = (!sext_ln203_787_fu_4176450_p1.read().is_01() || !sext_ln203_779_fu_4176321_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_787_fu_4176450_p1.read()) + sc_bigint<15>(sext_ln203_779_fu_4176321_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_814_fu_4179939_p2() {
    add_ln703_814_fu_4179939_p2 = (!sext_ln203_764_fu_4176186_p1.read().is_01() || !add_ln703_813_fu_4179933_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_764_fu_4176186_p1.read()) + sc_biguint<15>(add_ln703_813_fu_4179933_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_815_fu_4179949_p2() {
    add_ln703_815_fu_4179949_p2 = (!add_ln703_812_fu_4179927_p2.read().is_01() || !sext_ln703_463_fu_4179945_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_812_fu_4179927_p2.read()) + sc_bigint<16>(sext_ln703_463_fu_4179945_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_816_fu_4179955_p2() {
    add_ln703_816_fu_4179955_p2 = (!sext_ln203_809_fu_4176750_p1.read().is_01() || !sext_ln203_798_fu_4176627_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_809_fu_4176750_p1.read()) + sc_bigint<15>(sext_ln203_798_fu_4176627_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_817_fu_4179965_p2() {
    add_ln703_817_fu_4179965_p2 = (!mult_1061_V_fu_4176537_p1.read().is_01() || !sext_ln703_464_fu_4179961_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1061_V_fu_4176537_p1.read()) + sc_bigint<16>(sext_ln703_464_fu_4179961_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_818_fu_4174016_p2() {
    add_ln703_818_fu_4174016_p2 = (!sext_ln203_6_fu_4162562_p1.read().is_01() || !ap_const_lv9_1D0.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_6_fu_4162562_p1.read()) + sc_bigint<9>(ap_const_lv9_1D0));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_819_fu_4179974_p2() {
    add_ln703_819_fu_4179974_p2 = (!sext_ln203_836_fu_4176882_p1.read().is_01() || !sext_ln703_465_fu_4179971_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_836_fu_4176882_p1.read()) + sc_bigint<15>(sext_ln703_465_fu_4179971_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_81_fu_4182096_p2() {
    add_ln703_81_fu_4182096_p2 = (!add_ln703_75_reg_4189800.read().is_01() || !add_ln703_80_reg_4189805.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_75_reg_4189800.read()) + sc_biguint<16>(add_ln703_80_reg_4189805.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_820_fu_4179984_p2() {
    add_ln703_820_fu_4179984_p2 = (!add_ln703_817_fu_4179965_p2.read().is_01() || !sext_ln703_466_fu_4179980_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_817_fu_4179965_p2.read()) + sc_bigint<16>(sext_ln703_466_fu_4179980_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_821_fu_4182451_p2() {
    add_ln703_821_fu_4182451_p2 = (!add_ln703_815_reg_4190365.read().is_01() || !add_ln703_820_reg_4190370.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_815_reg_4190365.read()) + sc_biguint<16>(add_ln703_820_reg_4190370.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_823_fu_4174022_p2() {
    add_ln703_823_fu_4174022_p2 = (!mult_102_V_fu_4159658_p1.read().is_01() || !mult_38_V_fu_4159523_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_102_V_fu_4159658_p1.read()) + sc_bigint<16>(mult_38_V_fu_4159523_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_824_fu_4174028_p2() {
    add_ln703_824_fu_4174028_p2 = (!mult_294_V_fu_4160254_p1.read().is_01() || !mult_230_V_fu_4160116_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_294_V_fu_4160254_p1.read()) + sc_bigint<16>(mult_230_V_fu_4160116_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_825_fu_4174034_p2() {
    add_ln703_825_fu_4174034_p2 = (!mult_166_V_fu_4159922_p1.read().is_01() || !add_ln703_824_fu_4174028_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_166_V_fu_4159922_p1.read()) + sc_biguint<16>(add_ln703_824_fu_4174028_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_826_fu_4174040_p2() {
    add_ln703_826_fu_4174040_p2 = (!add_ln703_823_fu_4174022_p2.read().is_01() || !add_ln703_825_fu_4174034_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_823_fu_4174022_p2.read()) + sc_biguint<16>(add_ln703_825_fu_4174034_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_827_fu_4179990_p2() {
    add_ln703_827_fu_4179990_p2 = (!mult_422_V_fu_4175037_p1.read().is_01() || !mult_358_V_fu_4174890_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_422_V_fu_4175037_p1.read()) + sc_bigint<16>(mult_358_V_fu_4174890_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_828_fu_4179996_p2() {
    add_ln703_828_fu_4179996_p2 = (!mult_614_V_fu_4175439_p1.read().is_01() || !mult_550_V_fu_4175310_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_614_V_fu_4175439_p1.read()) + sc_bigint<16>(mult_550_V_fu_4175310_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_829_fu_4180002_p2() {
    add_ln703_829_fu_4180002_p2 = (!mult_486_V_fu_4175181_p1.read().is_01() || !add_ln703_828_fu_4179996_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_486_V_fu_4175181_p1.read()) + sc_biguint<16>(add_ln703_828_fu_4179996_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_830_fu_4180008_p2() {
    add_ln703_830_fu_4180008_p2 = (!add_ln703_827_fu_4179990_p2.read().is_01() || !add_ln703_829_fu_4180002_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_827_fu_4179990_p2.read()) + sc_biguint<16>(add_ln703_829_fu_4180002_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_831_fu_4180014_p2() {
    add_ln703_831_fu_4180014_p2 = (!add_ln703_826_reg_4189565.read().is_01() || !add_ln703_830_fu_4180008_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_826_reg_4189565.read()) + sc_biguint<16>(add_ln703_830_fu_4180008_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_832_fu_4180019_p2() {
    add_ln703_832_fu_4180019_p2 = (!mult_742_V_fu_4175709_p1.read().is_01() || !mult_678_V_fu_4175565_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_742_V_fu_4175709_p1.read()) + sc_bigint<16>(mult_678_V_fu_4175565_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_833_fu_4180025_p2() {
    add_ln703_833_fu_4180025_p2 = (!sext_ln203_780_fu_4176324_p1.read().is_01() || !sext_ln203_765_fu_4176189_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_780_fu_4176324_p1.read()) + sc_bigint<15>(sext_ln203_765_fu_4176189_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_834_fu_4180035_p2() {
    add_ln703_834_fu_4180035_p2 = (!mult_806_V_reg_4187191.read().is_01() || !sext_ln703_467_fu_4180031_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_806_V_reg_4187191.read()) + sc_bigint<16>(sext_ln703_467_fu_4180031_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_835_fu_4180040_p2() {
    add_ln703_835_fu_4180040_p2 = (!add_ln703_832_fu_4180019_p2.read().is_01() || !add_ln703_834_fu_4180035_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_832_fu_4180019_p2.read()) + sc_biguint<16>(add_ln703_834_fu_4180035_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_836_fu_4180046_p2() {
    add_ln703_836_fu_4180046_p2 = (!mult_1126_V_fu_4176630_p1.read().is_01() || !mult_1062_V_fu_4176540_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1126_V_fu_4176630_p1.read()) + sc_bigint<16>(mult_1062_V_fu_4176540_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_837_fu_4180052_p2() {
    add_ln703_837_fu_4180052_p2 = (!mult_998_V_fu_4176453_p1.read().is_01() || !add_ln703_836_fu_4180046_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_998_V_fu_4176453_p1.read()) + sc_biguint<16>(add_ln703_836_fu_4180046_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_838_fu_4174046_p2() {
    add_ln703_838_fu_4174046_p2 = (!sext_ln203_837_fu_4172704_p1.read().is_01() || !ap_const_lv11_32.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_837_fu_4172704_p1.read()) + sc_biguint<11>(ap_const_lv11_32));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_839_fu_4180061_p2() {
    add_ln703_839_fu_4180061_p2 = (!sext_ln203_810_fu_4176753_p1.read().is_01() || !sext_ln703_468_fu_4180058_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_810_fu_4176753_p1.read()) + sc_bigint<15>(sext_ln703_468_fu_4180058_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_83_fu_4172944_p2() {
    add_ln703_83_fu_4172944_p2 = (!mult_65_V_fu_4159580_p1.read().is_01() || !mult_1_V_fu_4159442_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_65_V_fu_4159580_p1.read()) + sc_bigint<16>(mult_1_V_fu_4159442_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_840_fu_4180071_p2() {
    add_ln703_840_fu_4180071_p2 = (!add_ln703_837_fu_4180052_p2.read().is_01() || !sext_ln703_469_fu_4180067_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_837_fu_4180052_p2.read()) + sc_bigint<16>(sext_ln703_469_fu_4180067_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_841_fu_4182460_p2() {
    add_ln703_841_fu_4182460_p2 = (!add_ln703_835_reg_4190380.read().is_01() || !add_ln703_840_reg_4190385.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_835_reg_4190380.read()) + sc_biguint<16>(add_ln703_840_reg_4190385.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_843_fu_4174052_p2() {
    add_ln703_843_fu_4174052_p2 = (!sext_ln203_612_fu_4159661_p1.read().is_01() || !sext_ln203_592_fu_4159526_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_612_fu_4159661_p1.read()) + sc_bigint<15>(sext_ln203_592_fu_4159526_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_844_fu_4174062_p2() {
    add_ln703_844_fu_4174062_p2 = (!mult_295_V_fu_4160257_p1.read().is_01() || !mult_231_V_fu_4160119_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_295_V_fu_4160257_p1.read()) + sc_bigint<16>(mult_231_V_fu_4160119_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_845_fu_4174068_p2() {
    add_ln703_845_fu_4174068_p2 = (!mult_167_V_fu_4159925_p1.read().is_01() || !add_ln703_844_fu_4174062_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_167_V_fu_4159925_p1.read()) + sc_biguint<16>(add_ln703_844_fu_4174062_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_846_fu_4174074_p2() {
    add_ln703_846_fu_4174074_p2 = (!sext_ln703_470_fu_4174058_p1.read().is_01() || !add_ln703_845_fu_4174068_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_470_fu_4174058_p1.read()) + sc_biguint<16>(add_ln703_845_fu_4174068_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_847_fu_4174080_p2() {
    add_ln703_847_fu_4174080_p2 = (!sext_ln203_683_fu_4161768_p1.read().is_01() || !sext_ln203_663_fu_4160897_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_683_fu_4161768_p1.read()) + sc_bigint<14>(sext_ln203_663_fu_4160897_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_848_fu_4180080_p2() {
    add_ln703_848_fu_4180080_p2 = (!mult_615_V_reg_4186375.read().is_01() || !mult_551_V_fu_4175313_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_615_V_reg_4186375.read()) + sc_bigint<16>(mult_551_V_fu_4175313_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_849_fu_4180085_p2() {
    add_ln703_849_fu_4180085_p2 = (!mult_487_V_fu_4175184_p1.read().is_01() || !add_ln703_848_fu_4180080_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_487_V_fu_4175184_p1.read()) + sc_biguint<16>(add_ln703_848_fu_4180080_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_84_fu_4159364_p2() {
    add_ln703_84_fu_4159364_p2 = (!sext_ln203_637_fu_4158093_p1.read().is_01() || !sext_ln203_624_fu_4157137_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_637_fu_4158093_p1.read()) + sc_bigint<11>(sext_ln203_624_fu_4157137_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_850_fu_4180091_p2() {
    add_ln703_850_fu_4180091_p2 = (!sext_ln703_471_fu_4180077_p1.read().is_01() || !add_ln703_849_fu_4180085_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_471_fu_4180077_p1.read()) + sc_biguint<16>(add_ln703_849_fu_4180085_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_851_fu_4180097_p2() {
    add_ln703_851_fu_4180097_p2 = (!add_ln703_846_reg_4189575.read().is_01() || !add_ln703_850_fu_4180091_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_846_reg_4189575.read()) + sc_biguint<16>(add_ln703_850_fu_4180091_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_852_fu_4180102_p2() {
    add_ln703_852_fu_4180102_p2 = (!mult_743_V_reg_4186930.read().is_01() || !mult_679_V_fu_4175568_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_743_V_reg_4186930.read()) + sc_bigint<16>(mult_679_V_fu_4175568_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_853_fu_4180107_p2() {
    add_ln703_853_fu_4180107_p2 = (!mult_927_V_fu_4176306_p1.read().is_01() || !mult_871_V_fu_4176192_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_927_V_fu_4176306_p1.read()) + sc_bigint<16>(mult_871_V_fu_4176192_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_854_fu_4180113_p2() {
    add_ln703_854_fu_4180113_p2 = (!mult_807_V_reg_4187196.read().is_01() || !add_ln703_853_fu_4180107_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_807_V_reg_4187196.read()) + sc_biguint<16>(add_ln703_853_fu_4180107_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_855_fu_4180118_p2() {
    add_ln703_855_fu_4180118_p2 = (!add_ln703_852_fu_4180102_p2.read().is_01() || !add_ln703_854_fu_4180113_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_852_fu_4180102_p2.read()) + sc_biguint<16>(add_ln703_854_fu_4180113_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_856_fu_4180124_p2() {
    add_ln703_856_fu_4180124_p2 = (!mult_1127_V_reg_4188630.read().is_01() || !mult_1063_V_reg_4188349.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1127_V_reg_4188630.read()) + sc_biguint<16>(mult_1063_V_reg_4188349.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_857_fu_4180128_p2() {
    add_ln703_857_fu_4180128_p2 = (!mult_999_V_fu_4176456_p1.read().is_01() || !add_ln703_856_fu_4180124_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_999_V_fu_4176456_p1.read()) + sc_biguint<16>(add_ln703_856_fu_4180124_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_858_fu_4180134_p2() {
    add_ln703_858_fu_4180134_p2 = (!sext_ln203_838_fu_4176885_p1.read().is_01() || !ap_const_lv15_4A.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_838_fu_4176885_p1.read()) + sc_biguint<15>(ap_const_lv15_4A));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_859_fu_4180144_p2() {
    add_ln703_859_fu_4180144_p2 = (!mult_1191_V_reg_4188910.read().is_01() || !sext_ln703_472_fu_4180140_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1191_V_reg_4188910.read()) + sc_bigint<16>(sext_ln703_472_fu_4180140_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_85_fu_4159374_p2() {
    add_ln703_85_fu_4159374_p2 = (!sext_ln203_619_fu_4156450_p1.read().is_01() || !sext_ln703_374_fu_4159370_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_619_fu_4156450_p1.read()) + sc_bigint<12>(sext_ln703_374_fu_4159370_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_860_fu_4180149_p2() {
    add_ln703_860_fu_4180149_p2 = (!add_ln703_857_fu_4180128_p2.read().is_01() || !add_ln703_859_fu_4180144_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_857_fu_4180128_p2.read()) + sc_biguint<16>(add_ln703_859_fu_4180144_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_861_fu_4182469_p2() {
    add_ln703_861_fu_4182469_p2 = (!add_ln703_855_reg_4190395.read().is_01() || !add_ln703_860_reg_4190400.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_855_reg_4190395.read()) + sc_biguint<16>(add_ln703_860_reg_4190400.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_863_fu_4174086_p2() {
    add_ln703_863_fu_4174086_p2 = (!sext_ln203_613_fu_4159664_p1.read().is_01() || !sext_ln203_593_fu_4159529_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_613_fu_4159664_p1.read()) + sc_bigint<15>(sext_ln203_593_fu_4159529_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_864_fu_4174096_p2() {
    add_ln703_864_fu_4174096_p2 = (!mult_296_V_reg_4184706.read().is_01() || !mult_232_V_reg_4184419.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_296_V_reg_4184706.read()) + sc_biguint<16>(mult_232_V_reg_4184419.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_865_fu_4174100_p2() {
    add_ln703_865_fu_4174100_p2 = (!mult_168_V_fu_4159928_p1.read().is_01() || !add_ln703_864_fu_4174096_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_168_V_fu_4159928_p1.read()) + sc_biguint<16>(add_ln703_864_fu_4174096_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_866_fu_4174106_p2() {
    add_ln703_866_fu_4174106_p2 = (!sext_ln703_473_fu_4174092_p1.read().is_01() || !add_ln703_865_fu_4174100_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_473_fu_4174092_p1.read()) + sc_biguint<16>(add_ln703_865_fu_4174100_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_867_fu_4180155_p2() {
    add_ln703_867_fu_4180155_p2 = (!mult_424_V_fu_4175040_p1.read().is_01() || !mult_360_V_fu_4174893_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_424_V_fu_4175040_p1.read()) + sc_bigint<16>(mult_360_V_fu_4174893_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_868_fu_4180161_p2() {
    add_ln703_868_fu_4180161_p2 = (!mult_616_V_fu_4175442_p1.read().is_01() || !mult_552_V_fu_4175316_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_616_V_fu_4175442_p1.read()) + sc_bigint<16>(mult_552_V_fu_4175316_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_869_fu_4180167_p2() {
    add_ln703_869_fu_4180167_p2 = (!mult_488_V_fu_4175187_p1.read().is_01() || !add_ln703_868_fu_4180161_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_488_V_fu_4175187_p1.read()) + sc_biguint<16>(add_ln703_868_fu_4180161_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_86_fu_4172953_p2() {
    add_ln703_86_fu_4172953_p2 = (!add_ln703_83_fu_4172944_p2.read().is_01() || !sext_ln703_375_fu_4172950_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_83_fu_4172944_p2.read()) + sc_bigint<16>(sext_ln703_375_fu_4172950_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_870_fu_4180173_p2() {
    add_ln703_870_fu_4180173_p2 = (!add_ln703_867_fu_4180155_p2.read().is_01() || !add_ln703_869_fu_4180167_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_867_fu_4180155_p2.read()) + sc_biguint<16>(add_ln703_869_fu_4180167_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_871_fu_4180179_p2() {
    add_ln703_871_fu_4180179_p2 = (!add_ln703_866_reg_4189585.read().is_01() || !add_ln703_870_fu_4180173_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_866_reg_4189585.read()) + sc_biguint<16>(add_ln703_870_fu_4180173_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_872_fu_4180184_p2() {
    add_ln703_872_fu_4180184_p2 = (!mult_744_V_fu_4175712_p1.read().is_01() || !mult_661_V_fu_4175532_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_744_V_fu_4175712_p1.read()) + sc_bigint<16>(mult_661_V_fu_4175532_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_873_fu_4180190_p2() {
    add_ln703_873_fu_4180190_p2 = (!mult_961_V_fu_4176369_p1.read().is_01() || !mult_872_V_fu_4176195_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_961_V_fu_4176369_p1.read()) + sc_bigint<16>(mult_872_V_fu_4176195_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_874_fu_4180196_p2() {
    add_ln703_874_fu_4180196_p2 = (!mult_808_V_fu_4176024_p1.read().is_01() || !add_ln703_873_fu_4180190_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_808_V_fu_4176024_p1.read()) + sc_biguint<16>(add_ln703_873_fu_4180190_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_875_fu_4180202_p2() {
    add_ln703_875_fu_4180202_p2 = (!add_ln703_872_fu_4180184_p2.read().is_01() || !add_ln703_874_fu_4180196_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_872_fu_4180184_p2.read()) + sc_biguint<16>(add_ln703_874_fu_4180196_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_876_fu_4180208_p2() {
    add_ln703_876_fu_4180208_p2 = (!mult_1192_V_fu_4176756_p1.read().is_01() || !mult_1128_V_fu_4176633_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1192_V_fu_4176756_p1.read()) + sc_bigint<16>(mult_1128_V_fu_4176633_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_877_fu_4180214_p2() {
    add_ln703_877_fu_4180214_p2 = (!mult_1064_V_reg_4188354.read().is_01() || !add_ln703_876_fu_4180208_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1064_V_reg_4188354.read()) + sc_biguint<16>(add_ln703_876_fu_4180208_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_878_fu_4180219_p2() {
    add_ln703_878_fu_4180219_p2 = (!sext_ln203_11_fu_4176327_p1.read().is_01() || !ap_const_lv11_30.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_11_fu_4176327_p1.read()) + sc_biguint<11>(ap_const_lv11_30));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_879_fu_4180229_p2() {
    add_ln703_879_fu_4180229_p2 = (!mult_1256_V_reg_4189165.read().is_01() || !sext_ln703_66_fu_4180225_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1256_V_reg_4189165.read()) + sc_bigint<16>(sext_ln703_66_fu_4180225_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_87_fu_4176995_p2() {
    add_ln703_87_fu_4176995_p2 = (!mult_385_V_fu_4174944_p1.read().is_01() || !mult_321_V_fu_4174809_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_385_V_fu_4174944_p1.read()) + sc_bigint<16>(mult_321_V_fu_4174809_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_880_fu_4180234_p2() {
    add_ln703_880_fu_4180234_p2 = (!add_ln703_877_fu_4180214_p2.read().is_01() || !add_ln703_879_fu_4180229_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_877_fu_4180214_p2.read()) + sc_biguint<16>(add_ln703_879_fu_4180229_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_881_fu_4182478_p2() {
    add_ln703_881_fu_4182478_p2 = (!add_ln703_875_reg_4190410.read().is_01() || !add_ln703_880_reg_4190415.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_875_reg_4190410.read()) + sc_biguint<16>(add_ln703_880_reg_4190415.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_883_fu_4174112_p2() {
    add_ln703_883_fu_4174112_p2 = (!sext_ln203_614_fu_4159667_p1.read().is_01() || !sext_ln203_594_fu_4159532_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_614_fu_4159667_p1.read()) + sc_bigint<15>(sext_ln203_594_fu_4159532_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_884_fu_4174122_p2() {
    add_ln703_884_fu_4174122_p2 = (!sext_ln203_649_fu_4160260_p1.read().is_01() || !sext_ln203_633_fu_4160122_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_649_fu_4160260_p1.read()) + sc_bigint<15>(sext_ln203_633_fu_4160122_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_885_fu_4174132_p2() {
    add_ln703_885_fu_4174132_p2 = (!mult_169_V_fu_4159931_p1.read().is_01() || !sext_ln703_475_fu_4174128_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_169_V_fu_4159931_p1.read()) + sc_bigint<16>(sext_ln703_475_fu_4174128_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_886_fu_4174138_p2() {
    add_ln703_886_fu_4174138_p2 = (!sext_ln703_474_fu_4174118_p1.read().is_01() || !add_ln703_885_fu_4174132_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_474_fu_4174118_p1.read()) + sc_biguint<16>(add_ln703_885_fu_4174132_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_887_fu_4180240_p2() {
    add_ln703_887_fu_4180240_p2 = (!mult_422_V_fu_4175037_p1.read().is_01() || !mult_361_V_fu_4174896_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_422_V_fu_4175037_p1.read()) + sc_bigint<16>(mult_361_V_fu_4174896_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_888_fu_4180246_p2() {
    add_ln703_888_fu_4180246_p2 = (!sext_ln203_715_fu_4175445_p1.read().is_01() || !sext_ln203_704_fu_4175319_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_715_fu_4175445_p1.read()) + sc_bigint<15>(sext_ln203_704_fu_4175319_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_889_fu_4180252_p2() {
    add_ln703_889_fu_4180252_p2 = (!sext_ln203_694_fu_4175190_p1.read().is_01() || !add_ln703_888_fu_4180246_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_694_fu_4175190_p1.read()) + sc_biguint<15>(add_ln703_888_fu_4180246_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_88_fu_4177001_p2() {
    add_ln703_88_fu_4177001_p2 = (!mult_577_V_fu_4175370_p1.read().is_01() || !mult_513_V_reg_4185960.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_577_V_fu_4175370_p1.read()) + sc_biguint<16>(mult_513_V_reg_4185960.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_890_fu_4180262_p2() {
    add_ln703_890_fu_4180262_p2 = (!add_ln703_887_fu_4180240_p2.read().is_01() || !sext_ln703_476_fu_4180258_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_887_fu_4180240_p2.read()) + sc_bigint<16>(sext_ln703_476_fu_4180258_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_891_fu_4180268_p2() {
    add_ln703_891_fu_4180268_p2 = (!add_ln703_886_reg_4189590.read().is_01() || !add_ln703_890_fu_4180262_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_886_reg_4189590.read()) + sc_biguint<16>(add_ln703_890_fu_4180262_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_892_fu_4180273_p2() {
    add_ln703_892_fu_4180273_p2 = (!mult_745_V_fu_4175715_p1.read().is_01() || !mult_681_V_fu_4175571_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_745_V_fu_4175715_p1.read()) + sc_bigint<16>(mult_681_V_fu_4175571_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_893_fu_4180279_p2() {
    add_ln703_893_fu_4180279_p2 = (!mult_937_V_reg_4187773.read().is_01() || !mult_873_V_reg_4187492.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_937_V_reg_4187773.read()) + sc_biguint<16>(mult_873_V_reg_4187492.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_894_fu_4180283_p2() {
    add_ln703_894_fu_4180283_p2 = (!mult_809_V_reg_4187206.read().is_01() || !add_ln703_893_fu_4180279_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_809_V_reg_4187206.read()) + sc_biguint<16>(add_ln703_893_fu_4180279_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_895_fu_4180288_p2() {
    add_ln703_895_fu_4180288_p2 = (!add_ln703_892_fu_4180273_p2.read().is_01() || !add_ln703_894_fu_4180283_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_892_fu_4180273_p2.read()) + sc_biguint<16>(add_ln703_894_fu_4180283_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_896_fu_4180294_p2() {
    add_ln703_896_fu_4180294_p2 = (!mult_1129_V_fu_4176636_p1.read().is_01() || !mult_1065_V_reg_4188359.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1129_V_fu_4176636_p1.read()) + sc_biguint<16>(mult_1065_V_reg_4188359.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_897_fu_4180299_p2() {
    add_ln703_897_fu_4180299_p2 = (!mult_1001_V_reg_4188063.read().is_01() || !add_ln703_896_fu_4180294_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1001_V_reg_4188063.read()) + sc_biguint<16>(add_ln703_896_fu_4180294_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_898_fu_4180304_p2() {
    add_ln703_898_fu_4180304_p2 = (!sext_ln203_839_fu_4176888_p1.read().is_01() || !ap_const_lv13_22.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_839_fu_4176888_p1.read()) + sc_biguint<13>(ap_const_lv13_22));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_899_fu_4180314_p2() {
    add_ln703_899_fu_4180314_p2 = (!mult_1193_V_fu_4176759_p1.read().is_01() || !sext_ln703_477_fu_4180310_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1193_V_fu_4176759_p1.read()) + sc_bigint<16>(sext_ln703_477_fu_4180310_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_89_fu_4177006_p2() {
    add_ln703_89_fu_4177006_p2 = (!mult_449_V_fu_4175094_p1.read().is_01() || !add_ln703_88_fu_4177001_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_449_V_fu_4175094_p1.read()) + sc_biguint<16>(add_ln703_88_fu_4177001_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_900_fu_4180320_p2() {
    add_ln703_900_fu_4180320_p2 = (!add_ln703_897_fu_4180299_p2.read().is_01() || !add_ln703_899_fu_4180314_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_897_fu_4180299_p2.read()) + sc_biguint<16>(add_ln703_899_fu_4180314_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_901_fu_4182487_p2() {
    add_ln703_901_fu_4182487_p2 = (!add_ln703_895_reg_4190425.read().is_01() || !add_ln703_900_reg_4190430.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_895_reg_4190425.read()) + sc_biguint<16>(add_ln703_900_reg_4190430.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_903_fu_4174144_p2() {
    add_ln703_903_fu_4174144_p2 = (!mult_106_V_fu_4159670_p1.read().is_01() || !mult_42_V_reg_4183555.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_106_V_fu_4159670_p1.read()) + sc_biguint<16>(mult_42_V_reg_4183555.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_904_fu_4174149_p2() {
    add_ln703_904_fu_4174149_p2 = (!mult_298_V_reg_4184716.read().is_01() || !mult_234_V_fu_4160125_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_298_V_reg_4184716.read()) + sc_bigint<16>(mult_234_V_fu_4160125_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_905_fu_4174154_p2() {
    add_ln703_905_fu_4174154_p2 = (!mult_170_V_reg_4184142.read().is_01() || !add_ln703_904_fu_4174149_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_170_V_reg_4184142.read()) + sc_biguint<16>(add_ln703_904_fu_4174149_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_906_fu_4174159_p2() {
    add_ln703_906_fu_4174159_p2 = (!add_ln703_903_fu_4174144_p2.read().is_01() || !add_ln703_905_fu_4174154_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_903_fu_4174144_p2.read()) + sc_biguint<16>(add_ln703_905_fu_4174154_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_907_fu_4180326_p2() {
    add_ln703_907_fu_4180326_p2 = (!mult_426_V_fu_4175043_p1.read().is_01() || !mult_362_V_reg_4185334.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_426_V_fu_4175043_p1.read()) + sc_biguint<16>(mult_362_V_reg_4185334.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_908_fu_4180331_p2() {
    add_ln703_908_fu_4180331_p2 = (!mult_618_V_fu_4175448_p1.read().is_01() || !mult_554_V_fu_4175322_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_618_V_fu_4175448_p1.read()) + sc_bigint<16>(mult_554_V_fu_4175322_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_909_fu_4180337_p2() {
    add_ln703_909_fu_4180337_p2 = (!mult_490_V_fu_4175193_p1.read().is_01() || !add_ln703_908_fu_4180331_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_490_V_fu_4175193_p1.read()) + sc_biguint<16>(add_ln703_908_fu_4180331_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_90_fu_4177012_p2() {
    add_ln703_90_fu_4177012_p2 = (!add_ln703_87_fu_4176995_p2.read().is_01() || !add_ln703_89_fu_4177006_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_87_fu_4176995_p2.read()) + sc_biguint<16>(add_ln703_89_fu_4177006_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_910_fu_4180343_p2() {
    add_ln703_910_fu_4180343_p2 = (!add_ln703_907_fu_4180326_p2.read().is_01() || !add_ln703_909_fu_4180337_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_907_fu_4180326_p2.read()) + sc_biguint<16>(add_ln703_909_fu_4180337_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_911_fu_4180349_p2() {
    add_ln703_911_fu_4180349_p2 = (!add_ln703_906_reg_4189595.read().is_01() || !add_ln703_910_fu_4180343_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_906_reg_4189595.read()) + sc_biguint<16>(add_ln703_910_fu_4180343_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_912_fu_4180354_p2() {
    add_ln703_912_fu_4180354_p2 = (!mult_746_V_fu_4175718_p1.read().is_01() || !mult_682_V_fu_4175574_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_746_V_fu_4175718_p1.read()) + sc_bigint<16>(mult_682_V_fu_4175574_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_913_fu_4180360_p2() {
    add_ln703_913_fu_4180360_p2 = (!mult_938_V_fu_4176330_p1.read().is_01() || !mult_874_V_reg_4187497.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_938_V_fu_4176330_p1.read()) + sc_biguint<16>(mult_874_V_reg_4187497.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_914_fu_4180365_p2() {
    add_ln703_914_fu_4180365_p2 = (!mult_810_V_reg_4187211.read().is_01() || !add_ln703_913_fu_4180360_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_810_V_reg_4187211.read()) + sc_biguint<16>(add_ln703_913_fu_4180360_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_915_fu_4180370_p2() {
    add_ln703_915_fu_4180370_p2 = (!add_ln703_912_fu_4180354_p2.read().is_01() || !add_ln703_914_fu_4180365_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_912_fu_4180354_p2.read()) + sc_biguint<16>(add_ln703_914_fu_4180365_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_916_fu_4180376_p2() {
    add_ln703_916_fu_4180376_p2 = (!mult_1130_V_reg_4188645.read().is_01() || !mult_1028_V_reg_4188193.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1130_V_reg_4188645.read()) + sc_biguint<16>(mult_1028_V_reg_4188193.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_917_fu_4180380_p2() {
    add_ln703_917_fu_4180380_p2 = (!mult_1002_V_fu_4176459_p1.read().is_01() || !add_ln703_916_fu_4180376_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1002_V_fu_4176459_p1.read()) + sc_biguint<16>(add_ln703_916_fu_4180376_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_918_fu_4180386_p2() {
    add_ln703_918_fu_4180386_p2 = (!mult_1258_V_reg_4189170.read().is_01() || !ap_const_lv16_2E.is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1258_V_reg_4189170.read()) + sc_biguint<16>(ap_const_lv16_2E));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_919_fu_4180391_p2() {
    add_ln703_919_fu_4180391_p2 = (!mult_1194_V_fu_4176762_p1.read().is_01() || !add_ln703_918_fu_4180386_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1194_V_fu_4176762_p1.read()) + sc_biguint<16>(add_ln703_918_fu_4180386_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_91_fu_4177018_p2() {
    add_ln703_91_fu_4177018_p2 = (!add_ln703_86_reg_4189255.read().is_01() || !add_ln703_90_fu_4177012_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_86_reg_4189255.read()) + sc_biguint<16>(add_ln703_90_fu_4177012_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_920_fu_4180397_p2() {
    add_ln703_920_fu_4180397_p2 = (!add_ln703_917_fu_4180380_p2.read().is_01() || !add_ln703_919_fu_4180391_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_917_fu_4180380_p2.read()) + sc_biguint<16>(add_ln703_919_fu_4180391_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_921_fu_4182496_p2() {
    add_ln703_921_fu_4182496_p2 = (!add_ln703_915_reg_4190440.read().is_01() || !add_ln703_920_reg_4190445.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_915_reg_4190440.read()) + sc_biguint<16>(add_ln703_920_reg_4190445.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_923_fu_4174165_p2() {
    add_ln703_923_fu_4174165_p2 = (!mult_107_V_reg_4183857.read().is_01() || !mult_43_V_fu_4159535_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_107_V_reg_4183857.read()) + sc_bigint<16>(mult_43_V_fu_4159535_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_924_fu_4174170_p2() {
    add_ln703_924_fu_4174170_p2 = (!mult_299_V_fu_4160263_p1.read().is_01() || !mult_235_V_fu_4160128_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_299_V_fu_4160263_p1.read()) + sc_bigint<16>(mult_235_V_fu_4160128_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_925_fu_4174176_p2() {
    add_ln703_925_fu_4174176_p2 = (!mult_171_V_fu_4159934_p1.read().is_01() || !add_ln703_924_fu_4174170_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_171_V_fu_4159934_p1.read()) + sc_biguint<16>(add_ln703_924_fu_4174170_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_926_fu_4174182_p2() {
    add_ln703_926_fu_4174182_p2 = (!add_ln703_923_fu_4174165_p2.read().is_01() || !add_ln703_925_fu_4174176_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_923_fu_4174165_p2.read()) + sc_biguint<16>(add_ln703_925_fu_4174176_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_927_fu_4180403_p2() {
    add_ln703_927_fu_4180403_p2 = (!sext_ln203_677_fu_4174998_p1.read().is_01() || !sext_ln203_664_fu_4174899_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_677_fu_4174998_p1.read()) + sc_bigint<15>(sext_ln203_664_fu_4174899_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_928_fu_4180413_p2() {
    add_ln703_928_fu_4180413_p2 = (!mult_619_V_reg_4186395.read().is_01() || !mult_555_V_fu_4175325_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_619_V_reg_4186395.read()) + sc_bigint<16>(mult_555_V_fu_4175325_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_929_fu_4180418_p2() {
    add_ln703_929_fu_4180418_p2 = (!mult_491_V_fu_4175196_p1.read().is_01() || !add_ln703_928_fu_4180413_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_491_V_fu_4175196_p1.read()) + sc_biguint<16>(add_ln703_928_fu_4180413_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_92_fu_4177023_p2() {
    add_ln703_92_fu_4177023_p2 = (!mult_705_V_fu_4175607_p1.read().is_01() || !mult_641_V_fu_4175493_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_705_V_fu_4175607_p1.read()) + sc_bigint<16>(mult_641_V_fu_4175493_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_930_fu_4180424_p2() {
    add_ln703_930_fu_4180424_p2 = (!sext_ln703_478_fu_4180409_p1.read().is_01() || !add_ln703_929_fu_4180418_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_478_fu_4180409_p1.read()) + sc_biguint<16>(add_ln703_929_fu_4180418_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_931_fu_4180430_p2() {
    add_ln703_931_fu_4180430_p2 = (!add_ln703_926_reg_4189600.read().is_01() || !add_ln703_930_fu_4180424_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_926_reg_4189600.read()) + sc_biguint<16>(add_ln703_930_fu_4180424_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_932_fu_4180435_p2() {
    add_ln703_932_fu_4180435_p2 = (!sext_ln203_744_fu_4175721_p1.read().is_01() || !sext_ln203_729_fu_4175580_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_744_fu_4175721_p1.read()) + sc_bigint<14>(sext_ln203_729_fu_4175580_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_933_fu_4180445_p2() {
    add_ln703_933_fu_4180445_p2 = (!mult_902_V_fu_4176258_p1.read().is_01() || !mult_875_V_fu_4176198_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_902_V_fu_4176258_p1.read()) + sc_bigint<16>(mult_875_V_fu_4176198_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_934_fu_4180451_p2() {
    add_ln703_934_fu_4180451_p2 = (!mult_811_V_reg_4187216.read().is_01() || !add_ln703_933_fu_4180445_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_811_V_reg_4187216.read()) + sc_biguint<16>(add_ln703_933_fu_4180445_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_935_fu_4180456_p2() {
    add_ln703_935_fu_4180456_p2 = (!sext_ln703_479_fu_4180441_p1.read().is_01() || !add_ln703_934_fu_4180451_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_479_fu_4180441_p1.read()) + sc_biguint<16>(add_ln703_934_fu_4180451_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_936_fu_4180462_p2() {
    add_ln703_936_fu_4180462_p2 = (!mult_1131_V_reg_4188650.read().is_01() || !mult_1067_V_fu_4176543_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1131_V_reg_4188650.read()) + sc_bigint<16>(mult_1067_V_fu_4176543_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_937_fu_4180467_p2() {
    add_ln703_937_fu_4180467_p2 = (!mult_1003_V_fu_4176462_p1.read().is_01() || !add_ln703_936_fu_4180462_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1003_V_fu_4176462_p1.read()) + sc_biguint<16>(add_ln703_936_fu_4180462_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_938_fu_4180473_p2() {
    add_ln703_938_fu_4180473_p2 = (!mult_1259_V_fu_4176891_p1.read().is_01() || !ap_const_lv16_FFC0.is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1259_V_fu_4176891_p1.read()) + sc_bigint<16>(ap_const_lv16_FFC0));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_939_fu_4180479_p2() {
    add_ln703_939_fu_4180479_p2 = (!mult_1195_V_fu_4176765_p1.read().is_01() || !add_ln703_938_fu_4180473_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1195_V_fu_4176765_p1.read()) + sc_biguint<16>(add_ln703_938_fu_4180473_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_93_fu_4177029_p2() {
    add_ln703_93_fu_4177029_p2 = (!sext_ln203_771_fu_4176246_p1.read().is_01() || !sext_ln203_756_fu_4176123_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_771_fu_4176246_p1.read()) + sc_bigint<14>(sext_ln203_756_fu_4176123_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_940_fu_4180485_p2() {
    add_ln703_940_fu_4180485_p2 = (!add_ln703_937_fu_4180467_p2.read().is_01() || !add_ln703_939_fu_4180479_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_937_fu_4180467_p2.read()) + sc_biguint<16>(add_ln703_939_fu_4180479_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_941_fu_4182505_p2() {
    add_ln703_941_fu_4182505_p2 = (!add_ln703_935_reg_4190455.read().is_01() || !add_ln703_940_reg_4190460.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_935_reg_4190455.read()) + sc_biguint<16>(add_ln703_940_reg_4190460.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_943_fu_4174188_p2() {
    add_ln703_943_fu_4174188_p2 = (!mult_108_V_fu_4159673_p1.read().is_01() || !mult_44_V_fu_4159538_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_108_V_fu_4159673_p1.read()) + sc_bigint<16>(mult_44_V_fu_4159538_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_944_fu_4174194_p2() {
    add_ln703_944_fu_4174194_p2 = (!sext_ln203_640_fu_4160179_p1.read().is_01() || !sext_ln203_634_fu_4160131_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_640_fu_4160179_p1.read()) + sc_bigint<15>(sext_ln203_634_fu_4160131_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_945_fu_4174204_p2() {
    add_ln703_945_fu_4174204_p2 = (!mult_172_V_fu_4159937_p1.read().is_01() || !sext_ln703_480_fu_4174200_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_172_V_fu_4159937_p1.read()) + sc_bigint<16>(sext_ln703_480_fu_4174200_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_946_fu_4174210_p2() {
    add_ln703_946_fu_4174210_p2 = (!add_ln703_943_fu_4174188_p2.read().is_01() || !add_ln703_945_fu_4174204_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_943_fu_4174188_p2.read()) + sc_biguint<16>(add_ln703_945_fu_4174204_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_947_fu_4180491_p2() {
    add_ln703_947_fu_4180491_p2 = (!mult_428_V_fu_4175046_p1.read().is_01() || !mult_364_V_fu_4174902_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_428_V_fu_4175046_p1.read()) + sc_bigint<16>(mult_364_V_fu_4174902_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_948_fu_4180497_p2() {
    add_ln703_948_fu_4180497_p2 = (!mult_620_V_fu_4175451_p1.read().is_01() || !mult_556_V_fu_4175328_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_620_V_fu_4175451_p1.read()) + sc_bigint<16>(mult_556_V_fu_4175328_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_949_fu_4180503_p2() {
    add_ln703_949_fu_4180503_p2 = (!mult_492_V_fu_4175199_p1.read().is_01() || !add_ln703_948_fu_4180497_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_492_V_fu_4175199_p1.read()) + sc_biguint<16>(add_ln703_948_fu_4180497_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_94_fu_4177039_p2() {
    add_ln703_94_fu_4177039_p2 = (!mult_769_V_fu_4175772_p1.read().is_01() || !sext_ln703_376_fu_4177035_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_769_V_fu_4175772_p1.read()) + sc_bigint<16>(sext_ln703_376_fu_4177035_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_950_fu_4180509_p2() {
    add_ln703_950_fu_4180509_p2 = (!add_ln703_947_fu_4180491_p2.read().is_01() || !add_ln703_949_fu_4180503_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_947_fu_4180491_p2.read()) + sc_biguint<16>(add_ln703_949_fu_4180503_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_951_fu_4180515_p2() {
    add_ln703_951_fu_4180515_p2 = (!add_ln703_946_reg_4189605.read().is_01() || !add_ln703_950_fu_4180509_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_946_reg_4189605.read()) + sc_biguint<16>(add_ln703_950_fu_4180509_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_952_fu_4180520_p2() {
    add_ln703_952_fu_4180520_p2 = (!mult_748_V_fu_4175724_p1.read().is_01() || !mult_684_V_reg_4186679.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_748_V_fu_4175724_p1.read()) + sc_biguint<16>(mult_684_V_reg_4186679.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_953_fu_4180525_p2() {
    add_ln703_953_fu_4180525_p2 = (!mult_940_V_reg_4187783.read().is_01() || !mult_876_V_fu_4176201_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_940_V_reg_4187783.read()) + sc_bigint<16>(mult_876_V_fu_4176201_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_954_fu_4180530_p2() {
    add_ln703_954_fu_4180530_p2 = (!mult_812_V_reg_4187221.read().is_01() || !add_ln703_953_fu_4180525_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_812_V_reg_4187221.read()) + sc_biguint<16>(add_ln703_953_fu_4180525_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_955_fu_4180535_p2() {
    add_ln703_955_fu_4180535_p2 = (!add_ln703_952_fu_4180520_p2.read().is_01() || !add_ln703_954_fu_4180530_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_952_fu_4180520_p2.read()) + sc_biguint<16>(add_ln703_954_fu_4180530_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_956_fu_4180541_p2() {
    add_ln703_956_fu_4180541_p2 = (!mult_1132_V_fu_4176639_p1.read().is_01() || !mult_1068_V_fu_4176546_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1132_V_fu_4176639_p1.read()) + sc_bigint<16>(mult_1068_V_fu_4176546_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_957_fu_4180547_p2() {
    add_ln703_957_fu_4180547_p2 = (!mult_1004_V_fu_4176465_p1.read().is_01() || !add_ln703_956_fu_4180541_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1004_V_fu_4176465_p1.read()) + sc_biguint<16>(add_ln703_956_fu_4180541_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_958_fu_4180553_p2() {
    add_ln703_958_fu_4180553_p2 = (!mult_1260_V_fu_4176894_p1.read().is_01() || !ap_const_lv16_29.is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1260_V_fu_4176894_p1.read()) + sc_biguint<16>(ap_const_lv16_29));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_959_fu_4180559_p2() {
    add_ln703_959_fu_4180559_p2 = (!mult_1196_V_fu_4176768_p1.read().is_01() || !add_ln703_958_fu_4180553_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1196_V_fu_4176768_p1.read()) + sc_biguint<16>(add_ln703_958_fu_4180553_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_95_fu_4177045_p2() {
    add_ln703_95_fu_4177045_p2 = (!add_ln703_92_fu_4177023_p2.read().is_01() || !add_ln703_94_fu_4177039_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_92_fu_4177023_p2.read()) + sc_biguint<16>(add_ln703_94_fu_4177039_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_960_fu_4180565_p2() {
    add_ln703_960_fu_4180565_p2 = (!add_ln703_957_fu_4180547_p2.read().is_01() || !add_ln703_959_fu_4180559_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_957_fu_4180547_p2.read()) + sc_biguint<16>(add_ln703_959_fu_4180559_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_961_fu_4182514_p2() {
    add_ln703_961_fu_4182514_p2 = (!add_ln703_955_reg_4190470.read().is_01() || !add_ln703_960_reg_4190475.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_955_reg_4190470.read()) + sc_biguint<16>(add_ln703_960_reg_4190475.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_963_fu_4174216_p2() {
    add_ln703_963_fu_4174216_p2 = (!sext_ln203_615_fu_4159676_p1.read().is_01() || !sext_ln203_595_fu_4159541_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_615_fu_4159676_p1.read()) + sc_bigint<15>(sext_ln203_595_fu_4159541_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_964_fu_4174226_p2() {
    add_ln703_964_fu_4174226_p2 = (!mult_301_V_fu_4160266_p1.read().is_01() || !mult_237_V_fu_4160134_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_301_V_fu_4160266_p1.read()) + sc_bigint<16>(mult_237_V_fu_4160134_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_965_fu_4174232_p2() {
    add_ln703_965_fu_4174232_p2 = (!mult_173_V_reg_4184158.read().is_01() || !add_ln703_964_fu_4174226_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_173_V_reg_4184158.read()) + sc_biguint<16>(add_ln703_964_fu_4174226_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_966_fu_4174237_p2() {
    add_ln703_966_fu_4174237_p2 = (!sext_ln703_481_fu_4174222_p1.read().is_01() || !add_ln703_965_fu_4174232_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_481_fu_4174222_p1.read()) + sc_biguint<16>(add_ln703_965_fu_4174232_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_967_fu_4180571_p2() {
    add_ln703_967_fu_4180571_p2 = (!mult_429_V_fu_4175052_p1.read().is_01() || !mult_357_V_fu_4174887_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_429_V_fu_4175052_p1.read()) + sc_bigint<16>(mult_357_V_fu_4174887_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_968_fu_4180577_p2() {
    add_ln703_968_fu_4180577_p2 = (!mult_621_V_reg_4186405.read().is_01() || !mult_557_V_fu_4175331_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_621_V_reg_4186405.read()) + sc_bigint<16>(mult_557_V_fu_4175331_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_969_fu_4180582_p2() {
    add_ln703_969_fu_4180582_p2 = (!mult_493_V_fu_4175202_p1.read().is_01() || !add_ln703_968_fu_4180577_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_493_V_fu_4175202_p1.read()) + sc_biguint<16>(add_ln703_968_fu_4180577_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_96_fu_4177051_p2() {
    add_ln703_96_fu_4177051_p2 = (!mult_1089_V_fu_4176564_p1.read().is_01() || !mult_1025_V_fu_4176510_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1089_V_fu_4176564_p1.read()) + sc_bigint<16>(mult_1025_V_fu_4176510_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_970_fu_4180588_p2() {
    add_ln703_970_fu_4180588_p2 = (!add_ln703_967_fu_4180571_p2.read().is_01() || !add_ln703_969_fu_4180582_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_967_fu_4180571_p2.read()) + sc_biguint<16>(add_ln703_969_fu_4180582_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_971_fu_4180594_p2() {
    add_ln703_971_fu_4180594_p2 = (!add_ln703_966_reg_4189610.read().is_01() || !add_ln703_970_fu_4180588_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_966_reg_4189610.read()) + sc_biguint<16>(add_ln703_970_fu_4180588_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_972_fu_4180599_p2() {
    add_ln703_972_fu_4180599_p2 = (!sext_ln203_753_fu_4176021_p1.read().is_01() || !sext_ln203_745_fu_4175727_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_753_fu_4176021_p1.read()) + sc_bigint<14>(sext_ln203_745_fu_4175727_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_973_fu_4180609_p2() {
    add_ln703_973_fu_4180609_p2 = (!sext_ln203_788_fu_4176468_p1.read().is_01() || !sext_ln203_781_fu_4176333_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_788_fu_4176468_p1.read()) + sc_bigint<15>(sext_ln203_781_fu_4176333_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_974_fu_4180619_p2() {
    add_ln703_974_fu_4180619_p2 = (!mult_877_V_fu_4176204_p1.read().is_01() || !sext_ln703_483_fu_4180615_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_877_V_fu_4176204_p1.read()) + sc_bigint<16>(sext_ln703_483_fu_4180615_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_975_fu_4180625_p2() {
    add_ln703_975_fu_4180625_p2 = (!sext_ln703_482_fu_4180605_p1.read().is_01() || !add_ln703_974_fu_4180619_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_482_fu_4180605_p1.read()) + sc_biguint<16>(add_ln703_974_fu_4180619_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_976_fu_4180631_p2() {
    add_ln703_976_fu_4180631_p2 = (!mult_1197_V_fu_4176771_p1.read().is_01() || !mult_1133_V_fu_4176642_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1197_V_fu_4176771_p1.read()) + sc_bigint<16>(mult_1133_V_fu_4176642_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_977_fu_4180637_p2() {
    add_ln703_977_fu_4180637_p2 = (!mult_1069_V_fu_4176549_p1.read().is_01() || !add_ln703_976_fu_4180631_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1069_V_fu_4176549_p1.read()) + sc_biguint<16>(add_ln703_976_fu_4180631_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_978_fu_4174243_p2() {
    add_ln703_978_fu_4174243_p2 = (!sext_ln203_9_fu_4165303_p1.read().is_01() || !ap_const_lv10_3E3.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_9_fu_4165303_p1.read()) + sc_bigint<10>(ap_const_lv10_3E3));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_979_fu_4180646_p2() {
    add_ln703_979_fu_4180646_p2 = (!sext_ln203_840_fu_4176897_p1.read().is_01() || !sext_ln703_484_fu_4180643_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_840_fu_4176897_p1.read()) + sc_bigint<15>(sext_ln703_484_fu_4180643_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_97_fu_4177057_p2() {
    add_ln703_97_fu_4177057_p2 = (!mult_961_V_fu_4176369_p1.read().is_01() || !add_ln703_96_fu_4177051_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_961_V_fu_4176369_p1.read()) + sc_biguint<16>(add_ln703_96_fu_4177051_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_980_fu_4180656_p2() {
    add_ln703_980_fu_4180656_p2 = (!add_ln703_977_fu_4180637_p2.read().is_01() || !sext_ln703_485_fu_4180652_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_977_fu_4180637_p2.read()) + sc_bigint<16>(sext_ln703_485_fu_4180652_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_981_fu_4182523_p2() {
    add_ln703_981_fu_4182523_p2 = (!add_ln703_975_reg_4190485.read().is_01() || !add_ln703_980_reg_4190490.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_975_reg_4190485.read()) + sc_biguint<16>(add_ln703_980_reg_4190490.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_983_fu_4174249_p2() {
    add_ln703_983_fu_4174249_p2 = (!mult_110_V_reg_4183872.read().is_01() || !mult_46_V_fu_4159544_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_110_V_reg_4183872.read()) + sc_bigint<16>(mult_46_V_fu_4159544_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_984_fu_4174254_p2() {
    add_ln703_984_fu_4174254_p2 = (!mult_302_V_fu_4160269_p1.read().is_01() || !mult_238_V_reg_4184449.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_302_V_fu_4160269_p1.read()) + sc_biguint<16>(mult_238_V_reg_4184449.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_985_fu_4174259_p2() {
    add_ln703_985_fu_4174259_p2 = (!mult_174_V_fu_4159943_p1.read().is_01() || !add_ln703_984_fu_4174254_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_174_V_fu_4159943_p1.read()) + sc_biguint<16>(add_ln703_984_fu_4174254_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_986_fu_4174265_p2() {
    add_ln703_986_fu_4174265_p2 = (!add_ln703_983_fu_4174249_p2.read().is_01() || !add_ln703_985_fu_4174259_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_983_fu_4174249_p2.read()) + sc_biguint<16>(add_ln703_985_fu_4174259_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_987_fu_4180662_p2() {
    add_ln703_987_fu_4180662_p2 = (!sext_ln203_682_fu_4175028_p1.read().is_01() || !sext_ln203_665_fu_4174905_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_682_fu_4175028_p1.read()) + sc_bigint<15>(sext_ln203_665_fu_4174905_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_988_fu_4180672_p2() {
    add_ln703_988_fu_4180672_p2 = (!mult_622_V_fu_4175454_p1.read().is_01() || !mult_558_V_fu_4175334_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_622_V_fu_4175454_p1.read()) + sc_bigint<16>(mult_558_V_fu_4175334_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_989_fu_4180678_p2() {
    add_ln703_989_fu_4180678_p2 = (!mult_494_V_fu_4175205_p1.read().is_01() || !add_ln703_988_fu_4180672_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_494_V_fu_4175205_p1.read()) + sc_biguint<16>(add_ln703_988_fu_4180672_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_98_fu_4177063_p2() {
    add_ln703_98_fu_4177063_p2 = (!sext_ln203_816_fu_4176810_p1.read().is_01() || !ap_const_lv15_7FEA.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_816_fu_4176810_p1.read()) + sc_bigint<15>(ap_const_lv15_7FEA));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_990_fu_4180684_p2() {
    add_ln703_990_fu_4180684_p2 = (!sext_ln703_486_fu_4180668_p1.read().is_01() || !add_ln703_989_fu_4180678_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_486_fu_4180668_p1.read()) + sc_biguint<16>(add_ln703_989_fu_4180678_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_991_fu_4180690_p2() {
    add_ln703_991_fu_4180690_p2 = (!add_ln703_986_reg_4189620.read().is_01() || !add_ln703_990_fu_4180684_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_986_reg_4189620.read()) + sc_biguint<16>(add_ln703_990_fu_4180684_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_992_fu_4180695_p2() {
    add_ln703_992_fu_4180695_p2 = (!mult_750_V_fu_4175730_p1.read().is_01() || !mult_686_V_fu_4175583_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_750_V_fu_4175730_p1.read()) + sc_bigint<16>(mult_686_V_fu_4175583_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_993_fu_4180701_p2() {
    add_ln703_993_fu_4180701_p2 = (!mult_942_V_fu_4176336_p1.read().is_01() || !mult_861_V_fu_4176165_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_942_V_fu_4176336_p1.read()) + sc_bigint<16>(mult_861_V_fu_4176165_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_994_fu_4180707_p2() {
    add_ln703_994_fu_4180707_p2 = (!mult_814_V_reg_4187226.read().is_01() || !add_ln703_993_fu_4180701_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_814_V_reg_4187226.read()) + sc_biguint<16>(add_ln703_993_fu_4180701_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_995_fu_4180712_p2() {
    add_ln703_995_fu_4180712_p2 = (!add_ln703_992_fu_4180695_p2.read().is_01() || !add_ln703_994_fu_4180707_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_992_fu_4180695_p2.read()) + sc_biguint<16>(add_ln703_994_fu_4180707_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_996_fu_4180718_p2() {
    add_ln703_996_fu_4180718_p2 = (!mult_1134_V_fu_4176645_p1.read().is_01() || !mult_1070_V_reg_4188379.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1134_V_fu_4176645_p1.read()) + sc_biguint<16>(mult_1070_V_reg_4188379.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_997_fu_4180723_p2() {
    add_ln703_997_fu_4180723_p2 = (!mult_1006_V_reg_4188088.read().is_01() || !add_ln703_996_fu_4180718_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1006_V_reg_4188088.read()) + sc_biguint<16>(add_ln703_996_fu_4180718_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_998_fu_4180728_p2() {
    add_ln703_998_fu_4180728_p2 = (!sext_ln203_13_fu_4176900_p1.read().is_01() || !ap_const_lv11_53.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_13_fu_4176900_p1.read()) + sc_biguint<11>(ap_const_lv11_53));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_999_fu_4180738_p2() {
    add_ln703_999_fu_4180738_p2 = (!mult_1198_V_fu_4176774_p1.read().is_01() || !sext_ln703_68_fu_4180734_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1198_V_fu_4176774_p1.read()) + sc_bigint<16>(sext_ln703_68_fu_4180734_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_99_fu_4177069_p2() {
    add_ln703_99_fu_4177069_p2 = (!sext_ln203_801_fu_4176681_p1.read().is_01() || !add_ln703_98_fu_4177063_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_801_fu_4176681_p1.read()) + sc_biguint<15>(add_ln703_98_fu_4177063_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_fu_4172922_p2() {
    add_ln703_fu_4172922_p2 = (!mult_64_V_fu_4159577_p1.read().is_01() || !mult_0_V_reg_4183359.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_64_V_fu_4159577_p1.read()) + sc_biguint<16>(mult_0_V_reg_4183359.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_state3_pp0_stage0_iter2() {
    ap_block_state3_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_state4_pp0_stage0_iter3() {
    ap_block_state4_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_0() {
    ap_return_0 = add_ln703_2041_fu_4182100_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_1() {
    ap_return_1 = acc_1_V_fu_4182109_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_10() {
    ap_return_10 = acc_10_V_fu_4182190_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_11() {
    ap_return_11 = acc_11_V_fu_4182199_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_12() {
    ap_return_12 = acc_12_V_fu_4182208_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_13() {
    ap_return_13 = acc_13_V_fu_4182217_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_14() {
    ap_return_14 = acc_14_V_fu_4182226_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_15() {
    ap_return_15 = acc_15_V_fu_4182235_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_16() {
    ap_return_16 = acc_16_V_fu_4182244_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_17() {
    ap_return_17 = acc_17_V_fu_4182253_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_18() {
    ap_return_18 = acc_18_V_fu_4182262_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_19() {
    ap_return_19 = acc_19_V_fu_4182271_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_2() {
    ap_return_2 = acc_2_V_fu_4182118_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_20() {
    ap_return_20 = acc_20_V_fu_4182280_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_21() {
    ap_return_21 = acc_21_V_fu_4182289_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_22() {
    ap_return_22 = acc_22_V_fu_4182298_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_23() {
    ap_return_23 = acc_23_V_fu_4182307_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_24() {
    ap_return_24 = acc_24_V_fu_4182316_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_25() {
    ap_return_25 = acc_25_V_fu_4182325_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_26() {
    ap_return_26 = acc_26_V_fu_4182334_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_27() {
    ap_return_27 = acc_27_V_fu_4182343_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_28() {
    ap_return_28 = acc_28_V_fu_4182352_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_29() {
    ap_return_29 = acc_29_V_fu_4182361_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_3() {
    ap_return_3 = acc_3_V_fu_4182127_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_30() {
    ap_return_30 = acc_30_V_fu_4182370_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_31() {
    ap_return_31 = acc_31_V_fu_4182379_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_32() {
    ap_return_32 = acc_32_V_fu_4182388_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_33() {
    ap_return_33 = acc_33_V_fu_4182408_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_34() {
    ap_return_34 = acc_34_V_fu_4182428_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_35() {
    ap_return_35 = acc_35_V_fu_4182437_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_36() {
    ap_return_36 = acc_36_V_fu_4182446_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_37() {
    ap_return_37 = acc_37_V_fu_4182455_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_38() {
    ap_return_38 = acc_38_V_fu_4182464_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_39() {
    ap_return_39 = acc_39_V_fu_4182473_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_4() {
    ap_return_4 = acc_4_V_fu_4182136_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_40() {
    ap_return_40 = acc_40_V_fu_4182482_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_41() {
    ap_return_41 = acc_41_V_fu_4182491_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_42() {
    ap_return_42 = acc_42_V_fu_4182500_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_43() {
    ap_return_43 = acc_43_V_fu_4182509_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_44() {
    ap_return_44 = acc_44_V_fu_4182518_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_45() {
    ap_return_45 = acc_45_V_fu_4182527_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_46() {
    ap_return_46 = acc_46_V_fu_4182536_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_47() {
    ap_return_47 = acc_47_V_fu_4182545_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_48() {
    ap_return_48 = acc_48_V_fu_4182554_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_49() {
    ap_return_49 = acc_49_V_fu_4182563_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_5() {
    ap_return_5 = acc_5_V_fu_4182145_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_50() {
    ap_return_50 = acc_50_V_fu_4182572_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_51() {
    ap_return_51 = acc_51_V_fu_4182581_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_52() {
    ap_return_52 = acc_52_V_fu_4182590_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_53() {
    ap_return_53 = acc_53_V_fu_4182599_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_54() {
    ap_return_54 = acc_54_V_fu_4182621_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_55() {
    ap_return_55 = acc_55_V_fu_4182630_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_56() {
    ap_return_56 = acc_56_V_fu_4182639_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_57() {
    ap_return_57 = acc_57_V_fu_4182648_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_58() {
    ap_return_58 = acc_58_V_fu_4182657_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_59() {
    ap_return_59 = acc_59_V_fu_4182666_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_6() {
    ap_return_6 = acc_6_V_fu_4182154_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_60() {
    ap_return_60 = acc_60_V_fu_4182675_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_61() {
    ap_return_61 = acc_61_V_fu_4182684_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_62() {
    ap_return_62 = acc_62_V_fu_4182693_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_63() {
    ap_return_63 = acc_63_V_fu_4182702_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_7() {
    ap_return_7 = acc_7_V_fu_4182163_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_8() {
    ap_return_8 = acc_8_V_fu_4182172_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_9() {
    ap_return_9 = acc_9_V_fu_4182181_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1000_fu_2016_p0() {
    mul_ln1118_1000_fu_2016_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_4172200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1000_fu_2016_p2() {
    mul_ln1118_1000_fu_2016_p2 = (!mul_ln1118_1000_fu_2016_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1000_fu_2016_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1001_fu_2017_p0() {
    mul_ln1118_1001_fu_2017_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_4172200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1001_fu_2017_p2() {
    mul_ln1118_1001_fu_2017_p2 = (!mul_ln1118_1001_fu_2017_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1001_fu_2017_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1002_fu_2612_p0() {
    mul_ln1118_1002_fu_2612_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1002_fu_2612_p2() {
    mul_ln1118_1002_fu_2612_p2 = (!mul_ln1118_1002_fu_2612_p0.read().is_01() || !ap_const_lv25_1FFFF6A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1002_fu_2612_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1003_fu_2019_p0() {
    mul_ln1118_1003_fu_2019_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_4172200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1003_fu_2019_p2() {
    mul_ln1118_1003_fu_2019_p2 = (!mul_ln1118_1003_fu_2019_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1003_fu_2019_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1004_fu_2020_p0() {
    mul_ln1118_1004_fu_2020_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1004_fu_2020_p2() {
    mul_ln1118_1004_fu_2020_p2 = (!mul_ln1118_1004_fu_2020_p0.read().is_01() || !ap_const_lv25_1FFFF75.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1004_fu_2020_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1005_fu_2021_p0() {
    mul_ln1118_1005_fu_2021_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1005_fu_2021_p2() {
    mul_ln1118_1005_fu_2021_p2 = (!mul_ln1118_1005_fu_2021_p0.read().is_01() || !ap_const_lv25_9B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1005_fu_2021_p0.read()) * sc_biguint<25>(ap_const_lv25_9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1006_fu_2071_p0() {
    mul_ln1118_1006_fu_2071_p0 =  (sc_lv<16>) (sext_ln1118_484_fu_4159243_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1006_fu_2071_p2() {
    mul_ln1118_1006_fu_2071_p2 = (!mul_ln1118_1006_fu_2071_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1006_fu_2071_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1007_fu_2136_p0() {
    mul_ln1118_1007_fu_2136_p0 =  (sc_lv<16>) (sext_ln1118_482_fu_4159234_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1007_fu_2136_p2() {
    mul_ln1118_1007_fu_2136_p2 = (!mul_ln1118_1007_fu_2136_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1007_fu_2136_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1008_fu_1635_p0() {
    mul_ln1118_1008_fu_1635_p0 =  (sc_lv<16>) (sext_ln1118_484_fu_4159243_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1008_fu_1635_p2() {
    mul_ln1118_1008_fu_1635_p2 = (!mul_ln1118_1008_fu_1635_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1008_fu_1635_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1009_fu_2022_p0() {
    mul_ln1118_1009_fu_2022_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1009_fu_2022_p2() {
    mul_ln1118_1009_fu_2022_p2 = (!mul_ln1118_1009_fu_2022_p0.read().is_01() || !ap_const_lv25_C9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1009_fu_2022_p0.read()) * sc_biguint<25>(ap_const_lv25_C9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_100_fu_1778_p0() {
    mul_ln1118_100_fu_1778_p0 =  (sc_lv<16>) (sext_ln1118_105_fu_4154506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_100_fu_1778_p2() {
    mul_ln1118_100_fu_1778_p2 = (!mul_ln1118_100_fu_1778_p0.read().is_01() || !ap_const_lv26_3FFFEB3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_100_fu_1778_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1010_fu_2352_p0() {
    mul_ln1118_1010_fu_2352_p0 =  (sc_lv<16>) (sext_ln1118_484_reg_4185050.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1010_fu_2352_p2() {
    mul_ln1118_1010_fu_2352_p2 = (!mul_ln1118_1010_fu_2352_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1010_fu_2352_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1011_fu_1969_p0() {
    mul_ln1118_1011_fu_1969_p0 =  (sc_lv<16>) (sext_ln1118_482_fu_4159234_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1011_fu_1969_p2() {
    mul_ln1118_1011_fu_1969_p2 = (!mul_ln1118_1011_fu_1969_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1011_fu_1969_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1012_fu_1903_p0() {
    mul_ln1118_1012_fu_1903_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1012_fu_1903_p2() {
    mul_ln1118_1012_fu_1903_p2 = (!mul_ln1118_1012_fu_1903_p0.read().is_01() || !ap_const_lv25_98.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1012_fu_1903_p0.read()) * sc_biguint<25>(ap_const_lv25_98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1013_fu_2359_p0() {
    mul_ln1118_1013_fu_2359_p0 =  (sc_lv<16>) (sext_ln1118_484_reg_4185050.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1013_fu_2359_p2() {
    mul_ln1118_1013_fu_2359_p2 = (!mul_ln1118_1013_fu_2359_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1013_fu_2359_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1014_fu_1945_p0() {
    mul_ln1118_1014_fu_1945_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1014_fu_1945_p2() {
    mul_ln1118_1014_fu_1945_p2 = (!mul_ln1118_1014_fu_1945_p0.read().is_01() || !ap_const_lv25_CA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1014_fu_1945_p0.read()) * sc_biguint<25>(ap_const_lv25_CA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1015_fu_1839_p0() {
    mul_ln1118_1015_fu_1839_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1015_fu_1839_p2() {
    mul_ln1118_1015_fu_1839_p2 = (!mul_ln1118_1015_fu_1839_p0.read().is_01() || !ap_const_lv25_B7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1015_fu_1839_p0.read()) * sc_biguint<25>(ap_const_lv25_B7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1016_fu_1859_p0() {
    mul_ln1118_1016_fu_1859_p0 =  (sc_lv<16>) (sext_ln1118_484_reg_4185050.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1016_fu_1859_p2() {
    mul_ln1118_1016_fu_1859_p2 = (!mul_ln1118_1016_fu_1859_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1016_fu_1859_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1017_fu_1580_p0() {
    mul_ln1118_1017_fu_1580_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1017_fu_1580_p2() {
    mul_ln1118_1017_fu_1580_p2 = (!mul_ln1118_1017_fu_1580_p0.read().is_01() || !ap_const_lv26_3FFFECC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1017_fu_1580_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1019_fu_2480_p0() {
    mul_ln1118_1019_fu_2480_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1019_fu_2480_p2() {
    mul_ln1118_1019_fu_2480_p2 = (!mul_ln1118_1019_fu_2480_p0.read().is_01() || !ap_const_lv25_D1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1019_fu_2480_p0.read()) * sc_biguint<25>(ap_const_lv25_D1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_101_fu_2103_p0() {
    mul_ln1118_101_fu_2103_p0 =  (sc_lv<16>) (sext_ln1118_fu_4154488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_101_fu_2103_p2() {
    mul_ln1118_101_fu_2103_p2 = (!mul_ln1118_101_fu_2103_p0.read().is_01() || !ap_const_lv25_E7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_101_fu_2103_p0.read()) * sc_biguint<25>(ap_const_lv25_E7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1020_fu_1623_p0() {
    mul_ln1118_1020_fu_1623_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1020_fu_1623_p2() {
    mul_ln1118_1020_fu_1623_p2 = (!mul_ln1118_1020_fu_1623_p0.read().is_01() || !ap_const_lv26_115.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1020_fu_1623_p0.read()) * sc_biguint<26>(ap_const_lv26_115);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1021_fu_2517_p0() {
    mul_ln1118_1021_fu_2517_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1021_fu_2517_p2() {
    mul_ln1118_1021_fu_2517_p2 = (!mul_ln1118_1021_fu_2517_p0.read().is_01() || !ap_const_lv25_8B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1021_fu_2517_p0.read()) * sc_biguint<25>(ap_const_lv25_8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1022_fu_2331_p0() {
    mul_ln1118_1022_fu_2331_p0 =  (sc_lv<16>) (sext_ln1118_484_fu_4159243_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1022_fu_2331_p2() {
    mul_ln1118_1022_fu_2331_p2 = (!mul_ln1118_1022_fu_2331_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1022_fu_2331_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1023_fu_2540_p0() {
    mul_ln1118_1023_fu_2540_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_4172200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1023_fu_2540_p2() {
    mul_ln1118_1023_fu_2540_p2 = (!mul_ln1118_1023_fu_2540_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1023_fu_2540_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1024_fu_2562_p0() {
    mul_ln1118_1024_fu_2562_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_4172200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1024_fu_2562_p2() {
    mul_ln1118_1024_fu_2562_p2 = (!mul_ln1118_1024_fu_2562_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1024_fu_2562_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1025_fu_1710_p0() {
    mul_ln1118_1025_fu_1710_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1025_fu_1710_p2() {
    mul_ln1118_1025_fu_1710_p2 = (!mul_ln1118_1025_fu_1710_p0.read().is_01() || !ap_const_lv26_160.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1025_fu_1710_p0.read()) * sc_biguint<26>(ap_const_lv26_160);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1026_fu_2315_p0() {
    mul_ln1118_1026_fu_2315_p0 =  (sc_lv<16>) (sext_ln1118_482_fu_4159234_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1026_fu_2315_p2() {
    mul_ln1118_1026_fu_2315_p2 = (!mul_ln1118_1026_fu_2315_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1026_fu_2315_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1027_fu_1730_p0() {
    mul_ln1118_1027_fu_1730_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1027_fu_1730_p2() {
    mul_ln1118_1027_fu_1730_p2 = (!mul_ln1118_1027_fu_1730_p0.read().is_01() || !ap_const_lv26_132.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1027_fu_1730_p0.read()) * sc_biguint<26>(ap_const_lv26_132);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1028_fu_2318_p0() {
    mul_ln1118_1028_fu_2318_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1028_fu_2318_p2() {
    mul_ln1118_1028_fu_2318_p2 = (!mul_ln1118_1028_fu_2318_p0.read().is_01() || !ap_const_lv25_D7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1028_fu_2318_p0.read()) * sc_biguint<25>(ap_const_lv25_D7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1029_fu_2319_p0() {
    mul_ln1118_1029_fu_2319_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1029_fu_2319_p2() {
    mul_ln1118_1029_fu_2319_p2 = (!mul_ln1118_1029_fu_2319_p0.read().is_01() || !ap_const_lv25_A4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1029_fu_2319_p0.read()) * sc_biguint<25>(ap_const_lv25_A4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_102_fu_1566_p0() {
    mul_ln1118_102_fu_1566_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_102_fu_1566_p2() {
    mul_ln1118_102_fu_1566_p2 = (!mul_ln1118_102_fu_1566_p0.read().is_01() || !ap_const_lv24_FFFF8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_102_fu_1566_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1030_fu_2320_p0() {
    mul_ln1118_1030_fu_2320_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_4172200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1030_fu_2320_p2() {
    mul_ln1118_1030_fu_2320_p2 = (!mul_ln1118_1030_fu_2320_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1030_fu_2320_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1031_fu_2111_p0() {
    mul_ln1118_1031_fu_2111_p0 =  (sc_lv<16>) (sext_ln1118_482_fu_4159234_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1031_fu_2111_p2() {
    mul_ln1118_1031_fu_2111_p2 = (!mul_ln1118_1031_fu_2111_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1031_fu_2111_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1032_fu_2221_p0() {
    mul_ln1118_1032_fu_2221_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1032_fu_2221_p2() {
    mul_ln1118_1032_fu_2221_p2 = (!mul_ln1118_1032_fu_2221_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1032_fu_2221_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1033_fu_2112_p0() {
    mul_ln1118_1033_fu_2112_p0 =  (sc_lv<16>) (sext_ln1118_482_fu_4159234_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1033_fu_2112_p2() {
    mul_ln1118_1033_fu_2112_p2 = (!mul_ln1118_1033_fu_2112_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1033_fu_2112_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1034_fu_2324_p0() {
    mul_ln1118_1034_fu_2324_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1034_fu_2324_p2() {
    mul_ln1118_1034_fu_2324_p2 = (!mul_ln1118_1034_fu_2324_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1034_fu_2324_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1035_fu_2224_p0() {
    mul_ln1118_1035_fu_2224_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1035_fu_2224_p2() {
    mul_ln1118_1035_fu_2224_p2 = (!mul_ln1118_1035_fu_2224_p0.read().is_01() || !ap_const_lv26_3FFFEE3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1035_fu_2224_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1036_fu_2327_p0() {
    mul_ln1118_1036_fu_2327_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1036_fu_2327_p2() {
    mul_ln1118_1036_fu_2327_p2 = (!mul_ln1118_1036_fu_2327_p0.read().is_01() || !ap_const_lv26_117.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1036_fu_2327_p0.read()) * sc_biguint<26>(ap_const_lv26_117);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1037_fu_2328_p0() {
    mul_ln1118_1037_fu_2328_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_4172200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1037_fu_2328_p2() {
    mul_ln1118_1037_fu_2328_p2 = (!mul_ln1118_1037_fu_2328_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1037_fu_2328_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1038_fu_2329_p0() {
    mul_ln1118_1038_fu_2329_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1038_fu_2329_p2() {
    mul_ln1118_1038_fu_2329_p2 = (!mul_ln1118_1038_fu_2329_p0.read().is_01() || !ap_const_lv26_3FFFEA8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1038_fu_2329_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1039_fu_1639_p0() {
    mul_ln1118_1039_fu_1639_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1039_fu_1639_p2() {
    mul_ln1118_1039_fu_1639_p2 = (!mul_ln1118_1039_fu_1639_p0.read().is_01() || !ap_const_lv26_1E1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1039_fu_1639_p0.read()) * sc_biguint<26>(ap_const_lv26_1E1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_103_fu_2105_p0() {
    mul_ln1118_103_fu_2105_p0 =  (sc_lv<16>) (sext_ln1118_fu_4154488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_103_fu_2105_p2() {
    mul_ln1118_103_fu_2105_p2 = (!mul_ln1118_103_fu_2105_p0.read().is_01() || !ap_const_lv25_AA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_103_fu_2105_p0.read()) * sc_biguint<25>(ap_const_lv25_AA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1040_fu_1743_p0() {
    mul_ln1118_1040_fu_1743_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_4172213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1040_fu_1743_p2() {
    mul_ln1118_1040_fu_1743_p2 = (!mul_ln1118_1040_fu_1743_p0.read().is_01() || !ap_const_lv25_9A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1040_fu_1743_p0.read()) * sc_biguint<25>(ap_const_lv25_9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1041_fu_2113_p0() {
    mul_ln1118_1041_fu_2113_p0 = sext_ln1118_478_fu_4159229_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1041_fu_2113_p2() {
    mul_ln1118_1041_fu_2113_p2 = (!mul_ln1118_1041_fu_2113_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1041_fu_2113_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1042_fu_2748_p0() {
    mul_ln1118_1042_fu_2748_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1042_fu_2748_p2() {
    mul_ln1118_1042_fu_2748_p2 = (!mul_ln1118_1042_fu_2748_p0.read().is_01() || !ap_const_lv26_10C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1042_fu_2748_p0.read()) * sc_biguint<26>(ap_const_lv26_10C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1043_fu_1642_p0() {
    mul_ln1118_1043_fu_1642_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1043_fu_1642_p2() {
    mul_ln1118_1043_fu_1642_p2 = (!mul_ln1118_1043_fu_1642_p0.read().is_01() || !ap_const_lv26_3FFFEE2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1043_fu_1642_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1044_fu_1747_p0() {
    mul_ln1118_1044_fu_1747_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4172184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1044_fu_1747_p2() {
    mul_ln1118_1044_fu_1747_p2 = (!mul_ln1118_1044_fu_1747_p0.read().is_01() || !ap_const_lv26_18A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1044_fu_1747_p0.read()) * sc_biguint<26>(ap_const_lv26_18A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1045_fu_1644_p0() {
    mul_ln1118_1045_fu_1644_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_4172200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1045_fu_1644_p2() {
    mul_ln1118_1045_fu_1644_p2 = (!mul_ln1118_1045_fu_1644_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1045_fu_1644_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_104_fu_1568_p0() {
    mul_ln1118_104_fu_1568_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_104_fu_1568_p2() {
    mul_ln1118_104_fu_1568_p2 = (!mul_ln1118_104_fu_1568_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_104_fu_1568_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_105_fu_1788_p0() {
    mul_ln1118_105_fu_1788_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_105_fu_1788_p2() {
    mul_ln1118_105_fu_1788_p2 = (!mul_ln1118_105_fu_1788_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_105_fu_1788_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_106_fu_1789_p0() {
    mul_ln1118_106_fu_1789_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_106_fu_1789_p2() {
    mul_ln1118_106_fu_1789_p2 = (!mul_ln1118_106_fu_1789_p0.read().is_01() || !ap_const_lv24_4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_106_fu_1789_p0.read()) * sc_biguint<24>(ap_const_lv24_4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_107_fu_1720_p0() {
    mul_ln1118_107_fu_1720_p0 =  (sc_lv<16>) (sext_ln1118_fu_4154488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_107_fu_1720_p2() {
    mul_ln1118_107_fu_1720_p2 = (!mul_ln1118_107_fu_1720_p0.read().is_01() || !ap_const_lv25_AB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_107_fu_1720_p0.read()) * sc_biguint<25>(ap_const_lv25_AB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_108_fu_2323_p0() {
    mul_ln1118_108_fu_2323_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_108_fu_2323_p2() {
    mul_ln1118_108_fu_2323_p2 = (!mul_ln1118_108_fu_2323_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_108_fu_2323_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_109_fu_2657_p0() {
    mul_ln1118_109_fu_2657_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_109_fu_2657_p2() {
    mul_ln1118_109_fu_2657_p2 = (!mul_ln1118_109_fu_2657_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_109_fu_2657_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_110_fu_1646_p0() {
    mul_ln1118_110_fu_1646_p0 =  (sc_lv<16>) (sext_ln1118_105_fu_4154506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_110_fu_1646_p2() {
    mul_ln1118_110_fu_1646_p2 = (!mul_ln1118_110_fu_1646_p0.read().is_01() || !ap_const_lv26_3FFFE6D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_110_fu_1646_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_111_fu_1952_p0() {
    mul_ln1118_111_fu_1952_p0 =  (sc_lv<16>) (sext_ln1118_107_fu_4154526_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_111_fu_1952_p2() {
    mul_ln1118_111_fu_1952_p2 = (!mul_ln1118_111_fu_1952_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_111_fu_1952_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_112_fu_2526_p0() {
    mul_ln1118_112_fu_2526_p0 =  (sc_lv<16>) (sext_ln1118_fu_4154488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_112_fu_2526_p2() {
    mul_ln1118_112_fu_2526_p2 = (!mul_ln1118_112_fu_2526_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_112_fu_2526_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_113_fu_1989_p0() {
    mul_ln1118_113_fu_1989_p0 =  (sc_lv<16>) (sext_ln1118_107_fu_4154526_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_113_fu_1989_p2() {
    mul_ln1118_113_fu_1989_p2 = (!mul_ln1118_113_fu_1989_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_113_fu_1989_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_114_fu_2528_p0() {
    mul_ln1118_114_fu_2528_p0 =  (sc_lv<16>) (sext_ln1118_105_fu_4154506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_114_fu_2528_p2() {
    mul_ln1118_114_fu_2528_p2 = (!mul_ln1118_114_fu_2528_p0.read().is_01() || !ap_const_lv26_3FFFE96.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_114_fu_2528_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_115_fu_1786_p0() {
    mul_ln1118_115_fu_1786_p0 =  (sc_lv<16>) (sext_ln1118_105_fu_4154506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_115_fu_1786_p2() {
    mul_ln1118_115_fu_1786_p2 = (!mul_ln1118_115_fu_1786_p0.read().is_01() || !ap_const_lv26_3FFFDF9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_115_fu_1786_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_116_fu_2465_p0() {
    mul_ln1118_116_fu_2465_p0 =  (sc_lv<16>) (sext_ln1118_fu_4154488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_116_fu_2465_p2() {
    mul_ln1118_116_fu_2465_p2 = (!mul_ln1118_116_fu_2465_p0.read().is_01() || !ap_const_lv25_1FFFF72.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_116_fu_2465_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_117_fu_2039_p0() {
    mul_ln1118_117_fu_2039_p0 =  (sc_lv<16>) (sext_ln1118_110_fu_4154558_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_117_fu_2039_p2() {
    mul_ln1118_117_fu_2039_p2 = (!mul_ln1118_117_fu_2039_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_117_fu_2039_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_118_fu_1922_p0() {
    mul_ln1118_118_fu_1922_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_118_fu_1922_p2() {
    mul_ln1118_118_fu_1922_p2 = (!mul_ln1118_118_fu_1922_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_118_fu_1922_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_119_fu_1718_p0() {
    mul_ln1118_119_fu_1718_p0 =  (sc_lv<16>) (sext_ln1118_fu_4154488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_119_fu_1718_p2() {
    mul_ln1118_119_fu_1718_p2 = (!mul_ln1118_119_fu_1718_p0.read().is_01() || !ap_const_lv25_AC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_119_fu_1718_p0.read()) * sc_biguint<25>(ap_const_lv25_AC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_120_fu_1783_p0() {
    mul_ln1118_120_fu_1783_p0 =  (sc_lv<16>) (sext_ln1118_105_fu_4154506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_120_fu_1783_p2() {
    mul_ln1118_120_fu_1783_p2 = (!mul_ln1118_120_fu_1783_p0.read().is_01() || !ap_const_lv26_3FFFEBB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_120_fu_1783_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_121_fu_2386_p0() {
    mul_ln1118_121_fu_2386_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_121_fu_2386_p2() {
    mul_ln1118_121_fu_2386_p2 = (!mul_ln1118_121_fu_2386_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_121_fu_2386_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_122_fu_2423_p0() {
    mul_ln1118_122_fu_2423_p0 =  (sc_lv<16>) (sext_ln1118_fu_4154488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_122_fu_2423_p2() {
    mul_ln1118_122_fu_2423_p2 = (!mul_ln1118_122_fu_2423_p0.read().is_01() || !ap_const_lv25_1FFFF7A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_122_fu_2423_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_123_fu_1668_p0() {
    mul_ln1118_123_fu_1668_p0 =  (sc_lv<16>) (sext_ln1118_105_fu_4154506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_123_fu_1668_p2() {
    mul_ln1118_123_fu_1668_p2 = (!mul_ln1118_123_fu_1668_p0.read().is_01() || !ap_const_lv26_3FFFE11.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_123_fu_1668_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE11);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_124_fu_2207_p0() {
    mul_ln1118_124_fu_2207_p0 =  (sc_lv<16>) (sext_ln1118_108_fu_4154535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_124_fu_2207_p2() {
    mul_ln1118_124_fu_2207_p2 = (!mul_ln1118_124_fu_2207_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_124_fu_2207_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_125_fu_2208_p0() {
    mul_ln1118_125_fu_2208_p0 =  (sc_lv<16>) (sext_ln1118_105_fu_4154506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_125_fu_2208_p2() {
    mul_ln1118_125_fu_2208_p2 = (!mul_ln1118_125_fu_2208_p0.read().is_01() || !ap_const_lv26_3FFFED3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_125_fu_2208_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_126_fu_2634_p0() {
    mul_ln1118_126_fu_2634_p0 = sext_ln1118_109_fu_4154553_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_126_fu_2634_p2() {
    mul_ln1118_126_fu_2634_p2 = (!mul_ln1118_126_fu_2634_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_126_fu_2634_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_127_fu_1701_p0() {
    mul_ln1118_127_fu_1701_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_127_fu_1701_p2() {
    mul_ln1118_127_fu_1701_p2 = (!mul_ln1118_127_fu_1701_p0.read().is_01() || !ap_const_lv25_CB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_127_fu_1701_p0.read()) * sc_biguint<25>(ap_const_lv25_CB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_128_fu_2597_p0() {
    mul_ln1118_128_fu_2597_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_128_fu_2597_p2() {
    mul_ln1118_128_fu_2597_p2 = (!mul_ln1118_128_fu_2597_p0.read().is_01() || !ap_const_lv26_11E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_128_fu_2597_p0.read()) * sc_biguint<26>(ap_const_lv26_11E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_129_fu_2393_p0() {
    mul_ln1118_129_fu_2393_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_129_fu_2393_p2() {
    mul_ln1118_129_fu_2393_p2 = (!mul_ln1118_129_fu_2393_p0.read().is_01() || !ap_const_lv26_3FFFEB5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_129_fu_2393_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_130_fu_2458_p0() {
    mul_ln1118_130_fu_2458_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_4155409_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_130_fu_2458_p2() {
    mul_ln1118_130_fu_2458_p2 = (!mul_ln1118_130_fu_2458_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_130_fu_2458_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_131_fu_2254_p0() {
    mul_ln1118_131_fu_2254_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_131_fu_2254_p2() {
    mul_ln1118_131_fu_2254_p2 = (!mul_ln1118_131_fu_2254_p0.read().is_01() || !ap_const_lv26_3FFFEE1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_131_fu_2254_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_132_fu_2050_p0() {
    mul_ln1118_132_fu_2050_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_132_fu_2050_p2() {
    mul_ln1118_132_fu_2050_p2 = (!mul_ln1118_132_fu_2050_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_132_fu_2050_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_133_fu_2653_p0() {
    mul_ln1118_133_fu_2653_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_133_fu_2653_p2() {
    mul_ln1118_133_fu_2653_p2 = (!mul_ln1118_133_fu_2653_p0.read().is_01() || !ap_const_lv24_74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_133_fu_2653_p0.read()) * sc_biguint<24>(ap_const_lv24_74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_134_fu_1886_p0() {
    mul_ln1118_134_fu_1886_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_134_fu_1886_p2() {
    mul_ln1118_134_fu_1886_p2 = (!mul_ln1118_134_fu_1886_p0.read().is_01() || !ap_const_lv26_107.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_134_fu_1886_p0.read()) * sc_biguint<26>(ap_const_lv26_107);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_135_fu_2630_p0() {
    mul_ln1118_135_fu_2630_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_135_fu_2630_p2() {
    mul_ln1118_135_fu_2630_p2 = (!mul_ln1118_135_fu_2630_p0.read().is_01() || !ap_const_lv26_3FFFEA8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_135_fu_2630_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_136_fu_2631_p0() {
    mul_ln1118_136_fu_2631_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_136_fu_2631_p2() {
    mul_ln1118_136_fu_2631_p2 = (!mul_ln1118_136_fu_2631_p0.read().is_01() || !ap_const_lv26_10C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_136_fu_2631_p0.read()) * sc_biguint<26>(ap_const_lv26_10C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_137_fu_2377_p0() {
    mul_ln1118_137_fu_2377_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_137_fu_2377_p2() {
    mul_ln1118_137_fu_2377_p2 = (!mul_ln1118_137_fu_2377_p0.read().is_01() || !ap_const_lv26_3FFFEB3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_137_fu_2377_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_138_fu_2378_p0() {
    mul_ln1118_138_fu_2378_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_138_fu_2378_p2() {
    mul_ln1118_138_fu_2378_p2 = (!mul_ln1118_138_fu_2378_p0.read().is_01() || !ap_const_lv25_1FFFF30.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_138_fu_2378_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_139_fu_2502_p0() {
    mul_ln1118_139_fu_2502_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_139_fu_2502_p2() {
    mul_ln1118_139_fu_2502_p2 = (!mul_ln1118_139_fu_2502_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_139_fu_2502_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_140_fu_2057_p0() {
    mul_ln1118_140_fu_2057_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_140_fu_2057_p2() {
    mul_ln1118_140_fu_2057_p2 = (!mul_ln1118_140_fu_2057_p0.read().is_01() || !ap_const_lv25_89.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_140_fu_2057_p0.read()) * sc_biguint<25>(ap_const_lv25_89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_141_fu_2660_p0() {
    mul_ln1118_141_fu_2660_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_141_fu_2660_p2() {
    mul_ln1118_141_fu_2660_p2 = (!mul_ln1118_141_fu_2660_p0.read().is_01() || !ap_const_lv25_1FFFF36.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_141_fu_2660_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_142_fu_2456_p0() {
    mul_ln1118_142_fu_2456_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_142_fu_2456_p2() {
    mul_ln1118_142_fu_2456_p2 = (!mul_ln1118_142_fu_2456_p0.read().is_01() || !ap_const_lv25_1FFFF62.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_142_fu_2456_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_143_fu_1955_p0() {
    mul_ln1118_143_fu_1955_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_4155409_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_143_fu_1955_p2() {
    mul_ln1118_143_fu_1955_p2 = (!mul_ln1118_143_fu_1955_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_143_fu_1955_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_144_fu_1751_p0() {
    mul_ln1118_144_fu_1751_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_144_fu_1751_p2() {
    mul_ln1118_144_fu_1751_p2 = (!mul_ln1118_144_fu_1751_p0.read().is_01() || !ap_const_lv26_3FFFEC9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_144_fu_1751_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_145_fu_2309_p0() {
    mul_ln1118_145_fu_2309_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_145_fu_2309_p2() {
    mul_ln1118_145_fu_2309_p2 = (!mul_ln1118_145_fu_2309_p0.read().is_01() || !ap_const_lv26_3FFFE99.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_145_fu_2309_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_146_fu_1567_p0() {
    mul_ln1118_146_fu_1567_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_146_fu_1567_p2() {
    mul_ln1118_146_fu_1567_p2 = (!mul_ln1118_146_fu_1567_p0.read().is_01() || !ap_const_lv25_EC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_146_fu_1567_p0.read()) * sc_biguint<25>(ap_const_lv25_EC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_147_fu_2311_p0() {
    mul_ln1118_147_fu_2311_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_147_fu_2311_p2() {
    mul_ln1118_147_fu_2311_p2 = (!mul_ln1118_147_fu_2311_p0.read().is_01() || !ap_const_lv25_1FFFF56.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_147_fu_2311_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_148_fu_1569_p0() {
    mul_ln1118_148_fu_1569_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_148_fu_1569_p2() {
    mul_ln1118_148_fu_1569_p2 = (!mul_ln1118_148_fu_1569_p0.read().is_01() || !ap_const_lv25_1FFFF0B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_148_fu_1569_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_149_fu_1694_p0() {
    mul_ln1118_149_fu_1694_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_149_fu_1694_p2() {
    mul_ln1118_149_fu_1694_p2 = (!mul_ln1118_149_fu_1694_p0.read().is_01() || !ap_const_lv24_7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_149_fu_1694_p0.read()) * sc_biguint<24>(ap_const_lv24_7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_150_fu_2676_p0() {
    mul_ln1118_150_fu_2676_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_150_fu_2676_p2() {
    mul_ln1118_150_fu_2676_p2 = (!mul_ln1118_150_fu_2676_p0.read().is_01() || !ap_const_lv26_3FFFEAF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_150_fu_2676_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_151_fu_2472_p0() {
    mul_ln1118_151_fu_2472_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_4155409_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_151_fu_2472_p2() {
    mul_ln1118_151_fu_2472_p2 = (!mul_ln1118_151_fu_2472_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_151_fu_2472_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_152_fu_1999_p0() {
    mul_ln1118_152_fu_1999_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_152_fu_1999_p2() {
    mul_ln1118_152_fu_1999_p2 = (!mul_ln1118_152_fu_1999_p0.read().is_01() || !ap_const_lv25_94.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_152_fu_1999_p0.read()) * sc_biguint<25>(ap_const_lv25_94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_153_fu_1526_p0() {
    mul_ln1118_153_fu_1526_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_153_fu_1526_p2() {
    mul_ln1118_153_fu_1526_p2 = (!mul_ln1118_153_fu_1526_p0.read().is_01() || !ap_const_lv25_CD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_153_fu_1526_p0.read()) * sc_biguint<25>(ap_const_lv25_CD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_154_fu_2129_p0() {
    mul_ln1118_154_fu_2129_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_4155409_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_154_fu_2129_p2() {
    mul_ln1118_154_fu_2129_p2 = (!mul_ln1118_154_fu_2129_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_154_fu_2129_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_155_fu_2194_p0() {
    mul_ln1118_155_fu_2194_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_155_fu_2194_p2() {
    mul_ln1118_155_fu_2194_p2 = (!mul_ln1118_155_fu_2194_p0.read().is_01() || !ap_const_lv25_1FFFF7D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_155_fu_2194_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_156_fu_1721_p0() {
    mul_ln1118_156_fu_1721_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_156_fu_1721_p2() {
    mul_ln1118_156_fu_1721_p2 = (!mul_ln1118_156_fu_1721_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_156_fu_1721_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_157_fu_2733_p0() {
    mul_ln1118_157_fu_2733_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_157_fu_2733_p2() {
    mul_ln1118_157_fu_2733_p2 = (!mul_ln1118_157_fu_2733_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_157_fu_2733_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_158_fu_2401_p0() {
    mul_ln1118_158_fu_2401_p0 = sext_ln1118_129_fu_4155476_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_158_fu_2401_p2() {
    mul_ln1118_158_fu_2401_p2 = (!mul_ln1118_158_fu_2401_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_158_fu_2401_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_159_fu_2197_p0() {
    mul_ln1118_159_fu_2197_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_159_fu_2197_p2() {
    mul_ln1118_159_fu_2197_p2 = (!mul_ln1118_159_fu_2197_p0.read().is_01() || !ap_const_lv26_175.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_159_fu_2197_p0.read()) * sc_biguint<26>(ap_const_lv26_175);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_160_fu_2718_p0() {
    mul_ln1118_160_fu_2718_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_160_fu_2718_p2() {
    mul_ln1118_160_fu_2718_p2 = (!mul_ln1118_160_fu_2718_p0.read().is_01() || !ap_const_lv25_E5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_160_fu_2718_p0.read()) * sc_biguint<25>(ap_const_lv25_E5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_161_fu_1865_p0() {
    mul_ln1118_161_fu_1865_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_161_fu_1865_p2() {
    mul_ln1118_161_fu_1865_p2 = (!mul_ln1118_161_fu_1865_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_161_fu_1865_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_162_fu_2349_p0() {
    mul_ln1118_162_fu_2349_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_162_fu_2349_p2() {
    mul_ln1118_162_fu_2349_p2 = (!mul_ln1118_162_fu_2349_p0.read().is_01() || !ap_const_lv26_3FFFEF3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_162_fu_2349_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_163_fu_2414_p0() {
    mul_ln1118_163_fu_2414_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_4155445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_163_fu_2414_p2() {
    mul_ln1118_163_fu_2414_p2 = (!mul_ln1118_163_fu_2414_p0.read().is_01() || !ap_const_lv25_1FFFF25.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_163_fu_2414_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_164_fu_2479_p0() {
    mul_ln1118_164_fu_2479_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_4155409_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_164_fu_2479_p2() {
    mul_ln1118_164_fu_2479_p2 = (!mul_ln1118_164_fu_2479_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_164_fu_2479_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_165_fu_1709_p0() {
    mul_ln1118_165_fu_1709_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_165_fu_1709_p2() {
    mul_ln1118_165_fu_1709_p2 = (!mul_ln1118_165_fu_1709_p0.read().is_01() || !ap_const_lv26_3FFFECB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_165_fu_1709_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_166_fu_2340_p0() {
    mul_ln1118_166_fu_2340_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_166_fu_2340_p2() {
    mul_ln1118_166_fu_2340_p2 = (!mul_ln1118_166_fu_2340_p0.read().is_01() || !ap_const_lv26_145.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_166_fu_2340_p0.read()) * sc_biguint<26>(ap_const_lv26_145);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_167_fu_2617_p0() {
    mul_ln1118_167_fu_2617_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_167_fu_2617_p2() {
    mul_ln1118_167_fu_2617_p2 = (!mul_ln1118_167_fu_2617_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_167_fu_2617_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_168_fu_2080_p0() {
    mul_ln1118_168_fu_2080_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_168_fu_2080_p2() {
    mul_ln1118_168_fu_2080_p2 = (!mul_ln1118_168_fu_2080_p0.read().is_01() || !ap_const_lv26_3FFFEE7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_168_fu_2080_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_169_fu_1543_p0() {
    mul_ln1118_169_fu_1543_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_169_fu_1543_p2() {
    mul_ln1118_169_fu_1543_p2 = (!mul_ln1118_169_fu_1543_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_169_fu_1543_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_170_fu_2082_p0() {
    mul_ln1118_170_fu_2082_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_170_fu_2082_p2() {
    mul_ln1118_170_fu_2082_p2 = (!mul_ln1118_170_fu_2082_p0.read().is_01() || !ap_const_lv26_106.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_170_fu_2082_p0.read()) * sc_biguint<26>(ap_const_lv26_106);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_171_fu_1954_p0() {
    mul_ln1118_171_fu_1954_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_171_fu_1954_p2() {
    mul_ln1118_171_fu_1954_p2 = (!mul_ln1118_171_fu_1954_p0.read().is_01() || !ap_const_lv26_3FFFEEE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_171_fu_1954_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_172_fu_2699_p0() {
    mul_ln1118_172_fu_2699_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_172_fu_2699_p2() {
    mul_ln1118_172_fu_2699_p2 = (!mul_ln1118_172_fu_2699_p0.read().is_01() || !ap_const_lv26_14F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_172_fu_2699_p0.read()) * sc_biguint<26>(ap_const_lv26_14F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_173_fu_1688_p0() {
    mul_ln1118_173_fu_1688_p0 =  (sc_lv<16>) (sext_ln1118_125_fu_4155418_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_173_fu_1688_p2() {
    mul_ln1118_173_fu_1688_p2 = (!mul_ln1118_173_fu_1688_p0.read().is_01() || !ap_const_lv26_3FFFEBA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_173_fu_1688_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_174_fu_2560_p0() {
    mul_ln1118_174_fu_2560_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_4155462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_174_fu_2560_p2() {
    mul_ln1118_174_fu_2560_p2 = (!mul_ln1118_174_fu_2560_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_174_fu_2560_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_175_fu_2625_p0() {
    mul_ln1118_175_fu_2625_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_175_fu_2625_p2() {
    mul_ln1118_175_fu_2625_p2 = (!mul_ln1118_175_fu_2625_p0.read().is_01() || !ap_const_lv26_3FFFEBB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_175_fu_2625_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_176_fu_1883_p0() {
    mul_ln1118_176_fu_1883_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_176_fu_1883_p2() {
    mul_ln1118_176_fu_1883_p2 = (!mul_ln1118_176_fu_1883_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_176_fu_1883_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_177_fu_1920_p0() {
    mul_ln1118_177_fu_1920_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_177_fu_1920_p2() {
    mul_ln1118_177_fu_1920_p2 = (!mul_ln1118_177_fu_1920_p0.read().is_01() || !ap_const_lv24_7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_177_fu_1920_p0.read()) * sc_biguint<24>(ap_const_lv24_7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_178_fu_1744_p0() {
    mul_ln1118_178_fu_1744_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_178_fu_1744_p2() {
    mul_ln1118_178_fu_1744_p2 = (!mul_ln1118_178_fu_1744_p0.read().is_01() || !ap_const_lv25_1FFFF25.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_178_fu_1744_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_179_fu_2503_p0() {
    mul_ln1118_179_fu_2503_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_179_fu_2503_p2() {
    mul_ln1118_179_fu_2503_p2 = (!mul_ln1118_179_fu_2503_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_179_fu_2503_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_180_fu_1761_p0() {
    mul_ln1118_180_fu_1761_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_180_fu_1761_p2() {
    mul_ln1118_180_fu_1761_p2 = (!mul_ln1118_180_fu_1761_p0.read().is_01() || !ap_const_lv25_1FFFF7B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_180_fu_1761_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_181_fu_1762_p0() {
    mul_ln1118_181_fu_1762_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_181_fu_1762_p2() {
    mul_ln1118_181_fu_1762_p2 = (!mul_ln1118_181_fu_1762_p0.read().is_01() || !ap_const_lv26_3FFFE5D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_181_fu_1762_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_182_fu_2124_p0() {
    mul_ln1118_182_fu_2124_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_182_fu_2124_p2() {
    mul_ln1118_182_fu_2124_p2 = (!mul_ln1118_182_fu_2124_p0.read().is_01() || !ap_const_lv25_1FFFF39.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_182_fu_2124_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF39);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_183_fu_1698_p0() {
    mul_ln1118_183_fu_1698_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_183_fu_1698_p2() {
    mul_ln1118_183_fu_1698_p2 = (!mul_ln1118_183_fu_1698_p0.read().is_01() || !ap_const_lv26_141.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_183_fu_1698_p0.read()) * sc_biguint<26>(ap_const_lv26_141);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_184_fu_2372_p0() {
    mul_ln1118_184_fu_2372_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_184_fu_2372_p2() {
    mul_ln1118_184_fu_2372_p2 = (!mul_ln1118_184_fu_2372_p0.read().is_01() || !ap_const_lv25_E5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_184_fu_2372_p0.read()) * sc_biguint<25>(ap_const_lv25_E5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_185_fu_1899_p0() {
    mul_ln1118_185_fu_1899_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_185_fu_1899_p2() {
    mul_ln1118_185_fu_1899_p2 = (!mul_ln1118_185_fu_1899_p0.read().is_01() || !ap_const_lv26_3FFFE42.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_185_fu_1899_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE42);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_186_fu_2233_p0() {
    mul_ln1118_186_fu_2233_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_186_fu_2233_p2() {
    mul_ln1118_186_fu_2233_p2 = (!mul_ln1118_186_fu_2233_p0.read().is_01() || !ap_const_lv24_5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_186_fu_2233_p0.read()) * sc_biguint<24>(ap_const_lv24_5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_187_fu_2001_p0() {
    mul_ln1118_187_fu_2001_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_187_fu_2001_p2() {
    mul_ln1118_187_fu_2001_p2 = (!mul_ln1118_187_fu_2001_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_187_fu_2001_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_188_fu_1528_p0() {
    mul_ln1118_188_fu_1528_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_188_fu_1528_p2() {
    mul_ln1118_188_fu_1528_p2 = (!mul_ln1118_188_fu_1528_p0.read().is_01() || !ap_const_lv25_1FFFF3D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_188_fu_1528_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_189_fu_1890_p0() {
    mul_ln1118_189_fu_1890_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_189_fu_1890_p2() {
    mul_ln1118_189_fu_1890_p2 = (!mul_ln1118_189_fu_1890_p0.read().is_01() || !ap_const_lv26_3FFFEC1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_189_fu_1890_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_190_fu_1850_p0() {
    mul_ln1118_190_fu_1850_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_190_fu_1850_p2() {
    mul_ln1118_190_fu_1850_p2 = (!mul_ln1118_190_fu_1850_p0.read().is_01() || !ap_const_lv26_1AD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_190_fu_1850_p0.read()) * sc_biguint<26>(ap_const_lv26_1AD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_191_fu_2389_p0() {
    mul_ln1118_191_fu_2389_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_4156368_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_191_fu_2389_p2() {
    mul_ln1118_191_fu_2389_p2 = (!mul_ln1118_191_fu_2389_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_191_fu_2389_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_192_fu_2390_p0() {
    mul_ln1118_192_fu_2390_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_192_fu_2390_p2() {
    mul_ln1118_192_fu_2390_p2 = (!mul_ln1118_192_fu_2390_p0.read().is_01() || !ap_const_lv26_3FFFE51.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_192_fu_2390_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_193_fu_2294_p0() {
    mul_ln1118_193_fu_2294_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_193_fu_2294_p2() {
    mul_ln1118_193_fu_2294_p2 = (!mul_ln1118_193_fu_2294_p0.read().is_01() || !ap_const_lv24_FFFF94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_193_fu_2294_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_194_fu_2722_p0() {
    mul_ln1118_194_fu_2722_p0 =  (sc_lv<16>) (sext_ln1118_146_fu_4156336_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_194_fu_2722_p2() {
    mul_ln1118_194_fu_2722_p2 = (!mul_ln1118_194_fu_2722_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_194_fu_2722_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_195_fu_2518_p0() {
    mul_ln1118_195_fu_2518_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_195_fu_2518_p2() {
    mul_ln1118_195_fu_2518_p2 = (!mul_ln1118_195_fu_2518_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_195_fu_2518_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_196_fu_2314_p0() {
    mul_ln1118_196_fu_2314_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_196_fu_2314_p2() {
    mul_ln1118_196_fu_2314_p2 = (!mul_ln1118_196_fu_2314_p0.read().is_01() || !ap_const_lv26_3FFFE73.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_196_fu_2314_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_197_fu_2648_p0() {
    mul_ln1118_197_fu_2648_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_197_fu_2648_p2() {
    mul_ln1118_197_fu_2648_p2 = (!mul_ln1118_197_fu_2648_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_197_fu_2648_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_198_fu_2175_p0() {
    mul_ln1118_198_fu_2175_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_198_fu_2175_p2() {
    mul_ln1118_198_fu_2175_p2 = (!mul_ln1118_198_fu_2175_p0.read().is_01() || !ap_const_lv26_11D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_198_fu_2175_p0.read()) * sc_biguint<26>(ap_const_lv26_11D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_199_fu_2750_p0() {
    mul_ln1118_199_fu_2750_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_199_fu_2750_p2() {
    mul_ln1118_199_fu_2750_p2 = (!mul_ln1118_199_fu_2750_p0.read().is_01() || !ap_const_lv25_DE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_199_fu_2750_p0.read()) * sc_biguint<25>(ap_const_lv25_DE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_200_fu_1767_p0() {
    mul_ln1118_200_fu_1767_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_200_fu_1767_p2() {
    mul_ln1118_200_fu_1767_p2 = (!mul_ln1118_200_fu_1767_p0.read().is_01() || !ap_const_lv24_71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_200_fu_1767_p0.read()) * sc_biguint<24>(ap_const_lv24_71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_201_fu_2478_p0() {
    mul_ln1118_201_fu_2478_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_201_fu_2478_p2() {
    mul_ln1118_201_fu_2478_p2 = (!mul_ln1118_201_fu_2478_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_201_fu_2478_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_202_fu_1736_p0() {
    mul_ln1118_202_fu_1736_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_202_fu_1736_p2() {
    mul_ln1118_202_fu_1736_p2 = (!mul_ln1118_202_fu_1736_p0.read().is_01() || !ap_const_lv25_EB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_202_fu_1736_p0.read()) * sc_biguint<25>(ap_const_lv25_EB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_203_fu_2275_p0() {
    mul_ln1118_203_fu_2275_p0 =  (sc_lv<16>) (sext_ln1118_146_fu_4156336_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_203_fu_2275_p2() {
    mul_ln1118_203_fu_2275_p2 = (!mul_ln1118_203_fu_2275_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_203_fu_2275_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_204_fu_2384_p0() {
    mul_ln1118_204_fu_2384_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_204_fu_2384_p2() {
    mul_ln1118_204_fu_2384_p2 = (!mul_ln1118_204_fu_2384_p0.read().is_01() || !ap_const_lv25_F1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_204_fu_2384_p0.read()) * sc_biguint<25>(ap_const_lv25_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_205_fu_1958_p0() {
    mul_ln1118_205_fu_1958_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_4156362_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_205_fu_1958_p2() {
    mul_ln1118_205_fu_1958_p2 = (!mul_ln1118_205_fu_1958_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_205_fu_1958_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_206_fu_2395_p0() {
    mul_ln1118_206_fu_2395_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_206_fu_2395_p2() {
    mul_ln1118_206_fu_2395_p2 = (!mul_ln1118_206_fu_2395_p0.read().is_01() || !ap_const_lv25_1FFFF24.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_206_fu_2395_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF24);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_207_fu_2729_p0() {
    mul_ln1118_207_fu_2729_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_4156362_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_207_fu_2729_p2() {
    mul_ln1118_207_fu_2729_p2 = (!mul_ln1118_207_fu_2729_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_207_fu_2729_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_208_fu_2256_p0() {
    mul_ln1118_208_fu_2256_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_208_fu_2256_p2() {
    mul_ln1118_208_fu_2256_p2 = (!mul_ln1118_208_fu_2256_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_208_fu_2256_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_209_fu_2321_p0() {
    mul_ln1118_209_fu_2321_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_209_fu_2321_p2() {
    mul_ln1118_209_fu_2321_p2 = (!mul_ln1118_209_fu_2321_p0.read().is_01() || !ap_const_lv26_3FFFE4D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_209_fu_2321_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_210_fu_2358_p0() {
    mul_ln1118_210_fu_2358_p0 =  (sc_lv<16>) (sext_ln1118_146_fu_4156336_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_210_fu_2358_p2() {
    mul_ln1118_210_fu_2358_p2 = (!mul_ln1118_210_fu_2358_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_210_fu_2358_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_211_fu_1913_p0() {
    mul_ln1118_211_fu_1913_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_211_fu_1913_p2() {
    mul_ln1118_211_fu_1913_p2 = (!mul_ln1118_211_fu_1913_p0.read().is_01() || !ap_const_lv24_73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_211_fu_1913_p0.read()) * sc_biguint<24>(ap_const_lv24_73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_212_fu_2158_p0() {
    mul_ln1118_212_fu_2158_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_212_fu_2158_p2() {
    mul_ln1118_212_fu_2158_p2 = (!mul_ln1118_212_fu_2158_p0.read().is_01() || !ap_const_lv26_125.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_212_fu_2158_p0.read()) * sc_biguint<26>(ap_const_lv26_125);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_213_fu_1621_p0() {
    mul_ln1118_213_fu_1621_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_213_fu_1621_p2() {
    mul_ln1118_213_fu_1621_p2 = (!mul_ln1118_213_fu_1621_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_213_fu_1621_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_214_fu_1622_p0() {
    mul_ln1118_214_fu_1622_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_214_fu_1622_p2() {
    mul_ln1118_214_fu_1622_p2 = (!mul_ln1118_214_fu_1622_p0.read().is_01() || !ap_const_lv26_3FFFE4B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_214_fu_1622_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_215_fu_1700_p0() {
    mul_ln1118_215_fu_1700_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_4156368_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_215_fu_1700_p2() {
    mul_ln1118_215_fu_1700_p2 = (!mul_ln1118_215_fu_1700_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_215_fu_1700_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_217_fu_2128_p0() {
    mul_ln1118_217_fu_2128_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_217_fu_2128_p2() {
    mul_ln1118_217_fu_2128_p2 = (!mul_ln1118_217_fu_2128_p0.read().is_01() || !ap_const_lv25_C1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_217_fu_2128_p0.read()) * sc_biguint<25>(ap_const_lv25_C1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_218_fu_2272_p0() {
    mul_ln1118_218_fu_2272_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_218_fu_2272_p2() {
    mul_ln1118_218_fu_2272_p2 = (!mul_ln1118_218_fu_2272_p0.read().is_01() || !ap_const_lv25_1FFFF34.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_218_fu_2272_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_219_fu_2337_p0() {
    mul_ln1118_219_fu_2337_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_219_fu_2337_p2() {
    mul_ln1118_219_fu_2337_p2 = (!mul_ln1118_219_fu_2337_p0.read().is_01() || !ap_const_lv25_FD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_219_fu_2337_p0.read()) * sc_biguint<25>(ap_const_lv25_FD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_220_fu_2671_p0() {
    mul_ln1118_220_fu_2671_p0 =  (sc_lv<16>) (sext_ln1118_146_fu_4156336_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_220_fu_2671_p2() {
    mul_ln1118_220_fu_2671_p2 = (!mul_ln1118_220_fu_2671_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_220_fu_2671_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_221_fu_1929_p0() {
    mul_ln1118_221_fu_1929_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_221_fu_1929_p2() {
    mul_ln1118_221_fu_1929_p2 = (!mul_ln1118_221_fu_1929_p0.read().is_01() || !ap_const_lv26_3FFFE2D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_221_fu_1929_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_222_fu_1697_p0() {
    mul_ln1118_222_fu_1697_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_222_fu_1697_p2() {
    mul_ln1118_222_fu_1697_p2 = (!mul_ln1118_222_fu_1697_p0.read().is_01() || !ap_const_lv26_3FFFEE6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_222_fu_1697_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_223_fu_2059_p0() {
    mul_ln1118_223_fu_2059_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_4156368_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_223_fu_2059_p2() {
    mul_ln1118_223_fu_2059_p2 = (!mul_ln1118_223_fu_2059_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_223_fu_2059_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_224_fu_1505_p0() {
    mul_ln1118_224_fu_1505_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_4156317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_224_fu_1505_p2() {
    mul_ln1118_224_fu_1505_p2 = (!mul_ln1118_224_fu_1505_p0.read().is_01() || !ap_const_lv26_3FFFEE4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_224_fu_1505_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_225_fu_2582_p0() {
    mul_ln1118_225_fu_2582_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_225_fu_2582_p2() {
    mul_ln1118_225_fu_2582_p2 = (!mul_ln1118_225_fu_2582_p0.read().is_01() || !ap_const_lv25_C8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_225_fu_2582_p0.read()) * sc_biguint<25>(ap_const_lv25_C8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_226_fu_2583_p0() {
    mul_ln1118_226_fu_2583_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_226_fu_2583_p2() {
    mul_ln1118_226_fu_2583_p2 = (!mul_ln1118_226_fu_2583_p0.read().is_01() || !ap_const_lv25_BB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_226_fu_2583_p0.read()) * sc_biguint<25>(ap_const_lv25_BB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_227_fu_2297_p0() {
    mul_ln1118_227_fu_2297_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_4156344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_227_fu_2297_p2() {
    mul_ln1118_227_fu_2297_p2 = (!mul_ln1118_227_fu_2297_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_227_fu_2297_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_228_fu_2298_p0() {
    mul_ln1118_228_fu_2298_p0 =  (sc_lv<16>) (sext_ln1118_150_fu_4156375_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_228_fu_2298_p2() {
    mul_ln1118_228_fu_2298_p2 = (!mul_ln1118_228_fu_2298_p0.read().is_01() || !ap_const_lv25_1FFFF65.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_228_fu_2298_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_229_fu_2687_p0() {
    mul_ln1118_229_fu_2687_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_229_fu_2687_p2() {
    mul_ln1118_229_fu_2687_p2 = (!mul_ln1118_229_fu_2687_p0.read().is_01() || !ap_const_lv25_AB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_229_fu_2687_p0.read()) * sc_biguint<25>(ap_const_lv25_AB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_230_fu_2214_p0() {
    mul_ln1118_230_fu_2214_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_4157058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_230_fu_2214_p2() {
    mul_ln1118_230_fu_2214_p2 = (!mul_ln1118_230_fu_2214_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_230_fu_2214_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_231_fu_1982_p0() {
    mul_ln1118_231_fu_1982_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_231_fu_1982_p2() {
    mul_ln1118_231_fu_1982_p2 = (!mul_ln1118_231_fu_1982_p0.read().is_01() || !ap_const_lv26_3FFFEE5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_231_fu_1982_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_232_fu_1537_p0() {
    mul_ln1118_232_fu_1537_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_4157046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_232_fu_1537_p2() {
    mul_ln1118_232_fu_1537_p2 = (!mul_ln1118_232_fu_1537_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_232_fu_1537_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_233_fu_1602_p0() {
    mul_ln1118_233_fu_1602_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_4157070_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_233_fu_1602_p2() {
    mul_ln1118_233_fu_1602_p2 = (!mul_ln1118_233_fu_1602_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_233_fu_1602_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_235_fu_2446_p0() {
    mul_ln1118_235_fu_2446_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_235_fu_2446_p2() {
    mul_ln1118_235_fu_2446_p2 = (!mul_ln1118_235_fu_2446_p0.read().is_01() || !ap_const_lv26_3FFFEC7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_235_fu_2446_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_236_fu_2133_p0() {
    mul_ln1118_236_fu_2133_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_4157058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_236_fu_2133_p2() {
    mul_ln1118_236_fu_2133_p2 = (!mul_ln1118_236_fu_2133_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_236_fu_2133_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_237_fu_2672_p0() {
    mul_ln1118_237_fu_2672_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_237_fu_2672_p2() {
    mul_ln1118_237_fu_2672_p2 = (!mul_ln1118_237_fu_2672_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_237_fu_2672_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_238_fu_1597_p0() {
    mul_ln1118_238_fu_1597_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_238_fu_1597_p2() {
    mul_ln1118_238_fu_1597_p2 = (!mul_ln1118_238_fu_1597_p0.read().is_01() || !ap_const_lv26_103.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_238_fu_1597_p0.read()) * sc_biguint<26>(ap_const_lv26_103);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_239_fu_2734_p0() {
    mul_ln1118_239_fu_2734_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_239_fu_2734_p2() {
    mul_ln1118_239_fu_2734_p2 = (!mul_ln1118_239_fu_2734_p0.read().is_01() || !ap_const_lv25_DB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_239_fu_2734_p0.read()) * sc_biguint<25>(ap_const_lv25_DB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_240_fu_1534_p0() {
    mul_ln1118_240_fu_1534_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_240_fu_1534_p2() {
    mul_ln1118_240_fu_1534_p2 = (!mul_ln1118_240_fu_1534_p0.read().is_01() || !ap_const_lv25_1FFFF1B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_240_fu_1534_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_241_fu_1998_p0() {
    mul_ln1118_241_fu_1998_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_241_fu_1998_p2() {
    mul_ln1118_241_fu_1998_p2 = (!mul_ln1118_241_fu_1998_p0.read().is_01() || !ap_const_lv26_1A4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_241_fu_1998_p0.read()) * sc_biguint<26>(ap_const_lv26_1A4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_242_fu_2091_p0() {
    mul_ln1118_242_fu_2091_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_242_fu_2091_p2() {
    mul_ln1118_242_fu_2091_p2 = (!mul_ln1118_242_fu_2091_p0.read().is_01() || !ap_const_lv26_16D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_242_fu_2091_p0.read()) * sc_biguint<26>(ap_const_lv26_16D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_243_fu_2425_p0() {
    mul_ln1118_243_fu_2425_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_243_fu_2425_p2() {
    mul_ln1118_243_fu_2425_p2 = (!mul_ln1118_243_fu_2425_p0.read().is_01() || !ap_const_lv25_AC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_243_fu_2425_p0.read()) * sc_biguint<25>(ap_const_lv25_AC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_244_fu_2434_p0() {
    mul_ln1118_244_fu_2434_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_244_fu_2434_p2() {
    mul_ln1118_244_fu_2434_p2 = (!mul_ln1118_244_fu_2434_p0.read().is_01() || !ap_const_lv25_1FFFF32.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_244_fu_2434_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_245_fu_2555_p0() {
    mul_ln1118_245_fu_2555_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_245_fu_2555_p2() {
    mul_ln1118_245_fu_2555_p2 = (!mul_ln1118_245_fu_2555_p0.read().is_01() || !ap_const_lv25_A5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_245_fu_2555_p0.read()) * sc_biguint<25>(ap_const_lv25_A5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_246_fu_1516_p0() {
    mul_ln1118_246_fu_1516_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_246_fu_1516_p2() {
    mul_ln1118_246_fu_1516_p2 = (!mul_ln1118_246_fu_1516_p0.read().is_01() || !ap_const_lv26_14D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_246_fu_1516_p0.read()) * sc_biguint<26>(ap_const_lv26_14D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_247_fu_2351_p0() {
    mul_ln1118_247_fu_2351_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_247_fu_2351_p2() {
    mul_ln1118_247_fu_2351_p2 = (!mul_ln1118_247_fu_2351_p0.read().is_01() || !ap_const_lv26_3FFFEEF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_247_fu_2351_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_248_fu_1814_p0() {
    mul_ln1118_248_fu_1814_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_248_fu_1814_p2() {
    mul_ln1118_248_fu_1814_p2 = (!mul_ln1118_248_fu_1814_p0.read().is_01() || !ap_const_lv26_3FFFE77.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_248_fu_1814_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_249_fu_1815_p0() {
    mul_ln1118_249_fu_1815_p0 = sext_ln1118_165_fu_4157053_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_249_fu_1815_p2() {
    mul_ln1118_249_fu_1815_p2 = (!mul_ln1118_249_fu_1815_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_249_fu_1815_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_250_fu_2557_p0() {
    mul_ln1118_250_fu_2557_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_4157058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_250_fu_2557_p2() {
    mul_ln1118_250_fu_2557_p2 = (!mul_ln1118_250_fu_2557_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_250_fu_2557_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_251_fu_2558_p0() {
    mul_ln1118_251_fu_2558_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_251_fu_2558_p2() {
    mul_ln1118_251_fu_2558_p2 = (!mul_ln1118_251_fu_2558_p0.read().is_01() || !ap_const_lv26_3FFFE69.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_251_fu_2558_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_252_fu_1705_p0() {
    mul_ln1118_252_fu_1705_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_252_fu_1705_p2() {
    mul_ln1118_252_fu_1705_p2 = (!mul_ln1118_252_fu_1705_p0.read().is_01() || !ap_const_lv26_3FFFE36.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_252_fu_1705_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_253_fu_2775_p0() {
    mul_ln1118_253_fu_2775_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_4157058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_253_fu_2775_p2() {
    mul_ln1118_253_fu_2775_p2 = (!mul_ln1118_253_fu_2775_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_253_fu_2775_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_254_fu_2005_p0() {
    mul_ln1118_254_fu_2005_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_4157046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_254_fu_2005_p2() {
    mul_ln1118_254_fu_2005_p2 = (!mul_ln1118_254_fu_2005_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_254_fu_2005_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_255_fu_2098_p0() {
    mul_ln1118_255_fu_2098_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_4157058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_255_fu_2098_p2() {
    mul_ln1118_255_fu_2098_p2 = (!mul_ln1118_255_fu_2098_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_255_fu_2098_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_256_fu_2701_p0() {
    mul_ln1118_256_fu_2701_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_256_fu_2701_p2() {
    mul_ln1118_256_fu_2701_p2 = (!mul_ln1118_256_fu_2701_p0.read().is_01() || !ap_const_lv25_1FFFF75.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_256_fu_2701_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_257_fu_2497_p0() {
    mul_ln1118_257_fu_2497_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_257_fu_2497_p2() {
    mul_ln1118_257_fu_2497_p2 = (!mul_ln1118_257_fu_2497_p0.read().is_01() || !ap_const_lv25_1FFFF28.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_257_fu_2497_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF28);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_258_fu_2441_p0() {
    mul_ln1118_258_fu_2441_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_258_fu_2441_p2() {
    mul_ln1118_258_fu_2441_p2 = (!mul_ln1118_258_fu_2441_p0.read().is_01() || !ap_const_lv25_1FFFF55.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_258_fu_2441_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_259_fu_1699_p0() {
    mul_ln1118_259_fu_1699_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_259_fu_1699_p2() {
    mul_ln1118_259_fu_1699_p2 = (!mul_ln1118_259_fu_1699_p0.read().is_01() || !ap_const_lv26_3FFFE56.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_259_fu_1699_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_260_fu_2443_p0() {
    mul_ln1118_260_fu_2443_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_260_fu_2443_p2() {
    mul_ln1118_260_fu_2443_p2 = (!mul_ln1118_260_fu_2443_p0.read().is_01() || !ap_const_lv25_1FFFF4F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_260_fu_2443_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_261_fu_2300_p0() {
    mul_ln1118_261_fu_2300_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_4157058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_261_fu_2300_p2() {
    mul_ln1118_261_fu_2300_p2 = (!mul_ln1118_261_fu_2300_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_261_fu_2300_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_262_fu_2301_p0() {
    mul_ln1118_262_fu_2301_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_262_fu_2301_p2() {
    mul_ln1118_262_fu_2301_p2 = (!mul_ln1118_262_fu_2301_p0.read().is_01() || !ap_const_lv25_96.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_262_fu_2301_p0.read()) * sc_biguint<25>(ap_const_lv25_96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_263_fu_1875_p0() {
    mul_ln1118_263_fu_1875_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_263_fu_1875_p2() {
    mul_ln1118_263_fu_1875_p2 = (!mul_ln1118_263_fu_1875_p0.read().is_01() || !ap_const_lv26_1B5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_263_fu_1875_p0.read()) * sc_biguint<26>(ap_const_lv26_1B5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_264_fu_1845_p0() {
    mul_ln1118_264_fu_1845_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_4157046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_264_fu_1845_p2() {
    mul_ln1118_264_fu_1845_p2 = (!mul_ln1118_264_fu_1845_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_264_fu_1845_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_265_fu_2420_p0() {
    mul_ln1118_265_fu_2420_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_4157058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_265_fu_2420_p2() {
    mul_ln1118_265_fu_2420_p2 = (!mul_ln1118_265_fu_2420_p0.read().is_01() || !ap_const_lv24_71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_265_fu_2420_p0.read()) * sc_biguint<24>(ap_const_lv24_71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_266_fu_1650_p0() {
    mul_ln1118_266_fu_1650_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_4157058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_266_fu_1650_p2() {
    mul_ln1118_266_fu_1650_p2 = (!mul_ln1118_266_fu_1650_p0.read().is_01() || !ap_const_lv24_FFFFAA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_266_fu_1650_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_267_fu_1771_p0() {
    mul_ln1118_267_fu_1771_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_267_fu_1771_p2() {
    mul_ln1118_267_fu_1771_p2 = (!mul_ln1118_267_fu_1771_p0.read().is_01() || !ap_const_lv26_3FFFEA7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_267_fu_1771_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_268_fu_2615_p0() {
    mul_ln1118_268_fu_2615_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_268_fu_2615_p2() {
    mul_ln1118_268_fu_2615_p2 = (!mul_ln1118_268_fu_2615_p0.read().is_01() || !ap_const_lv25_1FFFF19.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_268_fu_2615_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_269_fu_2326_p0() {
    mul_ln1118_269_fu_2326_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_269_fu_2326_p2() {
    mul_ln1118_269_fu_2326_p2 = (!mul_ln1118_269_fu_2326_p0.read().is_01() || !ap_const_lv25_94.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_269_fu_2326_p0.read()) * sc_biguint<25>(ap_const_lv25_94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_270_fu_1584_p0() {
    mul_ln1118_270_fu_1584_p0 =  (sc_lv<16>) (sext_ln1118_161_fu_4157004_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_270_fu_1584_p2() {
    mul_ln1118_270_fu_1584_p2 = (!mul_ln1118_270_fu_1584_p0.read().is_01() || !ap_const_lv26_3FFFEBD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_270_fu_1584_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_271_fu_1585_p0() {
    mul_ln1118_271_fu_1585_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_271_fu_1585_p2() {
    mul_ln1118_271_fu_1585_p2 = (!mul_ln1118_271_fu_1585_p0.read().is_01() || !ap_const_lv25_1FFFF7B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_271_fu_1585_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_272_fu_1586_p0() {
    mul_ln1118_272_fu_1586_p0 =  (sc_lv<16>) (sext_ln1118_162_fu_4157022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_272_fu_1586_p2() {
    mul_ln1118_272_fu_1586_p2 = (!mul_ln1118_272_fu_1586_p0.read().is_01() || !ap_const_lv25_EC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_272_fu_1586_p0.read()) * sc_biguint<25>(ap_const_lv25_EC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_274_fu_1964_p0() {
    mul_ln1118_274_fu_1964_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4157998_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_274_fu_1964_p2() {
    mul_ln1118_274_fu_1964_p2 = (!mul_ln1118_274_fu_1964_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_274_fu_1964_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_275_fu_2705_p0() {
    mul_ln1118_275_fu_2705_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4157987_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_275_fu_2705_p2() {
    mul_ln1118_275_fu_2705_p2 = (!mul_ln1118_275_fu_2705_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_275_fu_2705_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_276_fu_1935_p0() {
    mul_ln1118_276_fu_1935_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_276_fu_1935_p2() {
    mul_ln1118_276_fu_1935_p2 = (!mul_ln1118_276_fu_1935_p0.read().is_01() || !ap_const_lv25_1FFFF45.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_276_fu_1935_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_277_fu_2566_p0() {
    mul_ln1118_277_fu_2566_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4157987_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_277_fu_2566_p2() {
    mul_ln1118_277_fu_2566_p2 = (!mul_ln1118_277_fu_2566_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_277_fu_2566_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_278_fu_1583_p0() {
    mul_ln1118_278_fu_1583_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_278_fu_1583_p2() {
    mul_ln1118_278_fu_1583_p2 = (!mul_ln1118_278_fu_1583_p0.read().is_01() || !ap_const_lv25_1FFFF29.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_278_fu_1583_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF29);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_279_fu_2455_p0() {
    mul_ln1118_279_fu_2455_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_279_fu_2455_p2() {
    mul_ln1118_279_fu_2455_p2 = (!mul_ln1118_279_fu_2455_p0.read().is_01() || !ap_const_lv26_121.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_279_fu_2455_p0.read()) * sc_biguint<26>(ap_const_lv26_121);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_280_fu_2195_p0() {
    mul_ln1118_280_fu_2195_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_280_fu_2195_p2() {
    mul_ln1118_280_fu_2195_p2 = (!mul_ln1118_280_fu_2195_p0.read().is_01() || !ap_const_lv25_92.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_280_fu_2195_p0.read()) * sc_biguint<25>(ap_const_lv25_92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_281_fu_2211_p0() {
    mul_ln1118_281_fu_2211_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_281_fu_2211_p2() {
    mul_ln1118_281_fu_2211_p2 = (!mul_ln1118_281_fu_2211_p0.read().is_01() || !ap_const_lv26_3FFFE4D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_281_fu_2211_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_282_fu_2212_p0() {
    mul_ln1118_282_fu_2212_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_282_fu_2212_p2() {
    mul_ln1118_282_fu_2212_p2 = (!mul_ln1118_282_fu_2212_p0.read().is_01() || !ap_const_lv26_137.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_282_fu_2212_p0.read()) * sc_biguint<26>(ap_const_lv26_137);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_283_fu_2008_p0() {
    mul_ln1118_283_fu_2008_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_283_fu_2008_p2() {
    mul_ln1118_283_fu_2008_p2 = (!mul_ln1118_283_fu_2008_p0.read().is_01() || !ap_const_lv25_1FFFF32.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_283_fu_2008_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_284_fu_1676_p0() {
    mul_ln1118_284_fu_1676_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_284_fu_1676_p2() {
    mul_ln1118_284_fu_1676_p2 = (!mul_ln1118_284_fu_1676_p0.read().is_01() || !ap_const_lv26_175.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_284_fu_1676_p0.read()) * sc_biguint<26>(ap_const_lv26_175);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_285_fu_1707_p0() {
    mul_ln1118_285_fu_1707_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_285_fu_1707_p2() {
    mul_ln1118_285_fu_1707_p2 = (!mul_ln1118_285_fu_1707_p0.read().is_01() || !ap_const_lv25_8E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_285_fu_1707_p0.read()) * sc_biguint<25>(ap_const_lv25_8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_286_fu_2135_p0() {
    mul_ln1118_286_fu_2135_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_286_fu_2135_p2() {
    mul_ln1118_286_fu_2135_p2 = (!mul_ln1118_286_fu_2135_p0.read().is_01() || !ap_const_lv25_1FFFF23.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_286_fu_2135_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_287_fu_2647_p0() {
    mul_ln1118_287_fu_2647_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_287_fu_2647_p2() {
    mul_ln1118_287_fu_2647_p2 = (!mul_ln1118_287_fu_2647_p0.read().is_01() || !ap_const_lv25_AA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_287_fu_2647_p0.read()) * sc_biguint<25>(ap_const_lv25_AA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_288_fu_2174_p0() {
    mul_ln1118_288_fu_2174_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_288_fu_2174_p2() {
    mul_ln1118_288_fu_2174_p2 = (!mul_ln1118_288_fu_2174_p0.read().is_01() || !ap_const_lv26_11C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_288_fu_2174_p0.read()) * sc_biguint<26>(ap_const_lv26_11C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_289_fu_2267_p0() {
    mul_ln1118_289_fu_2267_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_289_fu_2267_p2() {
    mul_ln1118_289_fu_2267_p2 = (!mul_ln1118_289_fu_2267_p0.read().is_01() || !ap_const_lv25_B7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_289_fu_2267_p0.read()) * sc_biguint<25>(ap_const_lv25_B7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_290_fu_1497_p0() {
    mul_ln1118_290_fu_1497_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_290_fu_1497_p2() {
    mul_ln1118_290_fu_1497_p2 = (!mul_ln1118_290_fu_1497_p0.read().is_01() || !ap_const_lv25_1FFFF07.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_290_fu_1497_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF07);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_291_fu_2610_p0() {
    mul_ln1118_291_fu_2610_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_291_fu_2610_p2() {
    mul_ln1118_291_fu_2610_p2 = (!mul_ln1118_291_fu_2610_p0.read().is_01() || !ap_const_lv25_DB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_291_fu_2610_p0.read()) * sc_biguint<25>(ap_const_lv25_DB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_292_fu_2429_p0() {
    mul_ln1118_292_fu_2429_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_292_fu_2429_p2() {
    mul_ln1118_292_fu_2429_p2 = (!mul_ln1118_292_fu_2429_p0.read().is_01() || !ap_const_lv26_12D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_292_fu_2429_p0.read()) * sc_biguint<26>(ap_const_lv26_12D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_293_fu_2430_p0() {
    mul_ln1118_293_fu_2430_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_293_fu_2430_p2() {
    mul_ln1118_293_fu_2430_p2 = (!mul_ln1118_293_fu_2430_p0.read().is_01() || !ap_const_lv26_3FFFEDB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_293_fu_2430_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_294_fu_2431_p0() {
    mul_ln1118_294_fu_2431_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_294_fu_2431_p2() {
    mul_ln1118_294_fu_2431_p2 = (!mul_ln1118_294_fu_2431_p0.read().is_01() || !ap_const_lv25_1FFFF0B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_294_fu_2431_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_295_fu_2730_p0() {
    mul_ln1118_295_fu_2730_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_295_fu_2730_p2() {
    mul_ln1118_295_fu_2730_p2 = (!mul_ln1118_295_fu_2730_p0.read().is_01() || !ap_const_lv26_3FFFE62.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_295_fu_2730_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_296_fu_1877_p0() {
    mul_ln1118_296_fu_1877_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_296_fu_1877_p2() {
    mul_ln1118_296_fu_1877_p2 = (!mul_ln1118_296_fu_1877_p0.read().is_01() || !ap_const_lv25_1FFFF4B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_296_fu_1877_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_297_fu_2274_p0() {
    mul_ln1118_297_fu_2274_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4157998_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_297_fu_2274_p2() {
    mul_ln1118_297_fu_2274_p2 = (!mul_ln1118_297_fu_2274_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_297_fu_2274_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_298_fu_1504_p0() {
    mul_ln1118_298_fu_1504_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_298_fu_1504_p2() {
    mul_ln1118_298_fu_1504_p2 = (!mul_ln1118_298_fu_1504_p0.read().is_01() || !ap_const_lv25_1FFFF6F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_298_fu_1504_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_299_fu_2404_p0() {
    mul_ln1118_299_fu_2404_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_299_fu_2404_p2() {
    mul_ln1118_299_fu_2404_p2 = (!mul_ln1118_299_fu_2404_p0.read().is_01() || !ap_const_lv25_1FFFF54.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_299_fu_2404_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_300_fu_1931_p0() {
    mul_ln1118_300_fu_1931_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4157987_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_300_fu_1931_p2() {
    mul_ln1118_300_fu_1931_p2 = (!mul_ln1118_300_fu_1931_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_300_fu_1931_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_301_fu_2534_p0() {
    mul_ln1118_301_fu_2534_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_301_fu_2534_p2() {
    mul_ln1118_301_fu_2534_p2 = (!mul_ln1118_301_fu_2534_p0.read().is_01() || !ap_const_lv25_1FFFF71.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_301_fu_2534_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_302_fu_2061_p0() {
    mul_ln1118_302_fu_2061_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_302_fu_2061_p2() {
    mul_ln1118_302_fu_2061_p2 = (!mul_ln1118_302_fu_2061_p0.read().is_01() || !ap_const_lv26_3FFFEDC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_302_fu_2061_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_303_fu_2109_p0() {
    mul_ln1118_303_fu_2109_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4157987_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_303_fu_2109_p2() {
    mul_ln1118_303_fu_2109_p2 = (!mul_ln1118_303_fu_2109_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_303_fu_2109_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_304_fu_2110_p0() {
    mul_ln1118_304_fu_2110_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_304_fu_2110_p2() {
    mul_ln1118_304_fu_2110_p2 = (!mul_ln1118_304_fu_2110_p0.read().is_01() || !ap_const_lv26_142.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_304_fu_2110_p0.read()) * sc_biguint<26>(ap_const_lv26_142);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_305_fu_2649_p0() {
    mul_ln1118_305_fu_2649_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_305_fu_2649_p2() {
    mul_ln1118_305_fu_2649_p2 = (!mul_ln1118_305_fu_2649_p0.read().is_01() || !ap_const_lv25_1FFFF2D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_305_fu_2649_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_306_fu_1779_p0() {
    mul_ln1118_306_fu_1779_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_306_fu_1779_p2() {
    mul_ln1118_306_fu_1779_p2 = (!mul_ln1118_306_fu_1779_p0.read().is_01() || !ap_const_lv25_D9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_306_fu_1779_p0.read()) * sc_biguint<25>(ap_const_lv25_D9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_307_fu_2474_p0() {
    mul_ln1118_307_fu_2474_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4157987_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_307_fu_2474_p2() {
    mul_ln1118_307_fu_2474_p2 = (!mul_ln1118_307_fu_2474_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_307_fu_2474_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_308_fu_2048_p0() {
    mul_ln1118_308_fu_2048_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_308_fu_2048_p2() {
    mul_ln1118_308_fu_2048_p2 = (!mul_ln1118_308_fu_2048_p0.read().is_01() || !ap_const_lv25_EC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_308_fu_2048_p0.read()) * sc_biguint<25>(ap_const_lv25_EC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_309_fu_2541_p0() {
    mul_ln1118_309_fu_2541_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_309_fu_2541_p2() {
    mul_ln1118_309_fu_2541_p2 = (!mul_ln1118_309_fu_2541_p0.read().is_01() || !ap_const_lv25_1FFFF0A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_309_fu_2541_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_310_fu_1530_p0() {
    mul_ln1118_310_fu_1530_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_310_fu_1530_p2() {
    mul_ln1118_310_fu_1530_p2 = (!mul_ln1118_310_fu_1530_p0.read().is_01() || !ap_const_lv25_1FFFF79.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_310_fu_1530_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_311_fu_1836_p0() {
    mul_ln1118_311_fu_1836_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_311_fu_1836_p2() {
    mul_ln1118_311_fu_1836_p2 = (!mul_ln1118_311_fu_1836_p0.read().is_01() || !ap_const_lv25_C7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_311_fu_1836_p0.read()) * sc_biguint<25>(ap_const_lv25_C7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_312_fu_2467_p0() {
    mul_ln1118_312_fu_2467_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_312_fu_2467_p2() {
    mul_ln1118_312_fu_2467_p2 = (!mul_ln1118_312_fu_2467_p0.read().is_01() || !ap_const_lv26_3FFFDB5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_312_fu_2467_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_313_fu_2532_p0() {
    mul_ln1118_313_fu_2532_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_4157957_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_313_fu_2532_p2() {
    mul_ln1118_313_fu_2532_p2 = (!mul_ln1118_313_fu_2532_p0.read().is_01() || !ap_const_lv25_A1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_313_fu_2532_p0.read()) * sc_biguint<25>(ap_const_lv25_A1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_314_fu_1994_p0() {
    mul_ln1118_314_fu_1994_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4157987_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_314_fu_1994_p2() {
    mul_ln1118_314_fu_1994_p2 = (!mul_ln1118_314_fu_1994_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_314_fu_1994_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_315_fu_1790_p0() {
    mul_ln1118_315_fu_1790_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_4157941_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_315_fu_1790_p2() {
    mul_ln1118_315_fu_1790_p2 = (!mul_ln1118_315_fu_1790_p0.read().is_01() || !ap_const_lv26_158.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_315_fu_1790_p0.read()) * sc_biguint<26>(ap_const_lv26_158);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_316_fu_1791_p0() {
    mul_ln1118_316_fu_1791_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4157987_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_316_fu_1791_p2() {
    mul_ln1118_316_fu_1791_p2 = (!mul_ln1118_316_fu_1791_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_316_fu_1791_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_317_fu_2723_p0() {
    mul_ln1118_317_fu_2723_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4157998_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_317_fu_2723_p2() {
    mul_ln1118_317_fu_2723_p2 = (!mul_ln1118_317_fu_2723_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_317_fu_2723_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_318_fu_2724_p0() {
    mul_ln1118_318_fu_2724_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4157998_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_318_fu_2724_p2() {
    mul_ln1118_318_fu_2724_p2 = (!mul_ln1118_318_fu_2724_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_318_fu_2724_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_319_fu_1871_p0() {
    mul_ln1118_319_fu_1871_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4157998_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_319_fu_1871_p2() {
    mul_ln1118_319_fu_1871_p2 = (!mul_ln1118_319_fu_1871_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_319_fu_1871_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_320_fu_1667_p0() {
    mul_ln1118_320_fu_1667_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4157998_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_320_fu_1667_p2() {
    mul_ln1118_320_fu_1667_p2 = (!mul_ln1118_320_fu_1667_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_320_fu_1667_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_321_fu_1973_p0() {
    mul_ln1118_321_fu_1973_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4157998_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_321_fu_1973_p2() {
    mul_ln1118_321_fu_1973_p2 = (!mul_ln1118_321_fu_1973_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_321_fu_1973_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_322_fu_1640_p0() {
    mul_ln1118_322_fu_1640_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_322_fu_1640_p2() {
    mul_ln1118_322_fu_1640_p2 = (!mul_ln1118_322_fu_1640_p0.read().is_01() || !ap_const_lv25_1FFFF2B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_322_fu_1640_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_323_fu_2333_p0() {
    mul_ln1118_323_fu_2333_p0 =  (sc_lv<16>) (sext_ln1118_207_reg_4184828.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_323_fu_2333_p2() {
    mul_ln1118_323_fu_2333_p2 = (!mul_ln1118_323_fu_2333_p0.read().is_01() || !ap_const_lv24_FFFF9F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_323_fu_2333_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_324_fu_1844_p0() {
    mul_ln1118_324_fu_1844_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_324_fu_1844_p2() {
    mul_ln1118_324_fu_1844_p2 = (!mul_ln1118_324_fu_1844_p0.read().is_01() || !ap_const_lv25_1FFFF36.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_324_fu_1844_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_325_fu_2549_p0() {
    mul_ln1118_325_fu_2549_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_325_fu_2549_p2() {
    mul_ln1118_325_fu_2549_p2 = (!mul_ln1118_325_fu_2549_p0.read().is_01() || !ap_const_lv25_E7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_325_fu_2549_p0.read()) * sc_biguint<25>(ap_const_lv25_E7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_326_fu_2448_p0() {
    mul_ln1118_326_fu_2448_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_326_fu_2448_p2() {
    mul_ln1118_326_fu_2448_p2 = (!mul_ln1118_326_fu_2448_p0.read().is_01() || !ap_const_lv25_1FFFF2C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_326_fu_2448_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_327_fu_1848_p0() {
    mul_ln1118_327_fu_1848_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4160311_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_327_fu_1848_p2() {
    mul_ln1118_327_fu_1848_p2 = (!mul_ln1118_327_fu_1848_p0.read().is_01() || !ap_const_lv26_1E7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_327_fu_1848_p0.read()) * sc_biguint<26>(ap_const_lv26_1E7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_328_fu_1849_p0() {
    mul_ln1118_328_fu_1849_p0 =  (sc_lv<16>) (sext_ln1118_208_reg_4184843.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_328_fu_1849_p2() {
    mul_ln1118_328_fu_1849_p2 = (!mul_ln1118_328_fu_1849_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_328_fu_1849_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_329_fu_1851_p0() {
    mul_ln1118_329_fu_1851_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_329_fu_1851_p2() {
    mul_ln1118_329_fu_1851_p2 = (!mul_ln1118_329_fu_1851_p0.read().is_01() || !ap_const_lv25_8B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_329_fu_1851_p0.read()) * sc_biguint<25>(ap_const_lv25_8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_330_fu_1753_p0() {
    mul_ln1118_330_fu_1753_p0 =  (sc_lv<16>) (sext_ln1118_207_reg_4184828.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_330_fu_1753_p2() {
    mul_ln1118_330_fu_1753_p2 = (!mul_ln1118_330_fu_1753_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_330_fu_1753_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_331_fu_1853_p0() {
    mul_ln1118_331_fu_1853_p0 =  (sc_lv<16>) (sext_ln1118_208_reg_4184843.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_331_fu_1853_p2() {
    mul_ln1118_331_fu_1853_p2 = (!mul_ln1118_331_fu_1853_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_331_fu_1853_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_333_fu_2454_p0() {
    mul_ln1118_333_fu_2454_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_333_fu_2454_p2() {
    mul_ln1118_333_fu_2454_p2 = (!mul_ln1118_333_fu_2454_p0.read().is_01() || !ap_const_lv25_1FFFF3F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_333_fu_2454_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_334_fu_1856_p0() {
    mul_ln1118_334_fu_1856_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4160311_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_334_fu_1856_p2() {
    mul_ln1118_334_fu_1856_p2 = (!mul_ln1118_334_fu_1856_p0.read().is_01() || !ap_const_lv26_283.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_334_fu_1856_p0.read()) * sc_biguint<26>(ap_const_lv26_283);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_335_fu_2523_p0() {
    mul_ln1118_335_fu_2523_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4160311_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_335_fu_2523_p2() {
    mul_ln1118_335_fu_2523_p2 = (!mul_ln1118_335_fu_2523_p0.read().is_01() || !ap_const_lv26_3FFFE96.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_335_fu_2523_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_336_fu_2756_p0() {
    mul_ln1118_336_fu_2756_p0 =  (sc_lv<16>) (sext_ln1118_207_reg_4184828.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_336_fu_2756_p2() {
    mul_ln1118_336_fu_2756_p2 = (!mul_ln1118_336_fu_2756_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_336_fu_2756_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_337_fu_2335_p0() {
    mul_ln1118_337_fu_2335_p0 = sext_ln1118_208_fu_4158876_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_337_fu_2335_p2() {
    mul_ln1118_337_fu_2335_p2 = (!mul_ln1118_337_fu_2335_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_337_fu_2335_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_338_fu_1902_p0() {
    mul_ln1118_338_fu_1902_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4160311_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_338_fu_1902_p2() {
    mul_ln1118_338_fu_1902_p2 = (!mul_ln1118_338_fu_1902_p0.read().is_01() || !ap_const_lv26_3FFFEB9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_338_fu_1902_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_339_fu_1923_p0() {
    mul_ln1118_339_fu_1923_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_339_fu_1923_p2() {
    mul_ln1118_339_fu_1923_p2 = (!mul_ln1118_339_fu_1923_p0.read().is_01() || !ap_const_lv25_1FFFF31.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_339_fu_1923_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_340_fu_1944_p0() {
    mul_ln1118_340_fu_1944_p0 =  (sc_lv<16>) (sext_ln1118_207_reg_4184828.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_340_fu_1944_p2() {
    mul_ln1118_340_fu_1944_p2 = (!mul_ln1118_340_fu_1944_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_340_fu_1944_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_341_fu_2402_p0() {
    mul_ln1118_341_fu_2402_p0 =  (sc_lv<16>) (sext_ln1118_207_reg_4184828.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_341_fu_2402_p2() {
    mul_ln1118_341_fu_2402_p2 = (!mul_ln1118_341_fu_2402_p0.read().is_01() || !ap_const_lv24_FFFF8B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_341_fu_2402_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_342_fu_1986_p0() {
    mul_ln1118_342_fu_1986_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_342_fu_1986_p2() {
    mul_ln1118_342_fu_1986_p2 = (!mul_ln1118_342_fu_1986_p0.read().is_01() || !ap_const_lv25_1FFFF25.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_342_fu_1986_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_343_fu_2011_p0() {
    mul_ln1118_343_fu_2011_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4160311_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_343_fu_2011_p2() {
    mul_ln1118_343_fu_2011_p2 = (!mul_ln1118_343_fu_2011_p0.read().is_01() || !ap_const_lv26_3FFFEE6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_343_fu_2011_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_344_fu_2028_p0() {
    mul_ln1118_344_fu_2028_p0 =  (sc_lv<16>) (sext_ln1118_208_reg_4184843.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_344_fu_2028_p2() {
    mul_ln1118_344_fu_2028_p2 = (!mul_ln1118_344_fu_2028_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_344_fu_2028_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_345_fu_2496_p0() {
    mul_ln1118_345_fu_2496_p0 =  (sc_lv<16>) (sext_ln1118_207_reg_4184828.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_345_fu_2496_p2() {
    mul_ln1118_345_fu_2496_p2 = (!mul_ln1118_345_fu_2496_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_345_fu_2496_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_346_fu_2516_p0() {
    mul_ln1118_346_fu_2516_p0 =  (sc_lv<16>) (sext_ln1118_207_reg_4184828.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_346_fu_2516_p2() {
    mul_ln1118_346_fu_2516_p2 = (!mul_ln1118_346_fu_2516_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_346_fu_2516_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_347_fu_2131_p0() {
    mul_ln1118_347_fu_2131_p0 =  (sc_lv<16>) (sext_ln1118_204_fu_4158865_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_347_fu_2131_p2() {
    mul_ln1118_347_fu_2131_p2 = (!mul_ln1118_347_fu_2131_p0.read().is_01() || !ap_const_lv25_AF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_347_fu_2131_p0.read()) * sc_biguint<25>(ap_const_lv25_AF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_349_fu_2539_p0() {
    mul_ln1118_349_fu_2539_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_349_fu_2539_p2() {
    mul_ln1118_349_fu_2539_p2 = (!mul_ln1118_349_fu_2539_p0.read().is_01() || !ap_const_lv25_1FFFF05.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_349_fu_2539_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF05);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_350_fu_2561_p0() {
    mul_ln1118_350_fu_2561_p0 =  (sc_lv<16>) (sext_ln1118_204_reg_4184811.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_350_fu_2561_p2() {
    mul_ln1118_350_fu_2561_p2 = (!mul_ln1118_350_fu_2561_p0.read().is_01() || !ap_const_lv25_1FFFF3C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_350_fu_2561_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_351_fu_2579_p0() {
    mul_ln1118_351_fu_2579_p0 =  (sc_lv<16>) (sext_ln1118_208_reg_4184843.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_351_fu_2579_p2() {
    mul_ln1118_351_fu_2579_p2 = (!mul_ln1118_351_fu_2579_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_351_fu_2579_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_352_fu_2156_p0() {
    mul_ln1118_352_fu_2156_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4160311_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_352_fu_2156_p2() {
    mul_ln1118_352_fu_2156_p2 = (!mul_ln1118_352_fu_2156_p0.read().is_01() || !ap_const_lv26_3FFFEB8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_352_fu_2156_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB8);
}

}

