
# (C) 2001-2025 Altera Corporation. All rights reserved.
# Your use of Altera Corporation's design tools, logic functions and 
# other software and tools, and its AMPP partner logic functions, and 
# any output files any of the foregoing (including device programming 
# or simulation files), and any associated documentation or information 
# are expressly subject to the terms and conditions of the Altera 
# Program License Subscription Agreement, Altera MegaCore Function 
# License Agreement, or other applicable license agreement, including, 
# without limitation, that your use is for the sole purpose of 
# programming logic devices manufactured by Altera and sold by Altera 
# or its authorized distributors. Please refer to the applicable 
# agreement for further details.

# ACDS 13.0sp1 232 win32 2025.04.25.22:32:02

# ----------------------------------------
# vcsmx - auto-generated simulation script

# ----------------------------------------
# initialize variables
TOP_LEVEL_NAME="nios_sys_tb"
QSYS_SIMDIR="./../../"
QUARTUS_INSTALL_DIR="C:/altera/13.0sp1/quartus/"
SKIP_FILE_COPY=0
SKIP_DEV_COM=0
SKIP_COM=0
SKIP_ELAB=0
SKIP_SIM=0
USER_DEFINED_ELAB_OPTIONS=""
USER_DEFINED_SIM_OPTIONS="+vcs+finish+100"

# ----------------------------------------
# overwrite variables - DO NOT MODIFY!
# This block evaluates each command line argument, typically used for 
# overwriting variables. An example usage:
#   sh <simulator>_setup.sh SKIP_ELAB=1 SKIP_SIM=1
for expression in "$@"; do
  eval $expression
  if [ $? -ne 0 ]; then
    echo "Error: This command line argument, \"$expression\", is/has an invalid expression." >&2
    exit $?
  fi
done

# ----------------------------------------
# create compilation libraries
mkdir -p ./libraries/work/
mkdir -p ./libraries/irq_mapper/
mkdir -p ./libraries/rsp_xbar_mux_001/
mkdir -p ./libraries/rsp_xbar_mux/
mkdir -p ./libraries/rsp_xbar_demux_017/
mkdir -p ./libraries/rsp_xbar_demux/
mkdir -p ./libraries/cmd_xbar_mux/
mkdir -p ./libraries/cmd_xbar_demux_001/
mkdir -p ./libraries/cmd_xbar_demux/
mkdir -p ./libraries/rst_controller/
mkdir -p ./libraries/id_router_017/
mkdir -p ./libraries/id_router/
mkdir -p ./libraries/addr_router_001/
mkdir -p ./libraries/addr_router/
mkdir -p ./libraries/nios2_qsys_0_jtag_debug_module_translator_avalon_universal_slave_0_agent_rsp_fifo/
mkdir -p ./libraries/nios2_qsys_0_jtag_debug_module_translator_avalon_universal_slave_0_agent/
mkdir -p ./libraries/nios2_qsys_0_instruction_master_translator_avalon_universal_master_0_agent/
mkdir -p ./libraries/nios2_qsys_0_jtag_debug_module_translator/
mkdir -p ./libraries/nios2_qsys_0_instruction_master_translator/
mkdir -p ./libraries/timer_0/
mkdir -p ./libraries/key1/
mkdir -p ./libraries/switch0/
mkdir -p ./libraries/uart_0/
mkdir -p ./libraries/LCD_DATA/
mkdir -p ./libraries/LCD_ON/
mkdir -p ./libraries/jtag_uart_0/
mkdir -p ./libraries/onchip_memory2_0/
mkdir -p ./libraries/nios2_qsys_0/
mkdir -p ./libraries/nios_sys_inst_reset_bfm/
mkdir -p ./libraries/nios_sys_inst_clk_bfm/
mkdir -p ./libraries/nios_sys_inst/
mkdir -p ./libraries/altera_ver/
mkdir -p ./libraries/lpm_ver/
mkdir -p ./libraries/sgate_ver/
mkdir -p ./libraries/altera_mf_ver/
mkdir -p ./libraries/altera_lnsim_ver/
mkdir -p ./libraries/cycloneive_ver/

# ----------------------------------------
# copy RAM/ROM files to simulation directory
if [ $SKIP_FILE_COPY -eq 0 ]; then
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_onchip_memory2_0.hex ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_ociram_default_contents.dat ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_ociram_default_contents.hex ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_ociram_default_contents.mif ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_rf_ram_a.dat ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_rf_ram_a.hex ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_rf_ram_a.mif ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_rf_ram_b.dat ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_rf_ram_b.hex ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_rf_ram_b.mif ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/software/final1/mem_init/hdl_sim/nios_sys_onchip_memory2_0.dat ./
  cp -f D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/software/final1/mem_init/nios_sys_onchip_memory2_0.hex ./
fi

# ----------------------------------------
# compile device library files
if [ $SKIP_DEV_COM -eq 0 ]; then
  vlogan +v2k           "$QUARTUS_INSTALL_DIR/eda/sim_lib/altera_primitives.v" -work altera_ver      
  vlogan +v2k           "$QUARTUS_INSTALL_DIR/eda/sim_lib/220model.v"          -work lpm_ver         
  vlogan +v2k           "$QUARTUS_INSTALL_DIR/eda/sim_lib/sgate.v"             -work sgate_ver       
  vlogan +v2k           "$QUARTUS_INSTALL_DIR/eda/sim_lib/altera_mf.v"         -work altera_mf_ver   
  vlogan +v2k -sverilog "$QUARTUS_INSTALL_DIR/eda/sim_lib/altera_lnsim.sv"     -work altera_lnsim_ver
  vlogan +v2k           "$QUARTUS_INSTALL_DIR/eda/sim_lib/cycloneive_atoms.v"  -work cycloneive_ver  
fi

# ----------------------------------------
# compile design files in correct order
if [ $SKIP_COM -eq 0 ]; then
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_irq_mapper.sv"                            -work irq_mapper                                                                       
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_merlin_arbitrator.sv"                       -work rsp_xbar_mux_001                                                                 
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_rsp_xbar_mux_001.sv"                      -work rsp_xbar_mux_001                                                                 
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_merlin_arbitrator.sv"                       -work rsp_xbar_mux                                                                     
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_rsp_xbar_mux.sv"                          -work rsp_xbar_mux                                                                     
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_rsp_xbar_demux_017.sv"                    -work rsp_xbar_demux_017                                                               
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_rsp_xbar_demux.sv"                        -work rsp_xbar_demux                                                                   
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_merlin_arbitrator.sv"                       -work cmd_xbar_mux                                                                     
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_cmd_xbar_mux.sv"                          -work cmd_xbar_mux                                                                     
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_cmd_xbar_demux_001.sv"                    -work cmd_xbar_demux_001                                                               
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_cmd_xbar_demux.sv"                        -work cmd_xbar_demux                                                                   
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_reset_controller.v"                         -work rst_controller                                                                   
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_reset_synchronizer.v"                       -work rst_controller                                                                   
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_id_router_017.sv"                         -work id_router_017                                                                    
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_id_router.sv"                             -work id_router                                                                        
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_addr_router_001.sv"                       -work addr_router_001                                                                  
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_addr_router.sv"                           -work addr_router                                                                      
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_avalon_sc_fifo.v"                           -work nios2_qsys_0_jtag_debug_module_translator_avalon_universal_slave_0_agent_rsp_fifo
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_merlin_slave_agent.sv"                      -work nios2_qsys_0_jtag_debug_module_translator_avalon_universal_slave_0_agent         
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_merlin_burst_uncompressor.sv"               -work nios2_qsys_0_jtag_debug_module_translator_avalon_universal_slave_0_agent         
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_merlin_master_agent.sv"                     -work nios2_qsys_0_instruction_master_translator_avalon_universal_master_0_agent       
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_merlin_slave_translator.sv"                 -work nios2_qsys_0_jtag_debug_module_translator                                        
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_merlin_master_translator.sv"                -work nios2_qsys_0_instruction_master_translator                                       
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_timer_0.v"                                -work timer_0                                                                          
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_key1.v"                                   -work key1                                                                             
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_switch0.v"                                -work switch0                                                                          
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_uart_0.v"                                 -work uart_0                                                                           
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_LCD_DATA.v"                               -work LCD_DATA                                                                         
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_LCD_ON.v"                                 -work LCD_ON                                                                           
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_jtag_uart_0.v"                            -work jtag_uart_0                                                                      
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_onchip_memory2_0.v"                       -work onchip_memory2_0                                                                 
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0.v"                           -work nios2_qsys_0                                                                     
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_jtag_debug_module_sysclk.v"  -work nios2_qsys_0                                                                     
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_jtag_debug_module_tck.v"     -work nios2_qsys_0                                                                     
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_jtag_debug_module_wrapper.v" -work nios2_qsys_0                                                                     
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_oci_test_bench.v"            -work nios2_qsys_0                                                                     
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys_nios2_qsys_0_test_bench.v"                -work nios2_qsys_0                                                                     
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/verbosity_pkg.sv"                                  -work nios_sys_inst_reset_bfm                                                          
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_avalon_reset_source.sv"                     -work nios_sys_inst_reset_bfm                                                          
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/verbosity_pkg.sv"                                  -work nios_sys_inst_clk_bfm                                                            
  vlogan +v2k -sverilog "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/altera_avalon_clock_source.sv"                     -work nios_sys_inst_clk_bfm                                                            
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/submodules/nios_sys.v"                                        -work nios_sys_inst                                                                    
  vlogan +v2k           "D:/Soc/NIOS-II-Programming/Lab7/lab7_bai3/nios_sys/testbench/nios_sys_tb/simulation/nios_sys_tb.v"                                                                                                                                       
fi

# ----------------------------------------
# elaborate top level design
if [ $SKIP_ELAB -eq 0 ]; then
  vcs -lca -t ps $USER_DEFINED_ELAB_OPTIONS $TOP_LEVEL_NAME
fi

# ----------------------------------------
# simulate
if [ $SKIP_SIM -eq 0 ]; then
  ./simv $USER_DEFINED_SIM_OPTIONS
fi
