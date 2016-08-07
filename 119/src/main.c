#include <stdio.h>
#include <stdlib.h>

/*
 * Write a function reverse(s) that reverses the character strings. Use it
 * to write a program that reverses its input a line at a time.
 *
 */

#define MAX_LINE_LEN 1000

int getline2(char line[], int maxchars);

void reverse(char str[])
{
  int len = 0;
  char buf[MAX_LINE_LEN];

  while ((buf[len] = str[len]) != '\0') len++;

  for (int i = len; i > 0; i--) {
    str[len - i] = buf[i - 1];
  }
  str[len] = '\0';
}

int main() {
  char line[MAX_LINE_LEN];
  int  len;

  while ((len = getline2(line, MAX_LINE_LEN)) > 0) {
    reverse(line);
    printf("%s\n", line);
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
