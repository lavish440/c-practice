#include <stdio.h>

int main() {
  char histogram[95];
  int c, i, j;

  for (i = 0; i < 95; ++i)
    histogram[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= 32 || c <= 95)
      ++histogram[c - 32];

  int maximum = histogram[0];

  for (i = 0; i < 95; ++i)
    if (histogram[i] > maximum)
      maximum = histogram[i];

  for (i = maximum; i > 0; --i) {
    printf("%4d|", i);
    for (j = 0; j < 95; ++j) {
      if (histogram[j] == i) {
        putchar('*');
        --histogram[j];
      } else
        putchar(' ');
    }
    putchar('\n');
  }

  printf("    +");
  for (i = 0; i < 95; i++)
    putchar('-');

  printf("\n     ");
  for (i = 32; i <= 126; ++i)
    putchar(i);

  putchar('\n');

  return 0;
}
