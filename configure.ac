#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([yocto_test],[0.1],[MESSINA.Tony+GitHub@gmail.com])

AC_CONFIG_SRCDIR([yocto_test.c])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_MAKE_SET

# Set shared libraries
AC_DISABLE_STATIC
AC_ENABLE_SHARED

# Checks for header files.
LT_INIT
AC_SUBST([LIBTOOL_DEPS])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
