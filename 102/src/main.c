#include <stdio.h>

/*
 * Experiment to find out what happens when prints's argument string contains
 * \c, where c is some control character.
 *
 */

int main(int argc, const char *argv[])
{
  printf("\tHello\bWorld\n");
  return 0;
}
