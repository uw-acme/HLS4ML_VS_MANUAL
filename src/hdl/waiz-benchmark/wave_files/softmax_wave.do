onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -divider {New Divider}
add wave -noupdate -divider {New Divider}
add wave -noupdate -divider {New Divider}
add wave -noupdate -divider Softmax
add wave -noupdate /softmaxLayer_tb/N
add wave -noupdate /softmaxLayer_tb/WIDTH
add wave -noupdate /softmaxLayer_tb/NFRAC
add wave -noupdate /softmaxLayer_tb/dataIn
add wave -noupdate /softmaxLayer_tb/clk
add wave -noupdate /softmaxLayer_tb/dataOut
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {499436 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 262
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
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
WaveRestoreZoom {499321 ps} {500036 ps}
