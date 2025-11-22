#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_749_fu_4150121_p2() {
    add_ln703_749_fu_4150121_p2 = (!mult_258_V_fu_4137959_p1.read().is_01() || !mult_198_V_reg_4159214.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_258_V_fu_4137959_p1.read()) + sc_biguint<16>(mult_198_V_reg_4159214.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_750_fu_4150126_p2() {
    add_ln703_750_fu_4150126_p2 = (!mult_138_V_fu_4137397_p1.read().is_01() || !add_ln703_749_fu_4150121_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_138_V_fu_4137397_p1.read()) + sc_biguint<16>(add_ln703_749_fu_4150121_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_751_fu_4150132_p2() {
    add_ln703_751_fu_4150132_p2 = (!add_ln703_748_fu_4150117_p2.read().is_01() || !add_ln703_750_fu_4150126_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_748_fu_4150117_p2.read()) + sc_biguint<16>(add_ln703_750_fu_4150126_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_752_fu_4153813_p2() {
    add_ln703_752_fu_4153813_p2 = (!mult_378_V_reg_4160146.read().is_01() || !mult_318_V_fu_4151176_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_378_V_reg_4160146.read()) + sc_bigint<16>(mult_318_V_fu_4151176_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_753_fu_4153818_p2() {
    add_ln703_753_fu_4153818_p2 = (!mult_558_V_fu_4151512_p1.read().is_01() || !mult_498_V_fu_4151404_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_558_V_fu_4151512_p1.read()) + sc_bigint<16>(mult_498_V_fu_4151404_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_754_fu_4153824_p2() {
    add_ln703_754_fu_4153824_p2 = (!mult_438_V_reg_4160441.read().is_01() || !add_ln703_753_fu_4153818_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_438_V_reg_4160441.read()) + sc_biguint<16>(add_ln703_753_fu_4153818_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_755_fu_4153829_p2() {
    add_ln703_755_fu_4153829_p2 = (!add_ln703_752_fu_4153813_p2.read().is_01() || !add_ln703_754_fu_4153824_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_752_fu_4153813_p2.read()) + sc_biguint<16>(add_ln703_754_fu_4153824_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_756_fu_4153835_p2() {
    add_ln703_756_fu_4153835_p2 = (!add_ln703_751_reg_4164203.read().is_01() || !add_ln703_755_fu_4153829_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_751_reg_4164203.read()) + sc_biguint<16>(add_ln703_755_fu_4153829_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_757_fu_4153840_p2() {
    add_ln703_757_fu_4153840_p2 = (!mult_678_V_reg_4161601.read().is_01() || !mult_618_V_fu_4151566_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_678_V_reg_4161601.read()) + sc_bigint<16>(mult_618_V_fu_4151566_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_758_fu_4153845_p2() {
    add_ln703_758_fu_4153845_p2 = (!mult_858_V_fu_4151979_p1.read().is_01() || !mult_798_V_fu_4151892_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_858_V_fu_4151979_p1.read()) + sc_bigint<16>(mult_798_V_fu_4151892_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_759_fu_4153851_p2() {
    add_ln703_759_fu_4153851_p2 = (!mult_738_V_reg_4161892.read().is_01() || !add_ln703_758_fu_4153845_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_738_V_reg_4161892.read()) + sc_biguint<16>(add_ln703_758_fu_4153845_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_760_fu_4153856_p2() {
    add_ln703_760_fu_4153856_p2 = (!add_ln703_757_fu_4153840_p2.read().is_01() || !add_ln703_759_fu_4153851_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_757_fu_4153840_p2.read()) + sc_biguint<16>(add_ln703_759_fu_4153851_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_761_fu_4153862_p2() {
    add_ln703_761_fu_4153862_p2 = (!mult_1038_V_reg_4163333.read().is_01() || !mult_978_V_reg_4163043.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1038_V_reg_4163333.read()) + sc_biguint<16>(mult_978_V_reg_4163043.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_762_fu_4153866_p2() {
    add_ln703_762_fu_4153866_p2 = (!mult_918_V_reg_4162758.read().is_01() || !add_ln703_761_fu_4153862_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_918_V_reg_4162758.read()) + sc_biguint<16>(add_ln703_761_fu_4153862_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_763_fu_4153871_p2() {
    add_ln703_763_fu_4153871_p2 = (!mult_1158_V_reg_4163923.read().is_01() || !ap_const_lv16_E0.is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1158_V_reg_4163923.read()) + sc_biguint<16>(ap_const_lv16_E0));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_764_fu_4153876_p2() {
    add_ln703_764_fu_4153876_p2 = (!mult_1098_V_fu_4152291_p1.read().is_01() || !add_ln703_763_fu_4153871_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1098_V_fu_4152291_p1.read()) + sc_biguint<16>(add_ln703_763_fu_4153871_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_765_fu_4153882_p2() {
    add_ln703_765_fu_4153882_p2 = (!add_ln703_762_fu_4153866_p2.read().is_01() || !add_ln703_764_fu_4153876_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_762_fu_4153866_p2.read()) + sc_biguint<16>(add_ln703_764_fu_4153876_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_766_fu_4157321_p2() {
    add_ln703_766_fu_4157321_p2 = (!add_ln703_760_reg_4164748.read().is_01() || !add_ln703_765_reg_4164753.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_760_reg_4164748.read()) + sc_biguint<16>(add_ln703_765_reg_4164753.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_768_fu_4150138_p2() {
    add_ln703_768_fu_4150138_p2 = (!mult_79_V_fu_4137243_p1.read().is_01() || !mult_19_V_reg_4158433.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_79_V_fu_4137243_p1.read()) + sc_biguint<16>(mult_19_V_reg_4158433.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_769_fu_4150143_p2() {
    add_ln703_769_fu_4150143_p2 = (!sext_ln203_169_fu_4137962_p1.read().is_01() || !sext_ln203_161_fu_4137875_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_169_fu_4137962_p1.read()) + sc_bigint<15>(sext_ln203_161_fu_4137875_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_770_fu_4150153_p2() {
    add_ln703_770_fu_4150153_p2 = (!mult_139_V_fu_4137400_p1.read().is_01() || !sext_ln703_175_fu_4150149_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_139_V_fu_4137400_p1.read()) + sc_bigint<16>(sext_ln703_175_fu_4150149_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_771_fu_4150159_p2() {
    add_ln703_771_fu_4150159_p2 = (!add_ln703_768_fu_4150138_p2.read().is_01() || !add_ln703_770_fu_4150153_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_768_fu_4150138_p2.read()) + sc_biguint<16>(add_ln703_770_fu_4150153_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_772_fu_4153888_p2() {
    add_ln703_772_fu_4153888_p2 = (!mult_379_V_fu_4151245_p1.read().is_01() || !mult_319_V_fu_4151179_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_379_V_fu_4151245_p1.read()) + sc_bigint<16>(mult_319_V_fu_4151179_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_773_fu_4153894_p2() {
    add_ln703_773_fu_4153894_p2 = (!mult_559_V_fu_4151515_p1.read().is_01() || !mult_499_V_fu_4151407_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_559_V_fu_4151515_p1.read()) + sc_bigint<16>(mult_499_V_fu_4151407_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_774_fu_4153900_p2() {
    add_ln703_774_fu_4153900_p2 = (!mult_439_V_fu_4151326_p1.read().is_01() || !add_ln703_773_fu_4153894_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_439_V_fu_4151326_p1.read()) + sc_biguint<16>(add_ln703_773_fu_4153894_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_775_fu_4153906_p2() {
    add_ln703_775_fu_4153906_p2 = (!add_ln703_772_fu_4153888_p2.read().is_01() || !add_ln703_774_fu_4153900_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_772_fu_4153888_p2.read()) + sc_biguint<16>(add_ln703_774_fu_4153900_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_776_fu_4153912_p2() {
    add_ln703_776_fu_4153912_p2 = (!add_ln703_771_reg_4164208.read().is_01() || !add_ln703_775_fu_4153906_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_771_reg_4164208.read()) + sc_biguint<16>(add_ln703_775_fu_4153906_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_777_fu_4153917_p2() {
    add_ln703_777_fu_4153917_p2 = (!mult_679_V_reg_4161606.read().is_01() || !mult_619_V_reg_4161311.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_679_V_reg_4161606.read()) + sc_biguint<16>(mult_619_V_reg_4161311.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_778_fu_4153921_p2() {
    add_ln703_778_fu_4153921_p2 = (!mult_859_V_reg_4162477.read().is_01() || !mult_799_V_fu_4151895_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_859_V_reg_4162477.read()) + sc_bigint<16>(mult_799_V_fu_4151895_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_779_fu_4153926_p2() {
    add_ln703_779_fu_4153926_p2 = (!mult_739_V_reg_4161897.read().is_01() || !add_ln703_778_fu_4153921_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_739_V_reg_4161897.read()) + sc_biguint<16>(add_ln703_778_fu_4153921_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_780_fu_4153931_p2() {
    add_ln703_780_fu_4153931_p2 = (!add_ln703_777_fu_4153917_p2.read().is_01() || !add_ln703_779_fu_4153926_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_777_fu_4153917_p2.read()) + sc_biguint<16>(add_ln703_779_fu_4153926_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_781_fu_4153937_p2() {
    add_ln703_781_fu_4153937_p2 = (!mult_1039_V_reg_4163338.read().is_01() || !mult_979_V_reg_4163048.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1039_V_reg_4163338.read()) + sc_biguint<16>(mult_979_V_reg_4163048.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_782_fu_4153941_p2() {
    add_ln703_782_fu_4153941_p2 = (!mult_919_V_reg_4162763.read().is_01() || !add_ln703_781_fu_4153937_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_919_V_reg_4162763.read()) + sc_biguint<16>(add_ln703_781_fu_4153937_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_783_fu_4153946_p2() {
    add_ln703_783_fu_4153946_p2 = (!mult_1159_V_fu_4152405_p1.read().is_01() || !ap_const_lv16_36.is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1159_V_fu_4152405_p1.read()) + sc_biguint<16>(ap_const_lv16_36));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_784_fu_4153952_p2() {
    add_ln703_784_fu_4153952_p2 = (!mult_1099_V_fu_4152294_p1.read().is_01() || !add_ln703_783_fu_4153946_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1099_V_fu_4152294_p1.read()) + sc_biguint<16>(add_ln703_783_fu_4153946_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_785_fu_4153958_p2() {
    add_ln703_785_fu_4153958_p2 = (!add_ln703_782_fu_4153941_p2.read().is_01() || !add_ln703_784_fu_4153952_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_782_fu_4153941_p2.read()) + sc_biguint<16>(add_ln703_784_fu_4153952_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_786_fu_4157330_p2() {
    add_ln703_786_fu_4157330_p2 = (!add_ln703_780_reg_4164763.read().is_01() || !add_ln703_785_reg_4164768.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_780_reg_4164763.read()) + sc_biguint<16>(add_ln703_785_reg_4164768.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_788_fu_4150165_p2() {
    add_ln703_788_fu_4150165_p2 = (!mult_80_V_fu_4137246_p1.read().is_01() || !mult_20_V_reg_4158438.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_80_V_fu_4137246_p1.read()) + sc_biguint<16>(mult_20_V_reg_4158438.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_789_fu_4150170_p2() {
    add_ln703_789_fu_4150170_p2 = (!mult_260_V_fu_4137965_p1.read().is_01() || !mult_200_V_reg_4159224.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_260_V_fu_4137965_p1.read()) + sc_biguint<16>(mult_200_V_reg_4159224.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_790_fu_4150175_p2() {
    add_ln703_790_fu_4150175_p2 = (!mult_140_V_fu_4137438_p1.read().is_01() || !add_ln703_789_fu_4150170_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_140_V_fu_4137438_p1.read()) + sc_biguint<16>(add_ln703_789_fu_4150170_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_791_fu_4150181_p2() {
    add_ln703_791_fu_4150181_p2 = (!add_ln703_788_fu_4150165_p2.read().is_01() || !add_ln703_790_fu_4150175_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_788_fu_4150165_p2.read()) + sc_biguint<16>(add_ln703_790_fu_4150175_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_792_fu_4153964_p2() {
    add_ln703_792_fu_4153964_p2 = (!mult_380_V_reg_4160156.read().is_01() || !mult_320_V_fu_4151182_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_380_V_reg_4160156.read()) + sc_bigint<16>(mult_320_V_fu_4151182_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_793_fu_4153969_p2() {
    add_ln703_793_fu_4153969_p2 = (!mult_560_V_reg_4161016.read().is_01() || !mult_500_V_reg_4160726.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_560_V_reg_4161016.read()) + sc_biguint<16>(mult_500_V_reg_4160726.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_794_fu_4153973_p2() {
    add_ln703_794_fu_4153973_p2 = (!mult_440_V_reg_4160451.read().is_01() || !add_ln703_793_fu_4153969_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_440_V_reg_4160451.read()) + sc_biguint<16>(add_ln703_793_fu_4153969_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_795_fu_4153978_p2() {
    add_ln703_795_fu_4153978_p2 = (!add_ln703_792_fu_4153964_p2.read().is_01() || !add_ln703_794_fu_4153973_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_792_fu_4153964_p2.read()) + sc_biguint<16>(add_ln703_794_fu_4153973_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_796_fu_4153984_p2() {
    add_ln703_796_fu_4153984_p2 = (!add_ln703_791_reg_4164213.read().is_01() || !add_ln703_795_fu_4153978_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_791_reg_4164213.read()) + sc_biguint<16>(add_ln703_795_fu_4153978_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_797_fu_4153989_p2() {
    add_ln703_797_fu_4153989_p2 = (!mult_680_V_reg_4161611.read().is_01() || !mult_620_V_fu_4151569_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_680_V_reg_4161611.read()) + sc_bigint<16>(mult_620_V_fu_4151569_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_798_fu_4153994_p2() {
    add_ln703_798_fu_4153994_p2 = (!mult_860_V_fu_4151982_p1.read().is_01() || !mult_800_V_reg_4162192.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_860_V_fu_4151982_p1.read()) + sc_biguint<16>(mult_800_V_reg_4162192.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_799_fu_4153999_p2() {
    add_ln703_799_fu_4153999_p2 = (!mult_740_V_fu_4151755_p1.read().is_01() || !add_ln703_798_fu_4153994_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_740_V_fu_4151755_p1.read()) + sc_biguint<16>(add_ln703_798_fu_4153994_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_800_fu_4154005_p2() {
    add_ln703_800_fu_4154005_p2 = (!add_ln703_797_fu_4153989_p2.read().is_01() || !add_ln703_799_fu_4153999_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_797_fu_4153989_p2.read()) + sc_biguint<16>(add_ln703_799_fu_4153999_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_801_fu_4154011_p2() {
    add_ln703_801_fu_4154011_p2 = (!mult_1040_V_reg_4163343.read().is_01() || !mult_980_V_fu_4152132_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1040_V_reg_4163343.read()) + sc_bigint<16>(mult_980_V_fu_4152132_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_802_fu_4154016_p2() {
    add_ln703_802_fu_4154016_p2 = (!mult_920_V_reg_4162768.read().is_01() || !add_ln703_801_fu_4154011_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_920_V_reg_4162768.read()) + sc_biguint<16>(add_ln703_801_fu_4154011_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_803_fu_4154021_p2() {
    add_ln703_803_fu_4154021_p2 = (!sext_ln203_232_fu_4152408_p1.read().is_01() || !ap_const_lv15_7FC0.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_232_fu_4152408_p1.read()) + sc_bigint<15>(ap_const_lv15_7FC0));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_804_fu_4154031_p2() {
    add_ln703_804_fu_4154031_p2 = (!mult_1100_V_reg_4163643.read().is_01() || !sext_ln703_176_fu_4154027_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1100_V_reg_4163643.read()) + sc_bigint<16>(sext_ln703_176_fu_4154027_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_805_fu_4154036_p2() {
    add_ln703_805_fu_4154036_p2 = (!add_ln703_802_fu_4154016_p2.read().is_01() || !add_ln703_804_fu_4154031_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_802_fu_4154016_p2.read()) + sc_biguint<16>(add_ln703_804_fu_4154031_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_806_fu_4157339_p2() {
    add_ln703_806_fu_4157339_p2 = (!add_ln703_800_reg_4164778.read().is_01() || !add_ln703_805_reg_4164783.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_800_reg_4164778.read()) + sc_biguint<16>(add_ln703_805_reg_4164783.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_808_fu_4150187_p2() {
    add_ln703_808_fu_4150187_p2 = (!mult_81_V_reg_4158734.read().is_01() || !mult_21_V_reg_4158443.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_81_V_reg_4158734.read()) + sc_biguint<16>(mult_21_V_reg_4158443.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_809_fu_4150191_p2() {
    add_ln703_809_fu_4150191_p2 = (!mult_261_V_fu_4137968_p1.read().is_01() || !mult_201_V_reg_4159229.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_261_V_fu_4137968_p1.read()) + sc_biguint<16>(mult_201_V_reg_4159229.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_810_fu_4150196_p2() {
    add_ln703_810_fu_4150196_p2 = (!mult_141_V_fu_4137442_p1.read().is_01() || !add_ln703_809_fu_4150191_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_141_V_fu_4137442_p1.read()) + sc_biguint<16>(add_ln703_809_fu_4150191_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_811_fu_4150202_p2() {
    add_ln703_811_fu_4150202_p2 = (!add_ln703_808_fu_4150187_p2.read().is_01() || !add_ln703_810_fu_4150196_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_808_fu_4150187_p2.read()) + sc_biguint<16>(add_ln703_810_fu_4150196_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_812_fu_4154042_p2() {
    add_ln703_812_fu_4154042_p2 = (!mult_381_V_reg_4160161.read().is_01() || !mult_321_V_fu_4151185_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_381_V_reg_4160161.read()) + sc_bigint<16>(mult_321_V_fu_4151185_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_813_fu_4154047_p2() {
    add_ln703_813_fu_4154047_p2 = (!mult_561_V_reg_4161021.read().is_01() || !mult_501_V_fu_4151410_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_561_V_reg_4161021.read()) + sc_bigint<16>(mult_501_V_fu_4151410_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_814_fu_4154052_p2() {
    add_ln703_814_fu_4154052_p2 = (!mult_441_V_fu_4151329_p1.read().is_01() || !add_ln703_813_fu_4154047_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_441_V_fu_4151329_p1.read()) + sc_biguint<16>(add_ln703_813_fu_4154047_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_815_fu_4154058_p2() {
    add_ln703_815_fu_4154058_p2 = (!add_ln703_812_fu_4154042_p2.read().is_01() || !add_ln703_814_fu_4154052_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_812_fu_4154042_p2.read()) + sc_biguint<16>(add_ln703_814_fu_4154052_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_816_fu_4154064_p2() {
    add_ln703_816_fu_4154064_p2 = (!add_ln703_811_reg_4164218.read().is_01() || !add_ln703_815_fu_4154058_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_811_reg_4164218.read()) + sc_biguint<16>(add_ln703_815_fu_4154058_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_817_fu_4154069_p2() {
    add_ln703_817_fu_4154069_p2 = (!mult_681_V_reg_4161616.read().is_01() || !mult_621_V_fu_4151572_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_681_V_reg_4161616.read()) + sc_bigint<16>(mult_621_V_fu_4151572_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_818_fu_4154074_p2() {
    add_ln703_818_fu_4154074_p2 = (!mult_861_V_reg_4162487.read().is_01() || !mult_801_V_reg_4162197.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_861_V_reg_4162487.read()) + sc_biguint<16>(mult_801_V_reg_4162197.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_819_fu_4154078_p2() {
    add_ln703_819_fu_4154078_p2 = (!mult_741_V_reg_4161907.read().is_01() || !add_ln703_818_fu_4154074_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_741_V_reg_4161907.read()) + sc_biguint<16>(add_ln703_818_fu_4154074_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_820_fu_4154083_p2() {
    add_ln703_820_fu_4154083_p2 = (!add_ln703_817_fu_4154069_p2.read().is_01() || !add_ln703_819_fu_4154078_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_817_fu_4154069_p2.read()) + sc_biguint<16>(add_ln703_819_fu_4154078_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_821_fu_4154089_p2() {
    add_ln703_821_fu_4154089_p2 = (!mult_1041_V_fu_4152222_p1.read().is_01() || !mult_981_V_fu_4152135_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1041_V_fu_4152222_p1.read()) + sc_bigint<16>(mult_981_V_fu_4152135_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_822_fu_4154095_p2() {
    add_ln703_822_fu_4154095_p2 = (!mult_921_V_fu_4152060_p1.read().is_01() || !add_ln703_821_fu_4154089_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_921_V_fu_4152060_p1.read()) + sc_biguint<16>(add_ln703_821_fu_4154089_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_823_fu_4154101_p2() {
    add_ln703_823_fu_4154101_p2 = (!mult_1161_V_fu_4152411_p1.read().is_01() || !ap_const_lv16_FFC5.is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1161_V_fu_4152411_p1.read()) + sc_bigint<16>(ap_const_lv16_FFC5));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_824_fu_4154107_p2() {
    add_ln703_824_fu_4154107_p2 = (!mult_1101_V_fu_4152297_p1.read().is_01() || !add_ln703_823_fu_4154101_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1101_V_fu_4152297_p1.read()) + sc_biguint<16>(add_ln703_823_fu_4154101_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_825_fu_4154113_p2() {
    add_ln703_825_fu_4154113_p2 = (!add_ln703_822_fu_4154095_p2.read().is_01() || !add_ln703_824_fu_4154107_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_822_fu_4154095_p2.read()) + sc_biguint<16>(add_ln703_824_fu_4154107_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_826_fu_4157348_p2() {
    add_ln703_826_fu_4157348_p2 = (!add_ln703_820_reg_4164793.read().is_01() || !add_ln703_825_reg_4164798.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_820_reg_4164793.read()) + sc_biguint<16>(add_ln703_825_reg_4164798.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_828_fu_4150208_p2() {
    add_ln703_828_fu_4150208_p2 = (!mult_82_V_fu_4137249_p1.read().is_01() || !mult_22_V_fu_4137146_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_82_V_fu_4137249_p1.read()) + sc_bigint<16>(mult_22_V_fu_4137146_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_829_fu_4150214_p2() {
    add_ln703_829_fu_4150214_p2 = (!mult_262_V_fu_4137971_p1.read().is_01() || !mult_202_V_fu_4137878_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_262_V_fu_4137971_p1.read()) + sc_bigint<16>(mult_202_V_fu_4137878_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_830_fu_4150220_p2() {
    add_ln703_830_fu_4150220_p2 = (!mult_142_V_fu_4137472_p1.read().is_01() || !add_ln703_829_fu_4150214_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_142_V_fu_4137472_p1.read()) + sc_biguint<16>(add_ln703_829_fu_4150214_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_831_fu_4150226_p2() {
    add_ln703_831_fu_4150226_p2 = (!add_ln703_828_fu_4150208_p2.read().is_01() || !add_ln703_830_fu_4150220_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_828_fu_4150208_p2.read()) + sc_biguint<16>(add_ln703_830_fu_4150220_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_832_fu_4154119_p2() {
    add_ln703_832_fu_4154119_p2 = (!mult_382_V_reg_4160166.read().is_01() || !mult_322_V_reg_4159896.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_382_V_reg_4160166.read()) + sc_biguint<16>(mult_322_V_reg_4159896.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_833_fu_4154123_p2() {
    add_ln703_833_fu_4154123_p2 = (!mult_562_V_reg_4161026.read().is_01() || !mult_502_V_fu_4151413_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_562_V_reg_4161026.read()) + sc_bigint<16>(mult_502_V_fu_4151413_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_834_fu_4154128_p2() {
    add_ln703_834_fu_4154128_p2 = (!mult_442_V_fu_4151332_p1.read().is_01() || !add_ln703_833_fu_4154123_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_442_V_fu_4151332_p1.read()) + sc_biguint<16>(add_ln703_833_fu_4154123_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_835_fu_4154134_p2() {
    add_ln703_835_fu_4154134_p2 = (!add_ln703_832_fu_4154119_p2.read().is_01() || !add_ln703_834_fu_4154128_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_832_fu_4154119_p2.read()) + sc_biguint<16>(add_ln703_834_fu_4154128_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_836_fu_4154140_p2() {
    add_ln703_836_fu_4154140_p2 = (!add_ln703_831_reg_4164223.read().is_01() || !add_ln703_835_fu_4154134_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_831_reg_4164223.read()) + sc_biguint<16>(add_ln703_835_fu_4154134_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_837_fu_4154145_p2() {
    add_ln703_837_fu_4154145_p2 = (!mult_682_V_fu_4151671_p1.read().is_01() || !mult_622_V_fu_4151575_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_682_V_fu_4151671_p1.read()) + sc_bigint<16>(mult_622_V_fu_4151575_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_838_fu_4154151_p2() {
    add_ln703_838_fu_4154151_p2 = (!mult_922_V_reg_4162778.read().is_01() || !mult_802_V_fu_4151898_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_922_V_reg_4162778.read()) + sc_bigint<16>(mult_802_V_fu_4151898_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_839_fu_4154156_p2() {
    add_ln703_839_fu_4154156_p2 = (!mult_742_V_reg_4161912.read().is_01() || !add_ln703_838_fu_4154151_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_742_V_reg_4161912.read()) + sc_biguint<16>(add_ln703_838_fu_4154151_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_840_fu_4154161_p2() {
    add_ln703_840_fu_4154161_p2 = (!add_ln703_837_fu_4154145_p2.read().is_01() || !add_ln703_839_fu_4154156_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_837_fu_4154145_p2.read()) + sc_biguint<16>(add_ln703_839_fu_4154156_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_841_fu_4154167_p2() {
    add_ln703_841_fu_4154167_p2 = (!mult_1102_V_fu_4152300_p1.read().is_01() || !mult_1042_V_fu_4152225_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1102_V_fu_4152300_p1.read()) + sc_bigint<16>(mult_1042_V_fu_4152225_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_842_fu_4154173_p2() {
    add_ln703_842_fu_4154173_p2 = (!mult_982_V_fu_4152138_p1.read().is_01() || !add_ln703_841_fu_4154167_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_982_V_fu_4152138_p1.read()) + sc_biguint<16>(add_ln703_841_fu_4154167_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_843_fu_4150232_p2() {
    add_ln703_843_fu_4150232_p2 = (!sext_ln203_23_fu_4145383_p1.read().is_01() || !ap_const_lv7_2E.is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln203_23_fu_4145383_p1.read()) + sc_biguint<7>(ap_const_lv7_2E));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_844_fu_4154182_p2() {
    add_ln703_844_fu_4154182_p2 = (!sext_ln203_233_fu_4152414_p1.read().is_01() || !zext_ln703_fu_4154179_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_233_fu_4152414_p1.read()) + sc_biguint<15>(zext_ln703_fu_4154179_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_845_fu_4154192_p2() {
    add_ln703_845_fu_4154192_p2 = (!add_ln703_842_fu_4154173_p2.read().is_01() || !sext_ln703_177_fu_4154188_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_842_fu_4154173_p2.read()) + sc_bigint<16>(sext_ln703_177_fu_4154188_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_846_fu_4157357_p2() {
    add_ln703_846_fu_4157357_p2 = (!add_ln703_840_reg_4164808.read().is_01() || !add_ln703_845_reg_4164813.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_840_reg_4164808.read()) + sc_biguint<16>(add_ln703_845_reg_4164813.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_848_fu_4150238_p2() {
    add_ln703_848_fu_4150238_p2 = (!mult_83_V_fu_4137252_p1.read().is_01() || !mult_23_V_fu_4137149_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_83_V_fu_4137252_p1.read()) + sc_bigint<16>(mult_23_V_fu_4137149_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_849_fu_4150244_p2() {
    add_ln703_849_fu_4150244_p2 = (!mult_263_V_reg_4159530.read().is_01() || !mult_203_V_fu_4137881_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_263_V_reg_4159530.read()) + sc_bigint<16>(mult_203_V_fu_4137881_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_850_fu_4150249_p2() {
    add_ln703_850_fu_4150249_p2 = (!mult_143_V_fu_4137476_p1.read().is_01() || !add_ln703_849_fu_4150244_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_143_V_fu_4137476_p1.read()) + sc_biguint<16>(add_ln703_849_fu_4150244_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_851_fu_4150255_p2() {
    add_ln703_851_fu_4150255_p2 = (!add_ln703_848_fu_4150238_p2.read().is_01() || !add_ln703_850_fu_4150249_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_848_fu_4150238_p2.read()) + sc_biguint<16>(add_ln703_850_fu_4150249_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_852_fu_4154198_p2() {
    add_ln703_852_fu_4154198_p2 = (!mult_383_V_fu_4151248_p1.read().is_01() || !mult_323_V_fu_4151188_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_383_V_fu_4151248_p1.read()) + sc_bigint<16>(mult_323_V_fu_4151188_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_853_fu_4154204_p2() {
    add_ln703_853_fu_4154204_p2 = (!mult_563_V_reg_4161031.read().is_01() || !mult_503_V_fu_4151416_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_563_V_reg_4161031.read()) + sc_bigint<16>(mult_503_V_fu_4151416_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_854_fu_4154209_p2() {
    add_ln703_854_fu_4154209_p2 = (!mult_443_V_reg_4160466.read().is_01() || !add_ln703_853_fu_4154204_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_443_V_reg_4160466.read()) + sc_biguint<16>(add_ln703_853_fu_4154204_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_855_fu_4154214_p2() {
    add_ln703_855_fu_4154214_p2 = (!add_ln703_852_fu_4154198_p2.read().is_01() || !add_ln703_854_fu_4154209_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_852_fu_4154198_p2.read()) + sc_biguint<16>(add_ln703_854_fu_4154209_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_856_fu_4154220_p2() {
    add_ln703_856_fu_4154220_p2 = (!add_ln703_851_reg_4164233.read().is_01() || !add_ln703_855_fu_4154214_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_851_reg_4164233.read()) + sc_biguint<16>(add_ln703_855_fu_4154214_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_857_fu_4154225_p2() {
    add_ln703_857_fu_4154225_p2 = (!mult_683_V_reg_4161626.read().is_01() || !mult_623_V_fu_4151578_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_683_V_reg_4161626.read()) + sc_bigint<16>(mult_623_V_fu_4151578_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_858_fu_4154230_p2() {
    add_ln703_858_fu_4154230_p2 = (!mult_863_V_fu_4151985_p1.read().is_01() || !mult_803_V_reg_4162207.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_863_V_fu_4151985_p1.read()) + sc_biguint<16>(mult_803_V_reg_4162207.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_859_fu_4154235_p2() {
    add_ln703_859_fu_4154235_p2 = (!mult_743_V_reg_4161917.read().is_01() || !add_ln703_858_fu_4154230_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_743_V_reg_4161917.read()) + sc_biguint<16>(add_ln703_858_fu_4154230_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_860_fu_4154240_p2() {
    add_ln703_860_fu_4154240_p2 = (!add_ln703_857_fu_4154225_p2.read().is_01() || !add_ln703_859_fu_4154235_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_857_fu_4154225_p2.read()) + sc_biguint<16>(add_ln703_859_fu_4154235_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_861_fu_4154246_p2() {
    add_ln703_861_fu_4154246_p2 = (!mult_1043_V_reg_4163358.read().is_01() || !mult_983_V_fu_4152141_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1043_V_reg_4163358.read()) + sc_bigint<16>(mult_983_V_fu_4152141_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_862_fu_4154251_p2() {
    add_ln703_862_fu_4154251_p2 = (!data_15_V_read_5_reg_4158150_pp0_iter1_reg.read().is_01() || !add_ln703_861_fu_4154246_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(data_15_V_read_5_reg_4158150_pp0_iter1_reg.read()) + sc_biguint<16>(add_ln703_861_fu_4154246_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_863_fu_4154256_p2() {
    add_ln703_863_fu_4154256_p2 = (!sext_ln203_234_fu_4152417_p1.read().is_01() || !ap_const_lv15_28.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_234_fu_4152417_p1.read()) + sc_biguint<15>(ap_const_lv15_28));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_864_fu_4154266_p2() {
    add_ln703_864_fu_4154266_p2 = (!mult_1103_V_fu_4152303_p1.read().is_01() || !sext_ln703_178_fu_4154262_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1103_V_fu_4152303_p1.read()) + sc_bigint<16>(sext_ln703_178_fu_4154262_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_865_fu_4154272_p2() {
    add_ln703_865_fu_4154272_p2 = (!add_ln703_862_fu_4154251_p2.read().is_01() || !add_ln703_864_fu_4154266_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_862_fu_4154251_p2.read()) + sc_biguint<16>(add_ln703_864_fu_4154266_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_866_fu_4157366_p2() {
    add_ln703_866_fu_4157366_p2 = (!add_ln703_860_reg_4164823.read().is_01() || !add_ln703_865_reg_4164828.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_860_reg_4164823.read()) + sc_biguint<16>(add_ln703_865_reg_4164828.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_868_fu_4150261_p2() {
    add_ln703_868_fu_4150261_p2 = (!mult_84_V_fu_4137255_p1.read().is_01() || !mult_24_V_reg_4158458.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_84_V_fu_4137255_p1.read()) + sc_biguint<16>(mult_24_V_reg_4158458.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_869_fu_4150266_p2() {
    add_ln703_869_fu_4150266_p2 = (!mult_264_V_reg_4159535.read().is_01() || !mult_204_V_reg_4159244.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_264_V_reg_4159535.read()) + sc_biguint<16>(mult_204_V_reg_4159244.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_870_fu_4150270_p2() {
    add_ln703_870_fu_4150270_p2 = (!mult_144_V_reg_4159019.read().is_01() || !add_ln703_869_fu_4150266_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_144_V_reg_4159019.read()) + sc_biguint<16>(add_ln703_869_fu_4150266_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_871_fu_4150275_p2() {
    add_ln703_871_fu_4150275_p2 = (!add_ln703_868_fu_4150261_p2.read().is_01() || !add_ln703_870_fu_4150270_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_868_fu_4150261_p2.read()) + sc_biguint<16>(add_ln703_870_fu_4150270_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_872_fu_4154278_p2() {
    add_ln703_872_fu_4154278_p2 = (!mult_384_V_reg_4160176.read().is_01() || !mult_324_V_reg_4159906.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_384_V_reg_4160176.read()) + sc_biguint<16>(mult_324_V_reg_4159906.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_873_fu_4154282_p2() {
    add_ln703_873_fu_4154282_p2 = (!mult_564_V_reg_4161036.read().is_01() || !mult_504_V_fu_4151419_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_564_V_reg_4161036.read()) + sc_bigint<16>(mult_504_V_fu_4151419_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_874_fu_4154287_p2() {
    add_ln703_874_fu_4154287_p2 = (!mult_444_V_reg_4160471.read().is_01() || !add_ln703_873_fu_4154282_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_444_V_reg_4160471.read()) + sc_biguint<16>(add_ln703_873_fu_4154282_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_875_fu_4154292_p2() {
    add_ln703_875_fu_4154292_p2 = (!add_ln703_872_fu_4154278_p2.read().is_01() || !add_ln703_874_fu_4154287_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_872_fu_4154278_p2.read()) + sc_biguint<16>(add_ln703_874_fu_4154287_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_876_fu_4154298_p2() {
    add_ln703_876_fu_4154298_p2 = (!add_ln703_871_reg_4164238.read().is_01() || !add_ln703_875_fu_4154292_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_871_reg_4164238.read()) + sc_biguint<16>(add_ln703_875_fu_4154292_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_877_fu_4154303_p2() {
    add_ln703_877_fu_4154303_p2 = (!mult_684_V_reg_4161631.read().is_01() || !mult_624_V_reg_4161336.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_684_V_reg_4161631.read()) + sc_biguint<16>(mult_624_V_reg_4161336.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_878_fu_4154307_p2() {
    add_ln703_878_fu_4154307_p2 = (!mult_864_V_reg_4162497.read().is_01() || !mult_804_V_reg_4162212.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_864_V_reg_4162497.read()) + sc_biguint<16>(mult_804_V_reg_4162212.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_879_fu_4154311_p2() {
    add_ln703_879_fu_4154311_p2 = (!mult_744_V_reg_4161922.read().is_01() || !add_ln703_878_fu_4154307_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_744_V_reg_4161922.read()) + sc_biguint<16>(add_ln703_878_fu_4154307_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_880_fu_4154316_p2() {
    add_ln703_880_fu_4154316_p2 = (!add_ln703_877_fu_4154303_p2.read().is_01() || !add_ln703_879_fu_4154311_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_877_fu_4154303_p2.read()) + sc_biguint<16>(add_ln703_879_fu_4154311_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_881_fu_4154322_p2() {
    add_ln703_881_fu_4154322_p2 = (!mult_1044_V_reg_4163363.read().is_01() || !mult_984_V_reg_4163073.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1044_V_reg_4163363.read()) + sc_biguint<16>(mult_984_V_reg_4163073.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_882_fu_4154326_p2() {
    add_ln703_882_fu_4154326_p2 = (!mult_924_V_fu_4152063_p1.read().is_01() || !add_ln703_881_fu_4154322_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_924_V_fu_4152063_p1.read()) + sc_biguint<16>(add_ln703_881_fu_4154322_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_883_fu_4154332_p2() {
    add_ln703_883_fu_4154332_p2 = (!mult_1164_V_reg_4163953.read().is_01() || !ap_const_lv16_6C.is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1164_V_reg_4163953.read()) + sc_biguint<16>(ap_const_lv16_6C));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_884_fu_4154337_p2() {
    add_ln703_884_fu_4154337_p2 = (!mult_1104_V_fu_4152306_p1.read().is_01() || !add_ln703_883_fu_4154332_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1104_V_fu_4152306_p1.read()) + sc_biguint<16>(add_ln703_883_fu_4154332_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_885_fu_4154343_p2() {
    add_ln703_885_fu_4154343_p2 = (!add_ln703_882_fu_4154326_p2.read().is_01() || !add_ln703_884_fu_4154337_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_882_fu_4154326_p2.read()) + sc_biguint<16>(add_ln703_884_fu_4154337_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_886_fu_4157375_p2() {
    add_ln703_886_fu_4157375_p2 = (!add_ln703_880_reg_4164838.read().is_01() || !add_ln703_885_reg_4164843.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_880_reg_4164838.read()) + sc_biguint<16>(add_ln703_885_reg_4164843.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_888_fu_4150281_p2() {
    add_ln703_888_fu_4150281_p2 = (!mult_85_V_fu_4137258_p1.read().is_01() || !mult_25_V_reg_4158463.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_85_V_fu_4137258_p1.read()) + sc_biguint<16>(mult_25_V_reg_4158463.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_889_fu_4150286_p2() {
    add_ln703_889_fu_4150286_p2 = (!mult_265_V_fu_4137974_p1.read().is_01() || !mult_205_V_fu_4137884_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_265_V_fu_4137974_p1.read()) + sc_bigint<16>(mult_205_V_fu_4137884_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_890_fu_4150292_p2() {
    add_ln703_890_fu_4150292_p2 = (!mult_145_V_fu_4137522_p1.read().is_01() || !add_ln703_889_fu_4150286_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_145_V_fu_4137522_p1.read()) + sc_biguint<16>(add_ln703_889_fu_4150286_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_891_fu_4150298_p2() {
    add_ln703_891_fu_4150298_p2 = (!add_ln703_888_fu_4150281_p2.read().is_01() || !add_ln703_890_fu_4150292_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_888_fu_4150281_p2.read()) + sc_biguint<16>(add_ln703_890_fu_4150292_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_892_fu_4154349_p2() {
    add_ln703_892_fu_4154349_p2 = (!mult_385_V_fu_4151251_p1.read().is_01() || !mult_325_V_reg_4159911.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_385_V_fu_4151251_p1.read()) + sc_biguint<16>(mult_325_V_reg_4159911.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_893_fu_4154354_p2() {
    add_ln703_893_fu_4154354_p2 = (!mult_565_V_fu_4151518_p1.read().is_01() || !mult_505_V_fu_4151422_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_565_V_fu_4151518_p1.read()) + sc_bigint<16>(mult_505_V_fu_4151422_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_894_fu_4154360_p2() {
    add_ln703_894_fu_4154360_p2 = (!mult_445_V_fu_4151335_p1.read().is_01() || !add_ln703_893_fu_4154354_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_445_V_fu_4151335_p1.read()) + sc_biguint<16>(add_ln703_893_fu_4154354_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_895_fu_4154366_p2() {
    add_ln703_895_fu_4154366_p2 = (!add_ln703_892_fu_4154349_p2.read().is_01() || !add_ln703_894_fu_4154360_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_892_fu_4154349_p2.read()) + sc_biguint<16>(add_ln703_894_fu_4154360_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_896_fu_4154372_p2() {
    add_ln703_896_fu_4154372_p2 = (!add_ln703_891_reg_4164243.read().is_01() || !add_ln703_895_fu_4154366_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_891_reg_4164243.read()) + sc_biguint<16>(add_ln703_895_fu_4154366_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_897_fu_4154377_p2() {
    add_ln703_897_fu_4154377_p2 = (!mult_685_V_fu_4151674_p1.read().is_01() || !mult_625_V_fu_4151581_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_685_V_fu_4151674_p1.read()) + sc_bigint<16>(mult_625_V_fu_4151581_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_898_fu_4154383_p2() {
    add_ln703_898_fu_4154383_p2 = (!mult_865_V_reg_4162502.read().is_01() || !mult_805_V_reg_4162217.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_865_V_reg_4162502.read()) + sc_biguint<16>(mult_805_V_reg_4162217.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_899_fu_4154387_p2() {
    add_ln703_899_fu_4154387_p2 = (!mult_745_V_reg_4161927.read().is_01() || !add_ln703_898_fu_4154383_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_745_V_reg_4161927.read()) + sc_biguint<16>(add_ln703_898_fu_4154383_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_900_fu_4154392_p2() {
    add_ln703_900_fu_4154392_p2 = (!add_ln703_897_fu_4154377_p2.read().is_01() || !add_ln703_899_fu_4154387_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_897_fu_4154377_p2.read()) + sc_biguint<16>(add_ln703_899_fu_4154387_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_901_fu_4154398_p2() {
    add_ln703_901_fu_4154398_p2 = (!mult_1045_V_fu_4152228_p1.read().is_01() || !mult_985_V_reg_4163078.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1045_V_fu_4152228_p1.read()) + sc_biguint<16>(mult_985_V_reg_4163078.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_902_fu_4154403_p2() {
    add_ln703_902_fu_4154403_p2 = (!mult_925_V_fu_4152066_p1.read().is_01() || !add_ln703_901_fu_4154398_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_925_V_fu_4152066_p1.read()) + sc_biguint<16>(add_ln703_901_fu_4154398_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_903_fu_4154409_p2() {
    add_ln703_903_fu_4154409_p2 = (!sext_ln203_235_fu_4152420_p1.read().is_01() || !ap_const_lv15_7FEB.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_235_fu_4152420_p1.read()) + sc_bigint<15>(ap_const_lv15_7FEB));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_904_fu_4154419_p2() {
    add_ln703_904_fu_4154419_p2 = (!mult_1105_V_fu_4152309_p1.read().is_01() || !sext_ln703_179_fu_4154415_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1105_V_fu_4152309_p1.read()) + sc_bigint<16>(sext_ln703_179_fu_4154415_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_905_fu_4154425_p2() {
    add_ln703_905_fu_4154425_p2 = (!add_ln703_902_fu_4154403_p2.read().is_01() || !add_ln703_904_fu_4154419_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_902_fu_4154403_p2.read()) + sc_biguint<16>(add_ln703_904_fu_4154419_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_906_fu_4157384_p2() {
    add_ln703_906_fu_4157384_p2 = (!add_ln703_900_reg_4164853.read().is_01() || !add_ln703_905_reg_4164858.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_900_reg_4164853.read()) + sc_biguint<16>(add_ln703_905_reg_4164858.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_908_fu_4150304_p2() {
    add_ln703_908_fu_4150304_p2 = (!mult_86_V_reg_4158759.read().is_01() || !mult_26_V_fu_4137152_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_86_V_reg_4158759.read()) + sc_bigint<16>(mult_26_V_fu_4137152_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_909_fu_4150309_p2() {
    add_ln703_909_fu_4150309_p2 = (!mult_266_V_fu_4137977_p1.read().is_01() || !mult_206_V_reg_4159254.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_266_V_fu_4137977_p1.read()) + sc_biguint<16>(mult_206_V_reg_4159254.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_910_fu_4150314_p2() {
    add_ln703_910_fu_4150314_p2 = (!mult_146_V_reg_4159024.read().is_01() || !add_ln703_909_fu_4150309_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_146_V_reg_4159024.read()) + sc_biguint<16>(add_ln703_909_fu_4150309_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_911_fu_4150319_p2() {
    add_ln703_911_fu_4150319_p2 = (!add_ln703_908_fu_4150304_p2.read().is_01() || !add_ln703_910_fu_4150314_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_908_fu_4150304_p2.read()) + sc_biguint<16>(add_ln703_910_fu_4150314_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_912_fu_4154431_p2() {
    add_ln703_912_fu_4154431_p2 = (!mult_386_V_reg_4160186.read().is_01() || !mult_326_V_reg_4159916.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_386_V_reg_4160186.read()) + sc_biguint<16>(mult_326_V_reg_4159916.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_913_fu_4154435_p2() {
    add_ln703_913_fu_4154435_p2 = (!mult_566_V_reg_4161046.read().is_01() || !mult_506_V_fu_4151425_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_566_V_reg_4161046.read()) + sc_bigint<16>(mult_506_V_fu_4151425_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_914_fu_4154440_p2() {
    add_ln703_914_fu_4154440_p2 = (!mult_446_V_fu_4151338_p1.read().is_01() || !add_ln703_913_fu_4154435_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_446_V_fu_4151338_p1.read()) + sc_biguint<16>(add_ln703_913_fu_4154435_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_915_fu_4154446_p2() {
    add_ln703_915_fu_4154446_p2 = (!add_ln703_912_fu_4154431_p2.read().is_01() || !add_ln703_914_fu_4154440_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_912_fu_4154431_p2.read()) + sc_biguint<16>(add_ln703_914_fu_4154440_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_916_fu_4154452_p2() {
    add_ln703_916_fu_4154452_p2 = (!add_ln703_911_reg_4164248.read().is_01() || !add_ln703_915_fu_4154446_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_911_reg_4164248.read()) + sc_biguint<16>(add_ln703_915_fu_4154446_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_917_fu_4154457_p2() {
    add_ln703_917_fu_4154457_p2 = (!mult_686_V_fu_4151677_p1.read().is_01() || !mult_626_V_fu_4151584_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_686_V_fu_4151677_p1.read()) + sc_bigint<16>(mult_626_V_fu_4151584_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_918_fu_4154463_p2() {
    add_ln703_918_fu_4154463_p2 = (!mult_866_V_fu_4151988_p1.read().is_01() || !mult_806_V_reg_4162222.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_866_V_fu_4151988_p1.read()) + sc_biguint<16>(mult_806_V_reg_4162222.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_919_fu_4154468_p2() {
    add_ln703_919_fu_4154468_p2 = (!mult_746_V_reg_4161932.read().is_01() || !add_ln703_918_fu_4154463_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_746_V_reg_4161932.read()) + sc_biguint<16>(add_ln703_918_fu_4154463_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_920_fu_4154473_p2() {
    add_ln703_920_fu_4154473_p2 = (!add_ln703_917_fu_4154457_p2.read().is_01() || !add_ln703_919_fu_4154468_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_917_fu_4154457_p2.read()) + sc_biguint<16>(add_ln703_919_fu_4154468_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_921_fu_4154479_p2() {
    add_ln703_921_fu_4154479_p2 = (!mult_1046_V_reg_4163373.read().is_01() || !mult_986_V_fu_4152144_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1046_V_reg_4163373.read()) + sc_bigint<16>(mult_986_V_fu_4152144_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_922_fu_4154484_p2() {
    add_ln703_922_fu_4154484_p2 = (!mult_926_V_fu_4152069_p1.read().is_01() || !add_ln703_921_fu_4154479_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_926_V_fu_4152069_p1.read()) + sc_biguint<16>(add_ln703_921_fu_4154479_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_923_fu_4154490_p2() {
    add_ln703_923_fu_4154490_p2 = (!mult_1166_V_fu_4152423_p1.read().is_01() || !ap_const_lv16_FFC2.is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1166_V_fu_4152423_p1.read()) + sc_bigint<16>(ap_const_lv16_FFC2));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_924_fu_4154496_p2() {
    add_ln703_924_fu_4154496_p2 = (!mult_1106_V_fu_4152312_p1.read().is_01() || !add_ln703_923_fu_4154490_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1106_V_fu_4152312_p1.read()) + sc_biguint<16>(add_ln703_923_fu_4154490_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_925_fu_4154502_p2() {
    add_ln703_925_fu_4154502_p2 = (!add_ln703_922_fu_4154484_p2.read().is_01() || !add_ln703_924_fu_4154496_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_922_fu_4154484_p2.read()) + sc_biguint<16>(add_ln703_924_fu_4154496_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_926_fu_4157393_p2() {
    add_ln703_926_fu_4157393_p2 = (!add_ln703_920_reg_4164868.read().is_01() || !add_ln703_925_reg_4164873.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_920_reg_4164868.read()) + sc_biguint<16>(add_ln703_925_reg_4164873.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_928_fu_4150325_p2() {
    add_ln703_928_fu_4150325_p2 = (!mult_87_V_reg_4158764.read().is_01() || !mult_27_V_fu_4137155_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_87_V_reg_4158764.read()) + sc_bigint<16>(mult_27_V_fu_4137155_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_929_fu_4150330_p2() {
    add_ln703_929_fu_4150330_p2 = (!mult_267_V_fu_4137980_p1.read().is_01() || !mult_207_V_reg_4159259.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_267_V_fu_4137980_p1.read()) + sc_biguint<16>(mult_207_V_reg_4159259.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_930_fu_4150335_p2() {
    add_ln703_930_fu_4150335_p2 = (!mult_147_V_fu_4137542_p1.read().is_01() || !add_ln703_929_fu_4150330_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_147_V_fu_4137542_p1.read()) + sc_biguint<16>(add_ln703_929_fu_4150330_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_931_fu_4150341_p2() {
    add_ln703_931_fu_4150341_p2 = (!add_ln703_928_fu_4150325_p2.read().is_01() || !add_ln703_930_fu_4150335_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_928_fu_4150325_p2.read()) + sc_biguint<16>(add_ln703_930_fu_4150335_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_932_fu_4154508_p2() {
    add_ln703_932_fu_4154508_p2 = (!mult_387_V_reg_4160191.read().is_01() || !mult_327_V_reg_4159921.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_387_V_reg_4160191.read()) + sc_biguint<16>(mult_327_V_reg_4159921.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_933_fu_4154512_p2() {
    add_ln703_933_fu_4154512_p2 = (!mult_567_V_reg_4161051.read().is_01() || !mult_507_V_fu_4151428_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_567_V_reg_4161051.read()) + sc_bigint<16>(mult_507_V_fu_4151428_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_934_fu_4154517_p2() {
    add_ln703_934_fu_4154517_p2 = (!mult_447_V_fu_4151341_p1.read().is_01() || !add_ln703_933_fu_4154512_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_447_V_fu_4151341_p1.read()) + sc_biguint<16>(add_ln703_933_fu_4154512_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_935_fu_4154523_p2() {
    add_ln703_935_fu_4154523_p2 = (!add_ln703_932_fu_4154508_p2.read().is_01() || !add_ln703_934_fu_4154517_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_932_fu_4154508_p2.read()) + sc_biguint<16>(add_ln703_934_fu_4154517_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_936_fu_4154529_p2() {
    add_ln703_936_fu_4154529_p2 = (!add_ln703_931_reg_4164253.read().is_01() || !add_ln703_935_fu_4154523_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_931_reg_4164253.read()) + sc_biguint<16>(add_ln703_935_fu_4154523_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_937_fu_4154534_p2() {
    add_ln703_937_fu_4154534_p2 = (!mult_687_V_reg_4161646.read().is_01() || !mult_627_V_reg_4161351.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_687_V_reg_4161646.read()) + sc_biguint<16>(mult_627_V_reg_4161351.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_938_fu_4154538_p2() {
    add_ln703_938_fu_4154538_p2 = (!mult_927_V_reg_4162798.read().is_01() || !mult_867_V_reg_4162512.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_927_V_reg_4162798.read()) + sc_biguint<16>(mult_867_V_reg_4162512.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_939_fu_4154542_p2() {
    add_ln703_939_fu_4154542_p2 = (!mult_747_V_reg_4161937.read().is_01() || !add_ln703_938_fu_4154538_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_747_V_reg_4161937.read()) + sc_biguint<16>(add_ln703_938_fu_4154538_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_940_fu_4154547_p2() {
    add_ln703_940_fu_4154547_p2 = (!add_ln703_937_fu_4154534_p2.read().is_01() || !add_ln703_939_fu_4154542_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_937_fu_4154534_p2.read()) + sc_biguint<16>(add_ln703_939_fu_4154542_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_941_fu_4154553_p2() {
    add_ln703_941_fu_4154553_p2 = (!mult_1107_V_fu_4152315_p1.read().is_01() || !mult_1047_V_reg_4163378.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1107_V_fu_4152315_p1.read()) + sc_biguint<16>(mult_1047_V_reg_4163378.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_942_fu_4154558_p2() {
    add_ln703_942_fu_4154558_p2 = (!mult_987_V_reg_4163088.read().is_01() || !add_ln703_941_fu_4154553_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_987_V_reg_4163088.read()) + sc_biguint<16>(add_ln703_941_fu_4154553_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_943_fu_4154563_p2() {
    add_ln703_943_fu_4154563_p2 = (!sext_ln203_22_fu_4151901_p1.read().is_01() || !ap_const_lv10_49.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_22_fu_4151901_p1.read()) + sc_biguint<10>(ap_const_lv10_49));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_944_fu_4154573_p2() {
    add_ln703_944_fu_4154573_p2 = (!mult_1167_V_reg_4163968.read().is_01() || !sext_ln703_74_fu_4154569_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1167_V_reg_4163968.read()) + sc_bigint<16>(sext_ln703_74_fu_4154569_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_945_fu_4154578_p2() {
    add_ln703_945_fu_4154578_p2 = (!add_ln703_942_fu_4154558_p2.read().is_01() || !add_ln703_944_fu_4154573_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_942_fu_4154558_p2.read()) + sc_biguint<16>(add_ln703_944_fu_4154573_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_946_fu_4157402_p2() {
    add_ln703_946_fu_4157402_p2 = (!add_ln703_940_reg_4164883.read().is_01() || !add_ln703_945_reg_4164888.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_940_reg_4164883.read()) + sc_biguint<16>(add_ln703_945_reg_4164888.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_948_fu_4150347_p2() {
    add_ln703_948_fu_4150347_p2 = (!mult_88_V_reg_4158769.read().is_01() || !mult_28_V_reg_4158478.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_88_V_reg_4158769.read()) + sc_biguint<16>(mult_28_V_reg_4158478.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_949_fu_4150351_p2() {
    add_ln703_949_fu_4150351_p2 = (!sext_ln203_170_fu_4137983_p1.read().is_01() || !sext_ln203_162_fu_4137887_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_170_fu_4137983_p1.read()) + sc_bigint<15>(sext_ln203_162_fu_4137887_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_950_fu_4150361_p2() {
    add_ln703_950_fu_4150361_p2 = (!mult_148_V_fu_4137546_p1.read().is_01() || !sext_ln703_180_fu_4150357_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_148_V_fu_4137546_p1.read()) + sc_bigint<16>(sext_ln703_180_fu_4150357_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_951_fu_4150367_p2() {
    add_ln703_951_fu_4150367_p2 = (!add_ln703_948_fu_4150347_p2.read().is_01() || !add_ln703_950_fu_4150361_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_948_fu_4150347_p2.read()) + sc_biguint<16>(add_ln703_950_fu_4150361_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_952_fu_4154584_p2() {
    add_ln703_952_fu_4154584_p2 = (!mult_388_V_reg_4160196.read().is_01() || !mult_328_V_reg_4159926.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_388_V_reg_4160196.read()) + sc_biguint<16>(mult_328_V_reg_4159926.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_953_fu_4154588_p2() {
    add_ln703_953_fu_4154588_p2 = (!mult_568_V_reg_4161056.read().is_01() || !mult_508_V_fu_4151431_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_568_V_reg_4161056.read()) + sc_bigint<16>(mult_508_V_fu_4151431_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_954_fu_4154593_p2() {
    add_ln703_954_fu_4154593_p2 = (!mult_448_V_reg_4160491.read().is_01() || !add_ln703_953_fu_4154588_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_448_V_reg_4160491.read()) + sc_biguint<16>(add_ln703_953_fu_4154588_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_955_fu_4154598_p2() {
    add_ln703_955_fu_4154598_p2 = (!add_ln703_952_fu_4154584_p2.read().is_01() || !add_ln703_954_fu_4154593_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_952_fu_4154584_p2.read()) + sc_biguint<16>(add_ln703_954_fu_4154593_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_956_fu_4154604_p2() {
    add_ln703_956_fu_4154604_p2 = (!add_ln703_951_reg_4164258.read().is_01() || !add_ln703_955_fu_4154598_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_951_reg_4164258.read()) + sc_biguint<16>(add_ln703_955_fu_4154598_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_957_fu_4154609_p2() {
    add_ln703_957_fu_4154609_p2 = (!mult_688_V_fu_4151680_p1.read().is_01() || !mult_628_V_reg_4161356.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_688_V_fu_4151680_p1.read()) + sc_biguint<16>(mult_628_V_reg_4161356.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_958_fu_4154614_p2() {
    add_ln703_958_fu_4154614_p2 = (!mult_868_V_reg_4162517.read().is_01() || !mult_808_V_reg_4162227.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_868_V_reg_4162517.read()) + sc_biguint<16>(mult_808_V_reg_4162227.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_959_fu_4154618_p2() {
    add_ln703_959_fu_4154618_p2 = (!mult_748_V_reg_4161942.read().is_01() || !add_ln703_958_fu_4154614_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_748_V_reg_4161942.read()) + sc_biguint<16>(add_ln703_958_fu_4154614_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_960_fu_4154623_p2() {
    add_ln703_960_fu_4154623_p2 = (!add_ln703_957_fu_4154609_p2.read().is_01() || !add_ln703_959_fu_4154618_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_957_fu_4154609_p2.read()) + sc_biguint<16>(add_ln703_959_fu_4154618_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_961_fu_4154629_p2() {
    add_ln703_961_fu_4154629_p2 = (!mult_1048_V_fu_4152231_p1.read().is_01() || !mult_988_V_reg_4163093.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1048_V_fu_4152231_p1.read()) + sc_biguint<16>(mult_988_V_reg_4163093.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_962_fu_4154634_p2() {
    add_ln703_962_fu_4154634_p2 = (!mult_928_V_reg_4162803.read().is_01() || !add_ln703_961_fu_4154629_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_928_V_reg_4162803.read()) + sc_biguint<16>(add_ln703_961_fu_4154629_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_963_fu_4154639_p2() {
    add_ln703_963_fu_4154639_p2 = (!mult_1168_V_reg_4163973.read().is_01() || !ap_const_lv16_BD.is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1168_V_reg_4163973.read()) + sc_biguint<16>(ap_const_lv16_BD));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_964_fu_4154644_p2() {
    add_ln703_964_fu_4154644_p2 = (!mult_1108_V_reg_4163683.read().is_01() || !add_ln703_963_fu_4154639_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1108_V_reg_4163683.read()) + sc_biguint<16>(add_ln703_963_fu_4154639_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_965_fu_4154649_p2() {
    add_ln703_965_fu_4154649_p2 = (!add_ln703_962_fu_4154634_p2.read().is_01() || !add_ln703_964_fu_4154644_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_962_fu_4154634_p2.read()) + sc_biguint<16>(add_ln703_964_fu_4154644_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_966_fu_4157411_p2() {
    add_ln703_966_fu_4157411_p2 = (!add_ln703_960_reg_4164898.read().is_01() || !add_ln703_965_reg_4164903.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_960_reg_4164898.read()) + sc_biguint<16>(add_ln703_965_reg_4164903.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_968_fu_4150373_p2() {
    add_ln703_968_fu_4150373_p2 = (!mult_89_V_reg_4158774.read().is_01() || !mult_29_V_fu_4137158_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_89_V_reg_4158774.read()) + sc_bigint<16>(mult_29_V_fu_4137158_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_969_fu_4150378_p2() {
    add_ln703_969_fu_4150378_p2 = (!mult_258_V_fu_4137959_p1.read().is_01() || !mult_209_V_fu_4137890_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_258_V_fu_4137959_p1.read()) + sc_bigint<16>(mult_209_V_fu_4137890_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_970_fu_4150384_p2() {
    add_ln703_970_fu_4150384_p2 = (!mult_149_V_fu_4137549_p1.read().is_01() || !add_ln703_969_fu_4150378_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_149_V_fu_4137549_p1.read()) + sc_biguint<16>(add_ln703_969_fu_4150378_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_971_fu_4150390_p2() {
    add_ln703_971_fu_4150390_p2 = (!add_ln703_968_fu_4150373_p2.read().is_01() || !add_ln703_970_fu_4150384_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_968_fu_4150373_p2.read()) + sc_biguint<16>(add_ln703_970_fu_4150384_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_972_fu_4154655_p2() {
    add_ln703_972_fu_4154655_p2 = (!mult_389_V_reg_4160201.read().is_01() || !mult_329_V_reg_4159931.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_389_V_reg_4160201.read()) + sc_biguint<16>(mult_329_V_reg_4159931.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_973_fu_4154659_p2() {
    add_ln703_973_fu_4154659_p2 = (!mult_569_V_reg_4161061.read().is_01() || !mult_509_V_fu_4151434_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_569_V_reg_4161061.read()) + sc_bigint<16>(mult_509_V_fu_4151434_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_974_fu_4154664_p2() {
    add_ln703_974_fu_4154664_p2 = (!mult_449_V_fu_4151344_p1.read().is_01() || !add_ln703_973_fu_4154659_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_449_V_fu_4151344_p1.read()) + sc_biguint<16>(add_ln703_973_fu_4154659_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_975_fu_4154670_p2() {
    add_ln703_975_fu_4154670_p2 = (!add_ln703_972_fu_4154655_p2.read().is_01() || !add_ln703_974_fu_4154664_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_972_fu_4154655_p2.read()) + sc_biguint<16>(add_ln703_974_fu_4154664_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_976_fu_4154676_p2() {
    add_ln703_976_fu_4154676_p2 = (!add_ln703_971_reg_4164263.read().is_01() || !add_ln703_975_fu_4154670_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_971_reg_4164263.read()) + sc_biguint<16>(add_ln703_975_fu_4154670_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_977_fu_4154681_p2() {
    add_ln703_977_fu_4154681_p2 = (!mult_689_V_fu_4151683_p1.read().is_01() || !mult_629_V_fu_4151587_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_689_V_fu_4151683_p1.read()) + sc_bigint<16>(mult_629_V_fu_4151587_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_978_fu_4154687_p2() {
    add_ln703_978_fu_4154687_p2 = (!sext_ln203_214_fu_4151991_p1.read().is_01() || !sext_ln203_206_fu_4151904_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_214_fu_4151991_p1.read()) + sc_bigint<15>(sext_ln203_206_fu_4151904_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_979_fu_4154697_p2() {
    add_ln703_979_fu_4154697_p2 = (!mult_749_V_reg_4161947.read().is_01() || !sext_ln703_181_fu_4154693_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_749_V_reg_4161947.read()) + sc_bigint<16>(sext_ln703_181_fu_4154693_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_980_fu_4154702_p2() {
    add_ln703_980_fu_4154702_p2 = (!add_ln703_977_fu_4154681_p2.read().is_01() || !add_ln703_979_fu_4154697_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_977_fu_4154681_p2.read()) + sc_biguint<16>(add_ln703_979_fu_4154697_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_981_fu_4154708_p2() {
    add_ln703_981_fu_4154708_p2 = (!mult_1049_V_fu_4152234_p1.read().is_01() || !mult_989_V_reg_4163098.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1049_V_fu_4152234_p1.read()) + sc_biguint<16>(mult_989_V_reg_4163098.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_982_fu_4154713_p2() {
    add_ln703_982_fu_4154713_p2 = (!mult_929_V_fu_4152072_p1.read().is_01() || !add_ln703_981_fu_4154708_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_929_V_fu_4152072_p1.read()) + sc_biguint<16>(add_ln703_981_fu_4154708_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_983_fu_4154719_p2() {
    add_ln703_983_fu_4154719_p2 = (!mult_1169_V_fu_4152426_p1.read().is_01() || !ap_const_lv16_3E.is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1169_V_fu_4152426_p1.read()) + sc_biguint<16>(ap_const_lv16_3E));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_984_fu_4154725_p2() {
    add_ln703_984_fu_4154725_p2 = (!mult_1109_V_fu_4152318_p1.read().is_01() || !add_ln703_983_fu_4154719_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1109_V_fu_4152318_p1.read()) + sc_biguint<16>(add_ln703_983_fu_4154719_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_985_fu_4154731_p2() {
    add_ln703_985_fu_4154731_p2 = (!add_ln703_982_fu_4154713_p2.read().is_01() || !add_ln703_984_fu_4154725_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_982_fu_4154713_p2.read()) + sc_biguint<16>(add_ln703_984_fu_4154725_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_986_fu_4157420_p2() {
    add_ln703_986_fu_4157420_p2 = (!add_ln703_980_reg_4164913.read().is_01() || !add_ln703_985_reg_4164918.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_980_reg_4164913.read()) + sc_biguint<16>(add_ln703_985_reg_4164918.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_988_fu_4150396_p2() {
    add_ln703_988_fu_4150396_p2 = (!mult_90_V_reg_4158779.read().is_01() || !mult_30_V_reg_4158488.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_90_V_reg_4158779.read()) + sc_biguint<16>(mult_30_V_reg_4158488.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_989_fu_4150400_p2() {
    add_ln703_989_fu_4150400_p2 = (!mult_330_V_fu_4138511_p4.read().is_01() || !mult_210_V_reg_4159274.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_330_V_fu_4138511_p4.read()) + sc_biguint<16>(mult_210_V_reg_4159274.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_990_fu_4154737_p2() {
    add_ln703_990_fu_4154737_p2 = (!mult_150_V_reg_4159039_pp0_iter1_reg.read().is_01() || !add_ln703_989_reg_4164273.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_150_V_reg_4159039_pp0_iter1_reg.read()) + sc_biguint<16>(add_ln703_989_reg_4164273.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_991_fu_4154741_p2() {
    add_ln703_991_fu_4154741_p2 = (!add_ln703_988_reg_4164268.read().is_01() || !add_ln703_990_fu_4154737_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_988_reg_4164268.read()) + sc_biguint<16>(add_ln703_990_fu_4154737_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_992_fu_4154746_p2() {
    add_ln703_992_fu_4154746_p2 = (!mult_450_V_fu_4151347_p1.read().is_01() || !mult_390_V_reg_4160206.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_450_V_fu_4151347_p1.read()) + sc_biguint<16>(mult_390_V_reg_4160206.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_993_fu_4154751_p2() {
    add_ln703_993_fu_4154751_p2 = (!mult_630_V_fu_4151590_p1.read().is_01() || !mult_570_V_reg_4161066.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_630_V_fu_4151590_p1.read()) + sc_biguint<16>(mult_570_V_reg_4161066.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_994_fu_4154756_p2() {
    add_ln703_994_fu_4154756_p2 = (!mult_510_V_reg_4160776.read().is_01() || !add_ln703_993_fu_4154751_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_510_V_reg_4160776.read()) + sc_biguint<16>(add_ln703_993_fu_4154751_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_995_fu_4154761_p2() {
    add_ln703_995_fu_4154761_p2 = (!add_ln703_992_fu_4154746_p2.read().is_01() || !add_ln703_994_fu_4154756_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_992_fu_4154746_p2.read()) + sc_biguint<16>(add_ln703_994_fu_4154756_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_996_fu_4154767_p2() {
    add_ln703_996_fu_4154767_p2 = (!add_ln703_991_fu_4154741_p2.read().is_01() || !add_ln703_995_fu_4154761_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_991_fu_4154741_p2.read()) + sc_biguint<16>(add_ln703_995_fu_4154761_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_997_fu_4154773_p2() {
    add_ln703_997_fu_4154773_p2 = (!mult_750_V_reg_4161952.read().is_01() || !mult_690_V_reg_4161661.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_750_V_reg_4161952.read()) + sc_biguint<16>(mult_690_V_reg_4161661.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_998_fu_4154777_p2() {
    add_ln703_998_fu_4154777_p2 = (!mult_930_V_reg_4162813.read().is_01() || !mult_870_V_fu_4151994_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_930_V_reg_4162813.read()) + sc_bigint<16>(mult_870_V_fu_4151994_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_999_fu_4154782_p2() {
    add_ln703_999_fu_4154782_p2 = (!mult_810_V_reg_4162237.read().is_01() || !add_ln703_998_fu_4154777_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_810_V_reg_4162237.read()) + sc_biguint<16>(add_ln703_998_fu_4154777_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_fu_4149747_p2() {
    add_ln703_fu_4149747_p2 = (!mult_60_V_fu_4137224_p1.read().is_01() || !mult_0_V_fu_4137128_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_60_V_fu_4137224_p1.read()) + sc_bigint<16>(mult_0_V_fu_4137128_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_state3_pp0_stage0_iter2() {
    ap_block_state3_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_state4_pp0_stage0_iter3() {
    ap_block_state4_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_0 = ap_return_0_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0 = add_ln703_407_fu_4157163_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_1 = ap_return_1_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_1 = acc_1_V_fu_4157172_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_10() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_10 = ap_return_10_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_10 = acc_10_V_fu_4157253_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_11() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_11 = ap_return_11_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_11 = acc_11_V_fu_4157262_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_12() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_12 = ap_return_12_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_12 = acc_12_V_fu_4157271_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_13() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_13 = ap_return_13_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_13 = acc_13_V_fu_4157280_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_14() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_14 = ap_return_14_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_14 = acc_14_V_fu_4157289_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_15() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_15 = ap_return_15_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_15 = acc_15_V_fu_4157298_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_16() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_16 = ap_return_16_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_16 = acc_16_V_fu_4157307_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_17() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_17 = ap_return_17_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_17 = acc_17_V_fu_4157316_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_18() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_18 = ap_return_18_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_18 = acc_18_V_fu_4157325_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_19() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_19 = ap_return_19_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_19 = acc_19_V_fu_4157334_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_2 = ap_return_2_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_2 = acc_2_V_fu_4157181_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_20() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_20 = ap_return_20_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_20 = acc_20_V_fu_4157343_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_21() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_21 = ap_return_21_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_21 = acc_21_V_fu_4157352_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_22() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_22 = ap_return_22_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_22 = acc_22_V_fu_4157361_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_23() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_23 = ap_return_23_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_23 = acc_23_V_fu_4157370_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_24() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_24 = ap_return_24_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_24 = acc_24_V_fu_4157379_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_25() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_25 = ap_return_25_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_25 = acc_25_V_fu_4157388_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_26() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_26 = ap_return_26_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_26 = acc_26_V_fu_4157397_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_27() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_27 = ap_return_27_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_27 = acc_27_V_fu_4157406_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_28() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_28 = ap_return_28_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_28 = acc_28_V_fu_4157415_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_29() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_29 = ap_return_29_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_29 = acc_29_V_fu_4157424_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_3 = ap_return_3_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_3 = acc_3_V_fu_4157190_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_30() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_30 = ap_return_30_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_30 = acc_30_V_fu_4157433_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_31() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_31 = ap_return_31_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_31 = acc_31_V_fu_4157442_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_32() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_32 = ap_return_32_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_32 = acc_32_V_fu_4157451_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_33() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_33 = ap_return_33_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_33 = acc_33_V_fu_4157460_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_34() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_34 = ap_return_34_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_34 = acc_34_V_fu_4157469_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_35() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_35 = ap_return_35_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_35 = acc_35_V_fu_4157478_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_36() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_36 = ap_return_36_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_36 = acc_36_V_fu_4157487_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_37() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_37 = ap_return_37_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_37 = acc_37_V_fu_4157496_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_38() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_38 = ap_return_38_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_38 = acc_38_V_fu_4157505_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_39() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_39 = ap_return_39_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_39 = acc_39_V_fu_4157514_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_4 = ap_return_4_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_4 = acc_4_V_fu_4157199_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_40() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_40 = ap_return_40_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_40 = acc_40_V_fu_4157523_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_41() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_41 = ap_return_41_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_41 = acc_41_V_fu_4157532_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_42() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_42 = ap_return_42_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_42 = acc_42_V_fu_4157541_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_43() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_43 = ap_return_43_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_43 = acc_43_V_fu_4157550_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_44() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_44 = ap_return_44_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_44 = acc_44_V_fu_4157559_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_45() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_45 = ap_return_45_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_45 = acc_45_V_fu_4157568_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_46() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_46 = ap_return_46_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_46 = acc_46_V_fu_4157577_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_47() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_47 = ap_return_47_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_47 = acc_47_V_fu_4157586_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_48() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_48 = ap_return_48_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_48 = acc_48_V_fu_4157595_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_49() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_49 = ap_return_49_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_49 = acc_49_V_fu_4157604_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_5() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_5 = ap_return_5_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_5 = acc_5_V_fu_4157208_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_50() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_50 = ap_return_50_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_50 = acc_50_V_fu_4157613_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_51() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_51 = ap_return_51_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_51 = acc_51_V_fu_4157633_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_52() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_52 = ap_return_52_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_52 = acc_52_V_fu_4157642_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_53() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_53 = ap_return_53_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_53 = acc_53_V_fu_4157651_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_54() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_54 = ap_return_54_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_54 = acc_54_V_fu_4157660_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_55() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_55 = ap_return_55_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_55 = acc_55_V_fu_4157669_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_56() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_56 = ap_return_56_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_56 = acc_56_V_fu_4157678_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_57() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_57 = ap_return_57_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_57 = acc_57_V_fu_4157687_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_58() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_58 = ap_return_58_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_58 = acc_58_V_fu_4157696_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_59() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_59 = ap_return_59_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_59 = acc_59_V_fu_4157720_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_6() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_6 = ap_return_6_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_6 = acc_6_V_fu_4157217_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_7() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_7 = ap_return_7_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_7 = acc_7_V_fu_4157226_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_8() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_8 = ap_return_8_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_8 = acc_8_V_fu_4157235_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_9() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_9 = ap_return_9_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_9 = acc_9_V_fu_4157244_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1000_fu_3083_p0() {
    mul_ln1118_1000_fu_3083_p0 =  (sc_lv<16>) (sext_ln1118_411_fu_4145121_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1000_fu_3083_p2() {
    mul_ln1118_1000_fu_3083_p2 = (!mul_ln1118_1000_fu_3083_p0.read().is_01() || !ap_const_lv25_1FFFF42.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1000_fu_3083_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF42);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1001_fu_3084_p0() {
    mul_ln1118_1001_fu_3084_p0 =  (sc_lv<16>) (sext_ln1118_410_fu_4145091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1001_fu_3084_p2() {
    mul_ln1118_1001_fu_3084_p2 = (!mul_ln1118_1001_fu_3084_p0.read().is_01() || !ap_const_lv26_20E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1001_fu_3084_p0.read()) * sc_biguint<26>(ap_const_lv26_20E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1002_fu_3030_p0() {
    mul_ln1118_1002_fu_3030_p0 =  (sc_lv<16>) (sext_ln1118_411_fu_4145121_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1002_fu_3030_p2() {
    mul_ln1118_1002_fu_3030_p2 = (!mul_ln1118_1002_fu_3030_p0.read().is_01() || !ap_const_lv25_E4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1002_fu_3030_p0.read()) * sc_biguint<25>(ap_const_lv25_E4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1003_fu_3033_p0() {
    mul_ln1118_1003_fu_3033_p0 =  (sc_lv<16>) (sext_ln1118_411_fu_4145121_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1003_fu_3033_p2() {
    mul_ln1118_1003_fu_3033_p2 = (!mul_ln1118_1003_fu_3033_p0.read().is_01() || !ap_const_lv25_1FFFF4E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1003_fu_3033_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1004_fu_2089_p0() {
    mul_ln1118_1004_fu_2089_p0 =  (sc_lv<16>) (sext_ln1118_408_fu_4145077_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1004_fu_2089_p2() {
    mul_ln1118_1004_fu_2089_p2 = (!mul_ln1118_1004_fu_2089_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1004_fu_2089_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1005_fu_2449_p0() {
    mul_ln1118_1005_fu_2449_p0 =  (sc_lv<16>) (sext_ln1118_408_fu_4145077_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1005_fu_2449_p2() {
    mul_ln1118_1005_fu_2449_p2 = (!mul_ln1118_1005_fu_2449_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1005_fu_2449_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1006_fu_2939_p0() {
    mul_ln1118_1006_fu_2939_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1006_fu_2939_p2() {
    mul_ln1118_1006_fu_2939_p2 = (!mul_ln1118_1006_fu_2939_p0.read().is_01() || !ap_const_lv26_3E3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1006_fu_2939_p0.read()) * sc_biguint<26>(ap_const_lv26_3E3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1007_fu_2017_p0() {
    mul_ln1118_1007_fu_2017_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1007_fu_2017_p2() {
    mul_ln1118_1007_fu_2017_p2 = (!mul_ln1118_1007_fu_2017_p0.read().is_01() || !ap_const_lv26_80D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1007_fu_2017_p0.read()) * sc_biguint<26>(ap_const_lv26_80D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1008_fu_2236_p0() {
    mul_ln1118_1008_fu_2236_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1008_fu_2236_p2() {
    mul_ln1118_1008_fu_2236_p2 = (!mul_ln1118_1008_fu_2236_p0.read().is_01() || !ap_const_lv26_57C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1008_fu_2236_p0.read()) * sc_biguint<26>(ap_const_lv26_57C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1009_fu_2237_p0() {
    mul_ln1118_1009_fu_2237_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1009_fu_2237_p2() {
    mul_ln1118_1009_fu_2237_p2 = (!mul_ln1118_1009_fu_2237_p0.read().is_01() || !ap_const_lv26_37C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1009_fu_2237_p0.read()) * sc_biguint<26>(ap_const_lv26_37C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1010_fu_2979_p0() {
    mul_ln1118_1010_fu_2979_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1010_fu_2979_p2() {
    mul_ln1118_1010_fu_2979_p2 = (!mul_ln1118_1010_fu_2979_p0.read().is_01() || !ap_const_lv26_288.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1010_fu_2979_p0.read()) * sc_biguint<26>(ap_const_lv26_288);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1011_fu_2746_p0() {
    mul_ln1118_1011_fu_2746_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1011_fu_2746_p2() {
    mul_ln1118_1011_fu_2746_p2 = (!mul_ln1118_1011_fu_2746_p0.read().is_01() || !ap_const_lv26_3FFFAFA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1011_fu_2746_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFAFA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1012_fu_2514_p0() {
    mul_ln1118_1012_fu_2514_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1012_fu_2514_p2() {
    mul_ln1118_1012_fu_2514_p2 = (!mul_ln1118_1012_fu_2514_p0.read().is_01() || !ap_const_lv26_1D8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1012_fu_2514_p0.read()) * sc_biguint<26>(ap_const_lv26_1D8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1013_fu_2766_p0() {
    mul_ln1118_1013_fu_2766_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1013_fu_2766_p2() {
    mul_ln1118_1013_fu_2766_p2 = (!mul_ln1118_1013_fu_2766_p0.read().is_01() || !ap_const_lv26_7D8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1013_fu_2766_p0.read()) * sc_biguint<26>(ap_const_lv26_7D8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1014_fu_3010_p0() {
    mul_ln1118_1014_fu_3010_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1014_fu_3010_p2() {
    mul_ln1118_1014_fu_3010_p2 = (!mul_ln1118_1014_fu_3010_p0.read().is_01() || !ap_const_lv26_189.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1014_fu_3010_p0.read()) * sc_biguint<26>(ap_const_lv26_189);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1015_fu_2054_p0() {
    mul_ln1118_1015_fu_2054_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1015_fu_2054_p2() {
    mul_ln1118_1015_fu_2054_p2 = (!mul_ln1118_1015_fu_2054_p0.read().is_01() || !ap_const_lv26_3FFFB21.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1015_fu_2054_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFB21);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1016_fu_2549_p0() {
    mul_ln1118_1016_fu_2549_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1016_fu_2549_p2() {
    mul_ln1118_1016_fu_2549_p2 = (!mul_ln1118_1016_fu_2549_p0.read().is_01() || !ap_const_lv25_AE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1016_fu_2549_p0.read()) * sc_biguint<25>(ap_const_lv25_AE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1017_fu_2798_p0() {
    mul_ln1118_1017_fu_2798_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1017_fu_2798_p2() {
    mul_ln1118_1017_fu_2798_p2 = (!mul_ln1118_1017_fu_2798_p0.read().is_01() || !ap_const_lv26_4A2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1017_fu_2798_p0.read()) * sc_biguint<26>(ap_const_lv26_4A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1018_fu_2079_p0() {
    mul_ln1118_1018_fu_2079_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1018_fu_2079_p2() {
    mul_ln1118_1018_fu_2079_p2 = (!mul_ln1118_1018_fu_2079_p0.read().is_01() || !ap_const_lv26_33E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1018_fu_2079_p0.read()) * sc_biguint<26>(ap_const_lv26_33E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1019_fu_2812_p0() {
    mul_ln1118_1019_fu_2812_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1019_fu_2812_p2() {
    mul_ln1118_1019_fu_2812_p2 = (!mul_ln1118_1019_fu_2812_p0.read().is_01() || !ap_const_lv26_3FFFCC1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1019_fu_2812_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCC1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1020_fu_2393_p0() {
    mul_ln1118_1020_fu_2393_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1020_fu_2393_p2() {
    mul_ln1118_1020_fu_2393_p2 = (!mul_ln1118_1020_fu_2393_p0.read().is_01() || !ap_const_lv26_131.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1020_fu_2393_p0.read()) * sc_biguint<26>(ap_const_lv26_131);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1021_fu_2687_p0() {
    mul_ln1118_1021_fu_2687_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1021_fu_2687_p2() {
    mul_ln1118_1021_fu_2687_p2 = (!mul_ln1118_1021_fu_2687_p0.read().is_01() || !ap_const_lv26_3FFFBCC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1021_fu_2687_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFBCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1022_fu_2688_p0() {
    mul_ln1118_1022_fu_2688_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1022_fu_2688_p2() {
    mul_ln1118_1022_fu_2688_p2 = (!mul_ln1118_1022_fu_2688_p0.read().is_01() || !ap_const_lv26_3FFFA74.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1022_fu_2688_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFA74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1023_fu_2840_p0() {
    mul_ln1118_1023_fu_2840_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1023_fu_2840_p2() {
    mul_ln1118_1023_fu_2840_p2 = (!mul_ln1118_1023_fu_2840_p0.read().is_01() || !ap_const_lv26_56D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1023_fu_2840_p0.read()) * sc_biguint<26>(ap_const_lv26_56D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1024_fu_2083_p0() {
    mul_ln1118_1024_fu_2083_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1024_fu_2083_p2() {
    mul_ln1118_1024_fu_2083_p2 = (!mul_ln1118_1024_fu_2083_p0.read().is_01() || !ap_const_lv26_3FFFB15.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1024_fu_2083_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFB15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1025_fu_2996_p0() {
    mul_ln1118_1025_fu_2996_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1025_fu_2996_p2() {
    mul_ln1118_1025_fu_2996_p2 = (!mul_ln1118_1025_fu_2996_p0.read().is_01() || !ap_const_lv26_168.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1025_fu_2996_p0.read()) * sc_biguint<26>(ap_const_lv26_168);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1026_fu_2085_p0() {
    mul_ln1118_1026_fu_2085_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1026_fu_2085_p2() {
    mul_ln1118_1026_fu_2085_p2 = (!mul_ln1118_1026_fu_2085_p0.read().is_01() || !ap_const_lv26_3B1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1026_fu_2085_p0.read()) * sc_biguint<26>(ap_const_lv26_3B1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1027_fu_2847_p0() {
    mul_ln1118_1027_fu_2847_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1027_fu_2847_p2() {
    mul_ln1118_1027_fu_2847_p2 = (!mul_ln1118_1027_fu_2847_p0.read().is_01() || !ap_const_lv26_3FFFE37.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1027_fu_2847_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1028_fu_2243_p0() {
    mul_ln1118_1028_fu_2243_p0 =  (sc_lv<16>) (sext_ln1118_425_fu_4145909_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1028_fu_2243_p2() {
    mul_ln1118_1028_fu_2243_p2 = (!mul_ln1118_1028_fu_2243_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1028_fu_2243_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1029_fu_2088_p0() {
    mul_ln1118_1029_fu_2088_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1029_fu_2088_p2() {
    mul_ln1118_1029_fu_2088_p2 = (!mul_ln1118_1029_fu_2088_p0.read().is_01() || !ap_const_lv25_C8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1029_fu_2088_p0.read()) * sc_biguint<25>(ap_const_lv25_C8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1030_fu_2245_p0() {
    mul_ln1118_1030_fu_2245_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1030_fu_2245_p2() {
    mul_ln1118_1030_fu_2245_p2 = (!mul_ln1118_1030_fu_2245_p0.read().is_01() || !ap_const_lv25_D7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1030_fu_2245_p0.read()) * sc_biguint<25>(ap_const_lv25_D7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1031_fu_2995_p0() {
    mul_ln1118_1031_fu_2995_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1031_fu_2995_p2() {
    mul_ln1118_1031_fu_2995_p2 = (!mul_ln1118_1031_fu_2995_p0.read().is_01() || !ap_const_lv26_17C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1031_fu_2995_p0.read()) * sc_biguint<26>(ap_const_lv26_17C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1032_fu_2399_p0() {
    mul_ln1118_1032_fu_2399_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1032_fu_2399_p2() {
    mul_ln1118_1032_fu_2399_p2 = (!mul_ln1118_1032_fu_2399_p0.read().is_01() || !ap_const_lv26_3FFFCCC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1032_fu_2399_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1033_fu_2401_p0() {
    mul_ln1118_1033_fu_2401_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1033_fu_2401_p2() {
    mul_ln1118_1033_fu_2401_p2 = (!mul_ln1118_1033_fu_2401_p0.read().is_01() || !ap_const_lv25_F2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1033_fu_2401_p0.read()) * sc_biguint<25>(ap_const_lv25_F2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1034_fu_2943_p0() {
    mul_ln1118_1034_fu_2943_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1034_fu_2943_p2() {
    mul_ln1118_1034_fu_2943_p2 = (!mul_ln1118_1034_fu_2943_p0.read().is_01() || !ap_const_lv26_1B8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1034_fu_2943_p0.read()) * sc_biguint<26>(ap_const_lv26_1B8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1035_fu_2230_p0() {
    mul_ln1118_1035_fu_2230_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1035_fu_2230_p2() {
    mul_ln1118_1035_fu_2230_p2 = (!mul_ln1118_1035_fu_2230_p0.read().is_01() || !ap_const_lv26_462.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1035_fu_2230_p0.read()) * sc_biguint<26>(ap_const_lv26_462);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1036_fu_2728_p0() {
    mul_ln1118_1036_fu_2728_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1036_fu_2728_p2() {
    mul_ln1118_1036_fu_2728_p2 = (!mul_ln1118_1036_fu_2728_p0.read().is_01() || !ap_const_lv26_144.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1036_fu_2728_p0.read()) * sc_biguint<26>(ap_const_lv26_144);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1037_fu_2974_p0() {
    mul_ln1118_1037_fu_2974_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1037_fu_2974_p2() {
    mul_ln1118_1037_fu_2974_p2 = (!mul_ln1118_1037_fu_2974_p0.read().is_01() || !ap_const_lv25_E1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1037_fu_2974_p0.read()) * sc_biguint<25>(ap_const_lv25_E1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1038_fu_2742_p0() {
    mul_ln1118_1038_fu_2742_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1038_fu_2742_p2() {
    mul_ln1118_1038_fu_2742_p2 = (!mul_ln1118_1038_fu_2742_p0.read().is_01() || !ap_const_lv26_112.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1038_fu_2742_p0.read()) * sc_biguint<26>(ap_const_lv26_112);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1039_fu_2018_p0() {
    mul_ln1118_1039_fu_2018_p0 = data_15_V_read_5_reg_4158150.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1039_fu_2018_p2() {
    mul_ln1118_1039_fu_2018_p2 = (!mul_ln1118_1039_fu_2018_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1039_fu_2018_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1040_fu_2757_p0() {
    mul_ln1118_1040_fu_2757_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1040_fu_2757_p2() {
    mul_ln1118_1040_fu_2757_p2 = (!mul_ln1118_1040_fu_2757_p0.read().is_01() || !ap_const_lv26_3FFFE1E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1040_fu_2757_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE1E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1041_fu_2282_p0() {
    mul_ln1118_1041_fu_2282_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1041_fu_2282_p2() {
    mul_ln1118_1041_fu_2282_p2 = (!mul_ln1118_1041_fu_2282_p0.read().is_01() || !ap_const_lv26_14B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1041_fu_2282_p0.read()) * sc_biguint<26>(ap_const_lv26_14B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1042_fu_2777_p0() {
    mul_ln1118_1042_fu_2777_p0 =  (sc_lv<16>) (sext_ln1118_425_fu_4145909_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1042_fu_2777_p2() {
    mul_ln1118_1042_fu_2777_p2 = (!mul_ln1118_1042_fu_2777_p0.read().is_01() || !ap_const_lv24_FFFF94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1042_fu_2777_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1043_fu_3021_p0() {
    mul_ln1118_1043_fu_3021_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1043_fu_3021_p2() {
    mul_ln1118_1043_fu_3021_p2 = (!mul_ln1118_1043_fu_3021_p0.read().is_01() || !ap_const_lv26_137.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1043_fu_3021_p0.read()) * sc_biguint<26>(ap_const_lv26_137);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1044_fu_2309_p0() {
    mul_ln1118_1044_fu_2309_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1044_fu_2309_p2() {
    mul_ln1118_1044_fu_2309_p2 = (!mul_ln1118_1044_fu_2309_p0.read().is_01() || !ap_const_lv25_1FFFF53.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1044_fu_2309_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1045_fu_2075_p0() {
    mul_ln1118_1045_fu_2075_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1045_fu_2075_p2() {
    mul_ln1118_1045_fu_2075_p2 = (!mul_ln1118_1045_fu_2075_p0.read().is_01() || !ap_const_lv26_24A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1045_fu_2075_p0.read()) * sc_biguint<26>(ap_const_lv26_24A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1046_fu_2808_p0() {
    mul_ln1118_1046_fu_2808_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1046_fu_2808_p2() {
    mul_ln1118_1046_fu_2808_p2 = (!mul_ln1118_1046_fu_2808_p0.read().is_01() || !ap_const_lv26_1E4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1046_fu_2808_p0.read()) * sc_biguint<26>(ap_const_lv26_1E4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1047_fu_2218_p0() {
    mul_ln1118_1047_fu_2218_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1047_fu_2218_p2() {
    mul_ln1118_1047_fu_2218_p2 = (!mul_ln1118_1047_fu_2218_p0.read().is_01() || !ap_const_lv25_F1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1047_fu_2218_p0.read()) * sc_biguint<25>(ap_const_lv25_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1048_fu_2590_p0() {
    mul_ln1118_1048_fu_2590_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1048_fu_2590_p2() {
    mul_ln1118_1048_fu_2590_p2 = (!mul_ln1118_1048_fu_2590_p0.read().is_01() || !ap_const_lv25_1FFFF4A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1048_fu_2590_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1049_fu_2596_p0() {
    mul_ln1118_1049_fu_2596_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1049_fu_2596_p2() {
    mul_ln1118_1049_fu_2596_p2 = (!mul_ln1118_1049_fu_2596_p0.read().is_01() || !ap_const_lv26_234.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1049_fu_2596_p0.read()) * sc_biguint<26>(ap_const_lv26_234);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1050_fu_2886_p0() {
    mul_ln1118_1050_fu_2886_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1050_fu_2886_p2() {
    mul_ln1118_1050_fu_2886_p2 = (!mul_ln1118_1050_fu_2886_p0.read().is_01() || !ap_const_lv26_3FFFE2F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1050_fu_2886_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1051_fu_2733_p0() {
    mul_ln1118_1051_fu_2733_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1051_fu_2733_p2() {
    mul_ln1118_1051_fu_2733_p2 = (!mul_ln1118_1051_fu_2733_p0.read().is_01() || !ap_const_lv25_8B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1051_fu_2733_p0.read()) * sc_biguint<25>(ap_const_lv25_8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1052_fu_2158_p0() {
    mul_ln1118_1052_fu_2158_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1052_fu_2158_p2() {
    mul_ln1118_1052_fu_2158_p2 = (!mul_ln1118_1052_fu_2158_p0.read().is_01() || !ap_const_lv26_1D6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1052_fu_2158_p0.read()) * sc_biguint<26>(ap_const_lv26_1D6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1053_fu_2735_p0() {
    mul_ln1118_1053_fu_2735_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1053_fu_2735_p2() {
    mul_ln1118_1053_fu_2735_p2 = (!mul_ln1118_1053_fu_2735_p0.read().is_01() || !ap_const_lv26_3FFFECC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1053_fu_2735_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1054_fu_2890_p0() {
    mul_ln1118_1054_fu_2890_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1054_fu_2890_p2() {
    mul_ln1118_1054_fu_2890_p2 = (!mul_ln1118_1054_fu_2890_p0.read().is_01() || !ap_const_lv26_3FFFE1F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1054_fu_2890_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE1F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1055_fu_2737_p0() {
    mul_ln1118_1055_fu_2737_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1055_fu_2737_p2() {
    mul_ln1118_1055_fu_2737_p2 = (!mul_ln1118_1055_fu_2737_p0.read().is_01() || !ap_const_lv25_BD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1055_fu_2737_p0.read()) * sc_biguint<25>(ap_const_lv25_BD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1056_fu_2892_p0() {
    mul_ln1118_1056_fu_2892_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1056_fu_2892_p2() {
    mul_ln1118_1056_fu_2892_p2 = (!mul_ln1118_1056_fu_2892_p0.read().is_01() || !ap_const_lv26_3A3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1056_fu_2892_p0.read()) * sc_biguint<26>(ap_const_lv26_3A3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1057_fu_2446_p0() {
    mul_ln1118_1057_fu_2446_p0 =  (sc_lv<16>) (sext_ln1118_425_fu_4145909_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1057_fu_2446_p2() {
    mul_ln1118_1057_fu_2446_p2 = (!mul_ln1118_1057_fu_2446_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1057_fu_2446_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1058_fu_2141_p0() {
    mul_ln1118_1058_fu_2141_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1058_fu_2141_p2() {
    mul_ln1118_1058_fu_2141_p2 = (!mul_ln1118_1058_fu_2141_p0.read().is_01() || !ap_const_lv26_178.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1058_fu_2141_p0.read()) * sc_biguint<26>(ap_const_lv26_178);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1059_fu_2741_p0() {
    mul_ln1118_1059_fu_2741_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_4145929_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1059_fu_2741_p2() {
    mul_ln1118_1059_fu_2741_p2 = (!mul_ln1118_1059_fu_2741_p0.read().is_01() || !ap_const_lv26_3FFFD11.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1059_fu_2741_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD11);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1060_fu_2897_p0() {
    mul_ln1118_1060_fu_2897_p0 =  (sc_lv<16>) (sext_ln1118_426_fu_4145915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1060_fu_2897_p2() {
    mul_ln1118_1060_fu_2897_p2 = (!mul_ln1118_1060_fu_2897_p0.read().is_01() || !ap_const_lv25_1FFFF68.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1060_fu_2897_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1061_fu_2910_p0() {
    mul_ln1118_1061_fu_2910_p0 =  (sc_lv<16>) (sext_ln1118_435_fu_4146647_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1061_fu_2910_p2() {
    mul_ln1118_1061_fu_2910_p2 = (!mul_ln1118_1061_fu_2910_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1061_fu_2910_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1062_fu_2952_p0() {
    mul_ln1118_1062_fu_2952_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1062_fu_2952_p2() {
    mul_ln1118_1062_fu_2952_p2 = (!mul_ln1118_1062_fu_2952_p0.read().is_01() || !ap_const_lv26_3FFF8FA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1062_fu_2952_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF8FA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1063_fu_2954_p0() {
    mul_ln1118_1063_fu_2954_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1063_fu_2954_p2() {
    mul_ln1118_1063_fu_2954_p2 = (!mul_ln1118_1063_fu_2954_p0.read().is_01() || !ap_const_lv25_97.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1063_fu_2954_p0.read()) * sc_biguint<25>(ap_const_lv25_97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1064_fu_2484_p0() {
    mul_ln1118_1064_fu_2484_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1064_fu_2484_p2() {
    mul_ln1118_1064_fu_2484_p2 = (!mul_ln1118_1064_fu_2484_p0.read().is_01() || !ap_const_lv26_3FFFD1C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1064_fu_2484_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD1C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1065_fu_2249_p0() {
    mul_ln1118_1065_fu_2249_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1065_fu_2249_p2() {
    mul_ln1118_1065_fu_2249_p2 = (!mul_ln1118_1065_fu_2249_p0.read().is_01() || !ap_const_lv26_3FFFEE5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1065_fu_2249_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1066_fu_2014_p0() {
    mul_ln1118_1066_fu_2014_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1066_fu_2014_p2() {
    mul_ln1118_1066_fu_2014_p2 = (!mul_ln1118_1066_fu_2014_p0.read().is_01() || !ap_const_lv25_8E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1066_fu_2014_p0.read()) * sc_biguint<25>(ap_const_lv25_8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1067_fu_2513_p0() {
    mul_ln1118_1067_fu_2513_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_4146639_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1067_fu_2513_p2() {
    mul_ln1118_1067_fu_2513_p2 = (!mul_ln1118_1067_fu_2513_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1067_fu_2513_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1068_fu_2276_p0() {
    mul_ln1118_1068_fu_2276_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1068_fu_2276_p2() {
    mul_ln1118_1068_fu_2276_p2 = (!mul_ln1118_1068_fu_2276_p0.read().is_01() || !ap_const_lv26_297.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1068_fu_2276_p0.read()) * sc_biguint<26>(ap_const_lv26_297);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1069_fu_3009_p0() {
    mul_ln1118_1069_fu_3009_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1069_fu_3009_p2() {
    mul_ln1118_1069_fu_3009_p2 = (!mul_ln1118_1069_fu_3009_p0.read().is_01() || !ap_const_lv26_2A2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1069_fu_3009_p0.read()) * sc_biguint<26>(ap_const_lv26_2A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1070_fu_3017_p0() {
    mul_ln1118_1070_fu_3017_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1070_fu_3017_p2() {
    mul_ln1118_1070_fu_3017_p2 = (!mul_ln1118_1070_fu_3017_p0.read().is_01() || !ap_const_lv25_DA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1070_fu_3017_p0.read()) * sc_biguint<25>(ap_const_lv25_DA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1071_fu_2788_p0() {
    mul_ln1118_1071_fu_2788_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1071_fu_2788_p2() {
    mul_ln1118_1071_fu_2788_p2 = (!mul_ln1118_1071_fu_2788_p0.read().is_01() || !ap_const_lv25_E2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1071_fu_2788_p0.read()) * sc_biguint<25>(ap_const_lv25_E2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1072_fu_3034_p0() {
    mul_ln1118_1072_fu_3034_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1072_fu_3034_p2() {
    mul_ln1118_1072_fu_3034_p2 = (!mul_ln1118_1072_fu_3034_p0.read().is_01() || !ap_const_lv26_3FFFEE7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1072_fu_3034_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1073_fu_2078_p0() {
    mul_ln1118_1073_fu_2078_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1073_fu_2078_p2() {
    mul_ln1118_1073_fu_2078_p2 = (!mul_ln1118_1073_fu_2078_p0.read().is_01() || !ap_const_lv26_3FFFE91.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1073_fu_2078_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1074_fu_2334_p0() {
    mul_ln1118_1074_fu_2334_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1074_fu_2334_p2() {
    mul_ln1118_1074_fu_2334_p2 = (!mul_ln1118_1074_fu_2334_p0.read().is_01() || !ap_const_lv26_3FFFD25.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1074_fu_2334_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1075_fu_2095_p0() {
    mul_ln1118_1075_fu_2095_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1075_fu_2095_p2() {
    mul_ln1118_1075_fu_2095_p2 = (!mul_ln1118_1075_fu_2095_p0.read().is_01() || !ap_const_lv25_1FFFF47.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1075_fu_2095_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1076_fu_2593_p0() {
    mul_ln1118_1076_fu_2593_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1076_fu_2593_p2() {
    mul_ln1118_1076_fu_2593_p2 = (!mul_ln1118_1076_fu_2593_p0.read().is_01() || !ap_const_lv26_3FFFDAC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1076_fu_2593_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1077_fu_2117_p0() {
    mul_ln1118_1077_fu_2117_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1077_fu_2117_p2() {
    mul_ln1118_1077_fu_2117_p2 = (!mul_ln1118_1077_fu_2117_p0.read().is_01() || !ap_const_lv26_130.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1077_fu_2117_p0.read()) * sc_biguint<26>(ap_const_lv26_130);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1078_fu_2126_p0() {
    mul_ln1118_1078_fu_2126_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1078_fu_2126_p2() {
    mul_ln1118_1078_fu_2126_p2 = (!mul_ln1118_1078_fu_2126_p0.read().is_01() || !ap_const_lv26_3FFFEC6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1078_fu_2126_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1079_fu_3081_p0() {
    mul_ln1118_1079_fu_3081_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1079_fu_3081_p2() {
    mul_ln1118_1079_fu_3081_p2 = (!mul_ln1118_1079_fu_3081_p0.read().is_01() || !ap_const_lv25_8B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1079_fu_3081_p0.read()) * sc_biguint<25>(ap_const_lv25_8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1080_fu_2335_p0() {
    mul_ln1118_1080_fu_2335_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_4146639_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1080_fu_2335_p2() {
    mul_ln1118_1080_fu_2335_p2 = (!mul_ln1118_1080_fu_2335_p0.read().is_01() || !ap_const_lv24_66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1080_fu_2335_p0.read()) * sc_biguint<24>(ap_const_lv24_66);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1081_fu_2487_p0() {
    mul_ln1118_1081_fu_2487_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1081_fu_2487_p2() {
    mul_ln1118_1081_fu_2487_p2 = (!mul_ln1118_1081_fu_2487_p0.read().is_01() || !ap_const_lv25_8A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1081_fu_2487_p0.read()) * sc_biguint<25>(ap_const_lv25_8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1082_fu_2183_p0() {
    mul_ln1118_1082_fu_2183_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1082_fu_2183_p2() {
    mul_ln1118_1082_fu_2183_p2 = (!mul_ln1118_1082_fu_2183_p0.read().is_01() || !ap_const_lv26_3FFFD96.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1082_fu_2183_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1083_fu_2781_p0() {
    mul_ln1118_1083_fu_2781_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1083_fu_2781_p2() {
    mul_ln1118_1083_fu_2781_p2 = (!mul_ln1118_1083_fu_2781_p0.read().is_01() || !ap_const_lv26_3FFFE45.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1083_fu_2781_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1084_fu_3090_p0() {
    mul_ln1118_1084_fu_3090_p0 =  (sc_lv<16>) (sext_ln1118_436_fu_4146654_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1084_fu_3090_p2() {
    mul_ln1118_1084_fu_3090_p2 = (!mul_ln1118_1084_fu_3090_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1084_fu_3090_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1085_fu_2932_p0() {
    mul_ln1118_1085_fu_2932_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1085_fu_2932_p2() {
    mul_ln1118_1085_fu_2932_p2 = (!mul_ln1118_1085_fu_2932_p0.read().is_01() || !ap_const_lv26_1D2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1085_fu_2932_p0.read()) * sc_biguint<26>(ap_const_lv26_1D2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1086_fu_2933_p0() {
    mul_ln1118_1086_fu_2933_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1086_fu_2933_p2() {
    mul_ln1118_1086_fu_2933_p2 = (!mul_ln1118_1086_fu_2933_p0.read().is_01() || !ap_const_lv26_20D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1086_fu_2933_p0.read()) * sc_biguint<26>(ap_const_lv26_20D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1087_fu_2934_p0() {
    mul_ln1118_1087_fu_2934_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1087_fu_2934_p2() {
    mul_ln1118_1087_fu_2934_p2 = (!mul_ln1118_1087_fu_2934_p0.read().is_01() || !ap_const_lv26_105.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1087_fu_2934_p0.read()) * sc_biguint<26>(ap_const_lv26_105);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1088_fu_2189_p0() {
    mul_ln1118_1088_fu_2189_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1088_fu_2189_p2() {
    mul_ln1118_1088_fu_2189_p2 = (!mul_ln1118_1088_fu_2189_p0.read().is_01() || !ap_const_lv26_20C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1088_fu_2189_p0.read()) * sc_biguint<26>(ap_const_lv26_20C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1089_fu_2965_p0() {
    mul_ln1118_1089_fu_2965_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1089_fu_2965_p2() {
    mul_ln1118_1089_fu_2965_p2 = (!mul_ln1118_1089_fu_2965_p0.read().is_01() || !ap_const_lv26_1CC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1089_fu_2965_p0.read()) * sc_biguint<26>(ap_const_lv26_1CC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1090_fu_2351_p0() {
    mul_ln1118_1090_fu_2351_p0 =  (sc_lv<16>) (sext_ln1118_435_fu_4146647_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1090_fu_2351_p2() {
    mul_ln1118_1090_fu_2351_p2 = (!mul_ln1118_1090_fu_2351_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1090_fu_2351_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1091_fu_2062_p0() {
    mul_ln1118_1091_fu_2062_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1091_fu_2062_p2() {
    mul_ln1118_1091_fu_2062_p2 = (!mul_ln1118_1091_fu_2062_p0.read().is_01() || !ap_const_lv25_1FFFF72.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1091_fu_2062_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1092_fu_2670_p0() {
    mul_ln1118_1092_fu_2670_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1092_fu_2670_p2() {
    mul_ln1118_1092_fu_2670_p2 = (!mul_ln1118_1092_fu_2670_p0.read().is_01() || !ap_const_lv25_C5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1092_fu_2670_p0.read()) * sc_biguint<25>(ap_const_lv25_C5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1093_fu_2726_p0() {
    mul_ln1118_1093_fu_2726_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_4146639_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1093_fu_2726_p2() {
    mul_ln1118_1093_fu_2726_p2 = (!mul_ln1118_1093_fu_2726_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1093_fu_2726_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1094_fu_2244_p0() {
    mul_ln1118_1094_fu_2244_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1094_fu_2244_p2() {
    mul_ln1118_1094_fu_2244_p2 = (!mul_ln1118_1094_fu_2244_p0.read().is_01() || !ap_const_lv26_3FFFE34.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1094_fu_2244_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1095_fu_2009_p0() {
    mul_ln1118_1095_fu_2009_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1095_fu_2009_p2() {
    mul_ln1118_1095_fu_2009_p2 = (!mul_ln1118_1095_fu_2009_p0.read().is_01() || !ap_const_lv25_BE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1095_fu_2009_p0.read()) * sc_biguint<25>(ap_const_lv25_BE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1096_fu_2987_p0() {
    mul_ln1118_1096_fu_2987_p0 =  (sc_lv<16>) (sext_ln1118_435_fu_4146647_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1096_fu_2987_p2() {
    mul_ln1118_1096_fu_2987_p2 = (!mul_ln1118_1096_fu_2987_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1096_fu_2987_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1097_fu_2025_p0() {
    mul_ln1118_1097_fu_2025_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1097_fu_2025_p2() {
    mul_ln1118_1097_fu_2025_p2 = (!mul_ln1118_1097_fu_2025_p0.read().is_01() || !ap_const_lv25_D8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1097_fu_2025_p0.read()) * sc_biguint<25>(ap_const_lv25_D8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1098_fu_2526_p0() {
    mul_ln1118_1098_fu_2526_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1098_fu_2526_p2() {
    mul_ln1118_1098_fu_2526_p2 = (!mul_ln1118_1098_fu_2526_p0.read().is_01() || !ap_const_lv26_138.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1098_fu_2526_p0.read()) * sc_biguint<26>(ap_const_lv26_138);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1099_fu_2288_p0() {
    mul_ln1118_1099_fu_2288_p0 =  (sc_lv<16>) (sext_ln1118_436_fu_4146654_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1099_fu_2288_p2() {
    mul_ln1118_1099_fu_2288_p2 = (!mul_ln1118_1099_fu_2288_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1099_fu_2288_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1100_fu_2055_p0() {
    mul_ln1118_1100_fu_2055_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1100_fu_2055_p2() {
    mul_ln1118_1100_fu_2055_p2 = (!mul_ln1118_1100_fu_2055_p0.read().is_01() || !ap_const_lv25_1FFFF46.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1100_fu_2055_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1101_fu_2550_p0() {
    mul_ln1118_1101_fu_2550_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1101_fu_2550_p2() {
    mul_ln1118_1101_fu_2550_p2 = (!mul_ln1118_1101_fu_2550_p0.read().is_01() || !ap_const_lv25_98.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1101_fu_2550_p0.read()) * sc_biguint<25>(ap_const_lv25_98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1102_fu_2072_p0() {
    mul_ln1118_1102_fu_2072_p0 =  (sc_lv<16>) (sext_ln1118_435_fu_4146647_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1102_fu_2072_p2() {
    mul_ln1118_1102_fu_2072_p2 = (!mul_ln1118_1102_fu_2072_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1102_fu_2072_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1103_fu_2327_p0() {
    mul_ln1118_1103_fu_2327_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1103_fu_2327_p2() {
    mul_ln1118_1103_fu_2327_p2 = (!mul_ln1118_1103_fu_2327_p0.read().is_01() || !ap_const_lv25_1FFFF61.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1103_fu_2327_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1104_fu_2575_p0() {
    mul_ln1118_1104_fu_2575_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1104_fu_2575_p2() {
    mul_ln1118_1104_fu_2575_p2 = (!mul_ln1118_1104_fu_2575_p0.read().is_01() || !ap_const_lv26_1BB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1104_fu_2575_p0.read()) * sc_biguint<26>(ap_const_lv26_1BB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1105_fu_3061_p0() {
    mul_ln1118_1105_fu_3061_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1105_fu_3061_p2() {
    mul_ln1118_1105_fu_3061_p2 = (!mul_ln1118_1105_fu_3061_p0.read().is_01() || !ap_const_lv26_1AA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1105_fu_3061_p0.read()) * sc_biguint<26>(ap_const_lv26_1AA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1106_fu_3068_p0() {
    mul_ln1118_1106_fu_3068_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_4146639_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1106_fu_3068_p2() {
    mul_ln1118_1106_fu_3068_p2 = (!mul_ln1118_1106_fu_3068_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1106_fu_3068_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1107_fu_2605_p0() {
    mul_ln1118_1107_fu_2605_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1107_fu_2605_p2() {
    mul_ln1118_1107_fu_2605_p2 = (!mul_ln1118_1107_fu_2605_p0.read().is_01() || !ap_const_lv26_3FFFEE1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1107_fu_2605_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1108_fu_2819_p0() {
    mul_ln1118_1108_fu_2819_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1108_fu_2819_p2() {
    mul_ln1118_1108_fu_2819_p2 = (!mul_ln1118_1108_fu_2819_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1108_fu_2819_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1109_fu_2821_p0() {
    mul_ln1118_1109_fu_2821_p0 =  (sc_lv<16>) (sext_ln1118_431_fu_4146590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1109_fu_2821_p2() {
    mul_ln1118_1109_fu_2821_p2 = (!mul_ln1118_1109_fu_2821_p0.read().is_01() || !ap_const_lv25_1FFFF1A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1109_fu_2821_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1110_fu_2225_p0() {
    mul_ln1118_1110_fu_2225_p0 =  (sc_lv<16>) (sext_ln1118_432_fu_4146609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1110_fu_2225_p2() {
    mul_ln1118_1110_fu_2225_p2 = (!mul_ln1118_1110_fu_2225_p0.read().is_01() || !ap_const_lv26_12C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1110_fu_2225_p0.read()) * sc_biguint<26>(ap_const_lv26_12C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1111_fu_2982_p0() {
    mul_ln1118_1111_fu_2982_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_4146639_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1111_fu_2982_p2() {
    mul_ln1118_1111_fu_2982_p2 = (!mul_ln1118_1111_fu_2982_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1111_fu_2982_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1112_fu_2227_p0() {
    mul_ln1118_1112_fu_2227_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1112_fu_2227_p2() {
    mul_ln1118_1112_fu_2227_p2 = (!mul_ln1118_1112_fu_2227_p0.read().is_01() || !ap_const_lv26_199.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1112_fu_2227_p0.read()) * sc_biguint<26>(ap_const_lv26_199);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1113_fu_2984_p0() {
    mul_ln1118_1113_fu_2984_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1113_fu_2984_p2() {
    mul_ln1118_1113_fu_2984_p2 = (!mul_ln1118_1113_fu_2984_p0.read().is_01() || !ap_const_lv26_3FFF7EB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1113_fu_2984_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF7EB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1114_fu_2831_p0() {
    mul_ln1118_1114_fu_2831_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_4147442_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1114_fu_2831_p2() {
    mul_ln1118_1114_fu_2831_p2 = (!mul_ln1118_1114_fu_2831_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1114_fu_2831_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1115_fu_2389_p0() {
    mul_ln1118_1115_fu_2389_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1115_fu_2389_p2() {
    mul_ln1118_1115_fu_2389_p2 = (!mul_ln1118_1115_fu_2389_p0.read().is_01() || !ap_const_lv26_5CE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1115_fu_2389_p0.read()) * sc_biguint<26>(ap_const_lv26_5CE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1116_fu_2231_p0() {
    mul_ln1118_1116_fu_2231_p0 =  (sc_lv<16>) (sext_ln1118_448_fu_4147434_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1116_fu_2231_p2() {
    mul_ln1118_1116_fu_2231_p2 = (!mul_ln1118_1116_fu_2231_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1116_fu_2231_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1117_fu_2234_p0() {
    mul_ln1118_1117_fu_2234_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1117_fu_2234_p2() {
    mul_ln1118_1117_fu_2234_p2 = (!mul_ln1118_1117_fu_2234_p0.read().is_01() || !ap_const_lv26_3FFF21B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1117_fu_2234_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF21B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1118_fu_2099_p0() {
    mul_ln1118_1118_fu_2099_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1118_fu_2099_p2() {
    mul_ln1118_1118_fu_2099_p2 = (!mul_ln1118_1118_fu_2099_p0.read().is_01() || !ap_const_lv26_1C4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1118_fu_2099_p0.read()) * sc_biguint<26>(ap_const_lv26_1C4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1119_fu_2707_p0() {
    mul_ln1118_1119_fu_2707_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1119_fu_2707_p2() {
    mul_ln1118_1119_fu_2707_p2 = (!mul_ln1118_1119_fu_2707_p0.read().is_01() || !ap_const_lv26_3FFFADA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1119_fu_2707_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFADA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1120_fu_2921_p0() {
    mul_ln1118_1120_fu_2921_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1120_fu_2921_p2() {
    mul_ln1118_1120_fu_2921_p2 = (!mul_ln1118_1120_fu_2921_p0.read().is_01() || !ap_const_lv26_360.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1120_fu_2921_p0.read()) * sc_biguint<26>(ap_const_lv26_360);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1121_fu_2631_p0() {
    mul_ln1118_1121_fu_2631_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1121_fu_2631_p2() {
    mul_ln1118_1121_fu_2631_p2 = (!mul_ln1118_1121_fu_2631_p0.read().is_01() || !ap_const_lv26_2CB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1121_fu_2631_p0.read()) * sc_biguint<26>(ap_const_lv26_2CB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1122_fu_2331_p0() {
    mul_ln1118_1122_fu_2331_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1122_fu_2331_p2() {
    mul_ln1118_1122_fu_2331_p2 = (!mul_ln1118_1122_fu_2331_p0.read().is_01() || !ap_const_lv26_117.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1122_fu_2331_p0.read()) * sc_biguint<26>(ap_const_lv26_117);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1123_fu_2498_p0() {
    mul_ln1118_1123_fu_2498_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1123_fu_2498_p2() {
    mul_ln1118_1123_fu_2498_p2 = (!mul_ln1118_1123_fu_2498_p0.read().is_01() || !ap_const_lv25_1FFFF4D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1123_fu_2498_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1124_fu_2019_p0() {
    mul_ln1118_1124_fu_2019_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1124_fu_2019_p2() {
    mul_ln1118_1124_fu_2019_p2 = (!mul_ln1118_1124_fu_2019_p0.read().is_01() || !ap_const_lv26_3FFFEA9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1124_fu_2019_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1125_fu_2274_p0() {
    mul_ln1118_1125_fu_2274_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1125_fu_2274_p2() {
    mul_ln1118_1125_fu_2274_p2 = (!mul_ln1118_1125_fu_2274_p0.read().is_01() || !ap_const_lv26_1CB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1125_fu_2274_p0.read()) * sc_biguint<26>(ap_const_lv26_1CB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1126_fu_2770_p0() {
    mul_ln1118_1126_fu_2770_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1126_fu_2770_p2() {
    mul_ln1118_1126_fu_2770_p2 = (!mul_ln1118_1126_fu_2770_p0.read().is_01() || !ap_const_lv26_3FFF8F2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1126_fu_2770_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF8F2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1127_fu_2537_p0() {
    mul_ln1118_1127_fu_2537_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1127_fu_2537_p2() {
    mul_ln1118_1127_fu_2537_p2 = (!mul_ln1118_1127_fu_2537_p0.read().is_01() || !ap_const_lv26_3FFF368.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1127_fu_2537_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF368);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1128_fu_2786_p0() {
    mul_ln1118_1128_fu_2786_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1128_fu_2786_p2() {
    mul_ln1118_1128_fu_2786_p2 = (!mul_ln1118_1128_fu_2786_p0.read().is_01() || !ap_const_lv25_1FFFF71.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1128_fu_2786_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1129_fu_2310_p0() {
    mul_ln1118_1129_fu_2310_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1129_fu_2310_p2() {
    mul_ln1118_1129_fu_2310_p2 = (!mul_ln1118_1129_fu_2310_p0.read().is_01() || !ap_const_lv26_337.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1129_fu_2310_p0.read()) * sc_biguint<26>(ap_const_lv26_337);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1130_fu_2561_p0() {
    mul_ln1118_1130_fu_2561_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1130_fu_2561_p2() {
    mul_ln1118_1130_fu_2561_p2 = (!mul_ln1118_1130_fu_2561_p0.read().is_01() || !ap_const_lv26_3FFF93A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1130_fu_2561_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF93A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1131_fu_2809_p0() {
    mul_ln1118_1131_fu_2809_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1131_fu_2809_p2() {
    mul_ln1118_1131_fu_2809_p2 = (!mul_ln1118_1131_fu_2809_p0.read().is_01() || !ap_const_lv26_1A8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1131_fu_2809_p0.read()) * sc_biguint<26>(ap_const_lv26_1A8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1132_fu_3057_p0() {
    mul_ln1118_1132_fu_3057_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1132_fu_3057_p2() {
    mul_ln1118_1132_fu_3057_p2 = (!mul_ln1118_1132_fu_3057_p0.read().is_01() || !ap_const_lv25_1FFFF3F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1132_fu_3057_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1133_fu_2102_p0() {
    mul_ln1118_1133_fu_2102_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1133_fu_2102_p2() {
    mul_ln1118_1133_fu_2102_p2 = (!mul_ln1118_1133_fu_2102_p0.read().is_01() || !ap_const_lv25_1FFFF5F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1133_fu_2102_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1134_fu_2598_p0() {
    mul_ln1118_1134_fu_2598_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1134_fu_2598_p2() {
    mul_ln1118_1134_fu_2598_p2 = (!mul_ln1118_1134_fu_2598_p0.read().is_01() || !ap_const_lv26_3FFFD17.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1134_fu_2598_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1135_fu_2367_p0() {
    mul_ln1118_1135_fu_2367_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1135_fu_2367_p2() {
    mul_ln1118_1135_fu_2367_p2 = (!mul_ln1118_1135_fu_2367_p0.read().is_01() || !ap_const_lv26_3FFFBEE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1135_fu_2367_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFBEE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1136_fu_2376_p0() {
    mul_ln1118_1136_fu_2376_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1136_fu_2376_p2() {
    mul_ln1118_1136_fu_2376_p2 = (!mul_ln1118_1136_fu_2376_p0.read().is_01() || !ap_const_lv25_BE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1136_fu_2376_p0.read()) * sc_biguint<25>(ap_const_lv25_BE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1137_fu_2143_p0() {
    mul_ln1118_1137_fu_2143_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1137_fu_2143_p2() {
    mul_ln1118_1137_fu_2143_p2 = (!mul_ln1118_1137_fu_2143_p0.read().is_01() || !ap_const_lv26_305.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1137_fu_2143_p0.read()) * sc_biguint<26>(ap_const_lv26_305);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1138_fu_1983_p0() {
    mul_ln1118_1138_fu_1983_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1138_fu_1983_p2() {
    mul_ln1118_1138_fu_1983_p2 = (!mul_ln1118_1138_fu_1983_p0.read().is_01() || !ap_const_lv26_238.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1138_fu_1983_p0.read()) * sc_biguint<26>(ap_const_lv26_238);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1139_fu_3024_p0() {
    mul_ln1118_1139_fu_3024_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1139_fu_3024_p2() {
    mul_ln1118_1139_fu_3024_p2 = (!mul_ln1118_1139_fu_3024_p0.read().is_01() || !ap_const_lv25_1FFFF54.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1139_fu_3024_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1140_fu_2271_p0() {
    mul_ln1118_1140_fu_2271_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1140_fu_2271_p2() {
    mul_ln1118_1140_fu_2271_p2 = (!mul_ln1118_1140_fu_2271_p0.read().is_01() || !ap_const_lv26_3FFFA65.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1140_fu_2271_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFA65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1141_fu_2297_p0() {
    mul_ln1118_1141_fu_2297_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1141_fu_2297_p2() {
    mul_ln1118_1141_fu_2297_p2 = (!mul_ln1118_1141_fu_2297_p0.read().is_01() || !ap_const_lv26_3FFFE89.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1141_fu_2297_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1142_fu_3027_p0() {
    mul_ln1118_1142_fu_3027_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1142_fu_3027_p2() {
    mul_ln1118_1142_fu_3027_p2 = (!mul_ln1118_1142_fu_3027_p0.read().is_01() || !ap_const_lv26_11D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1142_fu_3027_p0.read()) * sc_biguint<26>(ap_const_lv26_11D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1143_fu_2275_p0() {
    mul_ln1118_1143_fu_2275_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1143_fu_2275_p2() {
    mul_ln1118_1143_fu_2275_p2 = (!mul_ln1118_1143_fu_2275_p0.read().is_01() || !ap_const_lv26_329.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1143_fu_2275_p0.read()) * sc_biguint<26>(ap_const_lv26_329);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1144_fu_2432_p0() {
    mul_ln1118_1144_fu_2432_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1144_fu_2432_p2() {
    mul_ln1118_1144_fu_2432_p2 = (!mul_ln1118_1144_fu_2432_p0.read().is_01() || !ap_const_lv26_348.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1144_fu_2432_p0.read()) * sc_biguint<26>(ap_const_lv26_348);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1145_fu_2277_p0() {
    mul_ln1118_1145_fu_2277_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1145_fu_2277_p2() {
    mul_ln1118_1145_fu_2277_p2 = (!mul_ln1118_1145_fu_2277_p0.read().is_01() || !ap_const_lv26_3FFFC72.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1145_fu_2277_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFC72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1146_fu_2434_p0() {
    mul_ln1118_1146_fu_2434_p0 =  (sc_lv<16>) (sext_ln1118_448_fu_4147434_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1146_fu_2434_p2() {
    mul_ln1118_1146_fu_2434_p2 = (!mul_ln1118_1146_fu_2434_p0.read().is_01() || !ap_const_lv24_66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1146_fu_2434_p0.read()) * sc_biguint<24>(ap_const_lv24_66);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1147_fu_2885_p0() {
    mul_ln1118_1147_fu_2885_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1147_fu_2885_p2() {
    mul_ln1118_1147_fu_2885_p2 = (!mul_ln1118_1147_fu_2885_p0.read().is_01() || !ap_const_lv26_12C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1147_fu_2885_p0.read()) * sc_biguint<26>(ap_const_lv26_12C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1148_fu_1994_p0() {
    mul_ln1118_1148_fu_1994_p0 =  (sc_lv<16>) (sext_ln1118_448_fu_4147434_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1148_fu_1994_p2() {
    mul_ln1118_1148_fu_1994_p2 = (!mul_ln1118_1148_fu_1994_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1148_fu_1994_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1149_fu_2284_p0() {
    mul_ln1118_1149_fu_2284_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1149_fu_2284_p2() {
    mul_ln1118_1149_fu_2284_p2 = (!mul_ln1118_1149_fu_2284_p0.read().is_01() || !ap_const_lv25_96.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1149_fu_2284_p0.read()) * sc_biguint<25>(ap_const_lv25_96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1150_fu_2239_p0() {
    mul_ln1118_1150_fu_2239_p0 =  (sc_lv<16>) (sext_ln1118_448_fu_4147434_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1150_fu_2239_p2() {
    mul_ln1118_1150_fu_2239_p2 = (!mul_ln1118_1150_fu_2239_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1150_fu_2239_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1151_fu_2638_p0() {
    mul_ln1118_1151_fu_2638_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1151_fu_2638_p2() {
    mul_ln1118_1151_fu_2638_p2 = (!mul_ln1118_1151_fu_2638_p0.read().is_01() || !ap_const_lv26_107.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1151_fu_2638_p0.read()) * sc_biguint<26>(ap_const_lv26_107);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1152_fu_2738_p0() {
    mul_ln1118_1152_fu_2738_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1152_fu_2738_p2() {
    mul_ln1118_1152_fu_2738_p2 = (!mul_ln1118_1152_fu_2738_p0.read().is_01() || !ap_const_lv26_3FFFE67.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1152_fu_2738_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1153_fu_2745_p0() {
    mul_ln1118_1153_fu_2745_p0 =  (sc_lv<16>) (sext_ln1118_448_fu_4147434_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1153_fu_2745_p2() {
    mul_ln1118_1153_fu_2745_p2 = (!mul_ln1118_1153_fu_2745_p0.read().is_01() || !ap_const_lv24_5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1153_fu_2745_p0.read()) * sc_biguint<24>(ap_const_lv24_5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1154_fu_2753_p0() {
    mul_ln1118_1154_fu_2753_p0 =  (sc_lv<16>) (sext_ln1118_447_fu_4147429_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1154_fu_2753_p2() {
    mul_ln1118_1154_fu_2753_p2 = (!mul_ln1118_1154_fu_2753_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1154_fu_2753_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1155_fu_3001_p0() {
    mul_ln1118_1155_fu_3001_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1155_fu_3001_p2() {
    mul_ln1118_1155_fu_3001_p2 = (!mul_ln1118_1155_fu_3001_p0.read().is_01() || !ap_const_lv26_17F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1155_fu_3001_p0.read()) * sc_biguint<26>(ap_const_lv26_17F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1156_fu_2286_p0() {
    mul_ln1118_1156_fu_2286_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1156_fu_2286_p2() {
    mul_ln1118_1156_fu_2286_p2 = (!mul_ln1118_1156_fu_2286_p0.read().is_01() || !ap_const_lv26_3FFFE59.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1156_fu_2286_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1157_fu_2053_p0() {
    mul_ln1118_1157_fu_2053_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1157_fu_2053_p2() {
    mul_ln1118_1157_fu_2053_p2 = (!mul_ln1118_1157_fu_2053_p0.read().is_01() || !ap_const_lv25_C4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1157_fu_2053_p0.read()) * sc_biguint<25>(ap_const_lv25_C4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1158_fu_2548_p0() {
    mul_ln1118_1158_fu_2548_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_4147377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1158_fu_2548_p2() {
    mul_ln1118_1158_fu_2548_p2 = (!mul_ln1118_1158_fu_2548_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1158_fu_2548_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1159_fu_2312_p0() {
    mul_ln1118_1159_fu_2312_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_4147442_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1159_fu_2312_p2() {
    mul_ln1118_1159_fu_2312_p2 = (!mul_ln1118_1159_fu_2312_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1159_fu_2312_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1160_fu_3044_p0() {
    mul_ln1118_1160_fu_3044_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_4147442_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1160_fu_3044_p2() {
    mul_ln1118_1160_fu_3044_p2 = (!mul_ln1118_1160_fu_3044_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1160_fu_3044_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1161_fu_2811_p0() {
    mul_ln1118_1161_fu_2811_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1161_fu_2811_p2() {
    mul_ln1118_1161_fu_2811_p2 = (!mul_ln1118_1161_fu_2811_p0.read().is_01() || !ap_const_lv26_3FFFED2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1161_fu_2811_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1162_fu_2028_p0() {
    mul_ln1118_1162_fu_2028_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1162_fu_2028_p2() {
    mul_ln1118_1162_fu_2028_p2 = (!mul_ln1118_1162_fu_2028_p0.read().is_01() || !ap_const_lv26_17A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1162_fu_2028_p0.read()) * sc_biguint<26>(ap_const_lv26_17A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1163_fu_2833_p0() {
    mul_ln1118_1163_fu_2833_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1163_fu_2833_p2() {
    mul_ln1118_1163_fu_2833_p2 = (!mul_ln1118_1163_fu_2833_p0.read().is_01() || !ap_const_lv26_21D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1163_fu_2833_p0.read()) * sc_biguint<26>(ap_const_lv26_21D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1164_fu_2135_p0() {
    mul_ln1118_1164_fu_2135_p0 =  (sc_lv<16>) (sext_ln1118_447_fu_4147429_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1164_fu_2135_p2() {
    mul_ln1118_1164_fu_2135_p2 = (!mul_ln1118_1164_fu_2135_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1164_fu_2135_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1165_fu_2611_p0() {
    mul_ln1118_1165_fu_2611_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1165_fu_2611_p2() {
    mul_ln1118_1165_fu_2611_p2 = (!mul_ln1118_1165_fu_2611_p0.read().is_01() || !ap_const_lv26_177.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1165_fu_2611_p0.read()) * sc_biguint<26>(ap_const_lv26_177);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1166_fu_2863_p0() {
    mul_ln1118_1166_fu_2863_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1166_fu_2863_p2() {
    mul_ln1118_1166_fu_2863_p2 = (!mul_ln1118_1166_fu_2863_p0.read().is_01() || !ap_const_lv26_127.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1166_fu_2863_p0.read()) * sc_biguint<26>(ap_const_lv26_127);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1167_fu_2317_p0() {
    mul_ln1118_1167_fu_2317_p0 =  (sc_lv<16>) (sext_ln1118_446_fu_4147389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1167_fu_2317_p2() {
    mul_ln1118_1167_fu_2317_p2 = (!mul_ln1118_1167_fu_2317_p0.read().is_01() || !ap_const_lv26_3FFFED6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1167_fu_2317_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1168_fu_2318_p0() {
    mul_ln1118_1168_fu_2318_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1168_fu_2318_p2() {
    mul_ln1118_1168_fu_2318_p2 = (!mul_ln1118_1168_fu_2318_p0.read().is_01() || !ap_const_lv26_3FFFECF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1168_fu_2318_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1169_fu_2190_p0() {
    mul_ln1118_1169_fu_2190_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1169_fu_2190_p2() {
    mul_ln1118_1169_fu_2190_p2 = (!mul_ln1118_1169_fu_2190_p0.read().is_01() || !ap_const_lv26_3FFFADB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1169_fu_2190_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFADB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1170_fu_2474_p0() {
    mul_ln1118_1170_fu_2474_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1170_fu_2474_p2() {
    mul_ln1118_1170_fu_2474_p2 = (!mul_ln1118_1170_fu_2474_p0.read().is_01() || !ap_const_lv26_40B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1170_fu_2474_p0.read()) * sc_biguint<26>(ap_const_lv26_40B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1171_fu_2325_p0() {
    mul_ln1118_1171_fu_2325_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1171_fu_2325_p2() {
    mul_ln1118_1171_fu_2325_p2 = (!mul_ln1118_1171_fu_2325_p0.read().is_01() || !ap_const_lv26_3FFFE49.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1171_fu_2325_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1172_fu_3075_p0() {
    mul_ln1118_1172_fu_3075_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1172_fu_3075_p2() {
    mul_ln1118_1172_fu_3075_p2 = (!mul_ln1118_1172_fu_3075_p0.read().is_01() || !ap_const_lv26_3FFFEE8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1172_fu_3075_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1173_fu_3076_p0() {
    mul_ln1118_1173_fu_3076_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1173_fu_3076_p2() {
    mul_ln1118_1173_fu_3076_p2 = (!mul_ln1118_1173_fu_3076_p0.read().is_01() || !ap_const_lv26_3FFFE59.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1173_fu_3076_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1174_fu_3077_p0() {
    mul_ln1118_1174_fu_3077_p0 =  (sc_lv<16>) (sext_ln1118_461_fu_4148196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1174_fu_3077_p2() {
    mul_ln1118_1174_fu_3077_p2 = (!mul_ln1118_1174_fu_3077_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1174_fu_3077_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1175_fu_2332_p0() {
    mul_ln1118_1175_fu_2332_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1175_fu_2332_p2() {
    mul_ln1118_1175_fu_2332_p2 = (!mul_ln1118_1175_fu_2332_p0.read().is_01() || !ap_const_lv26_42E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1175_fu_2332_p0.read()) * sc_biguint<26>(ap_const_lv26_42E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1176_fu_2333_p0() {
    mul_ln1118_1176_fu_2333_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1176_fu_2333_p2() {
    mul_ln1118_1176_fu_2333_p2 = (!mul_ln1118_1176_fu_2333_p0.read().is_01() || !ap_const_lv26_2B8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1176_fu_2333_p0.read()) * sc_biguint<26>(ap_const_lv26_2B8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1177_fu_2485_p0() {
    mul_ln1118_1177_fu_2485_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1177_fu_2485_p2() {
    mul_ln1118_1177_fu_2485_p2 = (!mul_ln1118_1177_fu_2485_p0.read().is_01() || !ap_const_lv26_3FFFD3E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1177_fu_2485_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD3E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1178_fu_2486_p0() {
    mul_ln1118_1178_fu_2486_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1178_fu_2486_p2() {
    mul_ln1118_1178_fu_2486_p2 = (!mul_ln1118_1178_fu_2486_p0.read().is_01() || !ap_const_lv25_1FFFF79.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1178_fu_2486_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1179_fu_2291_p0() {
    mul_ln1118_1179_fu_2291_p0 =  (sc_lv<16>) (sext_ln1118_461_fu_4148196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1179_fu_2291_p2() {
    mul_ln1118_1179_fu_2291_p2 = (!mul_ln1118_1179_fu_2291_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1179_fu_2291_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1180_fu_2895_p0() {
    mul_ln1118_1180_fu_2895_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1180_fu_2895_p2() {
    mul_ln1118_1180_fu_2895_p2 = (!mul_ln1118_1180_fu_2895_p0.read().is_01() || !ap_const_lv26_3FFFEF3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1180_fu_2895_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1181_fu_2295_p0() {
    mul_ln1118_1181_fu_2295_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1181_fu_2295_p2() {
    mul_ln1118_1181_fu_2295_p2 = (!mul_ln1118_1181_fu_2295_p0.read().is_01() || !ap_const_lv26_3FFFE90.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1181_fu_2295_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE90);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1182_fu_2516_p0() {
    mul_ln1118_1182_fu_2516_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1182_fu_2516_p2() {
    mul_ln1118_1182_fu_2516_p2 = (!mul_ln1118_1182_fu_2516_p0.read().is_01() || !ap_const_lv26_3FFFD87.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1182_fu_2516_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1183_fu_3004_p0() {
    mul_ln1118_1183_fu_3004_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1183_fu_3004_p2() {
    mul_ln1118_1183_fu_3004_p2 = (!mul_ln1118_1183_fu_3004_p0.read().is_01() || !ap_const_lv25_97.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1183_fu_3004_p0.read()) * sc_biguint<25>(ap_const_lv25_97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1184_fu_2535_p0() {
    mul_ln1118_1184_fu_2535_p0 =  (sc_lv<16>) (sext_ln1118_461_fu_4148196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1184_fu_2535_p2() {
    mul_ln1118_1184_fu_2535_p2 = (!mul_ln1118_1184_fu_2535_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1184_fu_2535_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1185_fu_2299_p0() {
    mul_ln1118_1185_fu_2299_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1185_fu_2299_p2() {
    mul_ln1118_1185_fu_2299_p2 = (!mul_ln1118_1185_fu_2299_p0.read().is_01() || !ap_const_lv26_152.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1185_fu_2299_p0.read()) * sc_biguint<26>(ap_const_lv26_152);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1186_fu_2065_p0() {
    mul_ln1118_1186_fu_2065_p0 =  (sc_lv<16>) (sext_ln1118_461_fu_4148196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1186_fu_2065_p2() {
    mul_ln1118_1186_fu_2065_p2 = (!mul_ln1118_1186_fu_2065_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1186_fu_2065_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1187_fu_2074_p0() {
    mul_ln1118_1187_fu_2074_p0 =  (sc_lv<16>) (sext_ln1118_461_fu_4148196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1187_fu_2074_p2() {
    mul_ln1118_1187_fu_2074_p2 = (!mul_ln1118_1187_fu_2074_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1187_fu_2074_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1188_fu_3047_p0() {
    mul_ln1118_1188_fu_3047_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1188_fu_3047_p2() {
    mul_ln1118_1188_fu_3047_p2 = (!mul_ln1118_1188_fu_3047_p0.read().is_01() || !ap_const_lv26_3FFFEDF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1188_fu_3047_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1189_fu_2338_p0() {
    mul_ln1118_1189_fu_2338_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1189_fu_2338_p2() {
    mul_ln1118_1189_fu_2338_p2 = (!mul_ln1118_1189_fu_2338_p0.read().is_01() || !ap_const_lv25_CE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1189_fu_2338_p0.read()) * sc_biguint<25>(ap_const_lv25_CE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1190_fu_2349_p0() {
    mul_ln1118_1190_fu_2349_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1190_fu_2349_p2() {
    mul_ln1118_1190_fu_2349_p2 = (!mul_ln1118_1190_fu_2349_p0.read().is_01() || !ap_const_lv25_1FFFF30.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1190_fu_2349_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1191_fu_3069_p0() {
    mul_ln1118_1191_fu_3069_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1191_fu_3069_p2() {
    mul_ln1118_1191_fu_3069_p2 = (!mul_ln1118_1191_fu_3069_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1191_fu_3069_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1192_fu_3079_p0() {
    mul_ln1118_1192_fu_3079_p0 =  (sc_lv<16>) (sext_ln1118_460_fu_4148188_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1192_fu_3079_p2() {
    mul_ln1118_1192_fu_3079_p2 = (!mul_ln1118_1192_fu_3079_p0.read().is_01() || !ap_const_lv24_FFFF91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1192_fu_3079_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1193_fu_2129_p0() {
    mul_ln1118_1193_fu_2129_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1193_fu_2129_p2() {
    mul_ln1118_1193_fu_2129_p2 = (!mul_ln1118_1193_fu_2129_p0.read().is_01() || !ap_const_lv26_132.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1193_fu_2129_p0.read()) * sc_biguint<26>(ap_const_lv26_132);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1194_fu_2139_p0() {
    mul_ln1118_1194_fu_2139_p0 =  (sc_lv<16>) (sext_ln1118_461_fu_4148196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1194_fu_2139_p2() {
    mul_ln1118_1194_fu_2139_p2 = (!mul_ln1118_1194_fu_2139_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1194_fu_2139_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1195_fu_2148_p0() {
    mul_ln1118_1195_fu_2148_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1195_fu_2148_p2() {
    mul_ln1118_1195_fu_2148_p2 = (!mul_ln1118_1195_fu_2148_p0.read().is_01() || !ap_const_lv26_15B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1195_fu_2148_p0.read()) * sc_biguint<26>(ap_const_lv26_15B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1196_fu_3122_p0() {
    mul_ln1118_1196_fu_3122_p0 =  (sc_lv<16>) (sext_ln1118_460_fu_4148188_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1196_fu_3122_p2() {
    mul_ln1118_1196_fu_3122_p2 = (!mul_ln1118_1196_fu_3122_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1196_fu_3122_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1197_fu_3123_p0() {
    mul_ln1118_1197_fu_3123_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1197_fu_3123_p2() {
    mul_ln1118_1197_fu_3123_p2 = (!mul_ln1118_1197_fu_3123_p0.read().is_01() || !ap_const_lv25_1FFFF05.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1197_fu_3123_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF05);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1198_fu_3124_p0() {
    mul_ln1118_1198_fu_3124_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1198_fu_3124_p2() {
    mul_ln1118_1198_fu_3124_p2 = (!mul_ln1118_1198_fu_3124_p0.read().is_01() || !ap_const_lv26_131.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1198_fu_3124_p0.read()) * sc_biguint<26>(ap_const_lv26_131);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1199_fu_2528_p0() {
    mul_ln1118_1199_fu_2528_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1199_fu_2528_p2() {
    mul_ln1118_1199_fu_2528_p2 = (!mul_ln1118_1199_fu_2528_p0.read().is_01() || !ap_const_lv26_3FFFED0.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1199_fu_2528_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1200_fu_2375_p0() {
    mul_ln1118_1200_fu_2375_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1200_fu_2375_p2() {
    mul_ln1118_1200_fu_2375_p2 = (!mul_ln1118_1200_fu_2375_p0.read().is_01() || !ap_const_lv26_11E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1200_fu_2375_p0.read()) * sc_biguint<26>(ap_const_lv26_11E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1201_fu_3127_p0() {
    mul_ln1118_1201_fu_3127_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1201_fu_3127_p2() {
    mul_ln1118_1201_fu_3127_p2 = (!mul_ln1118_1201_fu_3127_p0.read().is_01() || !ap_const_lv25_1FFFF16.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1201_fu_3127_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1202_fu_3128_p0() {
    mul_ln1118_1202_fu_3128_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1202_fu_3128_p2() {
    mul_ln1118_1202_fu_3128_p2 = (!mul_ln1118_1202_fu_3128_p0.read().is_01() || !ap_const_lv26_1C4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1202_fu_3128_p0.read()) * sc_biguint<26>(ap_const_lv26_1C4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1203_fu_2976_p0() {
    mul_ln1118_1203_fu_2976_p0 =  (sc_lv<16>) (sext_ln1118_460_fu_4148188_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1203_fu_2976_p2() {
    mul_ln1118_1203_fu_2976_p2 = (!mul_ln1118_1203_fu_2976_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1203_fu_2976_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1204_fu_2977_p0() {
    mul_ln1118_1204_fu_2977_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1204_fu_2977_p2() {
    mul_ln1118_1204_fu_2977_p2 = (!mul_ln1118_1204_fu_2977_p0.read().is_01() || !ap_const_lv25_C7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1204_fu_2977_p0.read()) * sc_biguint<25>(ap_const_lv25_C7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1205_fu_3132_p0() {
    mul_ln1118_1205_fu_3132_p0 =  (sc_lv<16>) (sext_ln1118_461_fu_4148196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1205_fu_3132_p2() {
    mul_ln1118_1205_fu_3132_p2 = (!mul_ln1118_1205_fu_3132_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1205_fu_3132_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1206_fu_3133_p0() {
    mul_ln1118_1206_fu_3133_p0 =  (sc_lv<16>) (sext_ln1118_459_fu_4148164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1206_fu_3133_p2() {
    mul_ln1118_1206_fu_3133_p2 = (!mul_ln1118_1206_fu_3133_p0.read().is_01() || !ap_const_lv26_134.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1206_fu_3133_p0.read()) * sc_biguint<26>(ap_const_lv26_134);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1207_fu_3134_p0() {
    mul_ln1118_1207_fu_3134_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1207_fu_3134_p2() {
    mul_ln1118_1207_fu_3134_p2 = (!mul_ln1118_1207_fu_3134_p0.read().is_01() || !ap_const_lv25_1FFFF39.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1207_fu_3134_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF39);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1208_fu_2298_p0() {
    mul_ln1118_1208_fu_2298_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1208_fu_2298_p2() {
    mul_ln1118_1208_fu_2298_p2 = (!mul_ln1118_1208_fu_2298_p0.read().is_01() || !ap_const_lv25_1FFFF69.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1208_fu_2298_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1209_fu_1951_p0() {
    mul_ln1118_1209_fu_1951_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1209_fu_1951_p2() {
    mul_ln1118_1209_fu_1951_p2 = (!mul_ln1118_1209_fu_1951_p0.read().is_01() || !ap_const_lv25_A5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1209_fu_1951_p0.read()) * sc_biguint<25>(ap_const_lv25_A5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1210_fu_1999_p0() {
    mul_ln1118_1210_fu_1999_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1210_fu_1999_p2() {
    mul_ln1118_1210_fu_1999_p2 = (!mul_ln1118_1210_fu_1999_p0.read().is_01() || !ap_const_lv25_1FFFF7A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1210_fu_1999_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1211_fu_2285_p0() {
    mul_ln1118_1211_fu_2285_p0 =  (sc_lv<16>) (sext_ln1118_460_fu_4148188_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1211_fu_2285_p2() {
    mul_ln1118_1211_fu_2285_p2 = (!mul_ln1118_1211_fu_2285_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1211_fu_2285_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1212_fu_2518_p0() {
    mul_ln1118_1212_fu_2518_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1212_fu_2518_p2() {
    mul_ln1118_1212_fu_2518_p2 = (!mul_ln1118_1212_fu_2518_p0.read().is_01() || !ap_const_lv25_9D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1212_fu_2518_p0.read()) * sc_biguint<25>(ap_const_lv25_9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1213_fu_2040_p0() {
    mul_ln1118_1213_fu_2040_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1213_fu_2040_p2() {
    mul_ln1118_1213_fu_2040_p2 = (!mul_ln1118_1213_fu_2040_p0.read().is_01() || !ap_const_lv25_99.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1213_fu_2040_p0.read()) * sc_biguint<25>(ap_const_lv25_99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1214_fu_2778_p0() {
    mul_ln1118_1214_fu_2778_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1214_fu_2778_p2() {
    mul_ln1118_1214_fu_2778_p2 = (!mul_ln1118_1214_fu_2778_p0.read().is_01() || !ap_const_lv25_8D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1214_fu_2778_p0.read()) * sc_biguint<25>(ap_const_lv25_8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1215_fu_2302_p0() {
    mul_ln1118_1215_fu_2302_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_4148145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1215_fu_2302_p2() {
    mul_ln1118_1215_fu_2302_p2 = (!mul_ln1118_1215_fu_2302_p0.read().is_01() || !ap_const_lv25_1FFFF6D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1215_fu_2302_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1216_fu_2067_p0() {
    mul_ln1118_1216_fu_2067_p0 =  (sc_lv<16>) (sext_ln1118_460_fu_4148188_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1216_fu_2067_p2() {
    mul_ln1118_1216_fu_2067_p2 = (!mul_ln1118_1216_fu_2067_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1216_fu_2067_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1217_fu_2818_p0() {
    mul_ln1118_1217_fu_2818_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1217_fu_2818_p2() {
    mul_ln1118_1217_fu_2818_p2 = (!mul_ln1118_1217_fu_2818_p0.read().is_01() || !ap_const_lv26_3FFFB8D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1217_fu_2818_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFB8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1218_fu_2592_p0() {
    mul_ln1118_1218_fu_2592_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1218_fu_2592_p2() {
    mul_ln1118_1218_fu_2592_p2 = (!mul_ln1118_1218_fu_2592_p0.read().is_01() || !ap_const_lv26_127.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1218_fu_2592_p0.read()) * sc_biguint<26>(ap_const_lv26_127);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1219_fu_2599_p0() {
    mul_ln1118_1219_fu_2599_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1219_fu_2599_p2() {
    mul_ln1118_1219_fu_2599_p2 = (!mul_ln1118_1219_fu_2599_p0.read().is_01() || !ap_const_lv26_3FFFD43.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1219_fu_2599_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1220_fu_2827_p0() {
    mul_ln1118_1220_fu_2827_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1220_fu_2827_p2() {
    mul_ln1118_1220_fu_2827_p2 = (!mul_ln1118_1220_fu_2827_p0.read().is_01() || !ap_const_lv26_3FFFBD7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1220_fu_2827_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFBD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1221_fu_2113_p0() {
    mul_ln1118_1221_fu_2113_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1221_fu_2113_p2() {
    mul_ln1118_1221_fu_2113_p2 = (!mul_ln1118_1221_fu_2113_p0.read().is_01() || !ap_const_lv26_3FFFD99.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1221_fu_2113_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1222_fu_2851_p0() {
    mul_ln1118_1222_fu_2851_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1222_fu_2851_p2() {
    mul_ln1118_1222_fu_2851_p2 = (!mul_ln1118_1222_fu_2851_p0.read().is_01() || !ap_const_lv25_9E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1222_fu_2851_p0.read()) * sc_biguint<25>(ap_const_lv25_9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1223_fu_3093_p0() {
    mul_ln1118_1223_fu_3093_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_4148974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1223_fu_3093_p2() {
    mul_ln1118_1223_fu_3093_p2 = (!mul_ln1118_1223_fu_3093_p0.read().is_01() || !ap_const_lv24_FFFF95.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1223_fu_3093_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1224_fu_3101_p0() {
    mul_ln1118_1224_fu_3101_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1224_fu_3101_p2() {
    mul_ln1118_1224_fu_3101_p2 = (!mul_ln1118_1224_fu_3101_p0.read().is_01() || !ap_const_lv26_2DA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1224_fu_3101_p0.read()) * sc_biguint<26>(ap_const_lv26_2DA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1225_fu_2152_p0() {
    mul_ln1118_1225_fu_2152_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1225_fu_2152_p2() {
    mul_ln1118_1225_fu_2152_p2 = (!mul_ln1118_1225_fu_2152_p0.read().is_01() || !ap_const_lv25_D9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1225_fu_2152_p0.read()) * sc_biguint<25>(ap_const_lv25_D9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1226_fu_2570_p0() {
    mul_ln1118_1226_fu_2570_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1226_fu_2570_p2() {
    mul_ln1118_1226_fu_2570_p2 = (!mul_ln1118_1226_fu_2570_p0.read().is_01() || !ap_const_lv26_3FFFD78.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1226_fu_2570_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD78);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1227_fu_2571_p0() {
    mul_ln1118_1227_fu_2571_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1227_fu_2571_p2() {
    mul_ln1118_1227_fu_2571_p2 = (!mul_ln1118_1227_fu_2571_p0.read().is_01() || !ap_const_lv26_267.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1227_fu_2571_p0.read()) * sc_biguint<26>(ap_const_lv26_267);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1228_fu_3014_p0() {
    mul_ln1118_1228_fu_3014_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1228_fu_3014_p2() {
    mul_ln1118_1228_fu_3014_p2 = (!mul_ln1118_1228_fu_3014_p0.read().is_01() || !ap_const_lv26_3FFFC24.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1228_fu_3014_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFC24);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1229_fu_2418_p0() {
    mul_ln1118_1229_fu_2418_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1229_fu_2418_p2() {
    mul_ln1118_1229_fu_2418_p2 = (!mul_ln1118_1229_fu_2418_p0.read().is_01() || !ap_const_lv26_3FFFDBF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1229_fu_2418_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDBF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1230_fu_3016_p0() {
    mul_ln1118_1230_fu_3016_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1230_fu_3016_p2() {
    mul_ln1118_1230_fu_3016_p2 = (!mul_ln1118_1230_fu_3016_p0.read().is_01() || !ap_const_lv25_B4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1230_fu_3016_p0.read()) * sc_biguint<25>(ap_const_lv25_B4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1231_fu_1976_p0() {
    mul_ln1118_1231_fu_1976_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1231_fu_1976_p2() {
    mul_ln1118_1231_fu_1976_p2 = (!mul_ln1118_1231_fu_1976_p0.read().is_01() || !ap_const_lv25_BB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1231_fu_1976_p0.read()) * sc_biguint<25>(ap_const_lv25_BB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1232_fu_2579_p0() {
    mul_ln1118_1232_fu_2579_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1232_fu_2579_p2() {
    mul_ln1118_1232_fu_2579_p2 = (!mul_ln1118_1232_fu_2579_p0.read().is_01() || !ap_const_lv25_DC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1232_fu_2579_p0.read()) * sc_biguint<25>(ap_const_lv25_DC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1233_fu_2580_p0() {
    mul_ln1118_1233_fu_2580_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1233_fu_2580_p2() {
    mul_ln1118_1233_fu_2580_p2 = (!mul_ln1118_1233_fu_2580_p0.read().is_01() || !ap_const_lv26_304.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1233_fu_2580_p0.read()) * sc_biguint<26>(ap_const_lv26_304);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1234_fu_1980_p0() {
    mul_ln1118_1234_fu_1980_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1234_fu_1980_p2() {
    mul_ln1118_1234_fu_1980_p2 = (!mul_ln1118_1234_fu_1980_p0.read().is_01() || !ap_const_lv25_8F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1234_fu_1980_p0.read()) * sc_biguint<25>(ap_const_lv25_8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1235_fu_2424_p0() {
    mul_ln1118_1235_fu_2424_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_4148974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1235_fu_2424_p2() {
    mul_ln1118_1235_fu_2424_p2 = (!mul_ln1118_1235_fu_2424_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1235_fu_2424_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1236_fu_2425_p0() {
    mul_ln1118_1236_fu_2425_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1236_fu_2425_p2() {
    mul_ln1118_1236_fu_2425_p2 = (!mul_ln1118_1236_fu_2425_p0.read().is_01() || !ap_const_lv25_1FFFF50.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1236_fu_2425_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF50);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1237_fu_1984_p0() {
    mul_ln1118_1237_fu_1984_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_4148974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1237_fu_1984_p2() {
    mul_ln1118_1237_fu_1984_p2 = (!mul_ln1118_1237_fu_1984_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1237_fu_1984_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1238_fu_2560_p0() {
    mul_ln1118_1238_fu_2560_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_4148974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1238_fu_2560_p2() {
    mul_ln1118_1238_fu_2560_p2 = (!mul_ln1118_1238_fu_2560_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1238_fu_2560_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1239_fu_2258_p0() {
    mul_ln1118_1239_fu_2258_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1239_fu_2258_p2() {
    mul_ln1118_1239_fu_2258_p2 = (!mul_ln1118_1239_fu_2258_p0.read().is_01() || !ap_const_lv26_3FFFECE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1239_fu_2258_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1240_fu_3002_p0() {
    mul_ln1118_1240_fu_3002_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1240_fu_3002_p2() {
    mul_ln1118_1240_fu_3002_p2 = (!mul_ln1118_1240_fu_3002_p0.read().is_01() || !ap_const_lv25_1FFFF37.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1240_fu_3002_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1241_fu_2533_p0() {
    mul_ln1118_1241_fu_2533_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1241_fu_2533_p2() {
    mul_ln1118_1241_fu_2533_p2 = (!mul_ln1118_1241_fu_2533_p0.read().is_01() || !ap_const_lv26_1DB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1241_fu_2533_p0.read()) * sc_biguint<26>(ap_const_lv26_1DB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1242_fu_3018_p0() {
    mul_ln1118_1242_fu_3018_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1242_fu_3018_p2() {
    mul_ln1118_1242_fu_3018_p2 = (!mul_ln1118_1242_fu_3018_p0.read().is_01() || !ap_const_lv26_1CD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1242_fu_3018_p0.read()) * sc_biguint<26>(ap_const_lv26_1CD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1243_fu_3026_p0() {
    mul_ln1118_1243_fu_3026_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1243_fu_3026_p2() {
    mul_ln1118_1243_fu_3026_p2 = (!mul_ln1118_1243_fu_3026_p0.read().is_01() || !ap_const_lv25_A1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1243_fu_3026_p0.read()) * sc_biguint<25>(ap_const_lv25_A1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1244_fu_3035_p0() {
    mul_ln1118_1244_fu_3035_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1244_fu_3035_p2() {
    mul_ln1118_1244_fu_3035_p2 = (!mul_ln1118_1244_fu_3035_p0.read().is_01() || !ap_const_lv26_1A3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1244_fu_3035_p0.read()) * sc_biguint<26>(ap_const_lv26_1A3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1245_fu_3045_p0() {
    mul_ln1118_1245_fu_3045_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_4148974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1245_fu_3045_p2() {
    mul_ln1118_1245_fu_3045_p2 = (!mul_ln1118_1245_fu_3045_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1245_fu_3045_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1246_fu_3053_p0() {
    mul_ln1118_1246_fu_3053_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1246_fu_3053_p2() {
    mul_ln1118_1246_fu_3053_p2 = (!mul_ln1118_1246_fu_3053_p0.read().is_01() || !ap_const_lv26_158.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1246_fu_3053_p0.read()) * sc_biguint<26>(ap_const_lv26_158);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1247_fu_2097_p0() {
    mul_ln1118_1247_fu_2097_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1247_fu_2097_p2() {
    mul_ln1118_1247_fu_2097_p2 = (!mul_ln1118_1247_fu_2097_p0.read().is_01() || !ap_const_lv26_3FFFE31.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1247_fu_2097_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1248_fu_3067_p0() {
    mul_ln1118_1248_fu_3067_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1248_fu_3067_p2() {
    mul_ln1118_1248_fu_3067_p2 = (!mul_ln1118_1248_fu_3067_p0.read().is_01() || !ap_const_lv25_A9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1248_fu_3067_p0.read()) * sc_biguint<25>(ap_const_lv25_A9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1249_fu_2843_p0() {
    mul_ln1118_1249_fu_2843_p0 =  (sc_lv<16>) (sext_ln1118_478_fu_4149007_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1249_fu_2843_p2() {
    mul_ln1118_1249_fu_2843_p2 = (!mul_ln1118_1249_fu_2843_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1249_fu_2843_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1250_fu_2127_p0() {
    mul_ln1118_1250_fu_2127_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1250_fu_2127_p2() {
    mul_ln1118_1250_fu_2127_p2 = (!mul_ln1118_1250_fu_2127_p0.read().is_01() || !ap_const_lv26_3FFFDE3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1250_fu_2127_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1251_fu_2623_p0() {
    mul_ln1118_1251_fu_2623_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1251_fu_2623_p2() {
    mul_ln1118_1251_fu_2623_p2 = (!mul_ln1118_1251_fu_2623_p0.read().is_01() || !ap_const_lv25_B1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1251_fu_2623_p0.read()) * sc_biguint<25>(ap_const_lv25_B1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1252_fu_2387_p0() {
    mul_ln1118_1252_fu_2387_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_4148974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1252_fu_2387_p2() {
    mul_ln1118_1252_fu_2387_p2 = (!mul_ln1118_1252_fu_2387_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1252_fu_2387_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1253_fu_3115_p0() {
    mul_ln1118_1253_fu_3115_p0 =  (sc_lv<16>) (sext_ln1118_478_fu_4149007_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1253_fu_3115_p2() {
    mul_ln1118_1253_fu_3115_p2 = (!mul_ln1118_1253_fu_3115_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1253_fu_3115_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1254_fu_2647_p0() {
    mul_ln1118_1254_fu_2647_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_4148974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1254_fu_2647_p2() {
    mul_ln1118_1254_fu_2647_p2 = (!mul_ln1118_1254_fu_2647_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1254_fu_2647_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1255_fu_2775_p0() {
    mul_ln1118_1255_fu_2775_p0 =  (sc_lv<16>) (sext_ln1118_478_fu_4149007_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1255_fu_2775_p2() {
    mul_ln1118_1255_fu_2775_p2 = (!mul_ln1118_1255_fu_2775_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1255_fu_2775_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1256_fu_2624_p0() {
    mul_ln1118_1256_fu_2624_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1256_fu_2624_p2() {
    mul_ln1118_1256_fu_2624_p2 = (!mul_ln1118_1256_fu_2624_p0.read().is_01() || !ap_const_lv25_1FFFF4B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1256_fu_2624_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1257_fu_3059_p0() {
    mul_ln1118_1257_fu_3059_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1257_fu_3059_p2() {
    mul_ln1118_1257_fu_3059_p2 = (!mul_ln1118_1257_fu_3059_p0.read().is_01() || !ap_const_lv25_1FFFF62.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1257_fu_3059_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1258_fu_2460_p0() {
    mul_ln1118_1258_fu_2460_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1258_fu_2460_p2() {
    mul_ln1118_1258_fu_2460_p2 = (!mul_ln1118_1258_fu_2460_p0.read().is_01() || !ap_const_lv25_1FFFF4E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1258_fu_2460_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1259_fu_2779_p0() {
    mul_ln1118_1259_fu_2779_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1259_fu_2779_p2() {
    mul_ln1118_1259_fu_2779_p2 = (!mul_ln1118_1259_fu_2779_p0.read().is_01() || !ap_const_lv25_C6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1259_fu_2779_p0.read()) * sc_biguint<25>(ap_const_lv25_C6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1260_fu_2465_p0() {
    mul_ln1118_1260_fu_2465_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1260_fu_2465_p2() {
    mul_ln1118_1260_fu_2465_p2 = (!mul_ln1118_1260_fu_2465_p0.read().is_01() || !ap_const_lv25_F4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1260_fu_2465_p0.read()) * sc_biguint<25>(ap_const_lv25_F4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1261_fu_2341_p0() {
    mul_ln1118_1261_fu_2341_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1261_fu_2341_p2() {
    mul_ln1118_1261_fu_2341_p2 = (!mul_ln1118_1261_fu_2341_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1261_fu_2341_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1262_fu_2782_p0() {
    mul_ln1118_1262_fu_2782_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_4148985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1262_fu_2782_p2() {
    mul_ln1118_1262_fu_2782_p2 = (!mul_ln1118_1262_fu_2782_p0.read().is_01() || !ap_const_lv26_14D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1262_fu_2782_p0.read()) * sc_biguint<26>(ap_const_lv26_14D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1263_fu_2632_p0() {
    mul_ln1118_1263_fu_2632_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_4148974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1263_fu_2632_p2() {
    mul_ln1118_1263_fu_2632_p2 = (!mul_ln1118_1263_fu_2632_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1263_fu_2632_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1264_fu_2469_p0() {
    mul_ln1118_1264_fu_2469_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1264_fu_2469_p2() {
    mul_ln1118_1264_fu_2469_p2 = (!mul_ln1118_1264_fu_2469_p0.read().is_01() || !ap_const_lv25_1FFFF6A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1264_fu_2469_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1265_fu_2024_p0() {
    mul_ln1118_1265_fu_2024_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1265_fu_2024_p2() {
    mul_ln1118_1265_fu_2024_p2 = (!mul_ln1118_1265_fu_2024_p0.read().is_01() || !ap_const_lv25_DD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1265_fu_2024_p0.read()) * sc_biguint<25>(ap_const_lv25_DD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1266_fu_2636_p0() {
    mul_ln1118_1266_fu_2636_p0 =  (sc_lv<16>) (sext_ln1118_479_fu_4149013_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1266_fu_2636_p2() {
    mul_ln1118_1266_fu_2636_p2 = (!mul_ln1118_1266_fu_2636_p0.read().is_01() || !ap_const_lv25_1FFFF22.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1266_fu_2636_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF22);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_256_fu_2760_p0() {
    mul_ln1118_256_fu_2760_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_256_fu_2760_p2() {
    mul_ln1118_256_fu_2760_p2 = (!mul_ln1118_256_fu_2760_p0.read().is_01() || !ap_const_lv26_227.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_256_fu_2760_p0.read()) * sc_biguint<26>(ap_const_lv26_227);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_257_fu_2791_p0() {
    mul_ln1118_257_fu_2791_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_257_fu_2791_p2() {
    mul_ln1118_257_fu_2791_p2 = (!mul_ln1118_257_fu_2791_p0.read().is_01() || !ap_const_lv25_1FFFF2C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_257_fu_2791_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_258_fu_2762_p0() {
    mul_ln1118_258_fu_2762_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_258_fu_2762_p2() {
    mul_ln1118_258_fu_2762_p2 = (!mul_ln1118_258_fu_2762_p0.read().is_01() || !ap_const_lv26_2D3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_258_fu_2762_p0.read()) * sc_biguint<26>(ap_const_lv26_2D3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_259_fu_2553_p0() {
    mul_ln1118_259_fu_2553_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_259_fu_2553_p2() {
    mul_ln1118_259_fu_2553_p2 = (!mul_ln1118_259_fu_2553_p0.read().is_01() || !ap_const_lv26_3FFFDAD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_259_fu_2553_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDAD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_260_fu_2955_p0() {
    mul_ln1118_260_fu_2955_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_260_fu_2955_p2() {
    mul_ln1118_260_fu_2955_p2 = (!mul_ln1118_260_fu_2955_p0.read().is_01() || !ap_const_lv26_5DB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_260_fu_2955_p0.read()) * sc_biguint<26>(ap_const_lv26_5DB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_261_fu_2350_p0() {
    mul_ln1118_261_fu_2350_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_261_fu_2350_p2() {
    mul_ln1118_261_fu_2350_p2 = (!mul_ln1118_261_fu_2350_p0.read().is_01() || !ap_const_lv26_21C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_261_fu_2350_p0.read()) * sc_biguint<26>(ap_const_lv26_21C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_262_fu_2221_p0() {
    mul_ln1118_262_fu_2221_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_262_fu_2221_p2() {
    mul_ln1118_262_fu_2221_p2 = (!mul_ln1118_262_fu_2221_p0.read().is_01() || !ap_const_lv25_D3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_262_fu_2221_p0.read()) * sc_biguint<25>(ap_const_lv25_D3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_263_fu_2330_p0() {
    mul_ln1118_263_fu_2330_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_263_fu_2330_p2() {
    mul_ln1118_263_fu_2330_p2 = (!mul_ln1118_263_fu_2330_p0.read().is_01() || !ap_const_lv25_BF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_263_fu_2330_p0.read()) * sc_biguint<25>(ap_const_lv25_BF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_264_fu_2439_p0() {
    mul_ln1118_264_fu_2439_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_264_fu_2439_p2() {
    mul_ln1118_264_fu_2439_p2 = (!mul_ln1118_264_fu_2439_p0.read().is_01() || !ap_const_lv26_158.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_264_fu_2439_p0.read()) * sc_biguint<26>(ap_const_lv26_158);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_265_fu_2936_p0() {
    mul_ln1118_265_fu_2936_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_265_fu_2936_p2() {
    mul_ln1118_265_fu_2936_p2 = (!mul_ln1118_265_fu_2936_p0.read().is_01() || !ap_const_lv25_1FFFF5A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_265_fu_2936_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_266_fu_2022_p0() {
    mul_ln1118_266_fu_2022_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_266_fu_2022_p2() {
    mul_ln1118_266_fu_2022_p2 = (!mul_ln1118_266_fu_2022_p0.read().is_01() || !ap_const_lv25_BA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_266_fu_2022_p0.read()) * sc_biguint<25>(ap_const_lv25_BA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_267_fu_2166_p0() {
    mul_ln1118_267_fu_2166_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_267_fu_2166_p2() {
    mul_ln1118_267_fu_2166_p2 = (!mul_ln1118_267_fu_2166_p0.read().is_01() || !ap_const_lv26_3FFFE2F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_267_fu_2166_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_268_fu_2680_p0() {
    mul_ln1118_268_fu_2680_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_268_fu_2680_p2() {
    mul_ln1118_268_fu_2680_p2 = (!mul_ln1118_268_fu_2680_p0.read().is_01() || !ap_const_lv26_308.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_268_fu_2680_p0.read()) * sc_biguint<26>(ap_const_lv26_308);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_269_fu_2501_p0() {
    mul_ln1118_269_fu_2501_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_269_fu_2501_p2() {
    mul_ln1118_269_fu_2501_p2 = (!mul_ln1118_269_fu_2501_p0.read().is_01() || !ap_const_lv26_26B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_269_fu_2501_p0.read()) * sc_biguint<26>(ap_const_lv26_26B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_270_fu_2562_p0() {
    mul_ln1118_270_fu_2562_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_270_fu_2562_p2() {
    mul_ln1118_270_fu_2562_p2 = (!mul_ln1118_270_fu_2562_p0.read().is_01() || !ap_const_lv26_2E8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_270_fu_2562_p0.read()) * sc_biguint<26>(ap_const_lv26_2E8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_271_fu_3080_p0() {
    mul_ln1118_271_fu_3080_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_271_fu_3080_p2() {
    mul_ln1118_271_fu_3080_p2 = (!mul_ln1118_271_fu_3080_p0.read().is_01() || !ap_const_lv26_13E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_271_fu_3080_p0.read()) * sc_biguint<26>(ap_const_lv26_13E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_272_fu_2713_p0() {
    mul_ln1118_272_fu_2713_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_272_fu_2713_p2() {
    mul_ln1118_272_fu_2713_p2 = (!mul_ln1118_272_fu_2713_p0.read().is_01() || !ap_const_lv26_3FFFBB5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_272_fu_2713_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFBB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_273_fu_2584_p0() {
    mul_ln1118_273_fu_2584_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_273_fu_2584_p2() {
    mul_ln1118_273_fu_2584_p2 = (!mul_ln1118_273_fu_2584_p0.read().is_01() || !ap_const_lv26_3FFFEEA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_273_fu_2584_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_274_fu_2336_p0() {
    mul_ln1118_274_fu_2336_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_274_fu_2336_p2() {
    mul_ln1118_274_fu_2336_p2 = (!mul_ln1118_274_fu_2336_p0.read().is_01() || !ap_const_lv26_133.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_274_fu_2336_p0.read()) * sc_biguint<26>(ap_const_lv26_133);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_275_fu_1969_p0() {
    mul_ln1118_275_fu_1969_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_275_fu_1969_p2() {
    mul_ln1118_275_fu_1969_p2 = (!mul_ln1118_275_fu_1969_p0.read().is_01() || !ap_const_lv25_1FFFF38.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_275_fu_1969_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF38);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_276_fu_2197_p0() {
    mul_ln1118_276_fu_2197_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_276_fu_2197_p2() {
    mul_ln1118_276_fu_2197_p2 = (!mul_ln1118_276_fu_2197_p0.read().is_01() || !ap_const_lv25_CD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_276_fu_2197_p0.read()) * sc_biguint<25>(ap_const_lv25_CD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_277_fu_2306_p0() {
    mul_ln1118_277_fu_2306_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_277_fu_2306_p2() {
    mul_ln1118_277_fu_2306_p2 = (!mul_ln1118_277_fu_2306_p0.read().is_01() || !ap_const_lv26_3FFFE7A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_277_fu_2306_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_278_fu_2278_p0() {
    mul_ln1118_278_fu_2278_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_278_fu_2278_p2() {
    mul_ln1118_278_fu_2278_p2 = (!mul_ln1118_278_fu_2278_p0.read().is_01() || !ap_const_lv26_3FFFE9A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_278_fu_2278_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_279_fu_2136_p0() {
    mul_ln1118_279_fu_2136_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_279_fu_2136_p2() {
    mul_ln1118_279_fu_2136_p2 = (!mul_ln1118_279_fu_2136_p0.read().is_01() || !ap_const_lv25_A4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_279_fu_2136_p0.read()) * sc_biguint<25>(ap_const_lv25_A4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_280_fu_2480_p0() {
    mul_ln1118_280_fu_2480_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_280_fu_2480_p2() {
    mul_ln1118_280_fu_2480_p2 = (!mul_ln1118_280_fu_2480_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_280_fu_2480_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_281_fu_2481_p0() {
    mul_ln1118_281_fu_2481_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_281_fu_2481_p2() {
    mul_ln1118_281_fu_2481_p2 = (!mul_ln1118_281_fu_2481_p0.read().is_01() || !ap_const_lv26_162.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_281_fu_2481_p0.read()) * sc_biguint<26>(ap_const_lv26_162);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_282_fu_2512_p0() {
    mul_ln1118_282_fu_2512_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4133176_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_282_fu_2512_p2() {
    mul_ln1118_282_fu_2512_p2 = (!mul_ln1118_282_fu_2512_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_282_fu_2512_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_283_fu_2844_p0() {
    mul_ln1118_283_fu_2844_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_283_fu_2844_p2() {
    mul_ln1118_283_fu_2844_p2 = (!mul_ln1118_283_fu_2844_p0.read().is_01() || !ap_const_lv26_14F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_283_fu_2844_p0.read()) * sc_biguint<26>(ap_const_lv26_14F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_284_fu_2953_p0() {
    mul_ln1118_284_fu_2953_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_284_fu_2953_p2() {
    mul_ln1118_284_fu_2953_p2 = (!mul_ln1118_284_fu_2953_p0.read().is_01() || !ap_const_lv26_16B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_284_fu_2953_p0.read()) * sc_biguint<26>(ap_const_lv26_16B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_285_fu_2348_p0() {
    mul_ln1118_285_fu_2348_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_285_fu_2348_p2() {
    mul_ln1118_285_fu_2348_p2 = (!mul_ln1118_285_fu_2348_p0.read().is_01() || !ap_const_lv25_1FFFF7D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_285_fu_2348_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_286_fu_2219_p0() {
    mul_ln1118_286_fu_2219_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_286_fu_2219_p2() {
    mul_ln1118_286_fu_2219_p2 = (!mul_ln1118_286_fu_2219_p0.read().is_01() || !ap_const_lv26_154.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_286_fu_2219_p0.read()) * sc_biguint<26>(ap_const_lv26_154);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_287_fu_2572_p0() {
    mul_ln1118_287_fu_2572_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_287_fu_2572_p2() {
    mul_ln1118_287_fu_2572_p2 = (!mul_ln1118_287_fu_2572_p0.read().is_01() || !ap_const_lv26_3FFFE74.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_287_fu_2572_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_288_fu_2437_p0() {
    mul_ln1118_288_fu_2437_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_288_fu_2437_p2() {
    mul_ln1118_288_fu_2437_p2 = (!mul_ln1118_288_fu_2437_p0.read().is_01() || !ap_const_lv26_3FFFE0D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_288_fu_2437_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE0D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_289_fu_2962_p0() {
    mul_ln1118_289_fu_2962_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4133176_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_289_fu_2962_p2() {
    mul_ln1118_289_fu_2962_p2 = (!mul_ln1118_289_fu_2962_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_289_fu_2962_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_290_fu_2820_p0() {
    mul_ln1118_290_fu_2820_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_290_fu_2820_p2() {
    mul_ln1118_290_fu_2820_p2 = (!mul_ln1118_290_fu_2820_p0.read().is_01() || !ap_const_lv26_10D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_290_fu_2820_p0.read()) * sc_biguint<26>(ap_const_lv26_10D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_291_fu_2339_p0() {
    mul_ln1118_291_fu_2339_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_291_fu_2339_p2() {
    mul_ln1118_291_fu_2339_p2 = (!mul_ln1118_291_fu_2339_p0.read().is_01() || !ap_const_lv25_1FFFF71.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_291_fu_2339_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_292_fu_2340_p0() {
    mul_ln1118_292_fu_2340_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_292_fu_2340_p2() {
    mul_ln1118_292_fu_2340_p2 = (!mul_ln1118_292_fu_2340_p0.read().is_01() || !ap_const_lv25_94.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_292_fu_2340_p0.read()) * sc_biguint<25>(ap_const_lv25_94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_293_fu_2281_p0() {
    mul_ln1118_293_fu_2281_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_4133147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_293_fu_2281_p2() {
    mul_ln1118_293_fu_2281_p2 = (!mul_ln1118_293_fu_2281_p0.read().is_01() || !ap_const_lv26_3FFFE8E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_293_fu_2281_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_294_fu_2342_p0() {
    mul_ln1118_294_fu_2342_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_294_fu_2342_p2() {
    mul_ln1118_294_fu_2342_p2 = (!mul_ln1118_294_fu_2342_p0.read().is_01() || !ap_const_lv25_1FFFF51.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_294_fu_2342_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_295_fu_2608_p0() {
    mul_ln1118_295_fu_2608_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_295_fu_2608_p2() {
    mul_ln1118_295_fu_2608_p2 = (!mul_ln1118_295_fu_2608_p0.read().is_01() || !ap_const_lv25_A2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_295_fu_2608_p0.read()) * sc_biguint<25>(ap_const_lv25_A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_296_fu_2717_p0() {
    mul_ln1118_296_fu_2717_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4133185_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_296_fu_2717_p2() {
    mul_ln1118_296_fu_2717_p2 = (!mul_ln1118_296_fu_2717_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_296_fu_2717_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_297_fu_2588_p0() {
    mul_ln1118_297_fu_2588_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4133176_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_297_fu_2588_p2() {
    mul_ln1118_297_fu_2588_p2 = (!mul_ln1118_297_fu_2588_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_297_fu_2588_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_298_fu_2816_p0() {
    mul_ln1118_298_fu_2816_p0 =  (sc_lv<16>) (sext_ln1118_188_fu_4133195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_298_fu_2816_p2() {
    mul_ln1118_298_fu_2816_p2 = (!mul_ln1118_298_fu_2816_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_298_fu_2816_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_299_fu_1973_p0() {
    mul_ln1118_299_fu_1973_p0 =  (sc_lv<16>) (sext_ln1118_188_fu_4133195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_299_fu_1973_p2() {
    mul_ln1118_299_fu_1973_p2 = (!mul_ln1118_299_fu_1973_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_299_fu_1973_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_300_fu_2082_p0() {
    mul_ln1118_300_fu_2082_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_300_fu_2082_p2() {
    mul_ln1118_300_fu_2082_p2 = (!mul_ln1118_300_fu_2082_p0.read().is_01() || !ap_const_lv25_1FFFF3C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_300_fu_2082_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_301_fu_2589_p0() {
    mul_ln1118_301_fu_2589_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4133176_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_301_fu_2589_p2() {
    mul_ln1118_301_fu_2589_p2 = (!mul_ln1118_301_fu_2589_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_301_fu_2589_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_302_fu_2161_p0() {
    mul_ln1118_302_fu_2161_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_4133185_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_302_fu_2161_p2() {
    mul_ln1118_302_fu_2161_p2 = (!mul_ln1118_302_fu_2161_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_302_fu_2161_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_303_fu_2109_p0() {
    mul_ln1118_303_fu_2109_p0 =  (sc_lv<16>) (sext_ln1118_fu_4133127_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_303_fu_2109_p2() {
    mul_ln1118_303_fu_2109_p2 = (!mul_ln1118_303_fu_2109_p0.read().is_01() || !ap_const_lv25_1FFFF4C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_303_fu_2109_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_304_fu_2140_p0() {
    mul_ln1118_304_fu_2140_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_4133176_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_304_fu_2140_p2() {
    mul_ln1118_304_fu_2140_p2 = (!mul_ln1118_304_fu_2140_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_304_fu_2140_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_305_fu_2081_p0() {
    mul_ln1118_305_fu_2081_p0 =  (sc_lv<16>) (sext_ln1118_204_fu_4134039_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_305_fu_2081_p2() {
    mul_ln1118_305_fu_2081_p2 = (!mul_ln1118_305_fu_2081_p0.read().is_01() || !ap_const_lv25_1FFFF36.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_305_fu_2081_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_306_fu_2052_p0() {
    mul_ln1118_306_fu_2052_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_306_fu_2052_p2() {
    mul_ln1118_306_fu_2052_p2 = (!mul_ln1118_306_fu_2052_p0.read().is_01() || !ap_const_lv26_1A3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_306_fu_2052_p0.read()) * sc_biguint<26>(ap_const_lv26_1A3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_307_fu_2848_p0() {
    mul_ln1118_307_fu_2848_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_4133995_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_307_fu_2848_p2() {
    mul_ln1118_307_fu_2848_p2 = (!mul_ln1118_307_fu_2848_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_307_fu_2848_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_308_fu_2957_p0() {
    mul_ln1118_308_fu_2957_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_308_fu_2957_p2() {
    mul_ln1118_308_fu_2957_p2 = (!mul_ln1118_308_fu_2957_p0.read().is_01() || !ap_const_lv26_796.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_308_fu_2957_p0.read()) * sc_biguint<26>(ap_const_lv26_796);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_309_fu_2233_p0() {
    mul_ln1118_309_fu_2233_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_309_fu_2233_p2() {
    mul_ln1118_309_fu_2233_p2 = (!mul_ln1118_309_fu_2233_p0.read().is_01() || !ap_const_lv26_ADE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_309_fu_2233_p0.read()) * sc_biguint<26>(ap_const_lv26_ADE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_310_fu_2461_p0() {
    mul_ln1118_310_fu_2461_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_310_fu_2461_p2() {
    mul_ln1118_310_fu_2461_p2 = (!mul_ln1118_310_fu_2461_p0.read().is_01() || !ap_const_lv26_3FFF047.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_310_fu_2461_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF047);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_311_fu_2094_p0() {
    mul_ln1118_311_fu_2094_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_311_fu_2094_p2() {
    mul_ln1118_311_fu_2094_p2 = (!mul_ln1118_311_fu_2094_p0.read().is_01() || !ap_const_lv26_80E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_311_fu_2094_p0.read()) * sc_biguint<26>(ap_const_lv26_80E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_312_fu_3130_p0() {
    mul_ln1118_312_fu_3130_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_4133995_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_312_fu_3130_p2() {
    mul_ln1118_312_fu_3130_p2 = (!mul_ln1118_312_fu_3130_p0.read().is_01() || !ap_const_lv24_FFFF94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_312_fu_3130_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_313_fu_2073_p0() {
    mul_ln1118_313_fu_2073_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_313_fu_2073_p2() {
    mul_ln1118_313_fu_2073_p2 = (!mul_ln1118_313_fu_2073_p0.read().is_01() || !ap_const_lv26_B77.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_313_fu_2073_p0.read()) * sc_biguint<26>(ap_const_lv26_B77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_314_fu_2846_p0() {
    mul_ln1118_314_fu_2846_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_314_fu_2846_p2() {
    mul_ln1118_314_fu_2846_p2 = (!mul_ln1118_314_fu_2846_p0.read().is_01() || !ap_const_lv26_3FFFE3B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_314_fu_2846_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE3B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_315_fu_3050_p0() {
    mul_ln1118_315_fu_3050_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_315_fu_3050_p2() {
    mul_ln1118_315_fu_3050_p2 = (!mul_ln1118_315_fu_3050_p0.read().is_01() || !ap_const_lv26_714.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_315_fu_3050_p0.read()) * sc_biguint<26>(ap_const_lv26_714);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_316_fu_1970_p0() {
    mul_ln1118_316_fu_1970_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_316_fu_1970_p2() {
    mul_ln1118_316_fu_1970_p2 = (!mul_ln1118_316_fu_1970_p0.read().is_01() || !ap_const_lv26_3FFFCC5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_316_fu_1970_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_317_fu_2869_p0() {
    mul_ln1118_317_fu_2869_p0 =  (sc_lv<16>) (sext_ln1118_203_reg_4158628.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_317_fu_2869_p2() {
    mul_ln1118_317_fu_2869_p2 = (!mul_ln1118_317_fu_2869_p0.read().is_01() || !ap_const_lv26_287.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_317_fu_2869_p0.read()) * sc_biguint<26>(ap_const_lv26_287);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_318_fu_3022_p0() {
    mul_ln1118_318_fu_3022_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_318_fu_3022_p2() {
    mul_ln1118_318_fu_3022_p2 = (!mul_ln1118_318_fu_3022_p0.read().is_01() || !ap_const_lv26_3FFFDA6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_318_fu_3022_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDA6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_319_fu_1972_p0() {
    mul_ln1118_319_fu_1972_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_319_fu_1972_p2() {
    mul_ln1118_319_fu_1972_p2 = (!mul_ln1118_319_fu_1972_p0.read().is_01() || !ap_const_lv26_3FFF6CE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_319_fu_1972_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF6CE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_320_fu_3088_p0() {
    mul_ln1118_320_fu_3088_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_320_fu_3088_p2() {
    mul_ln1118_320_fu_3088_p2 = (!mul_ln1118_320_fu_3088_p0.read().is_01() || !ap_const_lv26_3FFF9B9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_320_fu_3088_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF9B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_321_fu_2959_p0() {
    mul_ln1118_321_fu_2959_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_321_fu_2959_p2() {
    mul_ln1118_321_fu_2959_p2 = (!mul_ln1118_321_fu_2959_p0.read().is_01() || !ap_const_lv26_3FFF9D0.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_321_fu_2959_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFF9D0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_322_fu_2473_p0() {
    mul_ln1118_322_fu_2473_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_322_fu_2473_p2() {
    mul_ln1118_322_fu_2473_p2 = (!mul_ln1118_322_fu_2473_p0.read().is_01() || !ap_const_lv26_3FFFCB2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_322_fu_2473_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_323_fu_1987_p0() {
    mul_ln1118_323_fu_1987_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_323_fu_1987_p2() {
    mul_ln1118_323_fu_1987_p2 = (!mul_ln1118_323_fu_1987_p0.read().is_01() || !ap_const_lv26_3FFFE14.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_323_fu_1987_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE14);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_324_fu_2096_p0() {
    mul_ln1118_324_fu_2096_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_4133995_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_324_fu_2096_p2() {
    mul_ln1118_324_fu_2096_p2 = (!mul_ln1118_324_fu_2096_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_324_fu_2096_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_325_fu_3043_p0() {
    mul_ln1118_325_fu_3043_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_4134056_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_325_fu_3043_p2() {
    mul_ln1118_325_fu_3043_p2 = (!mul_ln1118_325_fu_3043_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_325_fu_3043_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_326_fu_2615_p0() {
    mul_ln1118_326_fu_2615_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_326_fu_2615_p2() {
    mul_ln1118_326_fu_2615_p2 = (!mul_ln1118_326_fu_2615_p0.read().is_01() || !ap_const_lv26_3FFFBAC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_326_fu_2615_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFBAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_327_fu_2759_p0() {
    mul_ln1118_327_fu_2759_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_4134056_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_327_fu_2759_p2() {
    mul_ln1118_327_fu_2759_p2 = (!mul_ln1118_327_fu_2759_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_327_fu_2759_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_328_fu_2970_p0() {
    mul_ln1118_328_fu_2970_p0 =  (sc_lv<16>) (sext_ln1118_204_fu_4134039_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_328_fu_2970_p2() {
    mul_ln1118_328_fu_2970_p2 = (!mul_ln1118_328_fu_2970_p0.read().is_01() || !ap_const_lv25_1FFFF22.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_328_fu_2970_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF22);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_329_fu_3031_p0() {
    mul_ln1118_329_fu_3031_p0 =  (sc_lv<16>) (sext_ln1118_204_fu_4134039_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_329_fu_3031_p2() {
    mul_ln1118_329_fu_3031_p2 = (!mul_ln1118_329_fu_3031_p0.read().is_01() || !ap_const_lv25_8A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_329_fu_3031_p0.read()) * sc_biguint<25>(ap_const_lv25_8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_330_fu_2792_p0() {
    mul_ln1118_330_fu_2792_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_330_fu_2792_p2() {
    mul_ln1118_330_fu_2792_p2 = (!mul_ln1118_330_fu_2792_p0.read().is_01() || !ap_const_lv26_133.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_330_fu_2792_p0.read()) * sc_biguint<26>(ap_const_lv26_133);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_331_fu_2463_p0() {
    mul_ln1118_331_fu_2463_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_331_fu_2463_p2() {
    mul_ln1118_331_fu_2463_p2 = (!mul_ln1118_331_fu_2463_p0.read().is_01() || !ap_const_lv26_3FFFE1E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_331_fu_2463_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE1E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_332_fu_2138_p0() {
    mul_ln1118_332_fu_2138_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_332_fu_2138_p2() {
    mul_ln1118_332_fu_2138_p2 = (!mul_ln1118_332_fu_2138_p0.read().is_01() || !ap_const_lv26_3FFFA4D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_332_fu_2138_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFA4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_333_fu_2723_p0() {
    mul_ln1118_333_fu_2723_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_333_fu_2723_p2() {
    mul_ln1118_333_fu_2723_p2 = (!mul_ln1118_333_fu_2723_p0.read().is_01() || !ap_const_lv26_3FFFD91.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_333_fu_2723_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_334_fu_2475_p0() {
    mul_ln1118_334_fu_2475_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_4134003_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_334_fu_2475_p2() {
    mul_ln1118_334_fu_2475_p2 = (!mul_ln1118_334_fu_2475_p0.read().is_01() || !ap_const_lv26_3FFFE11.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_334_fu_2475_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE11);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_335_fu_2822_p0() {
    mul_ln1118_335_fu_2822_p0 =  (sc_lv<16>) (sext_ln1118_204_fu_4134039_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_335_fu_2822_p2() {
    mul_ln1118_335_fu_2822_p2 = (!mul_ln1118_335_fu_2822_p0.read().is_01() || !ap_const_lv25_B6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_335_fu_2822_p0.read()) * sc_biguint<25>(ap_const_lv25_B6);
}

}

