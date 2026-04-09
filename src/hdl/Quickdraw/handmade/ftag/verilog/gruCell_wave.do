onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /gruCell_tb/clk
add wave -noupdate /gruCell_tb/reset
add wave -noupdate /gruCell_tb/x_t
add wave -noupdate /gruCell_tb/h_t_minus_1
add wave -noupdate /gruCell_tb/h_t
add wave -noupdate /gruCell_tb/dut/r_t_raw
add wave -noupdate /gruCell_tb/dut/r_t
add wave -noupdate /gruCell_tb/dut/z_t_raw
add wave -noupdate /gruCell_tb/dut/z_t
add wave -noupdate /gruCell_tb/dut/h_tilde_raw
add wave -noupdate /gruCell_tb/dut/h_tilde
add wave -noupdate /gruCell_tb/dut/r_h_mult
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {281078 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {0 ps} {619500 ps}
