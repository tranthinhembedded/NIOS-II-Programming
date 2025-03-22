module switch(
    // inputs
    input         iClk,
    input         iReset_n,
    input         iChip_select_n,
    input         iRead_n,
    input  [31:0] iSwitches,

    // outputs
    output reg [31:0] oSwitches
);

always @ (posedge iClk) begin
    if (~iReset_n)
        oSwitches <= 32'h0;
    else if (~iChip_select_n && ~iRead_n)
        oSwitches <= iSwitches;
end

endmodule