#include <stdio.h>

/*
 * Revise the main routine of the longest-line program so it will correctly
 * print the length of arbitrary long input lines, and as much as possible of
 * the text.
 *
 */

#define MAX_PRINTABLE_LEN 10

int getline2(char line[], int maxchars);
void copy(char to[], char from[]);

int main() {
  char line[MAX_PRINTABLE_LEN];
  int  len, i;

  while ((len = getline2(line, MAX_PRINTABLE_LEN)) != 0) {
    printf("%d ", len);
    for (i = 0; i < MAX_PRINTABLE_LEN; i++) {
      putchar(line[i]);
    }
    printf("\n");
  }
}

int getline2(char line[], int maxchars) {
  int c, length, copied;

  copied = 0;

  for(length = 0; (c = getchar()) != EOF && c != '\0' && c != '\n'; length++) {
    if(copied < maxchars - 1) {
      line[copied++] = c;
    }
  }

  line[copied] = '\0';
  return length;
}

void copy(char to[], char from[]) {
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0') {
    ++i;
  }
}
