module lab8_bai2(
	input CLOCK_50,
	input [0:0]KEY,
	input [1:0]SW,
	input UART_RXD,
	output UART_TXD
);
	
	
    

    nios_sys u0 (
        .clk_clk                           (CLOCK_50),                           //                        clk.clk
        .uart_0_external_connection_rxd    (UART_RXD),    // uart_0_external_connection.rxd
        .uart_0_external_connection_txd    (UART_TXD),    //                           .txd
        .reset_reset_n                     (KEY[0]),                     //                      reset.reset_n
        .switch_external_connection_export (SW[0])  // switch_external_connection.export
    );


endmodule