// (C) 2001-2013 Altera Corporation. All rights reserved.
// Your use of Altera Corporation's design tools, logic functions and other 
// software and tools, and its AMPP partner logic functions, and any output 
// files any of the foregoing (including device programming or simulation 
// files), and any associated documentation or information are expressly subject 
// to the terms and conditions of the Altera Program License Subscription 
// Agreement, Altera MegaCore Function License Agreement, or other applicable 
// license agreement, including, without limitation, that your use is for the 
// sole purpose of programming logic devices manufactured by Altera and sold by 
// Altera or its authorized distributors.  Please refer to the applicable 
// agreement for further details.


// (C) 2001-2013 Altera Corporation. All rights reserved.
// Your use of Altera Corporation's design tools, logic functions and other 
// software and tools, and its AMPP partner logic functions, and any output 
// files any of the foregoing (including device programming or simulation 
// files), and any associated documentation or information are expressly subject 
// to the terms and conditions of the Altera Program License Subscription 
// Agreement, Altera MegaCore Function License Agreement, or other applicable 
// license agreement, including, without limitation, that your use is for the 
// sole purpose of programming logic devices manufactured by Altera and sold by 
// Altera or its authorized distributors.  Please refer to the applicable 
// agreement for further details.


// $Id: //acds/rel/13.0sp1/ip/merlin/altera_merlin_router/altera_merlin_router.sv.terp#1 $
// $Revision: #1 $
// $Date: 2013/03/07 $
// $Author: swbranch $

// -------------------------------------------------------
// Merlin Router
//
// Asserts the appropriate one-hot encoded channel based on 
// either (a) the address or (b) the dest id. The DECODER_TYPE
// parameter controls this behaviour. 0 means address decoder,
// 1 means dest id decoder.
//
// In the case of (a), it also sets the destination id.
// -------------------------------------------------------

`timescale 1 ns / 1 ns

module nios_sys_addr_router_default_decode
  #(
     parameter DEFAULT_CHANNEL = 1,
               DEFAULT_WR_CHANNEL = -1,
               DEFAULT_RD_CHANNEL = -1,
               DEFAULT_DESTID = 19 
   )
  (output [87 - 83 : 0] default_destination_id,
   output [23-1 : 0] default_wr_channel,
   output [23-1 : 0] default_rd_channel,
   output [23-1 : 0] default_src_channel
  );

  assign default_destination_id = 
    DEFAULT_DESTID[87 - 83 : 0];

  generate begin : default_decode
    if (DEFAULT_CHANNEL == -1) begin
      assign default_src_channel = '0;
    end
    else begin
      assign default_src_channel = 23'b1 << DEFAULT_CHANNEL;
    end
  end
  endgenerate

  generate begin : default_decode_rw
    if (DEFAULT_RD_CHANNEL == -1) begin
      assign default_wr_channel = '0;
      assign default_rd_channel = '0;
    end
    else begin
      assign default_wr_channel = 23'b1 << DEFAULT_WR_CHANNEL;
      assign default_rd_channel = 23'b1 << DEFAULT_RD_CHANNEL;
    end
  end
  endgenerate

endmodule


module nios_sys_addr_router
(
    // -------------------
    // Clock & Reset
    // -------------------
    input clk,
    input reset,

    // -------------------
    // Command Sink (Input)
    // -------------------
    input                       sink_valid,
    input  [98-1 : 0]    sink_data,
    input                       sink_startofpacket,
    input                       sink_endofpacket,
    output                      sink_ready,

    // -------------------
    // Command Source (Output)
    // -------------------
    output                          src_valid,
    output reg [98-1    : 0] src_data,
    output reg [23-1 : 0] src_channel,
    output                          src_startofpacket,
    output                          src_endofpacket,
    input                           src_ready
);

    // -------------------------------------------------------
    // Local parameters and variables
    // -------------------------------------------------------
    localparam PKT_ADDR_H = 56;
    localparam PKT_ADDR_L = 36;
    localparam PKT_DEST_ID_H = 87;
    localparam PKT_DEST_ID_L = 83;
    localparam PKT_PROTECTION_H = 91;
    localparam PKT_PROTECTION_L = 89;
    localparam ST_DATA_W = 98;
    localparam ST_CHANNEL_W = 23;
    localparam DECODER_TYPE = 0;

    localparam PKT_TRANS_WRITE = 59;
    localparam PKT_TRANS_READ  = 60;

    localparam PKT_ADDR_W = PKT_ADDR_H-PKT_ADDR_L + 1;
    localparam PKT_DEST_ID_W = PKT_DEST_ID_H-PKT_DEST_ID_L + 1;



    // -------------------------------------------------------
    // Figure out the number of bits to mask off for each slave span
    // during address decoding
    // -------------------------------------------------------
    localparam PAD0 = log2ceil(64'h100000 - 64'h80000); 
    localparam PAD1 = log2ceil(64'h101000 - 64'h100800); 
    localparam PAD2 = log2ceil(64'h101060 - 64'h101040); 
    localparam PAD3 = log2ceil(64'h101080 - 64'h101060); 
    localparam PAD4 = log2ceil(64'h101160 - 64'h101150); 
    localparam PAD5 = log2ceil(64'h101170 - 64'h101160); 
    localparam PAD6 = log2ceil(64'h101180 - 64'h101170); 
    localparam PAD7 = log2ceil(64'h101190 - 64'h101180); 
    localparam PAD8 = log2ceil(64'h1011a0 - 64'h101190); 
    localparam PAD9 = log2ceil(64'h1011b0 - 64'h1011a0); 
    localparam PAD10 = log2ceil(64'h1011c0 - 64'h1011b0); 
    localparam PAD11 = log2ceil(64'h1011d0 - 64'h1011c0); 
    localparam PAD12 = log2ceil(64'h1011e0 - 64'h1011d0); 
    localparam PAD13 = log2ceil(64'h1011f0 - 64'h1011e0); 
    localparam PAD14 = log2ceil(64'h101200 - 64'h1011f0); 
    localparam PAD15 = log2ceil(64'h101210 - 64'h101200); 
    localparam PAD16 = log2ceil(64'h101220 - 64'h101210); 
    localparam PAD17 = log2ceil(64'h101280 - 64'h101278); 
    // -------------------------------------------------------
    // Work out which address bits are significant based on the
    // address range of the slaves. If the required width is too
    // large or too small, we use the address field width instead.
    // -------------------------------------------------------
    localparam ADDR_RANGE = 64'h101280;
    localparam RANGE_ADDR_WIDTH = log2ceil(ADDR_RANGE);
    localparam OPTIMIZED_ADDR_H = (RANGE_ADDR_WIDTH > PKT_ADDR_W) ||
                                  (RANGE_ADDR_WIDTH == 0) ?
                                        PKT_ADDR_H :
                                        PKT_ADDR_L + RANGE_ADDR_WIDTH - 1;

    localparam RG = RANGE_ADDR_WIDTH-1;

      wire [PKT_ADDR_W-1 : 0] address = sink_data[OPTIMIZED_ADDR_H : PKT_ADDR_L];

    // -------------------------------------------------------
    // Pass almost everything through, untouched
    // -------------------------------------------------------
    assign sink_ready        = src_ready;
    assign src_valid         = sink_valid;
    assign src_startofpacket = sink_startofpacket;
    assign src_endofpacket   = sink_endofpacket;

    wire [PKT_DEST_ID_W-1:0] default_destid;
    wire [23-1 : 0] default_src_channel;





    nios_sys_addr_router_default_decode the_default_decode(
      .default_destination_id (default_destid),
      .default_wr_channel   (),
      .default_rd_channel   (),
      .default_src_channel  (default_src_channel)
    );

    always @* begin
        src_data    = sink_data;
        src_channel = default_src_channel;
        src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = default_destid;

        // --------------------------------------------------
        // Address Decoder
        // Sets the channel and destination ID based on the address
        // --------------------------------------------------

    // ( 0x80000 .. 0x100000 )
    if ( {address[RG:PAD0],{PAD0{1'b0}}} == 21'h80000   ) begin
            src_channel = 23'b000000000000000010;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 19;
    end

    // ( 0x100800 .. 0x101000 )
    if ( {address[RG:PAD1],{PAD1{1'b0}}} == 21'h100800   ) begin
            src_channel = 23'b000000000000000001;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 18;
    end

    // ( 0x101040 .. 0x101060 )
    if ( {address[RG:PAD2],{PAD2{1'b0}}} == 21'h101040   ) begin
            src_channel = 23'b010000000000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 21;
    end

    // ( 0x101060 .. 0x101080 )
    if ( {address[RG:PAD3],{PAD3{1'b0}}} == 21'h101060   ) begin
            src_channel = 23'b000000100000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 22;
    end

    // ( 0x101150 .. 0x101160 )
    if ( {address[RG:PAD4],{PAD4{1'b0}}} == 21'h101150   ) begin
            src_channel = 23'b100000000000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 17;
    end

    // ( 0x101160 .. 0x101170 )
    if ( {address[RG:PAD5],{PAD5{1'b0}}} == 21'h101160   ) begin
            src_channel = 23'b001000000000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 6;
    end

    // ( 0x101170 .. 0x101180 )
    if ( {address[RG:PAD6],{PAD6{1'b0}}} == 21'h101170   ) begin
            src_channel = 23'b000100000000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 7;
    end

    // ( 0x101180 .. 0x101190 )
    if ( {address[RG:PAD7],{PAD7{1'b0}}} == 21'h101180   ) begin
            src_channel = 23'b000010000000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 8;
    end

    // ( 0x101190 .. 0x1011a0 )
    if ( {address[RG:PAD8],{PAD8{1'b0}}} == 21'h101190   ) begin
            src_channel = 23'b000001000000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 20;
    end

    // ( 0x1011a0 .. 0x1011b0 )
    if ( {address[RG:PAD9],{PAD9{1'b0}}} == 21'h1011a0   ) begin
            src_channel = 23'b000000000000001000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 16;
    end

    // ( 0x1011b0 .. 0x1011c0 )
    if ( {address[RG:PAD10],{PAD10{1'b0}}} == 21'h1011b0   ) begin
            src_channel = 23'b000000000000010000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 15;
    end

    // ( 0x1011c0 .. 0x1011d0 )
    if ( {address[RG:PAD11],{PAD11{1'b0}}} == 21'h1011c0   ) begin
            src_channel = 23'b000000000000100000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 14;
    end

    // ( 0x1011d0 .. 0x1011e0 )
    if ( {address[RG:PAD12],{PAD12{1'b0}}} == 21'h1011d0   ) begin
            src_channel = 23'b000000000001000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 13;
    end

    // ( 0x1011e0 .. 0x1011f0 )
    if ( {address[RG:PAD13],{PAD13{1'b0}}} == 21'h1011e0   ) begin
            src_channel = 23'b000000000010000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 12;
    end

    // ( 0x1011f0 .. 0x101200 )
    if ( {address[RG:PAD14],{PAD14{1'b0}}} == 21'h1011f0   ) begin
            src_channel = 23'b000000000100000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 11;
    end

    // ( 0x101200 .. 0x101210 )
    if ( {address[RG:PAD15],{PAD15{1'b0}}} == 21'h101200   ) begin
            src_channel = 23'b000000001000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 10;
    end

    // ( 0x101210 .. 0x101220 )
    if ( {address[RG:PAD16],{PAD16{1'b0}}} == 21'h101210   ) begin
            src_channel = 23'b000000010000000000;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 9;
    end

    // ( 0x101278 .. 0x101280 )
    if ( {address[RG:PAD17],{PAD17{1'b0}}} == 21'h101278   ) begin
            src_channel = 23'b000000000000000100;
            src_data[PKT_DEST_ID_H:PKT_DEST_ID_L] = 5;
    end

end


    // --------------------------------------------------
    // Ceil(log2()) function
    // --------------------------------------------------
    function integer log2ceil;
        input reg[65:0] val;
        reg [65:0] i;

        begin
            i = 1;
            log2ceil = 0;

            while (i < val) begin
                log2ceil = log2ceil + 1;
                i = i << 1;
            end
        end
    endfunction

endmodule


