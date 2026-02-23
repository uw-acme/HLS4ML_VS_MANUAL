-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_rom is 
    generic(
             DWIDTH     : integer := 11; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 80
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000110111", 1 => "11111000010", 2 => "11110101111", 
    3 => "11101001101", 4 => "11101100000", 5 => "00011111011", 
    6 => "11110011000", 7 => "00001010111", 8 => "11101101000", 
    9 => "00011011010", 10 => "00101011110", 11 => "00100110011", 
    12 => "00000100010", 13 => "10110011111", 14 => "11110111010", 
    15 => "11111001000", 16 => "00010110001", 17 => "00001011100", 
    18 => "00001111001", 19 => "11110100010", 20 => "00100011100", 
    21 => "00000000100", 22 => "11110001010", 23 => "00011111011", 
    24 => "11111011110", 25 => "11111010101", 26 => "00001000110", 
    27 => "00011100101", 28 => "11110111000", 29 => "00100011111", 
    30 => "11000110001", 31 => "11111010010", 32 => "00001111110", 
    33 => "00000011011", 34 => "11111011101", 35 => "00011011110", 
    36 => "00100100110", 37 => "00001111000", 38 => "11101001001", 
    39 => "11111001111", 40 => "00001001111", 41 => "00011000000", 
    42 => "11001111101", 43 => "10110000111", 44 => "00001111001", 
    45 => "00101001111", 46 => "11110111011", 47 => "00010011100", 
    48 => "11111101100", 49 => "11110100010", 50 => "11111001010", 
    51 => "00010000000", 52 => "11101100001", 53 => "00000011001", 
    54 => "11101011110", 55 => "00100001101", 56 => "11101011010", 
    57 => "11111001011", 58 => "00001010111", 59 => "00011110001", 
    60 => "00011010111", 61 => "00100100001", 62 => "11110111010", 
    63 => "00000110001", 64 => "11110101001", 65 => "00000001100", 
    66 => "00001011010", 67 => "00001101110", 68 => "00000001101", 
    69 => "00010111001", 70 => "00010111111", 71 => "00100100001", 
    72 => "11101111000", 73 => "00001010101", 74 => "11011000101", 
    75 => "11010000010", 76 => "00000000001", 77 => "10110110011", 
    78 => "11000110010", 79 => "00001011110" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "block";

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

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V is
    generic (
        DataWidth : INTEGER := 11;
        AddressRange : INTEGER := 80;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V is
    component dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_rom_U :  component dense_wrapper_ap_fixed_20_10_5_3_0_ap_fixed_45_25_5_3_0_config10_s_w10_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


