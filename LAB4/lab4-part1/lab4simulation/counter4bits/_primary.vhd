library verilog;
use verilog.vl_types.all;
entity counter4bits is
    port(
        iClk            : in     vl_logic;
        iReset_n        : in     vl_logic;
        iEnable         : in     vl_logic;
        iClear          : in     vl_logic;
        iUp_down        : in     vl_logic;
        iInitialValue   : in     vl_logic_vector(3 downto 0);
        oData           : out    vl_logic_vector(3 downto 0)
    );
end counter4bits;
