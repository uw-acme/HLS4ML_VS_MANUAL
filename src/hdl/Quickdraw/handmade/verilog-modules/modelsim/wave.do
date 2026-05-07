onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /Quickdraw_LSTM_tb/clk
add wave -noupdate /Quickdraw_LSTM_tb/fd
add wave -noupdate /Quickdraw_LSTM_tb/flat_mem
add wave -noupdate /Quickdraw_LSTM_tb/i
add wave -noupdate /Quickdraw_LSTM_tb/input_ready
add wave -noupdate /Quickdraw_LSTM_tb/INPUT_SIZE
add wave -noupdate /Quickdraw_LSTM_tb/input_v
add wave -noupdate /Quickdraw_LSTM_tb/j
add wave -noupdate /Quickdraw_LSTM_tb/k
add wave -noupdate /Quickdraw_LSTM_tb/NFRAC
add wave -noupdate /Quickdraw_LSTM_tb/NINT
add wave -noupdate /Quickdraw_LSTM_tb/num_tests
add wave -noupdate /Quickdraw_LSTM_tb/out
add wave -noupdate /Quickdraw_LSTM_tb/output_data
add wave -noupdate /Quickdraw_LSTM_tb/output_ready
add wave -noupdate /Quickdraw_LSTM_tb/OUTPUT_SIZE
add wave -noupdate /Quickdraw_LSTM_tb/ready
add wave -noupdate /Quickdraw_LSTM_tb/reset
add wave -noupdate /Quickdraw_LSTM_tb/TIMESTEPS
add wave -noupdate /Quickdraw_LSTM_tb/WIDTH
add wave -noupdate /Quickdraw_LSTM_tb/write_file
add wave -noupdate /Quickdraw_LSTM_tb/x_test
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {166 ps} 0}
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
WaveRestoreZoom {0 ps} {1 ns}
