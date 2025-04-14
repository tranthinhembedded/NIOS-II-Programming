library verilog;
use verilog.vl_types.all;
entity nios_sys_dma_0_byteenables is
    port(
        byte_access     : in     vl_logic;
        hw              : in     vl_logic;
        word            : in     vl_logic;
        write_address   : in     vl_logic_vector(17 downto 0);
        write_byteenable: out    vl_logic_vector(3 downto 0)
    );
end nios_sys_dma_0_byteenables;
