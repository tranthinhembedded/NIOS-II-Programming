library verilog;
use verilog.vl_types.all;
entity nios_sys is
    port(
        clk_clk         : in     vl_logic;
        reset_reset_n   : in     vl_logic;
        led11_external_connection_export: out    vl_logic_vector(7 downto 0);
        led10_external_connection_export: out    vl_logic_vector(7 downto 0);
        led9_external_connection_export: out    vl_logic_vector(7 downto 0);
        led8_external_connection_export: out    vl_logic_vector(7 downto 0);
        led7_external_connection_export: out    vl_logic_vector(7 downto 0);
        led6_external_connection_export: out    vl_logic_vector(7 downto 0);
        led5_external_connection_export: out    vl_logic_vector(7 downto 0);
        led4_external_connection_export: out    vl_logic_vector(7 downto 0);
        led3_external_connection_export: out    vl_logic_vector(7 downto 0);
        led2_external_connection_export: out    vl_logic_vector(7 downto 0);
        led1_external_connection_export: out    vl_logic_vector(7 downto 0);
        led0_external_connection_export: out    vl_logic_vector(7 downto 0)
    );
end nios_sys;
