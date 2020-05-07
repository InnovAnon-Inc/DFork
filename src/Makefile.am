AM_CPPFLAGS = -D__STDC_INT64__

#if USE_SUBMODULES
#SUBDIRS = ../glitter
#AM_CPPFLAGS += -I $(top_srcdir)/glitter/src
#endif

include Makefile-LIBADD.inc

lib_LTLIBRARIES = libdfork.la
include_HEADERS = dfork.h
libdfork_la_LIBADD = $(LIBDFORK_LIBADD)
