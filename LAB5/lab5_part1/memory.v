module memory
  #(parameter DATA_WIDTH=32, parameter ADDR_WIDTH=4)
  (
    // Avalon Slave Interface
    input iclk, iReset_n,
    input iRead, iWrite_n,
    input [ADDR_WIDTH-1:0] iAddress,
    input [DATA_WIDTH-1:0] iData,
    output [DATA_WIDTH-1:0] oData
  );

  // Declare the memory variable
  reg [DATA_WIDTH-1:0] mem[2**ADDR_WIDTH-1:0];

  // Variable to hold the registered read address
  reg [ADDR_WIDTH-1:0] addr_reg;

  always @(posedge iclk) begin
    // Write
    if (~iWrite_n) begin
      mem[iAddress] <= iData;
    end

    // Read
    if (iRead) begin
      addr_reg <= iAddress;
    end
  end

  assign oData = mem[addr_reg];

endmodule