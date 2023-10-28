/*
 * https://stackoverflow.com/questions/3588476/building-a-shared-library-using-gcc
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>
#include <stdarg.h>

#include <string.h>
#include <unistd.h>

#include "yocto_test.h"

int main (
  int   argc,
  char *argv[]
) {
  printf_tm("Hello Yocto World...\n");

  LibHelloWorld();

  return 0;
}
