#include <stdio.h>
#include <stdlib.h>

/*
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
 *
 */

#define WS_BUF_LEN 1000

int nullify(char buf[]);
void printBuf(char buf[]);

int main() {
  char c, last = '\n';
  char ws_buf[WS_BUF_LEN];
  int  i;

  while ((c = getchar()) != EOF) {
    if (last == '\n') i = nullify(ws_buf);

    if (c == '\n' && last == '\n') continue;

    if (c == ' ' || c == '\t') {
      if (i == WS_BUF_LEN) {
        printf("ERROR: number of trailing whitespace exceed buffer.\n");
        return EXIT_FAILURE;
      }
      ws_buf[i++] = c;
      nullify(ws_buf);
      continue;
    }

    last = c;

    if (ws_buf[0] != '\0') printBuf(ws_buf);
    i = nullify(ws_buf);
    putchar(c);
  }
}

int nullify(char buf[]) {
  buf[0] = '\0';
  return 0;
}

void printBuf(char buf[])
{
  for (int i = 0; buf[i] != '\0'; i++) {
    putchar(buf[i]);
  }
}
