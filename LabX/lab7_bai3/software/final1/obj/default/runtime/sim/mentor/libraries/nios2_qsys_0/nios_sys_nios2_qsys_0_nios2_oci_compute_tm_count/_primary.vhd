library verilog;
use verilog.vl_types.all;
entity nios_sys_nios2_qsys_0_nios2_oci_compute_tm_count is
    port(
        atm_valid       : in     vl_logic;
        dtm_valid       : in     vl_logic;
        itm_valid       : in     vl_logic;
        compute_tm_count: out    vl_logic_vector(1 downto 0)
    );
end nios_sys_nios2_qsys_0_nios2_oci_compute_tm_count;
