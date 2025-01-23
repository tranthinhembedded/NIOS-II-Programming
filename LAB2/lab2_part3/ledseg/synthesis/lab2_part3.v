module lab2_part3(
	 input CLOCK_50,
	 input [0:0] KEY,
	 input [3:0] SW,
	 output [6:0] HEX3
);

    ledseg u0 (
        .clk_clk                           (CLOCK_50),                           //                        clk.clk
        .reset_reset_n                     (KEY[0]),                     //                      reset.reset_n
        .led_external_connection_export    (HEX3),    //    l_connection.export
        .switch_external_connection_export (SW[3:0])  // switch_external_connection.export
    );

endmodule