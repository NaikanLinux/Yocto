# Yocto
This project is an example to use a recipe in a personal meta.
No surprise. It will download from GitHub and build locally.
## Recipe
* <...> / sources /  
  * / __meta-naikan__ /  
    * / _recipes-appli_ /  
      * / naikan-sdk /  
        * / naikan-sdk.bb  
```
SUMMARY = "bitbake-layers recipe (from : https://github.com/DynamicDevices/bbexample)"
DESCRIPTION = "Simple helloworld main & shared lib"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d8d8bf4af0c8607a9336d555896e15fa"

KBRANCH = "development"

SRC_URI = "git@github.com:NaikanLinux/Yocto.git;branch=${KBRANCH};protocol=ssh"

SRC_URI = "https://github.com/NaikanLinux/Yocto.git;branch=${KBRANCH};protocol=https"
SRC_URI = "https://github.com/NaikanLinux/Yocto.git;branch=${KBRANCH};protocol=http"
SRC_URI = "https://github.com/NaikanLinux/Yocto.git;branch=${KBRANCH};protocol=ssh"
## SRC_URI[sha256sum] = "14930b14364e13236094c42f32890b39705134497b7326d7f2d8aab8ae3fadea"

SRCREV = "5b4711beec64d4377c8f85f6dbcf1499a8cb114d"
SRC_URI = "git://github.com/NaikanLinux/Yocto.git;branch=${KBRANCH};protocol=ssh"
SRC_URI = "git://github.com/NaikanLinux/Yocto.git;branch=${KBRANCH};protocol=http"
SRC_URI = "git://github.com/NaikanLinux/Yocto.git;branch=${KBRANCH};protocol=https"

DEPENDS = ""

S = "${WORKDIR}/git"

inherit autotools
```

Result will end into  
./tmp/work/aarch64-fslc-linux/sophia-sdk/1.0-r0/git
```
total 1316
  4 -rw-r--r-- 1 tony tony    389 oct.  29  2023 yocto_test.h
  4 -rw-r--r-- 1 tony tony    356 oct.  29  2023 yocto_test.c
  4 -rw-r--r-- 1 tony tony    221 oct.  29  2023 yocto_lib.c
  4 -rw-r--r-- 1 tony tony      7 oct.  29  2023 README.md
  4 -rw-r--r-- 1 tony tony    327 oct.  29  2023 Makefile.am
  4 -rw-r--r-- 3 tony tony   1061 oct.  29  2023 LICENSE
  4 -rw-r--r-- 1 tony tony    254 oct.  29  2023 GNUMakefile
  4 -rw-r--r-- 1 tony tony    760 oct.  29  2023 configure.ac
  4 -rwxr-xr-x 1 tony tony    315 oct.  29  2023 autogen.sh
324 -rw-r--r-- 1 tony tony 328337 oct.  29  2023 ltmain.sh
  4 drwxr-xr-x 2 tony tony   4096 oct.  29  2023 m4
364 -rw-r--r-- 1 tony tony 370584 oct.  29  2023 aclocal.m4
412 -rwxr-xr-x 1 tony tony 421133 oct.  29  2023 configure
  4 -rw-r--r-- 1 tony tony   1611 oct.  29  2023 config.h.in
  4 drwxr-xr-x 2 tony tony   4096 oct.  29  2023 autom4te.cache
  8 -rwxr-xr-x 1 tony tony   7383 oct.  29  2023 compile
  8 -rwxr-xr-x 1 tony tony   6878 oct.  29  2023 missing
 16 -rwxr-xr-x 1 tony tony  15368 oct.  29  2023 install-sh
 24 -rwxr-xr-x 1 tony tony  23568 oct.  29  2023 depcomp
 32 -rw-r--r-- 1 tony tony  31207 oct.  29  2023 Makefile.in
 32 -rwxr-xr-x 1 tony tony  31609 oct.  29  2023 config.sub
 48 -rwxr-xr-x 1 tony tony  48441 oct.  29  2023 config.guess
```
