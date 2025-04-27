library verilog;
use verilog.vl_types.all;
entity nios_sys is
    port(
        clk_clk         : in     vl_logic;
        reset_reset_n   : in     vl_logic;
        lcd_data_external_connection_export: out    vl_logic_vector(7 downto 0);
        lcd_rw_external_connection_export: out    vl_logic;
        lcd_rs_external_connection_export: out    vl_logic;
        lcd_en_external_connection_export: out    vl_logic;
        lcd_on_external_connection_export: out    vl_logic;
        led8_external_connection_export: out    vl_logic_vector(7 downto 0);
        led7_external_connection_export: out    vl_logic_vector(7 downto 0);
        led6_external_connection_export: out    vl_logic_vector(7 downto 0);
        led5_external_connection_export: out    vl_logic_vector(7 downto 0);
        led4_external_connection_export: out    vl_logic_vector(7 downto 0);
        led3_external_connection_export: out    vl_logic_vector(7 downto 0);
        led2_external_connection_export: out    vl_logic_vector(7 downto 0);
        led1_external_connection_export: out    vl_logic_vector(7 downto 0);
        uart_0_external_connection_rxd: in     vl_logic;
        uart_0_external_connection_txd: out    vl_logic;
        switch0_external_connection_export: in     vl_logic_vector(1 downto 0);
        key3_external_connection_export: in     vl_logic;
        key2_external_connection_export: in     vl_logic;
        key1_external_connection_export: in     vl_logic
    );
end nios_sys;
