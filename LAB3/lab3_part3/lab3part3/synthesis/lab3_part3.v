module lab3_part3(
	 input CLOCK_50,
	 input [0:0] KEY,
	 input [7:0] SW,
	 output [6:0] HEX0,
	 output [6:0] HEX1
);

    lab3part3 u0 (
        .clk_clk                     (CLOCK_50),                     //                  clk.clk
        .reset_reset_n               (KEY),               //                reset.reset_n
        .switch_conduit_end_export   (SW[3:0]),   //   switch_conduit_end.export
        .led_conduit_end_export      (HEX0),      //      led_conduit_end.export
        .led_0_conduit_end_export    (HEX1),    //    led_0_conduit_end.export
        .switch_0_conduit_end_export (SW[7:4])  // switch_0_conduit_end.export
    );




endmodule