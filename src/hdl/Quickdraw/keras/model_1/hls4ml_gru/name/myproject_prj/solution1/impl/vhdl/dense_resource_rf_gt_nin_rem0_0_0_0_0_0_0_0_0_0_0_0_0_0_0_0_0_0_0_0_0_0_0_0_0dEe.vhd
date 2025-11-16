-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_rom is 
    generic(
             DWIDTH     : integer := 7; 
             AWIDTH     : integer := 12; 
             MEM_SIZE    : integer := 3072
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 31=> "0000000", 32 to 63=> "0000001", 64 to 95=> "0000010", 96 to 127=> "0000011", 
    128 to 159=> "0000100", 160 to 191=> "0000101", 192 to 223=> "0000110", 224 to 255=> "0000111", 
    256 to 287=> "0001000", 288 to 319=> "0001001", 320 to 351=> "0001010", 352 to 383=> "0001011", 
    384 to 415=> "0001100", 416 to 447=> "0001101", 448 to 479=> "0001110", 480 to 511=> "0001111", 
    512 to 543=> "0010000", 544 to 575=> "0010001", 576 to 607=> "0010010", 608 to 639=> "0010011", 
    640 to 671=> "0010100", 672 to 703=> "0010101", 704 to 735=> "0010110", 736 to 767=> "0010111", 
    768 to 799=> "0011000", 800 to 831=> "0011001", 832 to 863=> "0011010", 864 to 895=> "0011011", 
    896 to 927=> "0011100", 928 to 959=> "0011101", 960 to 991=> "0011110", 992 to 1023=> "0011111", 
    1024 to 1055=> "0100000", 1056 to 1087=> "0100001", 1088 to 1119=> "0100010", 1120 to 1151=> "0100011", 
    1152 to 1183=> "0100100", 1184 to 1215=> "0100101", 1216 to 1247=> "0100110", 1248 to 1279=> "0100111", 
    1280 to 1311=> "0101000", 1312 to 1343=> "0101001", 1344 to 1375=> "0101010", 1376 to 1407=> "0101011", 
    1408 to 1439=> "0101100", 1440 to 1471=> "0101101", 1472 to 1503=> "0101110", 1504 to 1535=> "0101111", 
    1536 to 1567=> "0110000", 1568 to 1599=> "0110001", 1600 to 1631=> "0110010", 1632 to 1663=> "0110011", 
    1664 to 1695=> "0110100", 1696 to 1727=> "0110101", 1728 to 1759=> "0110110", 1760 to 1791=> "0110111", 
    1792 to 1823=> "0111000", 1824 to 1855=> "0111001", 1856 to 1887=> "0111010", 1888 to 1919=> "0111011", 
    1920 to 1951=> "0111100", 1952 to 1983=> "0111101", 1984 to 2015=> "0111110", 2016 to 2047=> "0111111", 
    2048 to 2079=> "1000000", 2080 to 2111=> "1000001", 2112 to 2143=> "1000010", 2144 to 2175=> "1000011", 
    2176 to 2207=> "1000100", 2208 to 2239=> "1000101", 2240 to 2271=> "1000110", 2272 to 2303=> "1000111", 
    2304 to 2335=> "1001000", 2336 to 2367=> "1001001", 2368 to 2399=> "1001010", 2400 to 2431=> "1001011", 
    2432 to 2463=> "1001100", 2464 to 2495=> "1001101", 2496 to 2527=> "1001110", 2528 to 2559=> "1001111", 
    2560 to 2591=> "1010000", 2592 to 2623=> "1010001", 2624 to 2655=> "1010010", 2656 to 2687=> "1010011", 
    2688 to 2719=> "1010100", 2720 to 2751=> "1010101", 2752 to 2783=> "1010110", 2784 to 2815=> "1010111", 
    2816 to 2847=> "1011000", 2848 to 2879=> "1011001", 2880 to 2911=> "1011010", 2912 to 2943=> "1011011", 
    2944 to 2975=> "1011100", 2976 to 3007=> "1011101", 3008 to 3039=> "1011110", 3040 to 3071=> "1011111" );


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

entity dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe is
    generic (
        DataWidth : INTEGER := 7;
        AddressRange : INTEGER := 3072;
        AddressWidth : INTEGER := 12);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe is
    component dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_rom_U :  component dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0dEe_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


