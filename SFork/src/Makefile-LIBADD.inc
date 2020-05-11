include $(top_srcdir)/ezfork/src/Makefile-LIBADD.inc
include $(top_srcdir)/restart/src/Makefile-LIBADD.inc
#include ../ezfork/src/Makefile-LIBADD.inc
#include ../restart/src/Makefile-LIBADD.inc

LIBSFORK_LIBADD = -lezfork $(LIBEZFORK_LIBADD) -lrestart $(LIBRESTART_LIBADD)
