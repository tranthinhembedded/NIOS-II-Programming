module lab7_bai1(
    input CLOCK_50,
    input [0:0] KEY,

    output LCD_ON,
    output LCD_EN,
    output LCD_RS,
    output LCD_RW,

    inout [7:0] LCD_DATA
);

    nios_sys u0 (
        .clk_clk                             (CLOCK_50),                             //                          clk.clk
        .reset_reset_n                       (KEY[0]),                       //                        reset.reset_n
        .lcd_data_external_connection_export (LCD_DATA), // lcd_data_external_connection.export
        .lcd_rw_external_connection_export   (LCD_RW),   //   lcd_rw_external_connection.export
        .lcd_rs_external_connection_export   (LCD_RS),   //   lcd_rs_external_connection.export
        .lcd_en_external_connection_export   (LCD_EN),   //   lcd_en_external_connection.export
        .lcd_on_external_connection_export   (LCD_ON)    //   lcd_on_external_connection.export
    );



endmodule