onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -height 30 /counter4bits_tb/clk
add wave -noupdate -height 30 /counter4bits_tb/reset_n
add wave -noupdate -height 30 /counter4bits_tb/enable
add wave -noupdate -height 30 /counter4bits_tb/clear
add wave -noupdate -height 30 /counter4bits_tb/up_down
add wave -noupdate -height 30 -expand /counter4bits_tb/initial_value
add wave -noupdate -height 30 -radix unsigned -expand /counter4bits_tb/count_value
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {7999379225 ps} 0}
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
WaveRestoreZoom {9999098963 ps} {10000047423 ps}
