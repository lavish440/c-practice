#include <stdio.h>
#include <stdlib.h>

int main() {
  int blanks = 0;
  int tabs = 0;
  int nl = 0;

  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      blanks++;
    } else if (c == '\t') {
      tabs++;
    } else if (c == '\n') {
      nl++;
    }
  }

  printf("Blank Lines: %d\n", blanks);
  printf("Tabs: %d\n", tabs);
  printf("New Lines: %d\n", nl);
  return EXIT_SUCCESS;
}
