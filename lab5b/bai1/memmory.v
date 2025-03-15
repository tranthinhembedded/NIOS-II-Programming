module memmory

#(parameter DATA_WIDTH=32, parameter ADDR_WIDTH=4)
(
	// Avalon Slave intertace
input iClk,iReset_n,
input iRead_n, iWrite_n,
input [ (ADDR_WIDTH-1):0] iAddress,
input [(DATA_WIDTH-1):0] iData,
output [(DATA_WIDTH-1):0] oData

);

// Declare the merory veriable
reg [DATA_WIDTH-1:0] mem[2**ADDR_WIDTH-1:0];

reg [ADDR_WIDTH-1:0]addr_reg;
always @ (posedge iClk) begin
// write
if (!iWrite_n) begin

mem[iAddress] <= iData;
end
if (!iRead_n) begin
addr_reg <= iAddress;
end
end
assign oData = mem[addr_reg];
endmodule