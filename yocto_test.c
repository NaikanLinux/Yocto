#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>

#include <string.h>
#include <unistd.h>

#include "yocto_test.h"

#define printf_tm(format, ...) printf("## TM (%s-l%d)[%s()] : " format, __FILE__, __LINE__, __FUNCTION__ __VA_OPT__(,) __VA_ARGS__);

int main (
  int   argc,
  char *argv[]
) {
  printf("Hello Yocto World...\n");

  LibHelloWorld();

  return 0;
}
