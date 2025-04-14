library verilog;
use verilog.vl_types.all;
entity nios_sys_nios2_qsys_0_mult_cell is
    port(
        M_mul_src1      : in     vl_logic_vector(31 downto 0);
        M_mul_src2      : in     vl_logic_vector(31 downto 0);
        clk             : in     vl_logic;
        reset_n         : in     vl_logic;
        M_mul_cell_result: out    vl_logic_vector(31 downto 0)
    );
end nios_sys_nios2_qsys_0_mult_cell;
