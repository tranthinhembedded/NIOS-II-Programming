#include <stdint.h>
#include <system.h>
#include <io.h>

uint8_t segment_table[16] = {
    0xC0, // 0
    0xF9, // 1
    0xA4, // 2
    0xB0, // 3
    0x99, // 4
    0x92, // 5
    0x82, // 6
    0xF8, // 7
    0x80, // 8
    0x90, // 9
    0x88, // A
    0x83, // B
    0xC6, // C
    0xA1, // D
    0x86, // E
    0x8E  // F
};

int main() {
    uint8_t sw_value;
    uint8_t hex_value;
    uint8_t sw_value1;
    uint8_t hex_value1;

    while (1) {

        sw_value = IORD(SWITCH_BASE,0) & 0x0F;
        sw_value1 = IORD(SWITCH_0_BASE,0) & 0x0F;

        hex_value = segment_table[sw_value];
        hex_value1 = segment_table[sw_value1];

        IOWR(LED_BASE,0, hex_value);
        IOWR(LED_0_BASE,0, hex_value1);
    }

    return 0;
}
