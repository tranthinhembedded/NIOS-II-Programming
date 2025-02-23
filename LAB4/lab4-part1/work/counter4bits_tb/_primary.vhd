library verilog;
use verilog.vl_types.all;
entity counter4bits_tb is
    generic(
        PERIOD          : integer := 10;
        PERIODx20       : vl_notype;
        PERIODx40       : vl_notype;
        PERIODx100      : vl_notype
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of PERIOD : constant is 1;
    attribute mti_svvh_generic_type of PERIODx20 : constant is 3;
    attribute mti_svvh_generic_type of PERIODx40 : constant is 3;
    attribute mti_svvh_generic_type of PERIODx100 : constant is 3;
end counter4bits_tb;
