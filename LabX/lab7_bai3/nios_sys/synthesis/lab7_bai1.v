module lab7_bai1(
    input CLOCK_50,
    input [3:0] KEY,
	 input [1:0]SW,
	 
    output LCD_ON,
    output LCD_EN,
    output LCD_RS,
    output LCD_RW,
	 output [6:0] HEX0,
	 output [6:0] HEX1,
	 output [6:0] HEX2,
	 output [6:0] HEX3,
	 output [6:0] HEX4,
	 output [6:0] HEX5,
	 output [6:0] HEX6,
	 output [6:0] HEX7,
	 input UART_RXD,
	 output UART_TXD,
	 output [7:0]LEDR,
	 
    inout [7:0] LCD_DATA
);

    nios_sys u0 (
        .clk_clk                             (CLOCK_50), // clk.clk
        .reset_reset_n                       (KEY[0]),   //reset.reset_n
        .lcd_data_external_connection_export (LCD_DATA), // lcd_data_external_connection.export
        .lcd_rw_external_connection_export   (LCD_RW),   // lcd_rw_external_connection.export
        .lcd_rs_external_connection_export   (LCD_RS),   // lcd_rs_external_connection.export
        .lcd_en_external_connection_export   (LCD_EN),   // lcd_en_external_connection.export
        .lcd_on_external_connection_export   (LCD_ON),   // lcd_on_external_connection.export
		  .led8_external_connection_export     (HEX7),     // led8_external_connection.export
        .led7_external_connection_export     (HEX6),     // led7_external_connection.export
        .led6_external_connection_export     (HEX5),     // led6_external_connection.export
        .led5_external_connection_export     (HEX4),     // led5_external_connection.export
        .led4_external_connection_export     (HEX3),     // led4_external_connection.export
        .led3_external_connection_export     (HEX2),     // led3_external_connection.export
        .led2_external_connection_export     (HEX1),     // led2_external_connection.export
        .led1_external_connection_export     (HEX0),     // led1_external_connection.export
		  .uart_0_external_connection_rxd      (UART_RXD), // uart_0_external_connection.rxd
        .uart_0_external_connection_txd      (UART_TXD),  //  .txd
		  .switch0_external_connection_export  (SW),  //  switch0_external_connection.export
        .key3_external_connection_export     (KEY[3]),     //     key3_external_connection.export
        .key2_external_connection_export     (KEY[2]),     //     key2_external_connection.export
        .key1_external_connection_export     (KEY[1]),      //     key1_external_connection.export
		  .ledr_external_connection_export     (LEDR)      //     ledr_external_connection.export
    );



endmodule