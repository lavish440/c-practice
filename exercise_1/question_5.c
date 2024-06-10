#include <stdio.h>
#include <stdlib.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;
  lower = 0;   /* lower limit of temperatuire scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahr = upper;
  printf("Fahr Celsius\n");
  while (fahr >= lower) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr - step;
  }
  return EXIT_SUCCESS;
}
