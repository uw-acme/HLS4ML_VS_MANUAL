#create_clock -period 6.400 -name clk_p -waveform {0.000 3.200} -add [get_ports clk_p]

set_property IOSTANDARD LVDS [get_ports clk_p]
set_property PACKAGE_PIN AK34 [get_ports clk_p]
set_property PACKAGE_PIN AL34 [get_ports clk_n]
set_property IOSTANDARD LVDS [get_ports clk_n]