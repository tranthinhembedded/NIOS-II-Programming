module ledr(
	input CLOCK_50,
	input [0:0]KEY,
	input [15:0] SW,
	output [15:0]LEDR 

);


    led u0 (
        .clk_clk                           (CLOCK_50),                           //                        clk.clk
        .reset_reset_n                     (KEY[0]),                     //                      reset.reset_n
        .ledr_external_connection_export   ({16'd0,SW}),   //   ledr_external_connection.export
        .switch_external_connection_export ({16'd0,LEDR})  // switch_external_connection.export
    );
endmodule