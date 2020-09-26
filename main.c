#include <stdlib.h>
#include <stdio.h>
#include "roman.h"

int main(int argc, char **argv) {
  if (argc > 1) {
    char buf[128];
    unsigned int num = atoi(*(argv + 1));
    printf("%s\n", roman(num, buf));
    return 0;
  }
  fputs("A number is expected...\n", stderr);
  return 1;
}
