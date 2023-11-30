#
# Copyright (c) 2023 InPlay Inc
#
# SPDX-License-Identifier: Apache-2.0

# Sources and headers necessary for every build.
# These contain definitions and implementation used mostly for
# initializing the SoC, and therefore are always required.

zephyr_library_named(in6xxe)
zephyr_library_sources(
    hal/hal_gpio.c
    hal/hal_clk.c
    hal/hal_uart.c
    hal/hal_global.c
    hal/hal_wdt.c
    hal/hal_timer.c
    hal/hal_smem.c
	hal/hal_trng.c
    hal/hal_ecc.c
    startup/system_inxxx.c
	spi_flash/src/spi_flash.c
	bootloader/ram/src/boot_cfg.c
	bootloader/ram/src/ram_entry.c
)

zephyr_library_include_directories(
	bootloader/inc/
	spi_flash/inc
)

function(target_linker_script target deptype scriptfiles)
    cmake_parse_arguments(_ "" "PROCESS" "" ${ARGN})
    foreach(scriptfile ${scriptfiles})
        get_filename_component(abs_script "${scriptfile}" ABSOLUTE)
        message(STATUS "Adding linker script ${abs_script}")

        if(__PROCESS)
            get_filename_component(output "${__PROCESS}" ABSOLUTE)
            __ldgen_process_template(${abs_script} ${output})
            set(abs_script ${output})
        endif()
        get_filename_component(search_dir "${abs_script}" DIRECTORY)
        get_filename_component(scriptname "${abs_script}" NAME)
        if(deptype STREQUAL INTERFACE OR deptype STREQUAL PUBLIC)
            get_target_property(link_libraries "${target}" INTERFACE_LINK_LIBRARIES)
        else()
            get_target_property(link_libraries "${target}" LINK_LIBRARIES)
        endif()
        list(FIND "${link_libraries}" "-L \"${search_dir}\"" found_search_dir)
        if(found_search_dir EQUAL "-1")  # not already added as a search path
            target_link_libraries("${target}" "${deptype}" "-L \"${search_dir}\"")
        endif()
        target_link_libraries("${target}" "${deptype}" "-T ${scriptname}")
    endforeach()
endfunction()

zephyr_link_libraries(${CMAKE_CURRENT_SOURCE_DIR}/lib/gcc/libhw_ana.a)
target_linker_script(in6xxe INTERFACE "rom/hw_ana_rom.ld")

if (CONFIG_BT_IN6XX)
    zephyr_include_directories(
        ble
        inc/ble
    )
    zephyr_library_sources(
        ble/ble_app.c
        ble/ble_plt.c
    )
    zephyr_link_libraries(${CMAKE_CURRENT_SOURCE_DIR}/lib/gcc/libble_flash.a)
    target_linker_script(in6xxe INTERFACE "rom/ble_rom.ld")
    zephyr_linker_sources(RODATA ld/in_rom.ld)
    zephyr_linker_sources(RWDATA ld/in_ram.ld)
endif()

