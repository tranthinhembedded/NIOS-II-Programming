set_global_assignment -entity "nios_sys" -library "lib_nios_sys" -name IP_TOOL_NAME "Qsys"
set_global_assignment -entity "nios_sys" -library "lib_nios_sys" -name IP_TOOL_VERSION "13.0sp1"
set_global_assignment -entity "nios_sys" -library "lib_nios_sys" -name IP_TOOL_ENV "Qsys"
set_global_assignment -library "lib_nios_sys" -name SPD_FILE [file join $::quartus(sip_path) "../../nios_sys.spd"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "../../nios_sys.qsys"]

set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "nios_sys.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_irq_mapper.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_merlin_arbitrator.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_rsp_xbar_mux.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_rsp_xbar_demux.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_cmd_xbar_mux.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_cmd_xbar_demux.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_reset_controller.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_reset_synchronizer.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_reset_controller.sdc"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_id_router.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_addr_router.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_avalon_sc_fifo.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_merlin_slave_agent.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_merlin_burst_uncompressor.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_merlin_master_agent.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_merlin_slave_translator.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_merlin_master_translator.sv"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_timer_0.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_jtag_uart_0.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_onchip_memory2_0.hex"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_onchip_memory2_0.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0.sdc"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_jtag_debug_module_sysclk.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_jtag_debug_module_tck.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_jtag_debug_module_wrapper.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_nios2_waves.do"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_ociram_default_contents.dat"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_ociram_default_contents.hex"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_ociram_default_contents.mif"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_oci_test_bench.v"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_rf_ram_a.dat"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_rf_ram_a.hex"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_rf_ram_a.mif"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_rf_ram_b.dat"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_rf_ram_b.hex"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_rf_ram_b.mif"]
set_global_assignment -library "lib_nios_sys" -name MISC_FILE [file join $::quartus(sip_path) "submodules/nios_sys_nios2_qsys_0_test_bench.v"]
