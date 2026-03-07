onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /LSTM_tb/INPUT_SIZE
add wave -noupdate /LSTM_tb/TIMESTEPS
add wave -noupdate /LSTM_tb/OUTPUT_SIZE
add wave -noupdate /LSTM_tb/WIDTH
add wave -noupdate /LSTM_tb/NINT
add wave -noupdate /LSTM_tb/clk
add wave -noupdate /LSTM_tb/reset
add wave -noupdate /LSTM_tb/input_ready
add wave -noupdate /LSTM_tb/output_ready
add wave -noupdate /LSTM_tb/xt
add wave -noupdate /LSTM_tb/ht
add wave -noupdate /LSTM_tb/dut/ct_1
add wave -noupdate /LSTM_tb/dut/ht_1
add wave -noupdate /LSTM_tb/dut/ct
add wave -noupdate /LSTM_tb/dut/next_ready
add wave -noupdate /LSTM_tb/dut/edge_trig
add wave -noupdate /LSTM_tb/dut/move_next
add wave -noupdate /LSTM_tb/dut/dense_inputx_ready
add wave -noupdate /LSTM_tb/dut/dense_outputx_ready
add wave -noupdate /LSTM_tb/dut/dense_inputx
add wave -noupdate /LSTM_tb/dut/dense_outputx
add wave -noupdate /LSTM_tb/dut/sig_ready1
add wave -noupdate /LSTM_tb/dut/sig_ready2
add wave -noupdate /LSTM_tb/dut/sig_ready3
add wave -noupdate /LSTM_tb/dut/sig_ready4
add wave -noupdate /LSTM_tb/dut/tanh_ready
add wave -noupdate /LSTM_tb/dut/dense_inputh_ready
add wave -noupdate /LSTM_tb/dut/dense_outputh_ready
add wave -noupdate /LSTM_tb/dut/dense_inputh
add wave -noupdate /LSTM_tb/dut/dense_outputh
add wave -noupdate /LSTM_tb/dut/curr_step
add wave -noupdate /LSTM_tb/dut/reset_cell
add wave -noupdate /LSTM_tb/dut/combined
add wave -noupdate /LSTM_tb/dut/ft_a
add wave -noupdate /LSTM_tb/dut/it_a
add wave -noupdate /LSTM_tb/dut/c_t_a
add wave -noupdate /LSTM_tb/dut/ot_a
add wave -noupdate /LSTM_tb/dut/ft
add wave -noupdate /LSTM_tb/dut/it
add wave -noupdate /LSTM_tb/dut/c_t
add wave -noupdate /LSTM_tb/dut/ot
add wave -noupdate /LSTM_tb/dut/ht_n
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {750004 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 170
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
WaveRestoreZoom {0 ps} {2815728 ps}
