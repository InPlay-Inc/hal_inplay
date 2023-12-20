# Makefile - InPlay
#
# Copyright (c) 2023 InPlay Inc
#
# SPDX-License-Identifier: Apache-2.0

#add_subdirectory_ifdef(CONFIG_HAS_IN6XXE in6xxe)

if(CONFIG_HAS_IN6XXE_HAL)
	zephyr_include_directories(
		in6xxe
		in6xxe/inc
		include
	  )
    add_subdirectory(in6xxe)
endif()

