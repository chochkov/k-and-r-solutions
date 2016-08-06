#include <stdio.h>

/*
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 *
 */

#define DEL_SIZE 3
#define MAX_WORD_LENGTH 20

enum state {
  WORD,
  DELIM
};

static char del[DEL_SIZE] = {' ', '\t', '\n'};

void printHorizontal();

int main() {
  char c;
  enum state last;
  enum state current;
  int  current_length = 0;
  int  i = 0;

  int lengths[MAX_WORD_LENGTH + 1];

  for (; i <= MAX_WORD_LENGTH; ++i) lengths[i] = 0;

  while ((c = getchar()) != EOF) {
    current = WORD;

    for (i = 0; i < DEL_SIZE; ++i) {
      if (del[i] == c) {
        current = DELIM;
        break;
      }
    }

    if (current == DELIM && last == WORD) {
      lengths[current_length]++;
      current_length = 0;
    } else if (current == WORD) {
      if (current_length == MAX_WORD_LENGTH) {
        printf("WARNING: Character exceeding limit\n");
      } else {
        current_length++;
      }
    }

    last = current;
  }

  printHorizontal(lengths);
}

void printHorizontal(int lengths[])
{
  for (int i = 0; i <= MAX_WORD_LENGTH; ++i) {
    printf("%2d: ", i);
    for (int j = 0; j < lengths[i]; ++j) {
      printf("-");
    }
    printf("\n");
  }
}
