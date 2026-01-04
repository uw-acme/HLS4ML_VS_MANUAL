-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom is 
    generic(
             DWIDTH     : integer := 118; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 10
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0111111111110111110011000100000001001100011000111110011110110111111101111100100000001011110110111110111110100100010010", 
    1 => "1111101111010100001111111110011111011111111111110111111111001011100101000001100000111000011001000001000000001011111111", 
    2 => "1100101111011111110110001001011110110111100111111110100000100100000100000000011111101111101111111111110000010100000100", 
    3 => "1010110000010011110100000000011111100100000011111010101111011111100000000101110000000100000111000100111111101100001001", 
    4 => "0001111111100100000100111100100001000000001100111111110000001111101111000000101111011011101011111110001110110111111110", 
    5 => "0110000000100100001001111110111111011111101011111101000001111011100110000100010000001100010001000101111111111111111100", 
    6 => "0011110001011100000011000000101111101011101011111010101110100111111111000000100001010100011000111101100001000100001100", 
    7 => "1111101111101011101100000001001111011011110000111010011111010000000001000000110000110000001010000010010000001111111111", 
    8 => "1110111111010011111001111010111110011000000001111101011110110111111010111100111111100011111011000111010001010011111101", 
    9 => "1011101110001100000001000000101110111111110010000110000001001011011011000001000000000000001101000001001110010100001110" );

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

entity dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V is
    generic (
        DataWidth : INTEGER := 118;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V is
    component dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom_U :  component dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_w15_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


