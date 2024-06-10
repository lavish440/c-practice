#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c;
  int last_c = '\0';

  while ((c = getchar()) != EOF) {
    if (c != ' ' || last_c != ' ') {
      putchar(c);
    }

    last_c = c;
  }
  return EXIT_SUCCESS;
}
