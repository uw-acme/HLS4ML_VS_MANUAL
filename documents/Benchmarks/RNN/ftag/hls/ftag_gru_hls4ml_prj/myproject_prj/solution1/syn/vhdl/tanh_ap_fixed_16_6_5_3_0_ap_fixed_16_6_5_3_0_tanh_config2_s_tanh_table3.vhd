-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table3_rom is 
    generic(
             DWIDTH     : integer := 11; 
             AWIDTH     : integer := 10; 
             MEM_SIZE    : integer := 1024
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          addr1      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DWIDTH-1 downto 0);
          addr2      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce2       : in std_logic; 
          q2         : out std_logic_vector(DWIDTH-1 downto 0);
          addr3      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce3       : in std_logic; 
          q3         : out std_logic_vector(DWIDTH-1 downto 0);
          addr4      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce4       : in std_logic; 
          q4         : out std_logic_vector(DWIDTH-1 downto 0);
          addr5      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce5       : in std_logic; 
          q5         : out std_logic_vector(DWIDTH-1 downto 0);
          addr6      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce6       : in std_logic; 
          q6         : out std_logic_vector(DWIDTH-1 downto 0);
          addr7      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce7       : in std_logic; 
          q7         : out std_logic_vector(DWIDTH-1 downto 0);
          addr8      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce8       : in std_logic; 
          q8         : out std_logic_vector(DWIDTH-1 downto 0);
          addr9      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce9       : in std_logic; 
          q9         : out std_logic_vector(DWIDTH-1 downto 0);
          addr10      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce10       : in std_logic; 
          q10         : out std_logic_vector(DWIDTH-1 downto 0);
          addr11      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce11       : in std_logic; 
          q11         : out std_logic_vector(DWIDTH-1 downto 0);
          addr12      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce12       : in std_logic; 
          q12         : out std_logic_vector(DWIDTH-1 downto 0);
          addr13      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce13       : in std_logic; 
          q13         : out std_logic_vector(DWIDTH-1 downto 0);
          addr14      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce14       : in std_logic; 
          q14         : out std_logic_vector(DWIDTH-1 downto 0);
          addr15      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce15       : in std_logic; 
          q15         : out std_logic_vector(DWIDTH-1 downto 0);
          addr16      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce16       : in std_logic; 
          q16         : out std_logic_vector(DWIDTH-1 downto 0);
          addr17      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce17       : in std_logic; 
          q17         : out std_logic_vector(DWIDTH-1 downto 0);
          addr18      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce18       : in std_logic; 
          q18         : out std_logic_vector(DWIDTH-1 downto 0);
          addr19      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce19       : in std_logic; 
          q19         : out std_logic_vector(DWIDTH-1 downto 0);
          addr20      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce20       : in std_logic; 
          q20         : out std_logic_vector(DWIDTH-1 downto 0);
          addr21      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce21       : in std_logic; 
          q21         : out std_logic_vector(DWIDTH-1 downto 0);
          addr22      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce22       : in std_logic; 
          q22         : out std_logic_vector(DWIDTH-1 downto 0);
          addr23      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce23       : in std_logic; 
          q23         : out std_logic_vector(DWIDTH-1 downto 0);
          addr24      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce24       : in std_logic; 
          q24         : out std_logic_vector(DWIDTH-1 downto 0);
          addr25      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce25       : in std_logic; 
          q25         : out std_logic_vector(DWIDTH-1 downto 0);
          addr26      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce26       : in std_logic; 
          q26         : out std_logic_vector(DWIDTH-1 downto 0);
          addr27      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce27       : in std_logic; 
          q27         : out std_logic_vector(DWIDTH-1 downto 0);
          addr28      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce28       : in std_logic; 
          q28         : out std_logic_vector(DWIDTH-1 downto 0);
          addr29      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce29       : in std_logic; 
          q29         : out std_logic_vector(DWIDTH-1 downto 0);
          addr30      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce30       : in std_logic; 
          q30         : out std_logic_vector(DWIDTH-1 downto 0);
          addr31      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce31       : in std_logic; 
          q31         : out std_logic_vector(DWIDTH-1 downto 0);
          addr32      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce32       : in std_logic; 
          q32         : out std_logic_vector(DWIDTH-1 downto 0);
          addr33      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce33       : in std_logic; 
          q33         : out std_logic_vector(DWIDTH-1 downto 0);
          addr34      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce34       : in std_logic; 
          q34         : out std_logic_vector(DWIDTH-1 downto 0);
          addr35      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce35       : in std_logic; 
          q35         : out std_logic_vector(DWIDTH-1 downto 0);
          addr36      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce36       : in std_logic; 
          q36         : out std_logic_vector(DWIDTH-1 downto 0);
          addr37      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce37       : in std_logic; 
          q37         : out std_logic_vector(DWIDTH-1 downto 0);
          addr38      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce38       : in std_logic; 
          q38         : out std_logic_vector(DWIDTH-1 downto 0);
          addr39      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce39       : in std_logic; 
          q39         : out std_logic_vector(DWIDTH-1 downto 0);
          addr40      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce40       : in std_logic; 
          q40         : out std_logic_vector(DWIDTH-1 downto 0);
          addr41      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce41       : in std_logic; 
          q41         : out std_logic_vector(DWIDTH-1 downto 0);
          addr42      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce42       : in std_logic; 
          q42         : out std_logic_vector(DWIDTH-1 downto 0);
          addr43      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce43       : in std_logic; 
          q43         : out std_logic_vector(DWIDTH-1 downto 0);
          addr44      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce44       : in std_logic; 
          q44         : out std_logic_vector(DWIDTH-1 downto 0);
          addr45      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce45       : in std_logic; 
          q45         : out std_logic_vector(DWIDTH-1 downto 0);
          addr46      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce46       : in std_logic; 
          q46         : out std_logic_vector(DWIDTH-1 downto 0);
          addr47      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce47       : in std_logic; 
          q47         : out std_logic_vector(DWIDTH-1 downto 0);
          addr48      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce48       : in std_logic; 
          q48         : out std_logic_vector(DWIDTH-1 downto 0);
          addr49      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce49       : in std_logic; 
          q49         : out std_logic_vector(DWIDTH-1 downto 0);
          addr50      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce50       : in std_logic; 
          q50         : out std_logic_vector(DWIDTH-1 downto 0);
          addr51      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce51       : in std_logic; 
          q51         : out std_logic_vector(DWIDTH-1 downto 0);
          addr52      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce52       : in std_logic; 
          q52         : out std_logic_vector(DWIDTH-1 downto 0);
          addr53      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce53       : in std_logic; 
          q53         : out std_logic_vector(DWIDTH-1 downto 0);
          addr54      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce54       : in std_logic; 
          q54         : out std_logic_vector(DWIDTH-1 downto 0);
          addr55      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce55       : in std_logic; 
          q55         : out std_logic_vector(DWIDTH-1 downto 0);
          addr56      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce56       : in std_logic; 
          q56         : out std_logic_vector(DWIDTH-1 downto 0);
          addr57      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce57       : in std_logic; 
          q57         : out std_logic_vector(DWIDTH-1 downto 0);
          addr58      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce58       : in std_logic; 
          q58         : out std_logic_vector(DWIDTH-1 downto 0);
          addr59      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce59       : in std_logic; 
          q59         : out std_logic_vector(DWIDTH-1 downto 0);
          addr60      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce60       : in std_logic; 
          q60         : out std_logic_vector(DWIDTH-1 downto 0);
          addr61      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce61       : in std_logic; 
          q61         : out std_logic_vector(DWIDTH-1 downto 0);
          addr62      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce62       : in std_logic; 
          q62         : out std_logic_vector(DWIDTH-1 downto 0);
          addr63      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce63       : in std_logic; 
          q63         : out std_logic_vector(DWIDTH-1 downto 0);
          addr64      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce64       : in std_logic; 
          q64         : out std_logic_vector(DWIDTH-1 downto 0);
          addr65      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce65       : in std_logic; 
          q65         : out std_logic_vector(DWIDTH-1 downto 0);
          addr66      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce66       : in std_logic; 
          q66         : out std_logic_vector(DWIDTH-1 downto 0);
          addr67      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce67       : in std_logic; 
          q67         : out std_logic_vector(DWIDTH-1 downto 0);
          addr68      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce68       : in std_logic; 
          q68         : out std_logic_vector(DWIDTH-1 downto 0);
          addr69      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce69       : in std_logic; 
          q69         : out std_logic_vector(DWIDTH-1 downto 0);
          addr70      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce70       : in std_logic; 
          q70         : out std_logic_vector(DWIDTH-1 downto 0);
          addr71      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce71       : in std_logic; 
          q71         : out std_logic_vector(DWIDTH-1 downto 0);
          addr72      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce72       : in std_logic; 
          q72         : out std_logic_vector(DWIDTH-1 downto 0);
          addr73      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce73       : in std_logic; 
          q73         : out std_logic_vector(DWIDTH-1 downto 0);
          addr74      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce74       : in std_logic; 
          q74         : out std_logic_vector(DWIDTH-1 downto 0);
          addr75      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce75       : in std_logic; 
          q75         : out std_logic_vector(DWIDTH-1 downto 0);
          addr76      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce76       : in std_logic; 
          q76         : out std_logic_vector(DWIDTH-1 downto 0);
          addr77      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce77       : in std_logic; 
          q77         : out std_logic_vector(DWIDTH-1 downto 0);
          addr78      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce78       : in std_logic; 
          q78         : out std_logic_vector(DWIDTH-1 downto 0);
          addr79      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce79       : in std_logic; 
          q79         : out std_logic_vector(DWIDTH-1 downto 0);
          addr80      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce80       : in std_logic; 
          q80         : out std_logic_vector(DWIDTH-1 downto 0);
          addr81      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce81       : in std_logic; 
          q81         : out std_logic_vector(DWIDTH-1 downto 0);
          addr82      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce82       : in std_logic; 
          q82         : out std_logic_vector(DWIDTH-1 downto 0);
          addr83      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce83       : in std_logic; 
          q83         : out std_logic_vector(DWIDTH-1 downto 0);
          addr84      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce84       : in std_logic; 
          q84         : out std_logic_vector(DWIDTH-1 downto 0);
          addr85      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce85       : in std_logic; 
          q85         : out std_logic_vector(DWIDTH-1 downto 0);
          addr86      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce86       : in std_logic; 
          q86         : out std_logic_vector(DWIDTH-1 downto 0);
          addr87      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce87       : in std_logic; 
          q87         : out std_logic_vector(DWIDTH-1 downto 0);
          addr88      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce88       : in std_logic; 
          q88         : out std_logic_vector(DWIDTH-1 downto 0);
          addr89      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce89       : in std_logic; 
          q89         : out std_logic_vector(DWIDTH-1 downto 0);
          addr90      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce90       : in std_logic; 
          q90         : out std_logic_vector(DWIDTH-1 downto 0);
          addr91      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce91       : in std_logic; 
          q91         : out std_logic_vector(DWIDTH-1 downto 0);
          addr92      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce92       : in std_logic; 
          q92         : out std_logic_vector(DWIDTH-1 downto 0);
          addr93      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce93       : in std_logic; 
          q93         : out std_logic_vector(DWIDTH-1 downto 0);
          addr94      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce94       : in std_logic; 
          q94         : out std_logic_vector(DWIDTH-1 downto 0);
          addr95      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce95       : in std_logic; 
          q95         : out std_logic_vector(DWIDTH-1 downto 0);
          addr96      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce96       : in std_logic; 
          q96         : out std_logic_vector(DWIDTH-1 downto 0);
          addr97      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce97       : in std_logic; 
          q97         : out std_logic_vector(DWIDTH-1 downto 0);
          addr98      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce98       : in std_logic; 
          q98         : out std_logic_vector(DWIDTH-1 downto 0);
          addr99      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce99       : in std_logic; 
          q99         : out std_logic_vector(DWIDTH-1 downto 0);
          addr100      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce100       : in std_logic; 
          q100         : out std_logic_vector(DWIDTH-1 downto 0);
          addr101      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce101       : in std_logic; 
          q101         : out std_logic_vector(DWIDTH-1 downto 0);
          addr102      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce102       : in std_logic; 
          q102         : out std_logic_vector(DWIDTH-1 downto 0);
          addr103      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce103       : in std_logic; 
          q103         : out std_logic_vector(DWIDTH-1 downto 0);
          addr104      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce104       : in std_logic; 
          q104         : out std_logic_vector(DWIDTH-1 downto 0);
          addr105      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce105       : in std_logic; 
          q105         : out std_logic_vector(DWIDTH-1 downto 0);
          addr106      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce106       : in std_logic; 
          q106         : out std_logic_vector(DWIDTH-1 downto 0);
          addr107      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce107       : in std_logic; 
          q107         : out std_logic_vector(DWIDTH-1 downto 0);
          addr108      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce108       : in std_logic; 
          q108         : out std_logic_vector(DWIDTH-1 downto 0);
          addr109      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce109       : in std_logic; 
          q109         : out std_logic_vector(DWIDTH-1 downto 0);
          addr110      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce110       : in std_logic; 
          q110         : out std_logic_vector(DWIDTH-1 downto 0);
          addr111      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce111       : in std_logic; 
          q111         : out std_logic_vector(DWIDTH-1 downto 0);
          addr112      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce112       : in std_logic; 
          q112         : out std_logic_vector(DWIDTH-1 downto 0);
          addr113      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce113       : in std_logic; 
          q113         : out std_logic_vector(DWIDTH-1 downto 0);
          addr114      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce114       : in std_logic; 
          q114         : out std_logic_vector(DWIDTH-1 downto 0);
          addr115      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce115       : in std_logic; 
          q115         : out std_logic_vector(DWIDTH-1 downto 0);
          addr116      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce116       : in std_logic; 
          q116         : out std_logic_vector(DWIDTH-1 downto 0);
          addr117      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce117       : in std_logic; 
          q117         : out std_logic_vector(DWIDTH-1 downto 0);
          addr118      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce118       : in std_logic; 
          q118         : out std_logic_vector(DWIDTH-1 downto 0);
          addr119      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce119       : in std_logic; 
          q119         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr2_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr3_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr4_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr5_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr6_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr7_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr8_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr9_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr10_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr11_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr12_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr13_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr14_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr15_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr16_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr17_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr18_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr19_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr20_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr21_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr22_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr23_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr24_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr25_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr26_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr27_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr28_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr29_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr30_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr31_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr32_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr33_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr34_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr35_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr36_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr37_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr38_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr39_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr40_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr41_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr42_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr43_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr44_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr45_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr46_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr47_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr48_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr49_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr50_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr51_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr52_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr53_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr54_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr55_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr56_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr57_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr58_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr59_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr60_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr61_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr62_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr63_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr64_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr65_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr66_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr67_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr68_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr69_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr70_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr71_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr72_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr73_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr74_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr75_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr76_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr77_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr78_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr79_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr80_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr81_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr82_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr83_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr84_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr85_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr86_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr87_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr88_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr89_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr90_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr91_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr92_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr93_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr94_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr95_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr96_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr97_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr98_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr99_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr100_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr101_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr102_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr103_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr104_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr105_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr106_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr107_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr108_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr109_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr110_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr111_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr112_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr113_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr114_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr115_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr116_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr117_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr118_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr119_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem0 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem1 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem2 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem3 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem4 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem5 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem6 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem7 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem8 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem9 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem10 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem11 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem12 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem13 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem14 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem15 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem16 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem17 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem18 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem19 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem20 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem21 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem22 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem23 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem24 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem25 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem26 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem27 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem28 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem29 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem30 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem31 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem32 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem33 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem34 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem35 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem36 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem37 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem38 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem39 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem40 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem41 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem42 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem43 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem44 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem45 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem46 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem47 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem48 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem49 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem50 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem51 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem52 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem53 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem54 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem55 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem56 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem57 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem58 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );
signal mem59 : mem_array := (
    0 to 24=> "10000000000", 25 to 68=> "10000000001", 69 to 94=> "10000000010", 
    95 to 112=> "10000000011", 113 to 127=> "10000000100", 128 to 138=> "10000000101", 
    139 to 148=> "10000000110", 149 to 157=> "10000000111", 158 to 164=> "10000001000", 
    165 to 171=> "10000001001", 172 to 177=> "10000001010", 178 to 183=> "10000001011", 
    184 to 188=> "10000001100", 189 to 193=> "10000001101", 194 to 197=> "10000001110", 
    198 to 201=> "10000001111", 202 to 205=> "10000010000", 206 to 209=> "10000010001", 
    210 to 213=> "10000010010", 214 to 216=> "10000010011", 217 to 219=> "10000010100", 
    220 to 222=> "10000010101", 223 to 225=> "10000010110", 226 to 228=> "10000010111", 
    229 to 230=> "10000011000", 231 to 233=> "10000011001", 234 to 235=> "10000011010", 
    236 to 238=> "10000011011", 239 to 240=> "10000011100", 241 to 242=> "10000011101", 
    243 to 244=> "10000011110", 245 to 246=> "10000011111", 247 to 248=> "10000100000", 
    249 to 250=> "10000100001", 251 to 252=> "10000100010", 253 to 254=> "10000100011", 
    255 to 256=> "10000100100", 257 to 258=> "10000100101", 259 => "10000100110", 
    260 to 261=> "10000100111", 262 => "10000101000", 263 to 264=> "10000101001", 
    265 to 266=> "10000101010", 267 => "10000101011", 268 to 269=> "10000101100", 
    270 => "10000101101", 271 => "10000101110", 272 to 273=> "10000101111", 
    274 => "10000110000", 275 => "10000110001", 276 to 277=> "10000110010", 
    278 => "10000110011", 279 => "10000110100", 280 to 281=> "10000110101", 
    282 => "10000110110", 283 => "10000110111", 284 => "10000111000", 
    285 => "10000111001", 286 => "10000111010", 287 => "10000111011", 
    288 to 289=> "10000111100", 290 => "10000111101", 291 => "10000111110", 
    292 => "10000111111", 293 => "10001000000", 294 => "10001000001", 
    295 => "10001000010", 296 => "10001000011", 297 => "10001000100", 
    298 => "10001000101", 299 => "10001000110", 300 => "10001000111", 
    301 => "10001001001", 302 => "10001001010", 303 => "10001001011", 
    304 => "10001001100", 305 => "10001001101", 306 => "10001001110", 
    307 => "10001001111", 308 => "10001010001", 309 => "10001010010", 
    310 => "10001010011", 311 => "10001010100", 312 => "10001010110", 
    313 => "10001010111", 314 => "10001011000", 315 => "10001011010", 
    316 => "10001011011", 317 => "10001011100", 318 => "10001011110", 
    319 => "10001011111", 320 => "10001100001", 321 => "10001100010", 
    322 => "10001100100", 323 => "10001100101", 324 => "10001100111", 
    325 => "10001101000", 326 => "10001101010", 327 => "10001101011", 
    328 => "10001101101", 329 => "10001101110", 330 => "10001110000", 
    331 => "10001110010", 332 => "10001110100", 333 => "10001110101", 
    334 => "10001110111", 335 => "10001111001", 336 => "10001111011", 
    337 => "10001111100", 338 => "10001111110", 339 => "10010000000", 
    340 => "10010000010", 341 => "10010000100", 342 => "10010000110", 
    343 => "10010001000", 344 => "10010001010", 345 => "10010001100", 
    346 => "10010001110", 347 => "10010010000", 348 => "10010010010", 
    349 => "10010010100", 350 => "10010010110", 351 => "10010011001", 
    352 => "10010011011", 353 => "10010011101", 354 => "10010011111", 
    355 => "10010100010", 356 => "10010100100", 357 => "10010100110", 
    358 => "10010101001", 359 => "10010101011", 360 => "10010101110", 
    361 => "10010110000", 362 => "10010110011", 363 => "10010110101", 
    364 => "10010111000", 365 => "10010111011", 366 => "10010111101", 
    367 => "10011000000", 368 => "10011000011", 369 => "10011000110", 
    370 => "10011001000", 371 => "10011001011", 372 => "10011001110", 
    373 => "10011010001", 374 => "10011010100", 375 => "10011010111", 
    376 => "10011011010", 377 => "10011011101", 378 => "10011100000", 
    379 => "10011100011", 380 => "10011100111", 381 => "10011101010", 
    382 => "10011101101", 383 => "10011110000", 384 => "10011110100", 
    385 => "10011110111", 386 => "10011111010", 387 => "10011111110", 
    388 => "10100000001", 389 => "10100000101", 390 => "10100001001", 
    391 => "10100001100", 392 => "10100010000", 393 => "10100010100", 
    394 => "10100010111", 395 => "10100011011", 396 => "10100011111", 
    397 => "10100100011", 398 => "10100100111", 399 => "10100101011", 
    400 => "10100101111", 401 => "10100110011", 402 => "10100110111", 
    403 => "10100111011", 404 => "10100111111", 405 => "10101000011", 
    406 => "10101001000", 407 => "10101001100", 408 => "10101010000", 
    409 => "10101010101", 410 => "10101011001", 411 => "10101011110", 
    412 => "10101100010", 413 => "10101100111", 414 => "10101101100", 
    415 => "10101110000", 416 => "10101110101", 417 => "10101111010", 
    418 => "10101111111", 419 => "10110000100", 420 => "10110001001", 
    421 => "10110001110", 422 => "10110010011", 423 => "10110011000", 
    424 => "10110011101", 425 => "10110100010", 426 => "10110100111", 
    427 => "10110101100", 428 => "10110110010", 429 => "10110110111", 
    430 => "10110111101", 431 => "10111000010", 432 => "10111001000", 
    433 => "10111001101", 434 => "10111010011", 435 => "10111011000", 
    436 => "10111011110", 437 => "10111100100", 438 => "10111101010", 
    439 => "10111110000", 440 => "10111110101", 441 => "10111111011", 
    442 => "11000000001", 443 => "11000000111", 444 => "11000001101", 
    445 => "11000010100", 446 => "11000011010", 447 => "11000100000", 
    448 => "11000100110", 449 => "11000101101", 450 => "11000110011", 
    451 => "11000111001", 452 => "11001000000", 453 => "11001000110", 
    454 => "11001001101", 455 => "11001010011", 456 => "11001011010", 
    457 => "11001100001", 458 => "11001100111", 459 => "11001101110", 
    460 => "11001110101", 461 => "11001111100", 462 => "11010000011", 
    463 => "11010001010", 464 => "11010010001", 465 => "11010011000", 
    466 => "11010011111", 467 => "11010100110", 468 => "11010101101", 
    469 => "11010110100", 470 => "11010111011", 471 => "11011000010", 
    472 => "11011001010", 473 => "11011010001", 474 => "11011011000", 
    475 => "11011011111", 476 => "11011100111", 477 => "11011101110", 
    478 => "11011110110", 479 => "11011111101", 480 => "11100000101", 
    481 => "11100001100", 482 => "11100010100", 483 => "11100011011", 
    484 => "11100100011", 485 => "11100101011", 486 => "11100110010", 
    487 => "11100111010", 488 => "11101000010", 489 => "11101001001", 
    490 => "11101010001", 491 => "11101011001", 492 => "11101100001", 
    493 => "11101101001", 494 => "11101110000", 495 => "11101111000", 
    496 => "11110000000", 497 => "11110001000", 498 => "11110010000", 
    499 => "11110011000", 500 => "11110100000", 501 => "11110101000", 
    502 => "11110110000", 503 => "11110111000", 504 => "11111000000", 
    505 => "11111001000", 506 => "11111010000", 507 => "11111011000", 
    508 => "11111100000", 509 => "11111101000", 510 => "11111110000", 
    511 => "11111111000", 512 => "00000000000", 513 => "00000000111", 
    514 => "00000001111", 515 => "00000010111", 516 => "00000011111", 
    517 => "00000100111", 518 => "00000101111", 519 => "00000110111", 
    520 => "00000111111", 521 => "00001000111", 522 => "00001001111", 
    523 => "00001010111", 524 => "00001011111", 525 => "00001100111", 
    526 => "00001101111", 527 => "00001110111", 528 => "00001111111", 
    529 => "00010000111", 530 => "00010001111", 531 => "00010010110", 
    532 => "00010011110", 533 => "00010100110", 534 => "00010101110", 
    535 => "00010110110", 536 => "00010111101", 537 => "00011000101", 
    538 => "00011001101", 539 => "00011010100", 540 => "00011011100", 
    541 => "00011100100", 542 => "00011101011", 543 => "00011110011", 
    544 => "00011111010", 545 => "00100000010", 546 => "00100001001", 
    547 => "00100010001", 548 => "00100011000", 549 => "00100100000", 
    550 => "00100100111", 551 => "00100101110", 552 => "00100110101", 
    553 => "00100111101", 554 => "00101000100", 555 => "00101001011", 
    556 => "00101010010", 557 => "00101011001", 558 => "00101100000", 
    559 => "00101100111", 560 => "00101101110", 561 => "00101110101", 
    562 => "00101111100", 563 => "00110000011", 564 => "00110001010", 
    565 => "00110010001", 566 => "00110011000", 567 => "00110011110", 
    568 => "00110100101", 569 => "00110101100", 570 => "00110110010", 
    571 => "00110111001", 572 => "00110111111", 573 => "00111000110", 
    574 => "00111001100", 575 => "00111010010", 576 => "00111011001", 
    577 => "00111011111", 578 => "00111100101", 579 => "00111101011", 
    580 => "00111110010", 581 => "00111111000", 582 => "00111111110", 
    583 => "01000000100", 584 => "01000001010", 585 => "01000001111", 
    586 => "01000010101", 587 => "01000011011", 588 => "01000100001", 
    589 => "01000100111", 590 => "01000101100", 591 => "01000110010", 
    592 => "01000110111", 593 => "01000111101", 594 => "01001000010", 
    595 => "01001001000", 596 => "01001001101", 597 => "01001010011", 
    598 => "01001011000", 599 => "01001011101", 600 => "01001100010", 
    601 => "01001100111", 602 => "01001101100", 603 => "01001110001", 
    604 => "01001110110", 605 => "01001111011", 606 => "01010000000", 
    607 => "01010000101", 608 => "01010001010", 609 => "01010001111", 
    610 => "01010010011", 611 => "01010011000", 612 => "01010011101", 
    613 => "01010100001", 614 => "01010100110", 615 => "01010101010", 
    616 => "01010101111", 617 => "01010110011", 618 => "01010110111", 
    619 => "01010111100", 620 => "01011000000", 621 => "01011000100", 
    622 => "01011001000", 623 => "01011001100", 624 => "01011010000", 
    625 => "01011010100", 626 => "01011011000", 627 => "01011011100", 
    628 => "01011100000", 629 => "01011100100", 630 => "01011101000", 
    631 => "01011101011", 632 => "01011101111", 633 => "01011110011", 
    634 => "01011110110", 635 => "01011111010", 636 => "01011111110", 
    637 => "01100000001", 638 => "01100000101", 639 => "01100001000", 
    640 => "01100001011", 641 => "01100001111", 642 => "01100010010", 
    643 => "01100010101", 644 => "01100011000", 645 => "01100011100", 
    646 => "01100011111", 647 => "01100100010", 648 => "01100100101", 
    649 => "01100101000", 650 => "01100101011", 651 => "01100101110", 
    652 => "01100110001", 653 => "01100110100", 654 => "01100110111", 
    655 => "01100111001", 656 => "01100111100", 657 => "01100111111", 
    658 => "01101000010", 659 => "01101000100", 660 => "01101000111", 
    661 => "01101001010", 662 => "01101001100", 663 => "01101001111", 
    664 => "01101010001", 665 => "01101010100", 666 => "01101010110", 
    667 => "01101011001", 668 => "01101011011", 669 => "01101011101", 
    670 => "01101100000", 671 => "01101100010", 672 => "01101100100", 
    673 => "01101100110", 674 => "01101101001", 675 => "01101101011", 
    676 => "01101101101", 677 => "01101101111", 678 => "01101110001", 
    679 => "01101110011", 680 => "01101110101", 681 => "01101110111", 
    682 => "01101111001", 683 => "01101111011", 684 => "01101111101", 
    685 => "01101111111", 686 => "01110000001", 687 => "01110000011", 
    688 => "01110000100", 689 => "01110000110", 690 => "01110001000", 
    691 => "01110001010", 692 => "01110001011", 693 => "01110001101", 
    694 => "01110001111", 695 => "01110010001", 696 => "01110010010", 
    697 => "01110010100", 698 => "01110010101", 699 => "01110010111", 
    700 => "01110011000", 701 => "01110011010", 702 => "01110011011", 
    703 => "01110011101", 704 => "01110011110", 705 => "01110100000", 
    706 => "01110100001", 707 => "01110100011", 708 => "01110100100", 
    709 => "01110100101", 710 => "01110100111", 711 => "01110101000", 
    712 => "01110101001", 713 => "01110101011", 714 => "01110101100", 
    715 => "01110101101", 716 => "01110101110", 717 => "01110110000", 
    718 => "01110110001", 719 => "01110110010", 720 => "01110110011", 
    721 => "01110110100", 722 => "01110110101", 723 => "01110110110", 
    724 => "01110111000", 725 => "01110111001", 726 => "01110111010", 
    727 => "01110111011", 728 => "01110111100", 729 => "01110111101", 
    730 => "01110111110", 731 => "01110111111", 732 => "01111000000", 
    733 => "01111000001", 734 => "01111000010", 735 to 736=> "01111000011", 
    737 => "01111000100", 738 => "01111000101", 739 => "01111000110", 
    740 => "01111000111", 741 => "01111001000", 742 => "01111001001", 
    743 to 744=> "01111001010", 745 => "01111001011", 746 => "01111001100", 
    747 to 748=> "01111001101", 749 => "01111001110", 750 => "01111001111", 
    751 to 752=> "01111010000", 753 => "01111010001", 754 => "01111010010", 
    755 to 756=> "01111010011", 757 => "01111010100", 758 to 759=> "01111010101", 
    760 to 761=> "01111010110", 762 => "01111010111", 763 to 764=> "01111011000", 
    765 => "01111011001", 766 to 767=> "01111011010", 768 to 769=> "01111011011", 
    770 to 771=> "01111011100", 772 to 773=> "01111011101", 774 to 775=> "01111011110", 
    776 to 777=> "01111011111", 778 to 779=> "01111100000", 780 to 781=> "01111100001", 
    782 to 783=> "01111100010", 784 to 785=> "01111100011", 786 to 788=> "01111100100", 
    789 to 790=> "01111100101", 791 to 793=> "01111100110", 794 to 795=> "01111100111", 
    796 to 798=> "01111101000", 799 to 801=> "01111101001", 802 to 804=> "01111101010", 
    805 to 807=> "01111101011", 808 to 810=> "01111101100", 811 to 814=> "01111101101", 
    815 to 818=> "01111101110", 819 to 822=> "01111101111", 823 to 826=> "01111110000", 
    827 to 830=> "01111110001", 831 to 835=> "01111110010", 836 to 840=> "01111110011", 
    841 to 846=> "01111110100", 847 to 852=> "01111110101", 853 to 859=> "01111110110", 
    860 to 866=> "01111110111", 867 to 875=> "01111111000", 876 to 885=> "01111111001", 
    886 to 896=> "01111111010", 897 to 911=> "01111111011", 912 to 929=> "01111111100", 
    930 to 955=> "01111111101", 956 to 999=> "01111111110", 1000 to 1023=> "01111111111" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem0 : signal is "block_rom";
attribute syn_rom_style of mem1 : signal is "block_rom";
attribute syn_rom_style of mem2 : signal is "block_rom";
attribute syn_rom_style of mem3 : signal is "block_rom";
attribute syn_rom_style of mem4 : signal is "block_rom";
attribute syn_rom_style of mem5 : signal is "block_rom";
attribute syn_rom_style of mem6 : signal is "block_rom";
attribute syn_rom_style of mem7 : signal is "block_rom";
attribute syn_rom_style of mem8 : signal is "block_rom";
attribute syn_rom_style of mem9 : signal is "block_rom";
attribute syn_rom_style of mem10 : signal is "block_rom";
attribute syn_rom_style of mem11 : signal is "block_rom";
attribute syn_rom_style of mem12 : signal is "block_rom";
attribute syn_rom_style of mem13 : signal is "block_rom";
attribute syn_rom_style of mem14 : signal is "block_rom";
attribute syn_rom_style of mem15 : signal is "block_rom";
attribute syn_rom_style of mem16 : signal is "block_rom";
attribute syn_rom_style of mem17 : signal is "block_rom";
attribute syn_rom_style of mem18 : signal is "block_rom";
attribute syn_rom_style of mem19 : signal is "block_rom";
attribute syn_rom_style of mem20 : signal is "block_rom";
attribute syn_rom_style of mem21 : signal is "block_rom";
attribute syn_rom_style of mem22 : signal is "block_rom";
attribute syn_rom_style of mem23 : signal is "block_rom";
attribute syn_rom_style of mem24 : signal is "block_rom";
attribute syn_rom_style of mem25 : signal is "block_rom";
attribute syn_rom_style of mem26 : signal is "block_rom";
attribute syn_rom_style of mem27 : signal is "block_rom";
attribute syn_rom_style of mem28 : signal is "block_rom";
attribute syn_rom_style of mem29 : signal is "block_rom";
attribute syn_rom_style of mem30 : signal is "block_rom";
attribute syn_rom_style of mem31 : signal is "block_rom";
attribute syn_rom_style of mem32 : signal is "block_rom";
attribute syn_rom_style of mem33 : signal is "block_rom";
attribute syn_rom_style of mem34 : signal is "block_rom";
attribute syn_rom_style of mem35 : signal is "block_rom";
attribute syn_rom_style of mem36 : signal is "block_rom";
attribute syn_rom_style of mem37 : signal is "block_rom";
attribute syn_rom_style of mem38 : signal is "block_rom";
attribute syn_rom_style of mem39 : signal is "block_rom";
attribute syn_rom_style of mem40 : signal is "block_rom";
attribute syn_rom_style of mem41 : signal is "block_rom";
attribute syn_rom_style of mem42 : signal is "block_rom";
attribute syn_rom_style of mem43 : signal is "block_rom";
attribute syn_rom_style of mem44 : signal is "block_rom";
attribute syn_rom_style of mem45 : signal is "block_rom";
attribute syn_rom_style of mem46 : signal is "block_rom";
attribute syn_rom_style of mem47 : signal is "block_rom";
attribute syn_rom_style of mem48 : signal is "block_rom";
attribute syn_rom_style of mem49 : signal is "block_rom";
attribute syn_rom_style of mem50 : signal is "block_rom";
attribute syn_rom_style of mem51 : signal is "block_rom";
attribute syn_rom_style of mem52 : signal is "block_rom";
attribute syn_rom_style of mem53 : signal is "block_rom";
attribute syn_rom_style of mem54 : signal is "block_rom";
attribute syn_rom_style of mem55 : signal is "block_rom";
attribute syn_rom_style of mem56 : signal is "block_rom";
attribute syn_rom_style of mem57 : signal is "block_rom";
attribute syn_rom_style of mem58 : signal is "block_rom";
attribute syn_rom_style of mem59 : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem0 : signal is "block";
attribute ROM_STYLE of mem1 : signal is "block";
attribute ROM_STYLE of mem2 : signal is "block";
attribute ROM_STYLE of mem3 : signal is "block";
attribute ROM_STYLE of mem4 : signal is "block";
attribute ROM_STYLE of mem5 : signal is "block";
attribute ROM_STYLE of mem6 : signal is "block";
attribute ROM_STYLE of mem7 : signal is "block";
attribute ROM_STYLE of mem8 : signal is "block";
attribute ROM_STYLE of mem9 : signal is "block";
attribute ROM_STYLE of mem10 : signal is "block";
attribute ROM_STYLE of mem11 : signal is "block";
attribute ROM_STYLE of mem12 : signal is "block";
attribute ROM_STYLE of mem13 : signal is "block";
attribute ROM_STYLE of mem14 : signal is "block";
attribute ROM_STYLE of mem15 : signal is "block";
attribute ROM_STYLE of mem16 : signal is "block";
attribute ROM_STYLE of mem17 : signal is "block";
attribute ROM_STYLE of mem18 : signal is "block";
attribute ROM_STYLE of mem19 : signal is "block";
attribute ROM_STYLE of mem20 : signal is "block";
attribute ROM_STYLE of mem21 : signal is "block";
attribute ROM_STYLE of mem22 : signal is "block";
attribute ROM_STYLE of mem23 : signal is "block";
attribute ROM_STYLE of mem24 : signal is "block";
attribute ROM_STYLE of mem25 : signal is "block";
attribute ROM_STYLE of mem26 : signal is "block";
attribute ROM_STYLE of mem27 : signal is "block";
attribute ROM_STYLE of mem28 : signal is "block";
attribute ROM_STYLE of mem29 : signal is "block";
attribute ROM_STYLE of mem30 : signal is "block";
attribute ROM_STYLE of mem31 : signal is "block";
attribute ROM_STYLE of mem32 : signal is "block";
attribute ROM_STYLE of mem33 : signal is "block";
attribute ROM_STYLE of mem34 : signal is "block";
attribute ROM_STYLE of mem35 : signal is "block";
attribute ROM_STYLE of mem36 : signal is "block";
attribute ROM_STYLE of mem37 : signal is "block";
attribute ROM_STYLE of mem38 : signal is "block";
attribute ROM_STYLE of mem39 : signal is "block";
attribute ROM_STYLE of mem40 : signal is "block";
attribute ROM_STYLE of mem41 : signal is "block";
attribute ROM_STYLE of mem42 : signal is "block";
attribute ROM_STYLE of mem43 : signal is "block";
attribute ROM_STYLE of mem44 : signal is "block";
attribute ROM_STYLE of mem45 : signal is "block";
attribute ROM_STYLE of mem46 : signal is "block";
attribute ROM_STYLE of mem47 : signal is "block";
attribute ROM_STYLE of mem48 : signal is "block";
attribute ROM_STYLE of mem49 : signal is "block";
attribute ROM_STYLE of mem50 : signal is "block";
attribute ROM_STYLE of mem51 : signal is "block";
attribute ROM_STYLE of mem52 : signal is "block";
attribute ROM_STYLE of mem53 : signal is "block";
attribute ROM_STYLE of mem54 : signal is "block";
attribute ROM_STYLE of mem55 : signal is "block";
attribute ROM_STYLE of mem56 : signal is "block";
attribute ROM_STYLE of mem57 : signal is "block";
attribute ROM_STYLE of mem58 : signal is "block";
attribute ROM_STYLE of mem59 : signal is "block";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

memory_access_guard_2: process (addr2) 
begin
      addr2_tmp <= addr2;
--synthesis translate_off
      if (CONV_INTEGER(addr2) > mem_size-1) then
           addr2_tmp <= (others => '0');
      else 
           addr2_tmp <= addr2;
      end if;
--synthesis translate_on
end process;

memory_access_guard_3: process (addr3) 
begin
      addr3_tmp <= addr3;
--synthesis translate_off
      if (CONV_INTEGER(addr3) > mem_size-1) then
           addr3_tmp <= (others => '0');
      else 
           addr3_tmp <= addr3;
      end if;
--synthesis translate_on
end process;

memory_access_guard_4: process (addr4) 
begin
      addr4_tmp <= addr4;
--synthesis translate_off
      if (CONV_INTEGER(addr4) > mem_size-1) then
           addr4_tmp <= (others => '0');
      else 
           addr4_tmp <= addr4;
      end if;
--synthesis translate_on
end process;

memory_access_guard_5: process (addr5) 
begin
      addr5_tmp <= addr5;
--synthesis translate_off
      if (CONV_INTEGER(addr5) > mem_size-1) then
           addr5_tmp <= (others => '0');
      else 
           addr5_tmp <= addr5;
      end if;
--synthesis translate_on
end process;

memory_access_guard_6: process (addr6) 
begin
      addr6_tmp <= addr6;
--synthesis translate_off
      if (CONV_INTEGER(addr6) > mem_size-1) then
           addr6_tmp <= (others => '0');
      else 
           addr6_tmp <= addr6;
      end if;
--synthesis translate_on
end process;

memory_access_guard_7: process (addr7) 
begin
      addr7_tmp <= addr7;
--synthesis translate_off
      if (CONV_INTEGER(addr7) > mem_size-1) then
           addr7_tmp <= (others => '0');
      else 
           addr7_tmp <= addr7;
      end if;
--synthesis translate_on
end process;

memory_access_guard_8: process (addr8) 
begin
      addr8_tmp <= addr8;
--synthesis translate_off
      if (CONV_INTEGER(addr8) > mem_size-1) then
           addr8_tmp <= (others => '0');
      else 
           addr8_tmp <= addr8;
      end if;
--synthesis translate_on
end process;

memory_access_guard_9: process (addr9) 
begin
      addr9_tmp <= addr9;
--synthesis translate_off
      if (CONV_INTEGER(addr9) > mem_size-1) then
           addr9_tmp <= (others => '0');
      else 
           addr9_tmp <= addr9;
      end if;
--synthesis translate_on
end process;

memory_access_guard_10: process (addr10) 
begin
      addr10_tmp <= addr10;
--synthesis translate_off
      if (CONV_INTEGER(addr10) > mem_size-1) then
           addr10_tmp <= (others => '0');
      else 
           addr10_tmp <= addr10;
      end if;
--synthesis translate_on
end process;

memory_access_guard_11: process (addr11) 
begin
      addr11_tmp <= addr11;
--synthesis translate_off
      if (CONV_INTEGER(addr11) > mem_size-1) then
           addr11_tmp <= (others => '0');
      else 
           addr11_tmp <= addr11;
      end if;
--synthesis translate_on
end process;

memory_access_guard_12: process (addr12) 
begin
      addr12_tmp <= addr12;
--synthesis translate_off
      if (CONV_INTEGER(addr12) > mem_size-1) then
           addr12_tmp <= (others => '0');
      else 
           addr12_tmp <= addr12;
      end if;
--synthesis translate_on
end process;

memory_access_guard_13: process (addr13) 
begin
      addr13_tmp <= addr13;
--synthesis translate_off
      if (CONV_INTEGER(addr13) > mem_size-1) then
           addr13_tmp <= (others => '0');
      else 
           addr13_tmp <= addr13;
      end if;
--synthesis translate_on
end process;

memory_access_guard_14: process (addr14) 
begin
      addr14_tmp <= addr14;
--synthesis translate_off
      if (CONV_INTEGER(addr14) > mem_size-1) then
           addr14_tmp <= (others => '0');
      else 
           addr14_tmp <= addr14;
      end if;
--synthesis translate_on
end process;

memory_access_guard_15: process (addr15) 
begin
      addr15_tmp <= addr15;
--synthesis translate_off
      if (CONV_INTEGER(addr15) > mem_size-1) then
           addr15_tmp <= (others => '0');
      else 
           addr15_tmp <= addr15;
      end if;
--synthesis translate_on
end process;

memory_access_guard_16: process (addr16) 
begin
      addr16_tmp <= addr16;
--synthesis translate_off
      if (CONV_INTEGER(addr16) > mem_size-1) then
           addr16_tmp <= (others => '0');
      else 
           addr16_tmp <= addr16;
      end if;
--synthesis translate_on
end process;

memory_access_guard_17: process (addr17) 
begin
      addr17_tmp <= addr17;
--synthesis translate_off
      if (CONV_INTEGER(addr17) > mem_size-1) then
           addr17_tmp <= (others => '0');
      else 
           addr17_tmp <= addr17;
      end if;
--synthesis translate_on
end process;

memory_access_guard_18: process (addr18) 
begin
      addr18_tmp <= addr18;
--synthesis translate_off
      if (CONV_INTEGER(addr18) > mem_size-1) then
           addr18_tmp <= (others => '0');
      else 
           addr18_tmp <= addr18;
      end if;
--synthesis translate_on
end process;

memory_access_guard_19: process (addr19) 
begin
      addr19_tmp <= addr19;
--synthesis translate_off
      if (CONV_INTEGER(addr19) > mem_size-1) then
           addr19_tmp <= (others => '0');
      else 
           addr19_tmp <= addr19;
      end if;
--synthesis translate_on
end process;

memory_access_guard_20: process (addr20) 
begin
      addr20_tmp <= addr20;
--synthesis translate_off
      if (CONV_INTEGER(addr20) > mem_size-1) then
           addr20_tmp <= (others => '0');
      else 
           addr20_tmp <= addr20;
      end if;
--synthesis translate_on
end process;

memory_access_guard_21: process (addr21) 
begin
      addr21_tmp <= addr21;
--synthesis translate_off
      if (CONV_INTEGER(addr21) > mem_size-1) then
           addr21_tmp <= (others => '0');
      else 
           addr21_tmp <= addr21;
      end if;
--synthesis translate_on
end process;

memory_access_guard_22: process (addr22) 
begin
      addr22_tmp <= addr22;
--synthesis translate_off
      if (CONV_INTEGER(addr22) > mem_size-1) then
           addr22_tmp <= (others => '0');
      else 
           addr22_tmp <= addr22;
      end if;
--synthesis translate_on
end process;

memory_access_guard_23: process (addr23) 
begin
      addr23_tmp <= addr23;
--synthesis translate_off
      if (CONV_INTEGER(addr23) > mem_size-1) then
           addr23_tmp <= (others => '0');
      else 
           addr23_tmp <= addr23;
      end if;
--synthesis translate_on
end process;

memory_access_guard_24: process (addr24) 
begin
      addr24_tmp <= addr24;
--synthesis translate_off
      if (CONV_INTEGER(addr24) > mem_size-1) then
           addr24_tmp <= (others => '0');
      else 
           addr24_tmp <= addr24;
      end if;
--synthesis translate_on
end process;

memory_access_guard_25: process (addr25) 
begin
      addr25_tmp <= addr25;
--synthesis translate_off
      if (CONV_INTEGER(addr25) > mem_size-1) then
           addr25_tmp <= (others => '0');
      else 
           addr25_tmp <= addr25;
      end if;
--synthesis translate_on
end process;

memory_access_guard_26: process (addr26) 
begin
      addr26_tmp <= addr26;
--synthesis translate_off
      if (CONV_INTEGER(addr26) > mem_size-1) then
           addr26_tmp <= (others => '0');
      else 
           addr26_tmp <= addr26;
      end if;
--synthesis translate_on
end process;

memory_access_guard_27: process (addr27) 
begin
      addr27_tmp <= addr27;
--synthesis translate_off
      if (CONV_INTEGER(addr27) > mem_size-1) then
           addr27_tmp <= (others => '0');
      else 
           addr27_tmp <= addr27;
      end if;
--synthesis translate_on
end process;

memory_access_guard_28: process (addr28) 
begin
      addr28_tmp <= addr28;
--synthesis translate_off
      if (CONV_INTEGER(addr28) > mem_size-1) then
           addr28_tmp <= (others => '0');
      else 
           addr28_tmp <= addr28;
      end if;
--synthesis translate_on
end process;

memory_access_guard_29: process (addr29) 
begin
      addr29_tmp <= addr29;
--synthesis translate_off
      if (CONV_INTEGER(addr29) > mem_size-1) then
           addr29_tmp <= (others => '0');
      else 
           addr29_tmp <= addr29;
      end if;
--synthesis translate_on
end process;

memory_access_guard_30: process (addr30) 
begin
      addr30_tmp <= addr30;
--synthesis translate_off
      if (CONV_INTEGER(addr30) > mem_size-1) then
           addr30_tmp <= (others => '0');
      else 
           addr30_tmp <= addr30;
      end if;
--synthesis translate_on
end process;

memory_access_guard_31: process (addr31) 
begin
      addr31_tmp <= addr31;
--synthesis translate_off
      if (CONV_INTEGER(addr31) > mem_size-1) then
           addr31_tmp <= (others => '0');
      else 
           addr31_tmp <= addr31;
      end if;
--synthesis translate_on
end process;

memory_access_guard_32: process (addr32) 
begin
      addr32_tmp <= addr32;
--synthesis translate_off
      if (CONV_INTEGER(addr32) > mem_size-1) then
           addr32_tmp <= (others => '0');
      else 
           addr32_tmp <= addr32;
      end if;
--synthesis translate_on
end process;

memory_access_guard_33: process (addr33) 
begin
      addr33_tmp <= addr33;
--synthesis translate_off
      if (CONV_INTEGER(addr33) > mem_size-1) then
           addr33_tmp <= (others => '0');
      else 
           addr33_tmp <= addr33;
      end if;
--synthesis translate_on
end process;

memory_access_guard_34: process (addr34) 
begin
      addr34_tmp <= addr34;
--synthesis translate_off
      if (CONV_INTEGER(addr34) > mem_size-1) then
           addr34_tmp <= (others => '0');
      else 
           addr34_tmp <= addr34;
      end if;
--synthesis translate_on
end process;

memory_access_guard_35: process (addr35) 
begin
      addr35_tmp <= addr35;
--synthesis translate_off
      if (CONV_INTEGER(addr35) > mem_size-1) then
           addr35_tmp <= (others => '0');
      else 
           addr35_tmp <= addr35;
      end if;
--synthesis translate_on
end process;

memory_access_guard_36: process (addr36) 
begin
      addr36_tmp <= addr36;
--synthesis translate_off
      if (CONV_INTEGER(addr36) > mem_size-1) then
           addr36_tmp <= (others => '0');
      else 
           addr36_tmp <= addr36;
      end if;
--synthesis translate_on
end process;

memory_access_guard_37: process (addr37) 
begin
      addr37_tmp <= addr37;
--synthesis translate_off
      if (CONV_INTEGER(addr37) > mem_size-1) then
           addr37_tmp <= (others => '0');
      else 
           addr37_tmp <= addr37;
      end if;
--synthesis translate_on
end process;

memory_access_guard_38: process (addr38) 
begin
      addr38_tmp <= addr38;
--synthesis translate_off
      if (CONV_INTEGER(addr38) > mem_size-1) then
           addr38_tmp <= (others => '0');
      else 
           addr38_tmp <= addr38;
      end if;
--synthesis translate_on
end process;

memory_access_guard_39: process (addr39) 
begin
      addr39_tmp <= addr39;
--synthesis translate_off
      if (CONV_INTEGER(addr39) > mem_size-1) then
           addr39_tmp <= (others => '0');
      else 
           addr39_tmp <= addr39;
      end if;
--synthesis translate_on
end process;

memory_access_guard_40: process (addr40) 
begin
      addr40_tmp <= addr40;
--synthesis translate_off
      if (CONV_INTEGER(addr40) > mem_size-1) then
           addr40_tmp <= (others => '0');
      else 
           addr40_tmp <= addr40;
      end if;
--synthesis translate_on
end process;

memory_access_guard_41: process (addr41) 
begin
      addr41_tmp <= addr41;
--synthesis translate_off
      if (CONV_INTEGER(addr41) > mem_size-1) then
           addr41_tmp <= (others => '0');
      else 
           addr41_tmp <= addr41;
      end if;
--synthesis translate_on
end process;

memory_access_guard_42: process (addr42) 
begin
      addr42_tmp <= addr42;
--synthesis translate_off
      if (CONV_INTEGER(addr42) > mem_size-1) then
           addr42_tmp <= (others => '0');
      else 
           addr42_tmp <= addr42;
      end if;
--synthesis translate_on
end process;

memory_access_guard_43: process (addr43) 
begin
      addr43_tmp <= addr43;
--synthesis translate_off
      if (CONV_INTEGER(addr43) > mem_size-1) then
           addr43_tmp <= (others => '0');
      else 
           addr43_tmp <= addr43;
      end if;
--synthesis translate_on
end process;

memory_access_guard_44: process (addr44) 
begin
      addr44_tmp <= addr44;
--synthesis translate_off
      if (CONV_INTEGER(addr44) > mem_size-1) then
           addr44_tmp <= (others => '0');
      else 
           addr44_tmp <= addr44;
      end if;
--synthesis translate_on
end process;

memory_access_guard_45: process (addr45) 
begin
      addr45_tmp <= addr45;
--synthesis translate_off
      if (CONV_INTEGER(addr45) > mem_size-1) then
           addr45_tmp <= (others => '0');
      else 
           addr45_tmp <= addr45;
      end if;
--synthesis translate_on
end process;

memory_access_guard_46: process (addr46) 
begin
      addr46_tmp <= addr46;
--synthesis translate_off
      if (CONV_INTEGER(addr46) > mem_size-1) then
           addr46_tmp <= (others => '0');
      else 
           addr46_tmp <= addr46;
      end if;
--synthesis translate_on
end process;

memory_access_guard_47: process (addr47) 
begin
      addr47_tmp <= addr47;
--synthesis translate_off
      if (CONV_INTEGER(addr47) > mem_size-1) then
           addr47_tmp <= (others => '0');
      else 
           addr47_tmp <= addr47;
      end if;
--synthesis translate_on
end process;

memory_access_guard_48: process (addr48) 
begin
      addr48_tmp <= addr48;
--synthesis translate_off
      if (CONV_INTEGER(addr48) > mem_size-1) then
           addr48_tmp <= (others => '0');
      else 
           addr48_tmp <= addr48;
      end if;
--synthesis translate_on
end process;

memory_access_guard_49: process (addr49) 
begin
      addr49_tmp <= addr49;
--synthesis translate_off
      if (CONV_INTEGER(addr49) > mem_size-1) then
           addr49_tmp <= (others => '0');
      else 
           addr49_tmp <= addr49;
      end if;
--synthesis translate_on
end process;

memory_access_guard_50: process (addr50) 
begin
      addr50_tmp <= addr50;
--synthesis translate_off
      if (CONV_INTEGER(addr50) > mem_size-1) then
           addr50_tmp <= (others => '0');
      else 
           addr50_tmp <= addr50;
      end if;
--synthesis translate_on
end process;

memory_access_guard_51: process (addr51) 
begin
      addr51_tmp <= addr51;
--synthesis translate_off
      if (CONV_INTEGER(addr51) > mem_size-1) then
           addr51_tmp <= (others => '0');
      else 
           addr51_tmp <= addr51;
      end if;
--synthesis translate_on
end process;

memory_access_guard_52: process (addr52) 
begin
      addr52_tmp <= addr52;
--synthesis translate_off
      if (CONV_INTEGER(addr52) > mem_size-1) then
           addr52_tmp <= (others => '0');
      else 
           addr52_tmp <= addr52;
      end if;
--synthesis translate_on
end process;

memory_access_guard_53: process (addr53) 
begin
      addr53_tmp <= addr53;
--synthesis translate_off
      if (CONV_INTEGER(addr53) > mem_size-1) then
           addr53_tmp <= (others => '0');
      else 
           addr53_tmp <= addr53;
      end if;
--synthesis translate_on
end process;

memory_access_guard_54: process (addr54) 
begin
      addr54_tmp <= addr54;
--synthesis translate_off
      if (CONV_INTEGER(addr54) > mem_size-1) then
           addr54_tmp <= (others => '0');
      else 
           addr54_tmp <= addr54;
      end if;
--synthesis translate_on
end process;

memory_access_guard_55: process (addr55) 
begin
      addr55_tmp <= addr55;
--synthesis translate_off
      if (CONV_INTEGER(addr55) > mem_size-1) then
           addr55_tmp <= (others => '0');
      else 
           addr55_tmp <= addr55;
      end if;
--synthesis translate_on
end process;

memory_access_guard_56: process (addr56) 
begin
      addr56_tmp <= addr56;
--synthesis translate_off
      if (CONV_INTEGER(addr56) > mem_size-1) then
           addr56_tmp <= (others => '0');
      else 
           addr56_tmp <= addr56;
      end if;
--synthesis translate_on
end process;

memory_access_guard_57: process (addr57) 
begin
      addr57_tmp <= addr57;
--synthesis translate_off
      if (CONV_INTEGER(addr57) > mem_size-1) then
           addr57_tmp <= (others => '0');
      else 
           addr57_tmp <= addr57;
      end if;
--synthesis translate_on
end process;

memory_access_guard_58: process (addr58) 
begin
      addr58_tmp <= addr58;
--synthesis translate_off
      if (CONV_INTEGER(addr58) > mem_size-1) then
           addr58_tmp <= (others => '0');
      else 
           addr58_tmp <= addr58;
      end if;
--synthesis translate_on
end process;

memory_access_guard_59: process (addr59) 
begin
      addr59_tmp <= addr59;
--synthesis translate_off
      if (CONV_INTEGER(addr59) > mem_size-1) then
           addr59_tmp <= (others => '0');
      else 
           addr59_tmp <= addr59;
      end if;
--synthesis translate_on
end process;

memory_access_guard_60: process (addr60) 
begin
      addr60_tmp <= addr60;
--synthesis translate_off
      if (CONV_INTEGER(addr60) > mem_size-1) then
           addr60_tmp <= (others => '0');
      else 
           addr60_tmp <= addr60;
      end if;
--synthesis translate_on
end process;

memory_access_guard_61: process (addr61) 
begin
      addr61_tmp <= addr61;
--synthesis translate_off
      if (CONV_INTEGER(addr61) > mem_size-1) then
           addr61_tmp <= (others => '0');
      else 
           addr61_tmp <= addr61;
      end if;
--synthesis translate_on
end process;

memory_access_guard_62: process (addr62) 
begin
      addr62_tmp <= addr62;
--synthesis translate_off
      if (CONV_INTEGER(addr62) > mem_size-1) then
           addr62_tmp <= (others => '0');
      else 
           addr62_tmp <= addr62;
      end if;
--synthesis translate_on
end process;

memory_access_guard_63: process (addr63) 
begin
      addr63_tmp <= addr63;
--synthesis translate_off
      if (CONV_INTEGER(addr63) > mem_size-1) then
           addr63_tmp <= (others => '0');
      else 
           addr63_tmp <= addr63;
      end if;
--synthesis translate_on
end process;

memory_access_guard_64: process (addr64) 
begin
      addr64_tmp <= addr64;
--synthesis translate_off
      if (CONV_INTEGER(addr64) > mem_size-1) then
           addr64_tmp <= (others => '0');
      else 
           addr64_tmp <= addr64;
      end if;
--synthesis translate_on
end process;

memory_access_guard_65: process (addr65) 
begin
      addr65_tmp <= addr65;
--synthesis translate_off
      if (CONV_INTEGER(addr65) > mem_size-1) then
           addr65_tmp <= (others => '0');
      else 
           addr65_tmp <= addr65;
      end if;
--synthesis translate_on
end process;

memory_access_guard_66: process (addr66) 
begin
      addr66_tmp <= addr66;
--synthesis translate_off
      if (CONV_INTEGER(addr66) > mem_size-1) then
           addr66_tmp <= (others => '0');
      else 
           addr66_tmp <= addr66;
      end if;
--synthesis translate_on
end process;

memory_access_guard_67: process (addr67) 
begin
      addr67_tmp <= addr67;
--synthesis translate_off
      if (CONV_INTEGER(addr67) > mem_size-1) then
           addr67_tmp <= (others => '0');
      else 
           addr67_tmp <= addr67;
      end if;
--synthesis translate_on
end process;

memory_access_guard_68: process (addr68) 
begin
      addr68_tmp <= addr68;
--synthesis translate_off
      if (CONV_INTEGER(addr68) > mem_size-1) then
           addr68_tmp <= (others => '0');
      else 
           addr68_tmp <= addr68;
      end if;
--synthesis translate_on
end process;

memory_access_guard_69: process (addr69) 
begin
      addr69_tmp <= addr69;
--synthesis translate_off
      if (CONV_INTEGER(addr69) > mem_size-1) then
           addr69_tmp <= (others => '0');
      else 
           addr69_tmp <= addr69;
      end if;
--synthesis translate_on
end process;

memory_access_guard_70: process (addr70) 
begin
      addr70_tmp <= addr70;
--synthesis translate_off
      if (CONV_INTEGER(addr70) > mem_size-1) then
           addr70_tmp <= (others => '0');
      else 
           addr70_tmp <= addr70;
      end if;
--synthesis translate_on
end process;

memory_access_guard_71: process (addr71) 
begin
      addr71_tmp <= addr71;
--synthesis translate_off
      if (CONV_INTEGER(addr71) > mem_size-1) then
           addr71_tmp <= (others => '0');
      else 
           addr71_tmp <= addr71;
      end if;
--synthesis translate_on
end process;

memory_access_guard_72: process (addr72) 
begin
      addr72_tmp <= addr72;
--synthesis translate_off
      if (CONV_INTEGER(addr72) > mem_size-1) then
           addr72_tmp <= (others => '0');
      else 
           addr72_tmp <= addr72;
      end if;
--synthesis translate_on
end process;

memory_access_guard_73: process (addr73) 
begin
      addr73_tmp <= addr73;
--synthesis translate_off
      if (CONV_INTEGER(addr73) > mem_size-1) then
           addr73_tmp <= (others => '0');
      else 
           addr73_tmp <= addr73;
      end if;
--synthesis translate_on
end process;

memory_access_guard_74: process (addr74) 
begin
      addr74_tmp <= addr74;
--synthesis translate_off
      if (CONV_INTEGER(addr74) > mem_size-1) then
           addr74_tmp <= (others => '0');
      else 
           addr74_tmp <= addr74;
      end if;
--synthesis translate_on
end process;

memory_access_guard_75: process (addr75) 
begin
      addr75_tmp <= addr75;
--synthesis translate_off
      if (CONV_INTEGER(addr75) > mem_size-1) then
           addr75_tmp <= (others => '0');
      else 
           addr75_tmp <= addr75;
      end if;
--synthesis translate_on
end process;

memory_access_guard_76: process (addr76) 
begin
      addr76_tmp <= addr76;
--synthesis translate_off
      if (CONV_INTEGER(addr76) > mem_size-1) then
           addr76_tmp <= (others => '0');
      else 
           addr76_tmp <= addr76;
      end if;
--synthesis translate_on
end process;

memory_access_guard_77: process (addr77) 
begin
      addr77_tmp <= addr77;
--synthesis translate_off
      if (CONV_INTEGER(addr77) > mem_size-1) then
           addr77_tmp <= (others => '0');
      else 
           addr77_tmp <= addr77;
      end if;
--synthesis translate_on
end process;

memory_access_guard_78: process (addr78) 
begin
      addr78_tmp <= addr78;
--synthesis translate_off
      if (CONV_INTEGER(addr78) > mem_size-1) then
           addr78_tmp <= (others => '0');
      else 
           addr78_tmp <= addr78;
      end if;
--synthesis translate_on
end process;

memory_access_guard_79: process (addr79) 
begin
      addr79_tmp <= addr79;
--synthesis translate_off
      if (CONV_INTEGER(addr79) > mem_size-1) then
           addr79_tmp <= (others => '0');
      else 
           addr79_tmp <= addr79;
      end if;
--synthesis translate_on
end process;

memory_access_guard_80: process (addr80) 
begin
      addr80_tmp <= addr80;
--synthesis translate_off
      if (CONV_INTEGER(addr80) > mem_size-1) then
           addr80_tmp <= (others => '0');
      else 
           addr80_tmp <= addr80;
      end if;
--synthesis translate_on
end process;

memory_access_guard_81: process (addr81) 
begin
      addr81_tmp <= addr81;
--synthesis translate_off
      if (CONV_INTEGER(addr81) > mem_size-1) then
           addr81_tmp <= (others => '0');
      else 
           addr81_tmp <= addr81;
      end if;
--synthesis translate_on
end process;

memory_access_guard_82: process (addr82) 
begin
      addr82_tmp <= addr82;
--synthesis translate_off
      if (CONV_INTEGER(addr82) > mem_size-1) then
           addr82_tmp <= (others => '0');
      else 
           addr82_tmp <= addr82;
      end if;
--synthesis translate_on
end process;

memory_access_guard_83: process (addr83) 
begin
      addr83_tmp <= addr83;
--synthesis translate_off
      if (CONV_INTEGER(addr83) > mem_size-1) then
           addr83_tmp <= (others => '0');
      else 
           addr83_tmp <= addr83;
      end if;
--synthesis translate_on
end process;

memory_access_guard_84: process (addr84) 
begin
      addr84_tmp <= addr84;
--synthesis translate_off
      if (CONV_INTEGER(addr84) > mem_size-1) then
           addr84_tmp <= (others => '0');
      else 
           addr84_tmp <= addr84;
      end if;
--synthesis translate_on
end process;

memory_access_guard_85: process (addr85) 
begin
      addr85_tmp <= addr85;
--synthesis translate_off
      if (CONV_INTEGER(addr85) > mem_size-1) then
           addr85_tmp <= (others => '0');
      else 
           addr85_tmp <= addr85;
      end if;
--synthesis translate_on
end process;

memory_access_guard_86: process (addr86) 
begin
      addr86_tmp <= addr86;
--synthesis translate_off
      if (CONV_INTEGER(addr86) > mem_size-1) then
           addr86_tmp <= (others => '0');
      else 
           addr86_tmp <= addr86;
      end if;
--synthesis translate_on
end process;

memory_access_guard_87: process (addr87) 
begin
      addr87_tmp <= addr87;
--synthesis translate_off
      if (CONV_INTEGER(addr87) > mem_size-1) then
           addr87_tmp <= (others => '0');
      else 
           addr87_tmp <= addr87;
      end if;
--synthesis translate_on
end process;

memory_access_guard_88: process (addr88) 
begin
      addr88_tmp <= addr88;
--synthesis translate_off
      if (CONV_INTEGER(addr88) > mem_size-1) then
           addr88_tmp <= (others => '0');
      else 
           addr88_tmp <= addr88;
      end if;
--synthesis translate_on
end process;

memory_access_guard_89: process (addr89) 
begin
      addr89_tmp <= addr89;
--synthesis translate_off
      if (CONV_INTEGER(addr89) > mem_size-1) then
           addr89_tmp <= (others => '0');
      else 
           addr89_tmp <= addr89;
      end if;
--synthesis translate_on
end process;

memory_access_guard_90: process (addr90) 
begin
      addr90_tmp <= addr90;
--synthesis translate_off
      if (CONV_INTEGER(addr90) > mem_size-1) then
           addr90_tmp <= (others => '0');
      else 
           addr90_tmp <= addr90;
      end if;
--synthesis translate_on
end process;

memory_access_guard_91: process (addr91) 
begin
      addr91_tmp <= addr91;
--synthesis translate_off
      if (CONV_INTEGER(addr91) > mem_size-1) then
           addr91_tmp <= (others => '0');
      else 
           addr91_tmp <= addr91;
      end if;
--synthesis translate_on
end process;

memory_access_guard_92: process (addr92) 
begin
      addr92_tmp <= addr92;
--synthesis translate_off
      if (CONV_INTEGER(addr92) > mem_size-1) then
           addr92_tmp <= (others => '0');
      else 
           addr92_tmp <= addr92;
      end if;
--synthesis translate_on
end process;

memory_access_guard_93: process (addr93) 
begin
      addr93_tmp <= addr93;
--synthesis translate_off
      if (CONV_INTEGER(addr93) > mem_size-1) then
           addr93_tmp <= (others => '0');
      else 
           addr93_tmp <= addr93;
      end if;
--synthesis translate_on
end process;

memory_access_guard_94: process (addr94) 
begin
      addr94_tmp <= addr94;
--synthesis translate_off
      if (CONV_INTEGER(addr94) > mem_size-1) then
           addr94_tmp <= (others => '0');
      else 
           addr94_tmp <= addr94;
      end if;
--synthesis translate_on
end process;

memory_access_guard_95: process (addr95) 
begin
      addr95_tmp <= addr95;
--synthesis translate_off
      if (CONV_INTEGER(addr95) > mem_size-1) then
           addr95_tmp <= (others => '0');
      else 
           addr95_tmp <= addr95;
      end if;
--synthesis translate_on
end process;

memory_access_guard_96: process (addr96) 
begin
      addr96_tmp <= addr96;
--synthesis translate_off
      if (CONV_INTEGER(addr96) > mem_size-1) then
           addr96_tmp <= (others => '0');
      else 
           addr96_tmp <= addr96;
      end if;
--synthesis translate_on
end process;

memory_access_guard_97: process (addr97) 
begin
      addr97_tmp <= addr97;
--synthesis translate_off
      if (CONV_INTEGER(addr97) > mem_size-1) then
           addr97_tmp <= (others => '0');
      else 
           addr97_tmp <= addr97;
      end if;
--synthesis translate_on
end process;

memory_access_guard_98: process (addr98) 
begin
      addr98_tmp <= addr98;
--synthesis translate_off
      if (CONV_INTEGER(addr98) > mem_size-1) then
           addr98_tmp <= (others => '0');
      else 
           addr98_tmp <= addr98;
      end if;
--synthesis translate_on
end process;

memory_access_guard_99: process (addr99) 
begin
      addr99_tmp <= addr99;
--synthesis translate_off
      if (CONV_INTEGER(addr99) > mem_size-1) then
           addr99_tmp <= (others => '0');
      else 
           addr99_tmp <= addr99;
      end if;
--synthesis translate_on
end process;

memory_access_guard_100: process (addr100) 
begin
      addr100_tmp <= addr100;
--synthesis translate_off
      if (CONV_INTEGER(addr100) > mem_size-1) then
           addr100_tmp <= (others => '0');
      else 
           addr100_tmp <= addr100;
      end if;
--synthesis translate_on
end process;

memory_access_guard_101: process (addr101) 
begin
      addr101_tmp <= addr101;
--synthesis translate_off
      if (CONV_INTEGER(addr101) > mem_size-1) then
           addr101_tmp <= (others => '0');
      else 
           addr101_tmp <= addr101;
      end if;
--synthesis translate_on
end process;

memory_access_guard_102: process (addr102) 
begin
      addr102_tmp <= addr102;
--synthesis translate_off
      if (CONV_INTEGER(addr102) > mem_size-1) then
           addr102_tmp <= (others => '0');
      else 
           addr102_tmp <= addr102;
      end if;
--synthesis translate_on
end process;

memory_access_guard_103: process (addr103) 
begin
      addr103_tmp <= addr103;
--synthesis translate_off
      if (CONV_INTEGER(addr103) > mem_size-1) then
           addr103_tmp <= (others => '0');
      else 
           addr103_tmp <= addr103;
      end if;
--synthesis translate_on
end process;

memory_access_guard_104: process (addr104) 
begin
      addr104_tmp <= addr104;
--synthesis translate_off
      if (CONV_INTEGER(addr104) > mem_size-1) then
           addr104_tmp <= (others => '0');
      else 
           addr104_tmp <= addr104;
      end if;
--synthesis translate_on
end process;

memory_access_guard_105: process (addr105) 
begin
      addr105_tmp <= addr105;
--synthesis translate_off
      if (CONV_INTEGER(addr105) > mem_size-1) then
           addr105_tmp <= (others => '0');
      else 
           addr105_tmp <= addr105;
      end if;
--synthesis translate_on
end process;

memory_access_guard_106: process (addr106) 
begin
      addr106_tmp <= addr106;
--synthesis translate_off
      if (CONV_INTEGER(addr106) > mem_size-1) then
           addr106_tmp <= (others => '0');
      else 
           addr106_tmp <= addr106;
      end if;
--synthesis translate_on
end process;

memory_access_guard_107: process (addr107) 
begin
      addr107_tmp <= addr107;
--synthesis translate_off
      if (CONV_INTEGER(addr107) > mem_size-1) then
           addr107_tmp <= (others => '0');
      else 
           addr107_tmp <= addr107;
      end if;
--synthesis translate_on
end process;

memory_access_guard_108: process (addr108) 
begin
      addr108_tmp <= addr108;
--synthesis translate_off
      if (CONV_INTEGER(addr108) > mem_size-1) then
           addr108_tmp <= (others => '0');
      else 
           addr108_tmp <= addr108;
      end if;
--synthesis translate_on
end process;

memory_access_guard_109: process (addr109) 
begin
      addr109_tmp <= addr109;
--synthesis translate_off
      if (CONV_INTEGER(addr109) > mem_size-1) then
           addr109_tmp <= (others => '0');
      else 
           addr109_tmp <= addr109;
      end if;
--synthesis translate_on
end process;

memory_access_guard_110: process (addr110) 
begin
      addr110_tmp <= addr110;
--synthesis translate_off
      if (CONV_INTEGER(addr110) > mem_size-1) then
           addr110_tmp <= (others => '0');
      else 
           addr110_tmp <= addr110;
      end if;
--synthesis translate_on
end process;

memory_access_guard_111: process (addr111) 
begin
      addr111_tmp <= addr111;
--synthesis translate_off
      if (CONV_INTEGER(addr111) > mem_size-1) then
           addr111_tmp <= (others => '0');
      else 
           addr111_tmp <= addr111;
      end if;
--synthesis translate_on
end process;

memory_access_guard_112: process (addr112) 
begin
      addr112_tmp <= addr112;
--synthesis translate_off
      if (CONV_INTEGER(addr112) > mem_size-1) then
           addr112_tmp <= (others => '0');
      else 
           addr112_tmp <= addr112;
      end if;
--synthesis translate_on
end process;

memory_access_guard_113: process (addr113) 
begin
      addr113_tmp <= addr113;
--synthesis translate_off
      if (CONV_INTEGER(addr113) > mem_size-1) then
           addr113_tmp <= (others => '0');
      else 
           addr113_tmp <= addr113;
      end if;
--synthesis translate_on
end process;

memory_access_guard_114: process (addr114) 
begin
      addr114_tmp <= addr114;
--synthesis translate_off
      if (CONV_INTEGER(addr114) > mem_size-1) then
           addr114_tmp <= (others => '0');
      else 
           addr114_tmp <= addr114;
      end if;
--synthesis translate_on
end process;

memory_access_guard_115: process (addr115) 
begin
      addr115_tmp <= addr115;
--synthesis translate_off
      if (CONV_INTEGER(addr115) > mem_size-1) then
           addr115_tmp <= (others => '0');
      else 
           addr115_tmp <= addr115;
      end if;
--synthesis translate_on
end process;

memory_access_guard_116: process (addr116) 
begin
      addr116_tmp <= addr116;
--synthesis translate_off
      if (CONV_INTEGER(addr116) > mem_size-1) then
           addr116_tmp <= (others => '0');
      else 
           addr116_tmp <= addr116;
      end if;
--synthesis translate_on
end process;

memory_access_guard_117: process (addr117) 
begin
      addr117_tmp <= addr117;
--synthesis translate_off
      if (CONV_INTEGER(addr117) > mem_size-1) then
           addr117_tmp <= (others => '0');
      else 
           addr117_tmp <= addr117;
      end if;
--synthesis translate_on
end process;

memory_access_guard_118: process (addr118) 
begin
      addr118_tmp <= addr118;
--synthesis translate_off
      if (CONV_INTEGER(addr118) > mem_size-1) then
           addr118_tmp <= (others => '0');
      else 
           addr118_tmp <= addr118;
      end if;
--synthesis translate_on
end process;

memory_access_guard_119: process (addr119) 
begin
      addr119_tmp <= addr119;
--synthesis translate_off
      if (CONV_INTEGER(addr119) > mem_size-1) then
           addr119_tmp <= (others => '0');
      else 
           addr119_tmp <= addr119;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem0(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem0(CONV_INTEGER(addr1_tmp)); 
        end if;
        if (ce2 = '1') then 
            q2 <= mem1(CONV_INTEGER(addr2_tmp)); 
        end if;
        if (ce3 = '1') then 
            q3 <= mem1(CONV_INTEGER(addr3_tmp)); 
        end if;
        if (ce4 = '1') then 
            q4 <= mem2(CONV_INTEGER(addr4_tmp)); 
        end if;
        if (ce5 = '1') then 
            q5 <= mem2(CONV_INTEGER(addr5_tmp)); 
        end if;
        if (ce6 = '1') then 
            q6 <= mem3(CONV_INTEGER(addr6_tmp)); 
        end if;
        if (ce7 = '1') then 
            q7 <= mem3(CONV_INTEGER(addr7_tmp)); 
        end if;
        if (ce8 = '1') then 
            q8 <= mem4(CONV_INTEGER(addr8_tmp)); 
        end if;
        if (ce9 = '1') then 
            q9 <= mem4(CONV_INTEGER(addr9_tmp)); 
        end if;
        if (ce10 = '1') then 
            q10 <= mem5(CONV_INTEGER(addr10_tmp)); 
        end if;
        if (ce11 = '1') then 
            q11 <= mem5(CONV_INTEGER(addr11_tmp)); 
        end if;
        if (ce12 = '1') then 
            q12 <= mem6(CONV_INTEGER(addr12_tmp)); 
        end if;
        if (ce13 = '1') then 
            q13 <= mem6(CONV_INTEGER(addr13_tmp)); 
        end if;
        if (ce14 = '1') then 
            q14 <= mem7(CONV_INTEGER(addr14_tmp)); 
        end if;
        if (ce15 = '1') then 
            q15 <= mem7(CONV_INTEGER(addr15_tmp)); 
        end if;
        if (ce16 = '1') then 
            q16 <= mem8(CONV_INTEGER(addr16_tmp)); 
        end if;
        if (ce17 = '1') then 
            q17 <= mem8(CONV_INTEGER(addr17_tmp)); 
        end if;
        if (ce18 = '1') then 
            q18 <= mem9(CONV_INTEGER(addr18_tmp)); 
        end if;
        if (ce19 = '1') then 
            q19 <= mem9(CONV_INTEGER(addr19_tmp)); 
        end if;
        if (ce20 = '1') then 
            q20 <= mem10(CONV_INTEGER(addr20_tmp)); 
        end if;
        if (ce21 = '1') then 
            q21 <= mem10(CONV_INTEGER(addr21_tmp)); 
        end if;
        if (ce22 = '1') then 
            q22 <= mem11(CONV_INTEGER(addr22_tmp)); 
        end if;
        if (ce23 = '1') then 
            q23 <= mem11(CONV_INTEGER(addr23_tmp)); 
        end if;
        if (ce24 = '1') then 
            q24 <= mem12(CONV_INTEGER(addr24_tmp)); 
        end if;
        if (ce25 = '1') then 
            q25 <= mem12(CONV_INTEGER(addr25_tmp)); 
        end if;
        if (ce26 = '1') then 
            q26 <= mem13(CONV_INTEGER(addr26_tmp)); 
        end if;
        if (ce27 = '1') then 
            q27 <= mem13(CONV_INTEGER(addr27_tmp)); 
        end if;
        if (ce28 = '1') then 
            q28 <= mem14(CONV_INTEGER(addr28_tmp)); 
        end if;
        if (ce29 = '1') then 
            q29 <= mem14(CONV_INTEGER(addr29_tmp)); 
        end if;
        if (ce30 = '1') then 
            q30 <= mem15(CONV_INTEGER(addr30_tmp)); 
        end if;
        if (ce31 = '1') then 
            q31 <= mem15(CONV_INTEGER(addr31_tmp)); 
        end if;
        if (ce32 = '1') then 
            q32 <= mem16(CONV_INTEGER(addr32_tmp)); 
        end if;
        if (ce33 = '1') then 
            q33 <= mem16(CONV_INTEGER(addr33_tmp)); 
        end if;
        if (ce34 = '1') then 
            q34 <= mem17(CONV_INTEGER(addr34_tmp)); 
        end if;
        if (ce35 = '1') then 
            q35 <= mem17(CONV_INTEGER(addr35_tmp)); 
        end if;
        if (ce36 = '1') then 
            q36 <= mem18(CONV_INTEGER(addr36_tmp)); 
        end if;
        if (ce37 = '1') then 
            q37 <= mem18(CONV_INTEGER(addr37_tmp)); 
        end if;
        if (ce38 = '1') then 
            q38 <= mem19(CONV_INTEGER(addr38_tmp)); 
        end if;
        if (ce39 = '1') then 
            q39 <= mem19(CONV_INTEGER(addr39_tmp)); 
        end if;
        if (ce40 = '1') then 
            q40 <= mem20(CONV_INTEGER(addr40_tmp)); 
        end if;
        if (ce41 = '1') then 
            q41 <= mem20(CONV_INTEGER(addr41_tmp)); 
        end if;
        if (ce42 = '1') then 
            q42 <= mem21(CONV_INTEGER(addr42_tmp)); 
        end if;
        if (ce43 = '1') then 
            q43 <= mem21(CONV_INTEGER(addr43_tmp)); 
        end if;
        if (ce44 = '1') then 
            q44 <= mem22(CONV_INTEGER(addr44_tmp)); 
        end if;
        if (ce45 = '1') then 
            q45 <= mem22(CONV_INTEGER(addr45_tmp)); 
        end if;
        if (ce46 = '1') then 
            q46 <= mem23(CONV_INTEGER(addr46_tmp)); 
        end if;
        if (ce47 = '1') then 
            q47 <= mem23(CONV_INTEGER(addr47_tmp)); 
        end if;
        if (ce48 = '1') then 
            q48 <= mem24(CONV_INTEGER(addr48_tmp)); 
        end if;
        if (ce49 = '1') then 
            q49 <= mem24(CONV_INTEGER(addr49_tmp)); 
        end if;
        if (ce50 = '1') then 
            q50 <= mem25(CONV_INTEGER(addr50_tmp)); 
        end if;
        if (ce51 = '1') then 
            q51 <= mem25(CONV_INTEGER(addr51_tmp)); 
        end if;
        if (ce52 = '1') then 
            q52 <= mem26(CONV_INTEGER(addr52_tmp)); 
        end if;
        if (ce53 = '1') then 
            q53 <= mem26(CONV_INTEGER(addr53_tmp)); 
        end if;
        if (ce54 = '1') then 
            q54 <= mem27(CONV_INTEGER(addr54_tmp)); 
        end if;
        if (ce55 = '1') then 
            q55 <= mem27(CONV_INTEGER(addr55_tmp)); 
        end if;
        if (ce56 = '1') then 
            q56 <= mem28(CONV_INTEGER(addr56_tmp)); 
        end if;
        if (ce57 = '1') then 
            q57 <= mem28(CONV_INTEGER(addr57_tmp)); 
        end if;
        if (ce58 = '1') then 
            q58 <= mem29(CONV_INTEGER(addr58_tmp)); 
        end if;
        if (ce59 = '1') then 
            q59 <= mem29(CONV_INTEGER(addr59_tmp)); 
        end if;
        if (ce60 = '1') then 
            q60 <= mem30(CONV_INTEGER(addr60_tmp)); 
        end if;
        if (ce61 = '1') then 
            q61 <= mem30(CONV_INTEGER(addr61_tmp)); 
        end if;
        if (ce62 = '1') then 
            q62 <= mem31(CONV_INTEGER(addr62_tmp)); 
        end if;
        if (ce63 = '1') then 
            q63 <= mem31(CONV_INTEGER(addr63_tmp)); 
        end if;
        if (ce64 = '1') then 
            q64 <= mem32(CONV_INTEGER(addr64_tmp)); 
        end if;
        if (ce65 = '1') then 
            q65 <= mem32(CONV_INTEGER(addr65_tmp)); 
        end if;
        if (ce66 = '1') then 
            q66 <= mem33(CONV_INTEGER(addr66_tmp)); 
        end if;
        if (ce67 = '1') then 
            q67 <= mem33(CONV_INTEGER(addr67_tmp)); 
        end if;
        if (ce68 = '1') then 
            q68 <= mem34(CONV_INTEGER(addr68_tmp)); 
        end if;
        if (ce69 = '1') then 
            q69 <= mem34(CONV_INTEGER(addr69_tmp)); 
        end if;
        if (ce70 = '1') then 
            q70 <= mem35(CONV_INTEGER(addr70_tmp)); 
        end if;
        if (ce71 = '1') then 
            q71 <= mem35(CONV_INTEGER(addr71_tmp)); 
        end if;
        if (ce72 = '1') then 
            q72 <= mem36(CONV_INTEGER(addr72_tmp)); 
        end if;
        if (ce73 = '1') then 
            q73 <= mem36(CONV_INTEGER(addr73_tmp)); 
        end if;
        if (ce74 = '1') then 
            q74 <= mem37(CONV_INTEGER(addr74_tmp)); 
        end if;
        if (ce75 = '1') then 
            q75 <= mem37(CONV_INTEGER(addr75_tmp)); 
        end if;
        if (ce76 = '1') then 
            q76 <= mem38(CONV_INTEGER(addr76_tmp)); 
        end if;
        if (ce77 = '1') then 
            q77 <= mem38(CONV_INTEGER(addr77_tmp)); 
        end if;
        if (ce78 = '1') then 
            q78 <= mem39(CONV_INTEGER(addr78_tmp)); 
        end if;
        if (ce79 = '1') then 
            q79 <= mem39(CONV_INTEGER(addr79_tmp)); 
        end if;
        if (ce80 = '1') then 
            q80 <= mem40(CONV_INTEGER(addr80_tmp)); 
        end if;
        if (ce81 = '1') then 
            q81 <= mem40(CONV_INTEGER(addr81_tmp)); 
        end if;
        if (ce82 = '1') then 
            q82 <= mem41(CONV_INTEGER(addr82_tmp)); 
        end if;
        if (ce83 = '1') then 
            q83 <= mem41(CONV_INTEGER(addr83_tmp)); 
        end if;
        if (ce84 = '1') then 
            q84 <= mem42(CONV_INTEGER(addr84_tmp)); 
        end if;
        if (ce85 = '1') then 
            q85 <= mem42(CONV_INTEGER(addr85_tmp)); 
        end if;
        if (ce86 = '1') then 
            q86 <= mem43(CONV_INTEGER(addr86_tmp)); 
        end if;
        if (ce87 = '1') then 
            q87 <= mem43(CONV_INTEGER(addr87_tmp)); 
        end if;
        if (ce88 = '1') then 
            q88 <= mem44(CONV_INTEGER(addr88_tmp)); 
        end if;
        if (ce89 = '1') then 
            q89 <= mem44(CONV_INTEGER(addr89_tmp)); 
        end if;
        if (ce90 = '1') then 
            q90 <= mem45(CONV_INTEGER(addr90_tmp)); 
        end if;
        if (ce91 = '1') then 
            q91 <= mem45(CONV_INTEGER(addr91_tmp)); 
        end if;
        if (ce92 = '1') then 
            q92 <= mem46(CONV_INTEGER(addr92_tmp)); 
        end if;
        if (ce93 = '1') then 
            q93 <= mem46(CONV_INTEGER(addr93_tmp)); 
        end if;
        if (ce94 = '1') then 
            q94 <= mem47(CONV_INTEGER(addr94_tmp)); 
        end if;
        if (ce95 = '1') then 
            q95 <= mem47(CONV_INTEGER(addr95_tmp)); 
        end if;
        if (ce96 = '1') then 
            q96 <= mem48(CONV_INTEGER(addr96_tmp)); 
        end if;
        if (ce97 = '1') then 
            q97 <= mem48(CONV_INTEGER(addr97_tmp)); 
        end if;
        if (ce98 = '1') then 
            q98 <= mem49(CONV_INTEGER(addr98_tmp)); 
        end if;
        if (ce99 = '1') then 
            q99 <= mem49(CONV_INTEGER(addr99_tmp)); 
        end if;
        if (ce100 = '1') then 
            q100 <= mem50(CONV_INTEGER(addr100_tmp)); 
        end if;
        if (ce101 = '1') then 
            q101 <= mem50(CONV_INTEGER(addr101_tmp)); 
        end if;
        if (ce102 = '1') then 
            q102 <= mem51(CONV_INTEGER(addr102_tmp)); 
        end if;
        if (ce103 = '1') then 
            q103 <= mem51(CONV_INTEGER(addr103_tmp)); 
        end if;
        if (ce104 = '1') then 
            q104 <= mem52(CONV_INTEGER(addr104_tmp)); 
        end if;
        if (ce105 = '1') then 
            q105 <= mem52(CONV_INTEGER(addr105_tmp)); 
        end if;
        if (ce106 = '1') then 
            q106 <= mem53(CONV_INTEGER(addr106_tmp)); 
        end if;
        if (ce107 = '1') then 
            q107 <= mem53(CONV_INTEGER(addr107_tmp)); 
        end if;
        if (ce108 = '1') then 
            q108 <= mem54(CONV_INTEGER(addr108_tmp)); 
        end if;
        if (ce109 = '1') then 
            q109 <= mem54(CONV_INTEGER(addr109_tmp)); 
        end if;
        if (ce110 = '1') then 
            q110 <= mem55(CONV_INTEGER(addr110_tmp)); 
        end if;
        if (ce111 = '1') then 
            q111 <= mem55(CONV_INTEGER(addr111_tmp)); 
        end if;
        if (ce112 = '1') then 
            q112 <= mem56(CONV_INTEGER(addr112_tmp)); 
        end if;
        if (ce113 = '1') then 
            q113 <= mem56(CONV_INTEGER(addr113_tmp)); 
        end if;
        if (ce114 = '1') then 
            q114 <= mem57(CONV_INTEGER(addr114_tmp)); 
        end if;
        if (ce115 = '1') then 
            q115 <= mem57(CONV_INTEGER(addr115_tmp)); 
        end if;
        if (ce116 = '1') then 
            q116 <= mem58(CONV_INTEGER(addr116_tmp)); 
        end if;
        if (ce117 = '1') then 
            q117 <= mem58(CONV_INTEGER(addr117_tmp)); 
        end if;
        if (ce118 = '1') then 
            q118 <= mem59(CONV_INTEGER(addr118_tmp)); 
        end if;
        if (ce119 = '1') then 
            q119 <= mem59(CONV_INTEGER(addr119_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table3 is
    generic (
        DataWidth : INTEGER := 11;
        AddressRange : INTEGER := 1024;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address2 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address3 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce3 : IN STD_LOGIC;
        q3 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address4 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce4 : IN STD_LOGIC;
        q4 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address5 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce5 : IN STD_LOGIC;
        q5 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address6 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce6 : IN STD_LOGIC;
        q6 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address7 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce7 : IN STD_LOGIC;
        q7 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address8 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce8 : IN STD_LOGIC;
        q8 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address9 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce9 : IN STD_LOGIC;
        q9 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address10 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce10 : IN STD_LOGIC;
        q10 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address11 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce11 : IN STD_LOGIC;
        q11 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address12 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce12 : IN STD_LOGIC;
        q12 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address13 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce13 : IN STD_LOGIC;
        q13 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address14 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce14 : IN STD_LOGIC;
        q14 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address15 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce15 : IN STD_LOGIC;
        q15 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address16 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce16 : IN STD_LOGIC;
        q16 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address17 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce17 : IN STD_LOGIC;
        q17 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address18 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce18 : IN STD_LOGIC;
        q18 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address19 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce19 : IN STD_LOGIC;
        q19 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address20 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce20 : IN STD_LOGIC;
        q20 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address21 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce21 : IN STD_LOGIC;
        q21 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address22 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce22 : IN STD_LOGIC;
        q22 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address23 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce23 : IN STD_LOGIC;
        q23 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address24 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce24 : IN STD_LOGIC;
        q24 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address25 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce25 : IN STD_LOGIC;
        q25 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address26 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce26 : IN STD_LOGIC;
        q26 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address27 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce27 : IN STD_LOGIC;
        q27 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address28 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce28 : IN STD_LOGIC;
        q28 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address29 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce29 : IN STD_LOGIC;
        q29 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address30 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce30 : IN STD_LOGIC;
        q30 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address31 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce31 : IN STD_LOGIC;
        q31 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address32 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce32 : IN STD_LOGIC;
        q32 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address33 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce33 : IN STD_LOGIC;
        q33 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address34 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce34 : IN STD_LOGIC;
        q34 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address35 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce35 : IN STD_LOGIC;
        q35 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address36 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce36 : IN STD_LOGIC;
        q36 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address37 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce37 : IN STD_LOGIC;
        q37 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address38 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce38 : IN STD_LOGIC;
        q38 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address39 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce39 : IN STD_LOGIC;
        q39 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address40 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce40 : IN STD_LOGIC;
        q40 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address41 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce41 : IN STD_LOGIC;
        q41 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address42 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce42 : IN STD_LOGIC;
        q42 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address43 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce43 : IN STD_LOGIC;
        q43 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address44 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce44 : IN STD_LOGIC;
        q44 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address45 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce45 : IN STD_LOGIC;
        q45 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address46 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce46 : IN STD_LOGIC;
        q46 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address47 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce47 : IN STD_LOGIC;
        q47 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address48 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce48 : IN STD_LOGIC;
        q48 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address49 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce49 : IN STD_LOGIC;
        q49 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address50 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce50 : IN STD_LOGIC;
        q50 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address51 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce51 : IN STD_LOGIC;
        q51 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address52 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce52 : IN STD_LOGIC;
        q52 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address53 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce53 : IN STD_LOGIC;
        q53 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address54 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce54 : IN STD_LOGIC;
        q54 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address55 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce55 : IN STD_LOGIC;
        q55 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address56 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce56 : IN STD_LOGIC;
        q56 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address57 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce57 : IN STD_LOGIC;
        q57 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address58 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce58 : IN STD_LOGIC;
        q58 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address59 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce59 : IN STD_LOGIC;
        q59 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address60 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce60 : IN STD_LOGIC;
        q60 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address61 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce61 : IN STD_LOGIC;
        q61 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address62 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce62 : IN STD_LOGIC;
        q62 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address63 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce63 : IN STD_LOGIC;
        q63 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address64 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce64 : IN STD_LOGIC;
        q64 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address65 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce65 : IN STD_LOGIC;
        q65 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address66 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce66 : IN STD_LOGIC;
        q66 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address67 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce67 : IN STD_LOGIC;
        q67 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address68 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce68 : IN STD_LOGIC;
        q68 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address69 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce69 : IN STD_LOGIC;
        q69 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address70 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce70 : IN STD_LOGIC;
        q70 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address71 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce71 : IN STD_LOGIC;
        q71 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address72 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce72 : IN STD_LOGIC;
        q72 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address73 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce73 : IN STD_LOGIC;
        q73 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address74 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce74 : IN STD_LOGIC;
        q74 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address75 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce75 : IN STD_LOGIC;
        q75 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address76 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce76 : IN STD_LOGIC;
        q76 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address77 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce77 : IN STD_LOGIC;
        q77 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address78 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce78 : IN STD_LOGIC;
        q78 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address79 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce79 : IN STD_LOGIC;
        q79 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address80 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce80 : IN STD_LOGIC;
        q80 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address81 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce81 : IN STD_LOGIC;
        q81 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address82 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce82 : IN STD_LOGIC;
        q82 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address83 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce83 : IN STD_LOGIC;
        q83 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address84 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce84 : IN STD_LOGIC;
        q84 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address85 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce85 : IN STD_LOGIC;
        q85 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address86 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce86 : IN STD_LOGIC;
        q86 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address87 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce87 : IN STD_LOGIC;
        q87 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address88 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce88 : IN STD_LOGIC;
        q88 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address89 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce89 : IN STD_LOGIC;
        q89 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address90 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce90 : IN STD_LOGIC;
        q90 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address91 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce91 : IN STD_LOGIC;
        q91 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address92 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce92 : IN STD_LOGIC;
        q92 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address93 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce93 : IN STD_LOGIC;
        q93 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address94 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce94 : IN STD_LOGIC;
        q94 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address95 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce95 : IN STD_LOGIC;
        q95 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address96 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce96 : IN STD_LOGIC;
        q96 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address97 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce97 : IN STD_LOGIC;
        q97 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address98 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce98 : IN STD_LOGIC;
        q98 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address99 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce99 : IN STD_LOGIC;
        q99 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address100 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce100 : IN STD_LOGIC;
        q100 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address101 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce101 : IN STD_LOGIC;
        q101 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address102 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce102 : IN STD_LOGIC;
        q102 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address103 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce103 : IN STD_LOGIC;
        q103 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address104 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce104 : IN STD_LOGIC;
        q104 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address105 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce105 : IN STD_LOGIC;
        q105 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address106 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce106 : IN STD_LOGIC;
        q106 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address107 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce107 : IN STD_LOGIC;
        q107 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address108 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce108 : IN STD_LOGIC;
        q108 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address109 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce109 : IN STD_LOGIC;
        q109 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address110 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce110 : IN STD_LOGIC;
        q110 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address111 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce111 : IN STD_LOGIC;
        q111 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address112 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce112 : IN STD_LOGIC;
        q112 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address113 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce113 : IN STD_LOGIC;
        q113 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address114 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce114 : IN STD_LOGIC;
        q114 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address115 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce115 : IN STD_LOGIC;
        q115 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address116 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce116 : IN STD_LOGIC;
        q116 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address117 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce117 : IN STD_LOGIC;
        q117 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address118 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce118 : IN STD_LOGIC;
        q118 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address119 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce119 : IN STD_LOGIC;
        q119 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table3 is
    component tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR;
            addr2 : IN STD_LOGIC_VECTOR;
            ce2 : IN STD_LOGIC;
            q2 : OUT STD_LOGIC_VECTOR;
            addr3 : IN STD_LOGIC_VECTOR;
            ce3 : IN STD_LOGIC;
            q3 : OUT STD_LOGIC_VECTOR;
            addr4 : IN STD_LOGIC_VECTOR;
            ce4 : IN STD_LOGIC;
            q4 : OUT STD_LOGIC_VECTOR;
            addr5 : IN STD_LOGIC_VECTOR;
            ce5 : IN STD_LOGIC;
            q5 : OUT STD_LOGIC_VECTOR;
            addr6 : IN STD_LOGIC_VECTOR;
            ce6 : IN STD_LOGIC;
            q6 : OUT STD_LOGIC_VECTOR;
            addr7 : IN STD_LOGIC_VECTOR;
            ce7 : IN STD_LOGIC;
            q7 : OUT STD_LOGIC_VECTOR;
            addr8 : IN STD_LOGIC_VECTOR;
            ce8 : IN STD_LOGIC;
            q8 : OUT STD_LOGIC_VECTOR;
            addr9 : IN STD_LOGIC_VECTOR;
            ce9 : IN STD_LOGIC;
            q9 : OUT STD_LOGIC_VECTOR;
            addr10 : IN STD_LOGIC_VECTOR;
            ce10 : IN STD_LOGIC;
            q10 : OUT STD_LOGIC_VECTOR;
            addr11 : IN STD_LOGIC_VECTOR;
            ce11 : IN STD_LOGIC;
            q11 : OUT STD_LOGIC_VECTOR;
            addr12 : IN STD_LOGIC_VECTOR;
            ce12 : IN STD_LOGIC;
            q12 : OUT STD_LOGIC_VECTOR;
            addr13 : IN STD_LOGIC_VECTOR;
            ce13 : IN STD_LOGIC;
            q13 : OUT STD_LOGIC_VECTOR;
            addr14 : IN STD_LOGIC_VECTOR;
            ce14 : IN STD_LOGIC;
            q14 : OUT STD_LOGIC_VECTOR;
            addr15 : IN STD_LOGIC_VECTOR;
            ce15 : IN STD_LOGIC;
            q15 : OUT STD_LOGIC_VECTOR;
            addr16 : IN STD_LOGIC_VECTOR;
            ce16 : IN STD_LOGIC;
            q16 : OUT STD_LOGIC_VECTOR;
            addr17 : IN STD_LOGIC_VECTOR;
            ce17 : IN STD_LOGIC;
            q17 : OUT STD_LOGIC_VECTOR;
            addr18 : IN STD_LOGIC_VECTOR;
            ce18 : IN STD_LOGIC;
            q18 : OUT STD_LOGIC_VECTOR;
            addr19 : IN STD_LOGIC_VECTOR;
            ce19 : IN STD_LOGIC;
            q19 : OUT STD_LOGIC_VECTOR;
            addr20 : IN STD_LOGIC_VECTOR;
            ce20 : IN STD_LOGIC;
            q20 : OUT STD_LOGIC_VECTOR;
            addr21 : IN STD_LOGIC_VECTOR;
            ce21 : IN STD_LOGIC;
            q21 : OUT STD_LOGIC_VECTOR;
            addr22 : IN STD_LOGIC_VECTOR;
            ce22 : IN STD_LOGIC;
            q22 : OUT STD_LOGIC_VECTOR;
            addr23 : IN STD_LOGIC_VECTOR;
            ce23 : IN STD_LOGIC;
            q23 : OUT STD_LOGIC_VECTOR;
            addr24 : IN STD_LOGIC_VECTOR;
            ce24 : IN STD_LOGIC;
            q24 : OUT STD_LOGIC_VECTOR;
            addr25 : IN STD_LOGIC_VECTOR;
            ce25 : IN STD_LOGIC;
            q25 : OUT STD_LOGIC_VECTOR;
            addr26 : IN STD_LOGIC_VECTOR;
            ce26 : IN STD_LOGIC;
            q26 : OUT STD_LOGIC_VECTOR;
            addr27 : IN STD_LOGIC_VECTOR;
            ce27 : IN STD_LOGIC;
            q27 : OUT STD_LOGIC_VECTOR;
            addr28 : IN STD_LOGIC_VECTOR;
            ce28 : IN STD_LOGIC;
            q28 : OUT STD_LOGIC_VECTOR;
            addr29 : IN STD_LOGIC_VECTOR;
            ce29 : IN STD_LOGIC;
            q29 : OUT STD_LOGIC_VECTOR;
            addr30 : IN STD_LOGIC_VECTOR;
            ce30 : IN STD_LOGIC;
            q30 : OUT STD_LOGIC_VECTOR;
            addr31 : IN STD_LOGIC_VECTOR;
            ce31 : IN STD_LOGIC;
            q31 : OUT STD_LOGIC_VECTOR;
            addr32 : IN STD_LOGIC_VECTOR;
            ce32 : IN STD_LOGIC;
            q32 : OUT STD_LOGIC_VECTOR;
            addr33 : IN STD_LOGIC_VECTOR;
            ce33 : IN STD_LOGIC;
            q33 : OUT STD_LOGIC_VECTOR;
            addr34 : IN STD_LOGIC_VECTOR;
            ce34 : IN STD_LOGIC;
            q34 : OUT STD_LOGIC_VECTOR;
            addr35 : IN STD_LOGIC_VECTOR;
            ce35 : IN STD_LOGIC;
            q35 : OUT STD_LOGIC_VECTOR;
            addr36 : IN STD_LOGIC_VECTOR;
            ce36 : IN STD_LOGIC;
            q36 : OUT STD_LOGIC_VECTOR;
            addr37 : IN STD_LOGIC_VECTOR;
            ce37 : IN STD_LOGIC;
            q37 : OUT STD_LOGIC_VECTOR;
            addr38 : IN STD_LOGIC_VECTOR;
            ce38 : IN STD_LOGIC;
            q38 : OUT STD_LOGIC_VECTOR;
            addr39 : IN STD_LOGIC_VECTOR;
            ce39 : IN STD_LOGIC;
            q39 : OUT STD_LOGIC_VECTOR;
            addr40 : IN STD_LOGIC_VECTOR;
            ce40 : IN STD_LOGIC;
            q40 : OUT STD_LOGIC_VECTOR;
            addr41 : IN STD_LOGIC_VECTOR;
            ce41 : IN STD_LOGIC;
            q41 : OUT STD_LOGIC_VECTOR;
            addr42 : IN STD_LOGIC_VECTOR;
            ce42 : IN STD_LOGIC;
            q42 : OUT STD_LOGIC_VECTOR;
            addr43 : IN STD_LOGIC_VECTOR;
            ce43 : IN STD_LOGIC;
            q43 : OUT STD_LOGIC_VECTOR;
            addr44 : IN STD_LOGIC_VECTOR;
            ce44 : IN STD_LOGIC;
            q44 : OUT STD_LOGIC_VECTOR;
            addr45 : IN STD_LOGIC_VECTOR;
            ce45 : IN STD_LOGIC;
            q45 : OUT STD_LOGIC_VECTOR;
            addr46 : IN STD_LOGIC_VECTOR;
            ce46 : IN STD_LOGIC;
            q46 : OUT STD_LOGIC_VECTOR;
            addr47 : IN STD_LOGIC_VECTOR;
            ce47 : IN STD_LOGIC;
            q47 : OUT STD_LOGIC_VECTOR;
            addr48 : IN STD_LOGIC_VECTOR;
            ce48 : IN STD_LOGIC;
            q48 : OUT STD_LOGIC_VECTOR;
            addr49 : IN STD_LOGIC_VECTOR;
            ce49 : IN STD_LOGIC;
            q49 : OUT STD_LOGIC_VECTOR;
            addr50 : IN STD_LOGIC_VECTOR;
            ce50 : IN STD_LOGIC;
            q50 : OUT STD_LOGIC_VECTOR;
            addr51 : IN STD_LOGIC_VECTOR;
            ce51 : IN STD_LOGIC;
            q51 : OUT STD_LOGIC_VECTOR;
            addr52 : IN STD_LOGIC_VECTOR;
            ce52 : IN STD_LOGIC;
            q52 : OUT STD_LOGIC_VECTOR;
            addr53 : IN STD_LOGIC_VECTOR;
            ce53 : IN STD_LOGIC;
            q53 : OUT STD_LOGIC_VECTOR;
            addr54 : IN STD_LOGIC_VECTOR;
            ce54 : IN STD_LOGIC;
            q54 : OUT STD_LOGIC_VECTOR;
            addr55 : IN STD_LOGIC_VECTOR;
            ce55 : IN STD_LOGIC;
            q55 : OUT STD_LOGIC_VECTOR;
            addr56 : IN STD_LOGIC_VECTOR;
            ce56 : IN STD_LOGIC;
            q56 : OUT STD_LOGIC_VECTOR;
            addr57 : IN STD_LOGIC_VECTOR;
            ce57 : IN STD_LOGIC;
            q57 : OUT STD_LOGIC_VECTOR;
            addr58 : IN STD_LOGIC_VECTOR;
            ce58 : IN STD_LOGIC;
            q58 : OUT STD_LOGIC_VECTOR;
            addr59 : IN STD_LOGIC_VECTOR;
            ce59 : IN STD_LOGIC;
            q59 : OUT STD_LOGIC_VECTOR;
            addr60 : IN STD_LOGIC_VECTOR;
            ce60 : IN STD_LOGIC;
            q60 : OUT STD_LOGIC_VECTOR;
            addr61 : IN STD_LOGIC_VECTOR;
            ce61 : IN STD_LOGIC;
            q61 : OUT STD_LOGIC_VECTOR;
            addr62 : IN STD_LOGIC_VECTOR;
            ce62 : IN STD_LOGIC;
            q62 : OUT STD_LOGIC_VECTOR;
            addr63 : IN STD_LOGIC_VECTOR;
            ce63 : IN STD_LOGIC;
            q63 : OUT STD_LOGIC_VECTOR;
            addr64 : IN STD_LOGIC_VECTOR;
            ce64 : IN STD_LOGIC;
            q64 : OUT STD_LOGIC_VECTOR;
            addr65 : IN STD_LOGIC_VECTOR;
            ce65 : IN STD_LOGIC;
            q65 : OUT STD_LOGIC_VECTOR;
            addr66 : IN STD_LOGIC_VECTOR;
            ce66 : IN STD_LOGIC;
            q66 : OUT STD_LOGIC_VECTOR;
            addr67 : IN STD_LOGIC_VECTOR;
            ce67 : IN STD_LOGIC;
            q67 : OUT STD_LOGIC_VECTOR;
            addr68 : IN STD_LOGIC_VECTOR;
            ce68 : IN STD_LOGIC;
            q68 : OUT STD_LOGIC_VECTOR;
            addr69 : IN STD_LOGIC_VECTOR;
            ce69 : IN STD_LOGIC;
            q69 : OUT STD_LOGIC_VECTOR;
            addr70 : IN STD_LOGIC_VECTOR;
            ce70 : IN STD_LOGIC;
            q70 : OUT STD_LOGIC_VECTOR;
            addr71 : IN STD_LOGIC_VECTOR;
            ce71 : IN STD_LOGIC;
            q71 : OUT STD_LOGIC_VECTOR;
            addr72 : IN STD_LOGIC_VECTOR;
            ce72 : IN STD_LOGIC;
            q72 : OUT STD_LOGIC_VECTOR;
            addr73 : IN STD_LOGIC_VECTOR;
            ce73 : IN STD_LOGIC;
            q73 : OUT STD_LOGIC_VECTOR;
            addr74 : IN STD_LOGIC_VECTOR;
            ce74 : IN STD_LOGIC;
            q74 : OUT STD_LOGIC_VECTOR;
            addr75 : IN STD_LOGIC_VECTOR;
            ce75 : IN STD_LOGIC;
            q75 : OUT STD_LOGIC_VECTOR;
            addr76 : IN STD_LOGIC_VECTOR;
            ce76 : IN STD_LOGIC;
            q76 : OUT STD_LOGIC_VECTOR;
            addr77 : IN STD_LOGIC_VECTOR;
            ce77 : IN STD_LOGIC;
            q77 : OUT STD_LOGIC_VECTOR;
            addr78 : IN STD_LOGIC_VECTOR;
            ce78 : IN STD_LOGIC;
            q78 : OUT STD_LOGIC_VECTOR;
            addr79 : IN STD_LOGIC_VECTOR;
            ce79 : IN STD_LOGIC;
            q79 : OUT STD_LOGIC_VECTOR;
            addr80 : IN STD_LOGIC_VECTOR;
            ce80 : IN STD_LOGIC;
            q80 : OUT STD_LOGIC_VECTOR;
            addr81 : IN STD_LOGIC_VECTOR;
            ce81 : IN STD_LOGIC;
            q81 : OUT STD_LOGIC_VECTOR;
            addr82 : IN STD_LOGIC_VECTOR;
            ce82 : IN STD_LOGIC;
            q82 : OUT STD_LOGIC_VECTOR;
            addr83 : IN STD_LOGIC_VECTOR;
            ce83 : IN STD_LOGIC;
            q83 : OUT STD_LOGIC_VECTOR;
            addr84 : IN STD_LOGIC_VECTOR;
            ce84 : IN STD_LOGIC;
            q84 : OUT STD_LOGIC_VECTOR;
            addr85 : IN STD_LOGIC_VECTOR;
            ce85 : IN STD_LOGIC;
            q85 : OUT STD_LOGIC_VECTOR;
            addr86 : IN STD_LOGIC_VECTOR;
            ce86 : IN STD_LOGIC;
            q86 : OUT STD_LOGIC_VECTOR;
            addr87 : IN STD_LOGIC_VECTOR;
            ce87 : IN STD_LOGIC;
            q87 : OUT STD_LOGIC_VECTOR;
            addr88 : IN STD_LOGIC_VECTOR;
            ce88 : IN STD_LOGIC;
            q88 : OUT STD_LOGIC_VECTOR;
            addr89 : IN STD_LOGIC_VECTOR;
            ce89 : IN STD_LOGIC;
            q89 : OUT STD_LOGIC_VECTOR;
            addr90 : IN STD_LOGIC_VECTOR;
            ce90 : IN STD_LOGIC;
            q90 : OUT STD_LOGIC_VECTOR;
            addr91 : IN STD_LOGIC_VECTOR;
            ce91 : IN STD_LOGIC;
            q91 : OUT STD_LOGIC_VECTOR;
            addr92 : IN STD_LOGIC_VECTOR;
            ce92 : IN STD_LOGIC;
            q92 : OUT STD_LOGIC_VECTOR;
            addr93 : IN STD_LOGIC_VECTOR;
            ce93 : IN STD_LOGIC;
            q93 : OUT STD_LOGIC_VECTOR;
            addr94 : IN STD_LOGIC_VECTOR;
            ce94 : IN STD_LOGIC;
            q94 : OUT STD_LOGIC_VECTOR;
            addr95 : IN STD_LOGIC_VECTOR;
            ce95 : IN STD_LOGIC;
            q95 : OUT STD_LOGIC_VECTOR;
            addr96 : IN STD_LOGIC_VECTOR;
            ce96 : IN STD_LOGIC;
            q96 : OUT STD_LOGIC_VECTOR;
            addr97 : IN STD_LOGIC_VECTOR;
            ce97 : IN STD_LOGIC;
            q97 : OUT STD_LOGIC_VECTOR;
            addr98 : IN STD_LOGIC_VECTOR;
            ce98 : IN STD_LOGIC;
            q98 : OUT STD_LOGIC_VECTOR;
            addr99 : IN STD_LOGIC_VECTOR;
            ce99 : IN STD_LOGIC;
            q99 : OUT STD_LOGIC_VECTOR;
            addr100 : IN STD_LOGIC_VECTOR;
            ce100 : IN STD_LOGIC;
            q100 : OUT STD_LOGIC_VECTOR;
            addr101 : IN STD_LOGIC_VECTOR;
            ce101 : IN STD_LOGIC;
            q101 : OUT STD_LOGIC_VECTOR;
            addr102 : IN STD_LOGIC_VECTOR;
            ce102 : IN STD_LOGIC;
            q102 : OUT STD_LOGIC_VECTOR;
            addr103 : IN STD_LOGIC_VECTOR;
            ce103 : IN STD_LOGIC;
            q103 : OUT STD_LOGIC_VECTOR;
            addr104 : IN STD_LOGIC_VECTOR;
            ce104 : IN STD_LOGIC;
            q104 : OUT STD_LOGIC_VECTOR;
            addr105 : IN STD_LOGIC_VECTOR;
            ce105 : IN STD_LOGIC;
            q105 : OUT STD_LOGIC_VECTOR;
            addr106 : IN STD_LOGIC_VECTOR;
            ce106 : IN STD_LOGIC;
            q106 : OUT STD_LOGIC_VECTOR;
            addr107 : IN STD_LOGIC_VECTOR;
            ce107 : IN STD_LOGIC;
            q107 : OUT STD_LOGIC_VECTOR;
            addr108 : IN STD_LOGIC_VECTOR;
            ce108 : IN STD_LOGIC;
            q108 : OUT STD_LOGIC_VECTOR;
            addr109 : IN STD_LOGIC_VECTOR;
            ce109 : IN STD_LOGIC;
            q109 : OUT STD_LOGIC_VECTOR;
            addr110 : IN STD_LOGIC_VECTOR;
            ce110 : IN STD_LOGIC;
            q110 : OUT STD_LOGIC_VECTOR;
            addr111 : IN STD_LOGIC_VECTOR;
            ce111 : IN STD_LOGIC;
            q111 : OUT STD_LOGIC_VECTOR;
            addr112 : IN STD_LOGIC_VECTOR;
            ce112 : IN STD_LOGIC;
            q112 : OUT STD_LOGIC_VECTOR;
            addr113 : IN STD_LOGIC_VECTOR;
            ce113 : IN STD_LOGIC;
            q113 : OUT STD_LOGIC_VECTOR;
            addr114 : IN STD_LOGIC_VECTOR;
            ce114 : IN STD_LOGIC;
            q114 : OUT STD_LOGIC_VECTOR;
            addr115 : IN STD_LOGIC_VECTOR;
            ce115 : IN STD_LOGIC;
            q115 : OUT STD_LOGIC_VECTOR;
            addr116 : IN STD_LOGIC_VECTOR;
            ce116 : IN STD_LOGIC;
            q116 : OUT STD_LOGIC_VECTOR;
            addr117 : IN STD_LOGIC_VECTOR;
            ce117 : IN STD_LOGIC;
            q117 : OUT STD_LOGIC_VECTOR;
            addr118 : IN STD_LOGIC_VECTOR;
            ce118 : IN STD_LOGIC;
            q118 : OUT STD_LOGIC_VECTOR;
            addr119 : IN STD_LOGIC_VECTOR;
            ce119 : IN STD_LOGIC;
            q119 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table3_rom_U :  component tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_tanh_table3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1,
        addr2 => address2,
        ce2 => ce2,
        q2 => q2,
        addr3 => address3,
        ce3 => ce3,
        q3 => q3,
        addr4 => address4,
        ce4 => ce4,
        q4 => q4,
        addr5 => address5,
        ce5 => ce5,
        q5 => q5,
        addr6 => address6,
        ce6 => ce6,
        q6 => q6,
        addr7 => address7,
        ce7 => ce7,
        q7 => q7,
        addr8 => address8,
        ce8 => ce8,
        q8 => q8,
        addr9 => address9,
        ce9 => ce9,
        q9 => q9,
        addr10 => address10,
        ce10 => ce10,
        q10 => q10,
        addr11 => address11,
        ce11 => ce11,
        q11 => q11,
        addr12 => address12,
        ce12 => ce12,
        q12 => q12,
        addr13 => address13,
        ce13 => ce13,
        q13 => q13,
        addr14 => address14,
        ce14 => ce14,
        q14 => q14,
        addr15 => address15,
        ce15 => ce15,
        q15 => q15,
        addr16 => address16,
        ce16 => ce16,
        q16 => q16,
        addr17 => address17,
        ce17 => ce17,
        q17 => q17,
        addr18 => address18,
        ce18 => ce18,
        q18 => q18,
        addr19 => address19,
        ce19 => ce19,
        q19 => q19,
        addr20 => address20,
        ce20 => ce20,
        q20 => q20,
        addr21 => address21,
        ce21 => ce21,
        q21 => q21,
        addr22 => address22,
        ce22 => ce22,
        q22 => q22,
        addr23 => address23,
        ce23 => ce23,
        q23 => q23,
        addr24 => address24,
        ce24 => ce24,
        q24 => q24,
        addr25 => address25,
        ce25 => ce25,
        q25 => q25,
        addr26 => address26,
        ce26 => ce26,
        q26 => q26,
        addr27 => address27,
        ce27 => ce27,
        q27 => q27,
        addr28 => address28,
        ce28 => ce28,
        q28 => q28,
        addr29 => address29,
        ce29 => ce29,
        q29 => q29,
        addr30 => address30,
        ce30 => ce30,
        q30 => q30,
        addr31 => address31,
        ce31 => ce31,
        q31 => q31,
        addr32 => address32,
        ce32 => ce32,
        q32 => q32,
        addr33 => address33,
        ce33 => ce33,
        q33 => q33,
        addr34 => address34,
        ce34 => ce34,
        q34 => q34,
        addr35 => address35,
        ce35 => ce35,
        q35 => q35,
        addr36 => address36,
        ce36 => ce36,
        q36 => q36,
        addr37 => address37,
        ce37 => ce37,
        q37 => q37,
        addr38 => address38,
        ce38 => ce38,
        q38 => q38,
        addr39 => address39,
        ce39 => ce39,
        q39 => q39,
        addr40 => address40,
        ce40 => ce40,
        q40 => q40,
        addr41 => address41,
        ce41 => ce41,
        q41 => q41,
        addr42 => address42,
        ce42 => ce42,
        q42 => q42,
        addr43 => address43,
        ce43 => ce43,
        q43 => q43,
        addr44 => address44,
        ce44 => ce44,
        q44 => q44,
        addr45 => address45,
        ce45 => ce45,
        q45 => q45,
        addr46 => address46,
        ce46 => ce46,
        q46 => q46,
        addr47 => address47,
        ce47 => ce47,
        q47 => q47,
        addr48 => address48,
        ce48 => ce48,
        q48 => q48,
        addr49 => address49,
        ce49 => ce49,
        q49 => q49,
        addr50 => address50,
        ce50 => ce50,
        q50 => q50,
        addr51 => address51,
        ce51 => ce51,
        q51 => q51,
        addr52 => address52,
        ce52 => ce52,
        q52 => q52,
        addr53 => address53,
        ce53 => ce53,
        q53 => q53,
        addr54 => address54,
        ce54 => ce54,
        q54 => q54,
        addr55 => address55,
        ce55 => ce55,
        q55 => q55,
        addr56 => address56,
        ce56 => ce56,
        q56 => q56,
        addr57 => address57,
        ce57 => ce57,
        q57 => q57,
        addr58 => address58,
        ce58 => ce58,
        q58 => q58,
        addr59 => address59,
        ce59 => ce59,
        q59 => q59,
        addr60 => address60,
        ce60 => ce60,
        q60 => q60,
        addr61 => address61,
        ce61 => ce61,
        q61 => q61,
        addr62 => address62,
        ce62 => ce62,
        q62 => q62,
        addr63 => address63,
        ce63 => ce63,
        q63 => q63,
        addr64 => address64,
        ce64 => ce64,
        q64 => q64,
        addr65 => address65,
        ce65 => ce65,
        q65 => q65,
        addr66 => address66,
        ce66 => ce66,
        q66 => q66,
        addr67 => address67,
        ce67 => ce67,
        q67 => q67,
        addr68 => address68,
        ce68 => ce68,
        q68 => q68,
        addr69 => address69,
        ce69 => ce69,
        q69 => q69,
        addr70 => address70,
        ce70 => ce70,
        q70 => q70,
        addr71 => address71,
        ce71 => ce71,
        q71 => q71,
        addr72 => address72,
        ce72 => ce72,
        q72 => q72,
        addr73 => address73,
        ce73 => ce73,
        q73 => q73,
        addr74 => address74,
        ce74 => ce74,
        q74 => q74,
        addr75 => address75,
        ce75 => ce75,
        q75 => q75,
        addr76 => address76,
        ce76 => ce76,
        q76 => q76,
        addr77 => address77,
        ce77 => ce77,
        q77 => q77,
        addr78 => address78,
        ce78 => ce78,
        q78 => q78,
        addr79 => address79,
        ce79 => ce79,
        q79 => q79,
        addr80 => address80,
        ce80 => ce80,
        q80 => q80,
        addr81 => address81,
        ce81 => ce81,
        q81 => q81,
        addr82 => address82,
        ce82 => ce82,
        q82 => q82,
        addr83 => address83,
        ce83 => ce83,
        q83 => q83,
        addr84 => address84,
        ce84 => ce84,
        q84 => q84,
        addr85 => address85,
        ce85 => ce85,
        q85 => q85,
        addr86 => address86,
        ce86 => ce86,
        q86 => q86,
        addr87 => address87,
        ce87 => ce87,
        q87 => q87,
        addr88 => address88,
        ce88 => ce88,
        q88 => q88,
        addr89 => address89,
        ce89 => ce89,
        q89 => q89,
        addr90 => address90,
        ce90 => ce90,
        q90 => q90,
        addr91 => address91,
        ce91 => ce91,
        q91 => q91,
        addr92 => address92,
        ce92 => ce92,
        q92 => q92,
        addr93 => address93,
        ce93 => ce93,
        q93 => q93,
        addr94 => address94,
        ce94 => ce94,
        q94 => q94,
        addr95 => address95,
        ce95 => ce95,
        q95 => q95,
        addr96 => address96,
        ce96 => ce96,
        q96 => q96,
        addr97 => address97,
        ce97 => ce97,
        q97 => q97,
        addr98 => address98,
        ce98 => ce98,
        q98 => q98,
        addr99 => address99,
        ce99 => ce99,
        q99 => q99,
        addr100 => address100,
        ce100 => ce100,
        q100 => q100,
        addr101 => address101,
        ce101 => ce101,
        q101 => q101,
        addr102 => address102,
        ce102 => ce102,
        q102 => q102,
        addr103 => address103,
        ce103 => ce103,
        q103 => q103,
        addr104 => address104,
        ce104 => ce104,
        q104 => q104,
        addr105 => address105,
        ce105 => ce105,
        q105 => q105,
        addr106 => address106,
        ce106 => ce106,
        q106 => q106,
        addr107 => address107,
        ce107 => ce107,
        q107 => q107,
        addr108 => address108,
        ce108 => ce108,
        q108 => q108,
        addr109 => address109,
        ce109 => ce109,
        q109 => q109,
        addr110 => address110,
        ce110 => ce110,
        q110 => q110,
        addr111 => address111,
        ce111 => ce111,
        q111 => q111,
        addr112 => address112,
        ce112 => ce112,
        q112 => q112,
        addr113 => address113,
        ce113 => ce113,
        q113 => q113,
        addr114 => address114,
        ce114 => ce114,
        q114 => q114,
        addr115 => address115,
        ce115 => ce115,
        q115 => q115,
        addr116 => address116,
        ce116 => ce116,
        q116 => q116,
        addr117 => address117,
        ce117 => ce117,
        q117 => q117,
        addr118 => address118,
        ce118 => ce118,
        q118 => q118,
        addr119 => address119,
        ce119 => ce119,
        q119 => q119);

end architecture;


