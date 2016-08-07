#include <stdio.h>

/*
 * Write a program to print all input lines that are longer than 80
 * characters.
 *
 */

#define MIN_PRINTABLE_LEN 22

void printBuf(char buf[]);

int main() {
  char c;
  char buf[MIN_PRINTABLE_LEN + 1];
  buf[0] = '\0';
  int i = 0;

  while ((c = getchar()) != EOF) {
    // New line - reset the counter and buffer.
    if (c == '\n') {
      if (i > MIN_PRINTABLE_LEN) putchar('\n');

      i = 0;
      buf[0] = '\0';
      continue;
    }

    // Not clear if this is a long line or not - save to buffer.
    if (i < MIN_PRINTABLE_LEN) {
      buf[i++] = c;
      buf[i] = '\0';
      continue;
    }

    // This character is part of a long line, so we'll be printing.
    // Print the buffer up to this point.
    if (i == MIN_PRINTABLE_LEN) printBuf(buf);
    putchar(c);

    buf[0] = '\0';
    i++;
  }
}

void printBuf(char buf[])
{
  for (int i = 0; buf[i] != '\0'; i++) {
    putchar(buf[i]);
  }
}
