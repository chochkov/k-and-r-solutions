#include <stdio.h>

/*
 * Write a program that prints its input one word per line.
 *
 */

#define DEL_SIZE 3

enum state {
  WORD,
  DELIM
};

int main() {
  char c;
  char del[DEL_SIZE] = {' ', '\t', '\n'};
  enum state last;
  enum state current;

  while ((c = getchar()) != EOF) {
    current = WORD;

    for (int i = 0; i < DEL_SIZE; ++i) {
      if (del[i] == c) {
        current = DELIM;
        break;
      }
    }

    if (last == WORD && current == DELIM) {
      putchar('\n');
    } else if (current == WORD) {
      putchar(c);
    }

    last = current;
  }
}

