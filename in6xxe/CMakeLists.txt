#
# Copyright (c) 2023 InPlay Inc
#
# SPDX-License-Identifier: Apache-2.0

# Sources and headers necessary for every build.
# These contain definitions and implementation used mostly for
# initializing the SoC, and therefore are always required.


zephyr_library()
zephyr_library_sources(hal/hal_gpio.c)
zephyr_library_sources(hal/hal_clk.c)
zephyr_library_sources(hal/hal_uart.c)

