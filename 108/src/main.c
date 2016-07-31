#include <stdio.h>

/*
 * Write a program to count blanks, tabs, and newlines
 *
 */

int main()
{
  char c;
  int  count = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == ' ' || c == '\n') {
      count++;
    }
  }

  printf("Count: %d\n", count);

  return 0;
}
