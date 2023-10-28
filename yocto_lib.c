
#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>
#include <string.h>

void LibHelloWorld (
  void
) {
  printf("## TM (%s-l%d)[%s()] : Hello World (from a shared library!)\n", __FILE__, __LINE__, __func__);
}
