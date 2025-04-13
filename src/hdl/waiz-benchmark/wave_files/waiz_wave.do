onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /waiz_benchmark_tb/WIDTH
add wave -noupdate /waiz_benchmark_tb/NFRAC
add wave -noupdate /waiz_benchmark_tb/INPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/OUTPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/clk
add wave -noupdate /waiz_benchmark_tb/reset
add wave -noupdate /waiz_benchmark_tb/input_data
add wave -noupdate /waiz_benchmark_tb/output_data
add wave -noupdate -radix binary /waiz_benchmark_tb/one_hot_output
add wave -noupdate /waiz_benchmark_tb/input_ready
add wave -noupdate /waiz_benchmark_tb/output_ready
add wave -noupdate /waiz_benchmark_tb/final_output_data
add wave -noupdate -radix binary /waiz_benchmark_tb/final_one_hot_output
add wave -noupdate -divider {New Divider}
add wave -noupdate /waiz_benchmark_tb/dut/input_data
add wave -noupdate /waiz_benchmark_tb/dut/output_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/result
add wave -noupdate /waiz_benchmark_tb/dut/dense1_output_data
add wave -noupdate /waiz_benchmark_tb/dut/relulayer1/output_data
add wave -noupdate /waiz_benchmark_tb/dut/dense2_input_data
add wave -noupdate /waiz_benchmark_tb/dut/dense2_output_data
add wave -noupdate /waiz_benchmark_tb/dut/relulayer2/output_data
add wave -noupdate /waiz_benchmark_tb/dut/dense3_input_data
add wave -noupdate /waiz_benchmark_tb/dut/dense3_output_data
add wave -noupdate /waiz_benchmark_tb/dut/relulayer3/out_buffer
add wave -noupdate /waiz_benchmark_tb/dut/dense4_input_data
add wave -noupdate /waiz_benchmark_tb/dut/dense4_output_data
add wave -noupdate /waiz_benchmark_tb/dut/softmax_output_data
add wave -noupdate -divider {New Divider}
add wave -noupdate /waiz_benchmark_tb/dut/input_data_real
add wave -noupdate /waiz_benchmark_tb/dut/dense1_output_real
add wave -noupdate /waiz_benchmark_tb/dut/dense2_output_real
add wave -noupdate /waiz_benchmark_tb/dut/dense3_output_real
add wave -noupdate /waiz_benchmark_tb/dut/dense4_output_real
add wave -noupdate -expand /waiz_benchmark_tb/dut/softmax_output_real
add wave -noupdate -divider {New Divider}
add wave -noupdate /waiz_benchmark_tb/dut/input_ready
add wave -noupdate /waiz_benchmark_tb/dut/output_ready
add wave -noupdate /waiz_benchmark_tb/dut/input_ready_1
add wave -noupdate /waiz_benchmark_tb/dut/output_ready_1
add wave -noupdate /waiz_benchmark_tb/dut/input_ready_2
add wave -noupdate /waiz_benchmark_tb/dut/output_ready_2
add wave -noupdate /waiz_benchmark_tb/dut/input_ready_3
add wave -noupdate /waiz_benchmark_tb/dut/output_ready_3
add wave -noupdate /waiz_benchmark_tb/dut/input_ready_4
add wave -noupdate /waiz_benchmark_tb/dut/output_ready_4
add wave -noupdate -divider Softmax
add wave -noupdate /waiz_benchmark_tb/dut/softmax/N
add wave -noupdate /waiz_benchmark_tb/dut/softmax/WIDTH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/NFRAC
add wave -noupdate /waiz_benchmark_tb/dut/softmax/MEM_WIDTH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/MEM_NFRAC_EXP
add wave -noupdate /waiz_benchmark_tb/dut/softmax/MEM_NFRAC_INV
add wave -noupdate /waiz_benchmark_tb/dut/softmax/TABLE_WIDTH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/TABLE_NFRAC
add wave -noupdate /waiz_benchmark_tb/dut/softmax/EXP_TABLE_PATH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/INVERT_TABLE_PATH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/dataIn
add wave -noupdate /waiz_benchmark_tb/dut/softmax/clk
add wave -noupdate /waiz_benchmark_tb/dut/softmax/reset
add wave -noupdate -radix hexadecimal -childformat {{{/waiz_benchmark_tb/dut/softmax/dataOut[4]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/dataOut[3]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/dataOut[2]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/dataOut[1]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/dataOut[0]} -radix hexadecimal}} -expand -subitemconfig {{/waiz_benchmark_tb/dut/softmax/dataOut[4]} {-radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/dataOut[3]} {-radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/dataOut[2]} {-radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/dataOut[1]} {-radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/dataOut[0]} {-radix hexadecimal}} /waiz_benchmark_tb/dut/softmax/dataOut
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/exp_table
add wave -noupdate /waiz_benchmark_tb/dut/softmax/invert_table
add wave -noupdate /waiz_benchmark_tb/dut/softmax/buffer
add wave -noupdate -radix hexadecimal -childformat {{{/waiz_benchmark_tb/dut/softmax/expResult[4]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/expResult[3]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/expResult[2]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/expResult[1]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/expResult[0]} -radix hexadecimal}} -expand -subitemconfig {{/waiz_benchmark_tb/dut/softmax/expResult[4]} {-radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/expResult[3]} {-radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/expResult[2]} {-radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/expResult[1]} {-radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/expResult[0]} {-radix hexadecimal}} /waiz_benchmark_tb/dut/softmax/expResult
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/tempSum
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/expSum
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/lookupIndex
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/invertIndex
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/invertVal
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {307 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 262
configure wave -valuecolwidth 140
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
WaveRestoreZoom {0 ps} {702 ps}
