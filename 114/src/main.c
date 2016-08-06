#include <stdio.h>

/*
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
 *
 */

#define MAX_LENGTH 255

void printHorizontal();

int main() {
  char c;
  int  i = 0;
  int lengths[MAX_LENGTH + 1];

  for (; i <= MAX_LENGTH; ++i) lengths[i] = 0;

  while ((c = getchar()) != EOF) lengths[c]++;

  printHorizontal(lengths);
}

void printHorizontal(int lengths[])
{
  for (int i = 33; i < 127; ++i) {
    printf("%c ", i);
    for (int j = 0; j < lengths[i]; ++j) {
      printf("*");
    }
    printf("\n");
  }
}
