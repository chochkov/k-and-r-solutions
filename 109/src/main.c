#include <stdio.h>

#define BLANK ' '

/*
 * Write a program to copy its input to its output, replacing each string
 * of one or more blanks by a single blank
 *
 */

int main()
{
  char c;
  char last;

  while ((c = getchar()) != EOF) {
    if (c == BLANK && last == BLANK) continue;

    last = c;
    putchar(c);
  }

  return 0;
}
