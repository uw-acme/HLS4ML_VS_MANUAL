-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_rom is 
    generic(
             DWIDTH     : integer := 29; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 32
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101000111011111111011011001", 1 => "11110100101011111101011011101", 
    2 => "00001100001010000000111011010", 3 => "11101011010000000000011110111", 
    4 => "11100100010011111110101001111", 5 => "00101111100100000010100000011", 
    6 => "11010000111110000010110101011", 7 => "00010001101010000000001000111", 
    8 => "11000100100010000001000110110", 9 => "10011101011011111110101001011", 
    10 => "00111000001111111111010111101", 11 => "11101111001100000000101110110", 
    12 => "00100111111100000001000111011", 13 => "11101101111000000000110111010", 
    14 => "11101011011100000011100110101", 15 => "11101111001000000000111110000", 
    16 => "11000101011101111110011101011", 17 => "11110000011011111110100010000", 
    18 => "00001001111000000001100101111", 19 => "11101111011010000000011110010", 
    20 => "11001100110101111110001000110", 21 => "11110011001101111111001000001", 
    22 => "10111101000011111101110101010", 23 => "00001100110111111101000001100", 
    24 => "11110001111010000000100110101", 25 => "11110001100111111110011101101", 
    26 => "11110011000110000001000010011", 27 => "00011011001110000001100000010", 
    28 => "11101100010011111111000101101", 29 => "10111110101010000100110110100", 
    30 => "00000111110010000100010110100", 31 => "11110101101011111110101111010" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

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

entity dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V is
    generic (
        DataWidth : INTEGER := 29;
        AddressRange : INTEGER := 32;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V is
    component dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_rom_U :  component dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config5_s_w5_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


