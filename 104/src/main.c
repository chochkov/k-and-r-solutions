#include "conversion.h"

/*
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 *
 */

int main()
{
  float fahr, celsius;

  celsius = LOWER;

  printf("Celsius | Fahrenheit\n");
  printf("--------|-----------\n");

  while (celsius <= UPPER) {
    printf("%7.2f | %10.2f\n", celsius, toFahrenheit(celsius));
    celsius += STEP;
  }

  return 0;
}
