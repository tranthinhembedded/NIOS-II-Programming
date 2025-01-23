module lab3_part2 (
    input         CLOCK_50,
    input  [0:0]  KEY,
    input  [15:0] SW,
    output [15:0] LEDR
);

    nios u0 (
        .clk_clk                       (CLOCK_50),                       //                    clk.clk
        .reset_reset_n                 (KEY),                 //                  reset.reset_n
        .switches_conduit_end_1_export (SW), // switches_conduit_end_1.export
        .leds_conduit_end_export       (LEDR)        //       leds_conduit_end.export
    );

endmodule
