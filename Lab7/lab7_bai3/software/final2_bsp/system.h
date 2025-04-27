/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys_0' in SOPC Builder design 'nios_sys'
 * SOPC Builder design path: D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys.sopcinfo
 *
 * Generated: Fri Apr 25 23:03:06 ICT 2025
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x100820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x15
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x80020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x15
#define ALT_CPU_NAME "nios2_qsys_0"
#define ALT_CPU_RESET_ADDR 0x80000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x100820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x15
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x80020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x15
#define NIOS2_RESET_ADDR 0x80000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_QSYS


/*
 * LCD_DATA configuration
 *
 */

#define ALT_MODULE_CLASS_LCD_DATA altera_avalon_pio
#define LCD_DATA_BASE 0x101260
#define LCD_DATA_BIT_CLEARING_EDGE_REGISTER 0
#define LCD_DATA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LCD_DATA_CAPTURE 0
#define LCD_DATA_DATA_WIDTH 8
#define LCD_DATA_DO_TEST_BENCH_WIRING 0
#define LCD_DATA_DRIVEN_SIM_VALUE 0
#define LCD_DATA_EDGE_TYPE "NONE"
#define LCD_DATA_FREQ 50000000
#define LCD_DATA_HAS_IN 0
#define LCD_DATA_HAS_OUT 1
#define LCD_DATA_HAS_TRI 0
#define LCD_DATA_IRQ -1
#define LCD_DATA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_DATA_IRQ_TYPE "NONE"
#define LCD_DATA_NAME "/dev/LCD_DATA"
#define LCD_DATA_RESET_VALUE 0
#define LCD_DATA_SPAN 16
#define LCD_DATA_TYPE "altera_avalon_pio"


/*
 * LCD_EN configuration
 *
 */

#define ALT_MODULE_CLASS_LCD_EN altera_avalon_pio
#define LCD_EN_BASE 0x101230
#define LCD_EN_BIT_CLEARING_EDGE_REGISTER 0
#define LCD_EN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LCD_EN_CAPTURE 0
#define LCD_EN_DATA_WIDTH 1
#define LCD_EN_DO_TEST_BENCH_WIRING 0
#define LCD_EN_DRIVEN_SIM_VALUE 0
#define LCD_EN_EDGE_TYPE "NONE"
#define LCD_EN_FREQ 50000000
#define LCD_EN_HAS_IN 0
#define LCD_EN_HAS_OUT 1
#define LCD_EN_HAS_TRI 0
#define LCD_EN_IRQ -1
#define LCD_EN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_EN_IRQ_TYPE "NONE"
#define LCD_EN_NAME "/dev/LCD_EN"
#define LCD_EN_RESET_VALUE 0
#define LCD_EN_SPAN 16
#define LCD_EN_TYPE "altera_avalon_pio"


/*
 * LCD_ON configuration
 *
 */

#define ALT_MODULE_CLASS_LCD_ON altera_avalon_pio
#define LCD_ON_BASE 0x101220
#define LCD_ON_BIT_CLEARING_EDGE_REGISTER 0
#define LCD_ON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LCD_ON_CAPTURE 0
#define LCD_ON_DATA_WIDTH 1
#define LCD_ON_DO_TEST_BENCH_WIRING 0
#define LCD_ON_DRIVEN_SIM_VALUE 0
#define LCD_ON_EDGE_TYPE "NONE"
#define LCD_ON_FREQ 50000000
#define LCD_ON_HAS_IN 0
#define LCD_ON_HAS_OUT 1
#define LCD_ON_HAS_TRI 0
#define LCD_ON_IRQ -1
#define LCD_ON_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_ON_IRQ_TYPE "NONE"
#define LCD_ON_NAME "/dev/LCD_ON"
#define LCD_ON_RESET_VALUE 0
#define LCD_ON_SPAN 16
#define LCD_ON_TYPE "altera_avalon_pio"


/*
 * LCD_RS configuration
 *
 */

#define ALT_MODULE_CLASS_LCD_RS altera_avalon_pio
#define LCD_RS_BASE 0x101240
#define LCD_RS_BIT_CLEARING_EDGE_REGISTER 0
#define LCD_RS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LCD_RS_CAPTURE 0
#define LCD_RS_DATA_WIDTH 1
#define LCD_RS_DO_TEST_BENCH_WIRING 0
#define LCD_RS_DRIVEN_SIM_VALUE 0
#define LCD_RS_EDGE_TYPE "NONE"
#define LCD_RS_FREQ 50000000
#define LCD_RS_HAS_IN 0
#define LCD_RS_HAS_OUT 1
#define LCD_RS_HAS_TRI 0
#define LCD_RS_IRQ -1
#define LCD_RS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_RS_IRQ_TYPE "NONE"
#define LCD_RS_NAME "/dev/LCD_RS"
#define LCD_RS_RESET_VALUE 0
#define LCD_RS_SPAN 16
#define LCD_RS_TYPE "altera_avalon_pio"


/*
 * LCD_RW configuration
 *
 */

#define ALT_MODULE_CLASS_LCD_RW altera_avalon_pio
#define LCD_RW_BASE 0x101250
#define LCD_RW_BIT_CLEARING_EDGE_REGISTER 0
#define LCD_RW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LCD_RW_CAPTURE 0
#define LCD_RW_DATA_WIDTH 1
#define LCD_RW_DO_TEST_BENCH_WIRING 0
#define LCD_RW_DRIVEN_SIM_VALUE 0
#define LCD_RW_EDGE_TYPE "NONE"
#define LCD_RW_FREQ 50000000
#define LCD_RW_HAS_IN 0
#define LCD_RW_HAS_OUT 1
#define LCD_RW_HAS_TRI 0
#define LCD_RW_IRQ -1
#define LCD_RW_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_RW_IRQ_TYPE "NONE"
#define LCD_RW_NAME "/dev/LCD_RW"
#define LCD_RW_RESET_VALUE 0
#define LCD_RW_SPAN 16
#define LCD_RW_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x101278
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x101278
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x101278
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios_sys"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x101278
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * key1 configuration
 *
 */

#define ALT_MODULE_CLASS_key1 altera_avalon_pio
#define KEY1_BASE 0x101160
#define KEY1_BIT_CLEARING_EDGE_REGISTER 0
#define KEY1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY1_CAPTURE 0
#define KEY1_DATA_WIDTH 1
#define KEY1_DO_TEST_BENCH_WIRING 0
#define KEY1_DRIVEN_SIM_VALUE 0
#define KEY1_EDGE_TYPE "NONE"
#define KEY1_FREQ 50000000
#define KEY1_HAS_IN 1
#define KEY1_HAS_OUT 0
#define KEY1_HAS_TRI 0
#define KEY1_IRQ -1
#define KEY1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEY1_IRQ_TYPE "NONE"
#define KEY1_NAME "/dev/key1"
#define KEY1_RESET_VALUE 0
#define KEY1_SPAN 16
#define KEY1_TYPE "altera_avalon_pio"


/*
 * key2 configuration
 *
 */

#define ALT_MODULE_CLASS_key2 altera_avalon_pio
#define KEY2_BASE 0x101170
#define KEY2_BIT_CLEARING_EDGE_REGISTER 0
#define KEY2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY2_CAPTURE 0
#define KEY2_DATA_WIDTH 1
#define KEY2_DO_TEST_BENCH_WIRING 0
#define KEY2_DRIVEN_SIM_VALUE 0
#define KEY2_EDGE_TYPE "NONE"
#define KEY2_FREQ 50000000
#define KEY2_HAS_IN 1
#define KEY2_HAS_OUT 0
#define KEY2_HAS_TRI 0
#define KEY2_IRQ -1
#define KEY2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEY2_IRQ_TYPE "NONE"
#define KEY2_NAME "/dev/key2"
#define KEY2_RESET_VALUE 0
#define KEY2_SPAN 16
#define KEY2_TYPE "altera_avalon_pio"


/*
 * key3 configuration
 *
 */

#define ALT_MODULE_CLASS_key3 altera_avalon_pio
#define KEY3_BASE 0x101180
#define KEY3_BIT_CLEARING_EDGE_REGISTER 0
#define KEY3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY3_CAPTURE 0
#define KEY3_DATA_WIDTH 1
#define KEY3_DO_TEST_BENCH_WIRING 0
#define KEY3_DRIVEN_SIM_VALUE 0
#define KEY3_EDGE_TYPE "NONE"
#define KEY3_FREQ 50000000
#define KEY3_HAS_IN 1
#define KEY3_HAS_OUT 0
#define KEY3_HAS_TRI 0
#define KEY3_IRQ -1
#define KEY3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEY3_IRQ_TYPE "NONE"
#define KEY3_NAME "/dev/key3"
#define KEY3_RESET_VALUE 0
#define KEY3_SPAN 16
#define KEY3_TYPE "altera_avalon_pio"


/*
 * led1 configuration
 *
 */

#define ALT_MODULE_CLASS_led1 altera_avalon_pio
#define LED1_BASE 0x101210
#define LED1_BIT_CLEARING_EDGE_REGISTER 0
#define LED1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED1_CAPTURE 0
#define LED1_DATA_WIDTH 8
#define LED1_DO_TEST_BENCH_WIRING 0
#define LED1_DRIVEN_SIM_VALUE 0
#define LED1_EDGE_TYPE "NONE"
#define LED1_FREQ 50000000
#define LED1_HAS_IN 0
#define LED1_HAS_OUT 1
#define LED1_HAS_TRI 0
#define LED1_IRQ -1
#define LED1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED1_IRQ_TYPE "NONE"
#define LED1_NAME "/dev/led1"
#define LED1_RESET_VALUE 0
#define LED1_SPAN 16
#define LED1_TYPE "altera_avalon_pio"


/*
 * led2 configuration
 *
 */

#define ALT_MODULE_CLASS_led2 altera_avalon_pio
#define LED2_BASE 0x101200
#define LED2_BIT_CLEARING_EDGE_REGISTER 0
#define LED2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED2_CAPTURE 0
#define LED2_DATA_WIDTH 8
#define LED2_DO_TEST_BENCH_WIRING 0
#define LED2_DRIVEN_SIM_VALUE 0
#define LED2_EDGE_TYPE "NONE"
#define LED2_FREQ 50000000
#define LED2_HAS_IN 0
#define LED2_HAS_OUT 1
#define LED2_HAS_TRI 0
#define LED2_IRQ -1
#define LED2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED2_IRQ_TYPE "NONE"
#define LED2_NAME "/dev/led2"
#define LED2_RESET_VALUE 0
#define LED2_SPAN 16
#define LED2_TYPE "altera_avalon_pio"


/*
 * led3 configuration
 *
 */

#define ALT_MODULE_CLASS_led3 altera_avalon_pio
#define LED3_BASE 0x1011f0
#define LED3_BIT_CLEARING_EDGE_REGISTER 0
#define LED3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED3_CAPTURE 0
#define LED3_DATA_WIDTH 8
#define LED3_DO_TEST_BENCH_WIRING 0
#define LED3_DRIVEN_SIM_VALUE 0
#define LED3_EDGE_TYPE "NONE"
#define LED3_FREQ 50000000
#define LED3_HAS_IN 0
#define LED3_HAS_OUT 1
#define LED3_HAS_TRI 0
#define LED3_IRQ -1
#define LED3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED3_IRQ_TYPE "NONE"
#define LED3_NAME "/dev/led3"
#define LED3_RESET_VALUE 0
#define LED3_SPAN 16
#define LED3_TYPE "altera_avalon_pio"


/*
 * led4 configuration
 *
 */

#define ALT_MODULE_CLASS_led4 altera_avalon_pio
#define LED4_BASE 0x1011e0
#define LED4_BIT_CLEARING_EDGE_REGISTER 0
#define LED4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED4_CAPTURE 0
#define LED4_DATA_WIDTH 8
#define LED4_DO_TEST_BENCH_WIRING 0
#define LED4_DRIVEN_SIM_VALUE 0
#define LED4_EDGE_TYPE "NONE"
#define LED4_FREQ 50000000
#define LED4_HAS_IN 0
#define LED4_HAS_OUT 1
#define LED4_HAS_TRI 0
#define LED4_IRQ -1
#define LED4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED4_IRQ_TYPE "NONE"
#define LED4_NAME "/dev/led4"
#define LED4_RESET_VALUE 0
#define LED4_SPAN 16
#define LED4_TYPE "altera_avalon_pio"


/*
 * led5 configuration
 *
 */

#define ALT_MODULE_CLASS_led5 altera_avalon_pio
#define LED5_BASE 0x1011d0
#define LED5_BIT_CLEARING_EDGE_REGISTER 0
#define LED5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED5_CAPTURE 0
#define LED5_DATA_WIDTH 8
#define LED5_DO_TEST_BENCH_WIRING 0
#define LED5_DRIVEN_SIM_VALUE 0
#define LED5_EDGE_TYPE "NONE"
#define LED5_FREQ 50000000
#define LED5_HAS_IN 0
#define LED5_HAS_OUT 1
#define LED5_HAS_TRI 0
#define LED5_IRQ -1
#define LED5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED5_IRQ_TYPE "NONE"
#define LED5_NAME "/dev/led5"
#define LED5_RESET_VALUE 0
#define LED5_SPAN 16
#define LED5_TYPE "altera_avalon_pio"


/*
 * led6 configuration
 *
 */

#define ALT_MODULE_CLASS_led6 altera_avalon_pio
#define LED6_BASE 0x1011c0
#define LED6_BIT_CLEARING_EDGE_REGISTER 0
#define LED6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED6_CAPTURE 0
#define LED6_DATA_WIDTH 8
#define LED6_DO_TEST_BENCH_WIRING 0
#define LED6_DRIVEN_SIM_VALUE 0
#define LED6_EDGE_TYPE "NONE"
#define LED6_FREQ 50000000
#define LED6_HAS_IN 0
#define LED6_HAS_OUT 1
#define LED6_HAS_TRI 0
#define LED6_IRQ -1
#define LED6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED6_IRQ_TYPE "NONE"
#define LED6_NAME "/dev/led6"
#define LED6_RESET_VALUE 0
#define LED6_SPAN 16
#define LED6_TYPE "altera_avalon_pio"


/*
 * led7 configuration
 *
 */

#define ALT_MODULE_CLASS_led7 altera_avalon_pio
#define LED7_BASE 0x1011b0
#define LED7_BIT_CLEARING_EDGE_REGISTER 0
#define LED7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED7_CAPTURE 0
#define LED7_DATA_WIDTH 8
#define LED7_DO_TEST_BENCH_WIRING 0
#define LED7_DRIVEN_SIM_VALUE 0
#define LED7_EDGE_TYPE "NONE"
#define LED7_FREQ 50000000
#define LED7_HAS_IN 0
#define LED7_HAS_OUT 1
#define LED7_HAS_TRI 0
#define LED7_IRQ -1
#define LED7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED7_IRQ_TYPE "NONE"
#define LED7_NAME "/dev/led7"
#define LED7_RESET_VALUE 0
#define LED7_SPAN 16
#define LED7_TYPE "altera_avalon_pio"


/*
 * led8 configuration
 *
 */

#define ALT_MODULE_CLASS_led8 altera_avalon_pio
#define LED8_BASE 0x1011a0
#define LED8_BIT_CLEARING_EDGE_REGISTER 0
#define LED8_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED8_CAPTURE 0
#define LED8_DATA_WIDTH 8
#define LED8_DO_TEST_BENCH_WIRING 0
#define LED8_DRIVEN_SIM_VALUE 0
#define LED8_EDGE_TYPE "NONE"
#define LED8_FREQ 50000000
#define LED8_HAS_IN 0
#define LED8_HAS_OUT 1
#define LED8_HAS_TRI 0
#define LED8_IRQ -1
#define LED8_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED8_IRQ_TYPE "NONE"
#define LED8_NAME "/dev/led8"
#define LED8_RESET_VALUE 0
#define LED8_SPAN 16
#define LED8_TYPE "altera_avalon_pio"


/*
 * ledr configuration
 *
 */

#define ALT_MODULE_CLASS_ledr altera_avalon_pio
#define LEDR_BASE 0x101150
#define LEDR_BIT_CLEARING_EDGE_REGISTER 0
#define LEDR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDR_CAPTURE 0
#define LEDR_DATA_WIDTH 8
#define LEDR_DO_TEST_BENCH_WIRING 0
#define LEDR_DRIVEN_SIM_VALUE 0
#define LEDR_EDGE_TYPE "NONE"
#define LEDR_FREQ 50000000
#define LEDR_HAS_IN 0
#define LEDR_HAS_OUT 1
#define LEDR_HAS_TRI 0
#define LEDR_IRQ -1
#define LEDR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDR_IRQ_TYPE "NONE"
#define LEDR_NAME "/dev/ledr"
#define LEDR_RESET_VALUE 0
#define LEDR_SPAN 16
#define LEDR_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x80000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "nios_sys_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 400000
#define ONCHIP_MEMORY2_0_SPAN 400000
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * switch0 configuration
 *
 */

#define ALT_MODULE_CLASS_switch0 altera_avalon_pio
#define SWITCH0_BASE 0x101190
#define SWITCH0_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH0_CAPTURE 1
#define SWITCH0_DATA_WIDTH 2
#define SWITCH0_DO_TEST_BENCH_WIRING 0
#define SWITCH0_DRIVEN_SIM_VALUE 0
#define SWITCH0_EDGE_TYPE "RISING"
#define SWITCH0_FREQ 50000000
#define SWITCH0_HAS_IN 1
#define SWITCH0_HAS_OUT 0
#define SWITCH0_HAS_TRI 0
#define SWITCH0_IRQ 2
#define SWITCH0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SWITCH0_IRQ_TYPE "EDGE"
#define SWITCH0_NAME "/dev/switch0"
#define SWITCH0_RESET_VALUE 0
#define SWITCH0_SPAN 16
#define SWITCH0_TYPE "altera_avalon_pio"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x101040
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 3
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.0010
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000.0
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"


/*
 * uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_uart_0 altera_avalon_uart
#define UART_0_BASE 0x101060
#define UART_0_BAUD 9600
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 1
#define UART_0_FREQ 50000000
#define UART_0_IRQ 1
#define UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_0_NAME "/dev/uart_0"
#define UART_0_PARITY 'N'
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_SPAN 32
#define UART_0_STOP_BITS 1
#define UART_0_SYNC_REG_DEPTH 2
#define UART_0_TYPE "altera_avalon_uart"
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0

#endif /* __SYSTEM_H_ */
