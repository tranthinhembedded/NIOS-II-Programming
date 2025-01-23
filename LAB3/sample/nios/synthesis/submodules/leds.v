module leds (
    // inputs
    input         iClk,
    input         iReset_n,
    input         iChip_select_n,
    input         iWrite_n,
    input  [31:0] iLeds,

    // outputs
    output reg [31:0] oLeds
);

always @ (posedge iClk) begin
    if (~iReset_n)
        oLeds <= 32'h0;
    else if (~iChip_select_n && ~iWrite_n)
        oLeds <= iLeds;
end

endmodule
