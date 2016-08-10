#include <stdio.h>

/*
 * Write a program detab that replaces tabs in the input with the proper
 * number of blanks to space to the next tab stop. Assume a fixed set of tab
 * stops, say every n columns. Should n be a variable or a symbolic
 * parameter?
 *
 */

#define TAB '\t'
#define SPACES 4

int main() {
  char c;
  int  i;

  while ((c = getchar()) != EOF) {
    if (c == TAB) {
      for (i = 0; i < SPACES; i++) {
        putchar(' ');
      }

      continue;
    }

    putchar(c);
  }
}
