library verilog;
use verilog.vl_types.all;
entity nios_sys_addr_router_001 is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        sink_valid      : in     vl_logic;
        sink_data       : in     vl_logic_vector(97 downto 0);
        sink_startofpacket: in     vl_logic;
        sink_endofpacket: in     vl_logic;
        sink_ready      : out    vl_logic;
        src_valid       : out    vl_logic;
        src_data        : out    vl_logic_vector(97 downto 0);
        src_channel     : out    vl_logic_vector(21 downto 0);
        src_startofpacket: out    vl_logic;
        src_endofpacket : out    vl_logic;
        src_ready       : in     vl_logic
    );
end nios_sys_addr_router_001;
