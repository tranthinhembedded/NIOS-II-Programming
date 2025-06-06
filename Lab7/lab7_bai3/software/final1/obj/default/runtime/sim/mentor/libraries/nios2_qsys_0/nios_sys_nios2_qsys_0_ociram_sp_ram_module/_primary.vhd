library verilog;
use verilog.vl_types.all;
entity nios_sys_nios2_qsys_0_ociram_sp_ram_module is
    generic(
        lpm_file        : string  := "UNUSED"
    );
    port(
        address         : in     vl_logic_vector(7 downto 0);
        byteenable      : in     vl_logic_vector(3 downto 0);
        clock           : in     vl_logic;
        data            : in     vl_logic_vector(31 downto 0);
        wren            : in     vl_logic;
        q               : out    vl_logic_vector(31 downto 0)
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of lpm_file : constant is 1;
end nios_sys_nios2_qsys_0_ociram_sp_ram_module;
