module lab2_part1
 (
	 input CLOCK_50,
	 input [0:0] KEY,
	 input [15:0] SW,
	 output [15:0] LEDR
 );
 
 system nios_system(
	 .clk_clk (CLOCK_50),
	 .reset_reset_n (KEY[0]),
	 .switch_external_connection_export (SW[15:14]),
	 .led_external_connection_export (LEDR[0:0]
)
 );
 
 endmodule