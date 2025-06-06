library verilog;
use verilog.vl_types.all;
entity nios_sys_nios2_qsys_0 is
    port(
        clk             : in     vl_logic;
        d_irq           : in     vl_logic_vector(31 downto 0);
        d_readdata      : in     vl_logic_vector(31 downto 0);
        d_waitrequest   : in     vl_logic;
        i_readdata      : in     vl_logic_vector(31 downto 0);
        i_waitrequest   : in     vl_logic;
        jtag_debug_module_address: in     vl_logic_vector(8 downto 0);
        jtag_debug_module_byteenable: in     vl_logic_vector(3 downto 0);
        jtag_debug_module_debugaccess: in     vl_logic;
        jtag_debug_module_read: in     vl_logic;
        jtag_debug_module_write: in     vl_logic;
        jtag_debug_module_writedata: in     vl_logic_vector(31 downto 0);
        reset_n         : in     vl_logic;
        d_address       : out    vl_logic_vector(20 downto 0);
        d_byteenable    : out    vl_logic_vector(3 downto 0);
        d_read          : out    vl_logic;
        d_write         : out    vl_logic;
        d_writedata     : out    vl_logic_vector(31 downto 0);
        i_address       : out    vl_logic_vector(20 downto 0);
        i_read          : out    vl_logic;
        jtag_debug_module_debugaccess_to_roms: out    vl_logic;
        jtag_debug_module_readdata: out    vl_logic_vector(31 downto 0);
        jtag_debug_module_resetrequest: out    vl_logic;
        jtag_debug_module_waitrequest: out    vl_logic;
        no_ci_readra    : out    vl_logic
    );
end nios_sys_nios2_qsys_0;
