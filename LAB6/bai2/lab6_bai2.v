module lab6_bai2 (
    input         CLOCK_50,
    input  [0:0]  KEY,
    input  [15:0] SW,
    output [15:0] LEDR,
	 output [6:0] HEX0,
	 output [6:0] HEX1
);

    nios_sys u0 (
        .clk_clk                         (CLOCK_50),                         //                      clk.clk
        .reset_reset_n                   (KEY[0]),                   //                    reset.reset_n
        .led_1_conduit_end_export        (HEX1),        //        led_1_conduit_end.export
        .switch_0_conduit_end_export     (SW),     //     switch_0_conduit_end.export
        .led_0_conduit_end_export        (HEX0),        //        led_0_conduit_end.export
        .ledr_external_connection_export (LEDR)  // ledr_external_connection.export
    );

endmodule
