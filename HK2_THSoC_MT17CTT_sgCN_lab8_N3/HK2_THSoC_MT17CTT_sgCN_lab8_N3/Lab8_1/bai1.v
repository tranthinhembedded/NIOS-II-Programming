module bai1(
	input CLOCK_50,
	input UART_RXD,
	output UART_TXD
);
	
	
    
    nios u0 (
        .clk_clk                        (CLOCK_50),                        //                        clk.clk
        .uart_0_external_connection_rxd (UART_RXD), // uart_0_external_connection.rxd
        .uart_0_external_connection_txd (UART_TXD)  //                           .txd
    );

endmodule
