module bai2(
	input CLOCK_50,
	input UART_RXD,
	output UART_TXD,
	input [0:0]KEY
);
	 
    nios u0 (
        .clk_clk                          (CLOCK_50),                          //                        clk.clk
        .uart_0_external_connection_rxd   (UART_RXD),   // uart_0_external_connection.rxd
        .uart_0_external_connection_txd   (UART_TXD),   //                           .txd
        .pio_0_external_connection_export (KEY[0])  //  pio_0_external_connection.export
    );

endmodule
