#include <stdio.h>

float F_to_C(float f) {
  float c;
  c = (5.0 / 9.0) * (f - 32.0);
  return c;
}

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahr = lower;

  printf("Fahr Celsius\n\n");
  while (fahr <= upper) {
    celsius = F_to_C(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
