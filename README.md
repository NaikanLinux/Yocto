##
## Yoctodir

## TM : Clean AutoTool Artefacts :
##
## AutoReconf
## ./configure
## make
##
  rm -r ltmain.sh m4/ aclocal.m4 configure autom4te.cache/ config.h.in compile config.guess* config.sub* install-sh missing depcomp Makefile.in
  rm ./configure~ ./config.h.in~ ./config.h ./config.status ./config.log
  rm ./stamp-h1 ./libtool ./yocto_test.o ./yocto_test ./yocto_lib.lo ./libyocto_lib.la
  rm -rf ./Makefile ./.deps ./.libs
