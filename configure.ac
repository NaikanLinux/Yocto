#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

## 2.71 is for Ubuntu 22.04 Host
## 2.69 is for autoconf-native --- from Yocto Dunfell -- for GitHub NaikanLinux ...
AC_PREREQ([2.69])
AC_INIT([yocto_test],[0.1],[MESSINA.Tony+GitHub@gmail.com])

AC_CONFIG_SRCDIR([yocto_test.c])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE

## Checks for programs.
##
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_MAKE_SET

## Set shared libraries
##
AC_DISABLE_STATIC
AC_ENABLE_SHARED

## Checks for header files.
##
LT_INIT
AC_SUBST([LIBTOOL_DEPS])

## Checks for typedefs, structures, and compiler characteristics.
##

## Checks for library functions.
##
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT


## TM : Add Feat1 option ...
##
AC_ARG_WITH([feat1],
  [AS_HELP_STRING([--with-feat1], [Utiliser le paquet feat1 spécifié (optionnel)])],
  [with_feat1=$withval],
  [with_feat1=no]
)

## Vérification du choix de l'utilisateur
##
AS_IF([test "x$with_feat1" != "xno"],
  [
    # Actions si --with-feat1 est activé (ou si un chemin est fourni)
    AC_MSG_NOTICE([Le support de feat1 est activé: $with_feat1])

    # Exemple : Si l'utilisateur a donné un chemin spécifique
    AS_IF([test "x$with_feat1" != "xyes"],
      [
        # Ajouter le chemin aux drapeaux de compilation
        CFLAGS="$CFLAGS -I$with_feat1/include"
        LDFLAGS="$LDFLAGS -L$with_feat1/lib"
      ]
    )

    # Optionnel : Définir une variable pour votre code C/C++ (config.h)
    AC_DEFINE([HAVE_FEAT1], [1], [Définir si vous utilisez feat1])
  ],
  [
    # Actions si --without-feat1 ou non spécifié
    AC_MSG_NOTICE([Le support de feat1 est désactivé])
  ]
)

