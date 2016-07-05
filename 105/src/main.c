#include "conversion.h"

/*
 * Modify the temperature conversion program to print the table in reverse
 * order, that is, from 300 degrees to 0
 *
 */

int main()
{
  float fahr, celsius;

  printf("Celsius | Fahrenheit\n");
  printf("--------|-----------\n");

  for (celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
    printf("%7.2f | %10.2f\n", celsius, toFahrenheit(celsius));
  }
}
