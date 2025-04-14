library verilog;
use verilog.vl_types.all;
entity nios_sys_dma_0 is
    port(
        clk             : in     vl_logic;
        dma_ctl_address : in     vl_logic_vector(2 downto 0);
        dma_ctl_chipselect: in     vl_logic;
        dma_ctl_write_n : in     vl_logic;
        dma_ctl_writedata: in     vl_logic_vector(17 downto 0);
        read_readdata   : in     vl_logic_vector(31 downto 0);
        read_readdatavalid: in     vl_logic;
        read_waitrequest: in     vl_logic;
        system_reset_n  : in     vl_logic;
        write_waitrequest: in     vl_logic;
        dma_ctl_irq     : out    vl_logic;
        dma_ctl_readdata: out    vl_logic_vector(17 downto 0);
        read_address    : out    vl_logic_vector(17 downto 0);
        read_chipselect : out    vl_logic;
        read_read_n     : out    vl_logic;
        write_address   : out    vl_logic_vector(17 downto 0);
        write_byteenable: out    vl_logic_vector(3 downto 0);
        write_chipselect: out    vl_logic;
        write_write_n   : out    vl_logic;
        write_writedata : out    vl_logic_vector(31 downto 0)
    );
end nios_sys_dma_0;
