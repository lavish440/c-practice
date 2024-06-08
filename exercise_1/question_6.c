#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c = getchar() != EOF;
  printf("Result: %d\n", c);
  return EXIT_SUCCESS;
}
