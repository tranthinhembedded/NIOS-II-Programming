library verilog;
use verilog.vl_types.all;
entity nios_sys_nios2_qsys_0_nios2_oci_fifowp_inc is
    port(
        free2           : in     vl_logic;
        free3           : in     vl_logic;
        tm_count        : in     vl_logic_vector(1 downto 0);
        fifowp_inc      : out    vl_logic_vector(3 downto 0)
    );
end nios_sys_nios2_qsys_0_nios2_oci_fifowp_inc;
