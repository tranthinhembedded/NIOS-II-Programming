`timescale 1ns/1ns

module testbench;
    reg clk_clk;        // Tên cổng khớp với nios_sys.v
    reg reset_reset_n;  // Tên cổng khớp với nios_sys.v

    // Instance of nios_sys
    nios_sys uut (
        .clk_clk(clk_clk),        // Kết nối với cổng clk_clk
        .reset_reset_n(reset_reset_n)  // Kết nối với cổng reset_reset_n
    );

    // Clock generation
    initial begin
        clk_clk = 0;
        forever #10 clk_clk = ~clk_clk; // Clock period = 20ns (50 MHz)
    end

    // Reset sequence
    initial begin
        reset_reset_n = 0;  // Reset active low
        #50 reset_reset_n = 1; // Reset active for 50ns
        #1000 $finish;     // Kết thúc simulation sau 1µs
    end

    // Monitor signals (tuỳ chọn)
    initial begin
        $monitor("Time=%0t clk_clk=%b reset_reset_n=%b", $time, clk_clk, reset_reset_n);
    end

endmodule