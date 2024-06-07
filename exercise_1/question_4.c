#include <stdio.h>
#include <stdlib.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;
  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */
  celsius = lower;

  printf("Celsius Fahr\n");
  while (celsius <= upper) {
    fahr = (celsius * 5.0 / 9.0) + 32;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return EXIT_SUCCESS;
}
