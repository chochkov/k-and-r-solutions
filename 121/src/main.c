#include <stdio.h>

/*
 * Write a program entab that replaces strings of blanks by the minimum number
 * of tabs and blanks to achieve the same spacing. Use the same tab stops as
 * for detab. When either a tab or a single blank would suffice to reach a tab
 * stop, which should be given preference?
 *
 */

#define TAB '\t'
#define SPACE ' '
#define TABWIDTH 4

void flush();

int main() {
  char c;
  int  spaces = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == SPACE)
      ++spaces;
    else
    {
      if (spaces > 0)
      {
        flush(spaces);
        spaces = 0;
      }

      putchar(c);
    }
  }

  if (spaces > 0) flush(spaces);
}

void flush(int spaces)
{
  int max_spaces = spaces % TABWIDTH;
  int max_tabs   = spaces / TABWIDTH;

  for (int i = 0; i < max_tabs; ++i)
    putchar(TAB);

  for (int i = 0; i < max_spaces; ++i)
    putchar(SPACE);
}
