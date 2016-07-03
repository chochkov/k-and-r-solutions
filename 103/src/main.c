#include <stdio.h>

/*
 * Modify the temperature conversion program to print a heading above the
 * table.
 *
 */

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Fahrenheit | Celsius\n");
  printf("-----------|--------\n");

  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%10.2f | %7.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
