/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys_0' in SOPC Builder design 'nios_sys'
 * SOPC Builder design path: D:/Soc/NIOS-II-Programming/Lab9/Bai3/nios_sys.sopcinfo
 *
 * Generated: Sat Apr 12 10:56:55 ICT 2025
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
#define ALT_CPU_BREAK_ADDR 0x20820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "small"
#define ALT_CPU_DATA_ADDR_WIDTH 0x12
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x10020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x12
#define ALT_CPU_NAME "nios2_qsys_0"
#define ALT_CPU_RESET_ADDR 0x10000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x20820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "small"
#define NIOS2_DATA_ADDR_WIDTH 0x12
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x10020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INST_ADDR_WIDTH 0x12
#define NIOS2_RESET_ADDR 0x10000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_QSYS


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
#define ALT_STDERR_BASE 0x211c8
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x211c8
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x211c8
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios_sys"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x211c8
#define JTAG_UART_0_IRQ 1
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * led0 configuration
 *
 */

#define ALT_MODULE_CLASS_led0 altera_avalon_pio
#define LED0_BASE 0x211b0
#define LED0_BIT_CLEARING_EDGE_REGISTER 0
#define LED0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED0_CAPTURE 0
#define LED0_DATA_WIDTH 8
#define LED0_DO_TEST_BENCH_WIRING 0
#define LED0_DRIVEN_SIM_VALUE 0
#define LED0_EDGE_TYPE "NONE"
#define LED0_FREQ 50000000
#define LED0_HAS_IN 0
#define LED0_HAS_OUT 1
#define LED0_HAS_TRI 0
#define LED0_IRQ -1
#define LED0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED0_IRQ_TYPE "NONE"
#define LED0_NAME "/dev/led0"
#define LED0_RESET_VALUE 0
#define LED0_SPAN 16
#define LED0_TYPE "altera_avalon_pio"


/*
 * led1 configuration
 *
 */

#define ALT_MODULE_CLASS_led1 altera_avalon_pio
#define LED1_BASE 0x211a0
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
 * led10 configuration
 *
 */

#define ALT_MODULE_CLASS_led10 altera_avalon_pio
#define LED10_BASE 0x21110
#define LED10_BIT_CLEARING_EDGE_REGISTER 0
#define LED10_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED10_CAPTURE 0
#define LED10_DATA_WIDTH 8
#define LED10_DO_TEST_BENCH_WIRING 0
#define LED10_DRIVEN_SIM_VALUE 0
#define LED10_EDGE_TYPE "NONE"
#define LED10_FREQ 50000000
#define LED10_HAS_IN 0
#define LED10_HAS_OUT 1
#define LED10_HAS_TRI 0
#define LED10_IRQ -1
#define LED10_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED10_IRQ_TYPE "NONE"
#define LED10_NAME "/dev/led10"
#define LED10_RESET_VALUE 0
#define LED10_SPAN 16
#define LED10_TYPE "altera_avalon_pio"


/*
 * led11 configuration
 *
 */

#define ALT_MODULE_CLASS_led11 altera_avalon_pio
#define LED11_BASE 0x21100
#define LED11_BIT_CLEARING_EDGE_REGISTER 0
#define LED11_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED11_CAPTURE 0
#define LED11_DATA_WIDTH 8
#define LED11_DO_TEST_BENCH_WIRING 0
#define LED11_DRIVEN_SIM_VALUE 0
#define LED11_EDGE_TYPE "NONE"
#define LED11_FREQ 50000000
#define LED11_HAS_IN 0
#define LED11_HAS_OUT 1
#define LED11_HAS_TRI 0
#define LED11_IRQ -1
#define LED11_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED11_IRQ_TYPE "NONE"
#define LED11_NAME "/dev/led11"
#define LED11_RESET_VALUE 0
#define LED11_SPAN 16
#define LED11_TYPE "altera_avalon_pio"


/*
 * led2 configuration
 *
 */

#define ALT_MODULE_CLASS_led2 altera_avalon_pio
#define LED2_BASE 0x21190
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
#define LED3_BASE 0x21180
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
#define LED4_BASE 0x21170
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
#define LED5_BASE 0x21160
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
#define LED6_BASE 0x21150
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
#define LED7_BASE 0x21140
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
#define LED8_BASE 0x21130
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
 * led9 configuration
 *
 */

#define ALT_MODULE_CLASS_led9 altera_avalon_pio
#define LED9_BASE 0x21120
#define LED9_BIT_CLEARING_EDGE_REGISTER 0
#define LED9_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED9_CAPTURE 0
#define LED9_DATA_WIDTH 8
#define LED9_DO_TEST_BENCH_WIRING 0
#define LED9_DRIVEN_SIM_VALUE 0
#define LED9_EDGE_TYPE "NONE"
#define LED9_FREQ 50000000
#define LED9_HAS_IN 0
#define LED9_HAS_OUT 1
#define LED9_HAS_TRI 0
#define LED9_IRQ -1
#define LED9_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED9_IRQ_TYPE "NONE"
#define LED9_NAME "/dev/led9"
#define LED9_RESET_VALUE 0
#define LED9_SPAN 16
#define LED9_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x10000
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
#define ONCHIP_MEMORY2_0_SIZE_VALUE 40000
#define ONCHIP_MEMORY2_0_SPAN 40000
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x21020
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 0
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

#endif /* __SYSTEM_H_ */
