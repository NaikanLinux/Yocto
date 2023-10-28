AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic -O2
include_HEADERS = yocto_test.h

lib_LTLIBRARIES = libyocto_test.la
yocto_lib_la_SOURCES  = yocto_lib.c
yocto_lib_la_LDFLAGS= -version-info 1:0:0

bin_PROGRAMS = yocto_test
yocto_test_SOURCES = yocto_test.c
yocto_test_LDADD = libyocto_test.la
