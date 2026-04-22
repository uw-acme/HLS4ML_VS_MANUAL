onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /gru_basic_tb/dataIn
add wave -noupdate /gru_basic_tb/dataOut
add wave -noupdate /gru_basic_tb/clk
add wave -noupdate /gru_basic_tb/reset
add wave -noupdate /gru_basic_tb/dut/x_t_buffer
add wave -noupdate /gru_basic_tb/dut/h_t_minus_1
add wave -noupdate /gru_basic_tb/dut/h_t
add wave -noupdate /gru_basic_tb/dut/gru_out
add wave -noupdate -radix unsigned /gru_basic_tb/dut/gru_delay_counter
add wave -noupdate -radix unsigned /gru_basic_tb/dut/seq_counter
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/clk
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/reset
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/x_t
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/h_t_minus_1
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/h_t
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/r_t
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/z_t
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/r_t_raw
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/z_t_raw
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/h_tilde_raw
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/h_tilde
add wave -noupdate -expand -group gru_cell /gru_basic_tb/dut/gru_cell/r_h_mult
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {123387 ps} 0}
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
WaveRestoreZoom {0 ps} {672 ns}
