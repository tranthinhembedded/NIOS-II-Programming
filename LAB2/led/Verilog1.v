module led(
	input CLOCK_50,
	input [0:0]KEY,
	
	output [15:0]LEDR 

);


    led u0 (
        .clk_clk                         (CLOCK_50),     //                      clk.clk
        .reset_reset_n                   (KEY),                   //                    reset.reset_n
        .ledr_external_connection_export (LEDR)  // ledr_external_connection.export
    );
endmodule