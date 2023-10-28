AUTOMAKE_OPTIONS = foreign

ACLOCAL_AMFLAGS=-I m4

CFLAGS = -Wall -pedantic -O2
include_HEADERS = yocto_test.h

lib_LTLIBRARIES = libyocto_lib.la
libyocto_lib_la_SOURCES  = yocto_lib.c
libyocto_lib_la_LDFLAGS = -version-info 1:0:0

bin_PROGRAMS = yocto_test
yocto_test_SOURCES = yocto_test.c
yocto_test_LDADD = libyocto_lib.la
