#******************************************************************************
#
# Makefile - Rules for building the libraries, examples and docs.
#
# Copyright (c) 2023, InPlay Inc.
# All rights reserved.
#
#
#******************************************************************************


SUBDIRS=$(dir $(wildcard */Makefile))

$(SUBDIRS)::
	+$(MAKE) -C $@ $(MAKECMDGOALS)

.PHONY: subdirs all clean
all subdirs clean: $(SUBDIRS)

ifneq ($(SUBDIRSBUILD),)
.DEFAULT_GOAL := subdirs
else
.DEFAULT_GOAL := all
endif

