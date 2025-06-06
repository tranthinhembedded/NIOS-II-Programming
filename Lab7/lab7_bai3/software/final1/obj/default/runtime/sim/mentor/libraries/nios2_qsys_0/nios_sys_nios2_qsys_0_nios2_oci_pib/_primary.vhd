library verilog;
use verilog.vl_types.all;
entity nios_sys_nios2_qsys_0_nios2_oci_pib is
    port(
        clk             : in     vl_logic;
        clkx2           : in     vl_logic;
        jrst_n          : in     vl_logic;
        tw              : in     vl_logic_vector(35 downto 0);
        tr_clk          : out    vl_logic;
        tr_data         : out    vl_logic_vector(17 downto 0)
    );
end nios_sys_nios2_qsys_0_nios2_oci_pib;
