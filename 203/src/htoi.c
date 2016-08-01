#include "htoi.h"

int htoi(char str[])
{
  int i = 0;
  int res = 0;

  if (str[i] == '0') {
    ++i;
    if (str[i] == 'x' || str[i] == 'X') {
      ++i;
    } else {
      return -1;
    }
  }

  for (; str[i] != '\0'; i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      res += res * (BASE - 1) + str[i] - '0';
    } else if ('a' <= str[i] && str[i] <= 'z') {
      res += res * (BASE - 1) + str[i] - 'a' + 10;
    } else if ('A' <= str[i] && str[i] <= 'Z') {
      res += res * (BASE - 1) + str[i] - 'A' + 10;
    } else {
      return -1;
    }
  }

  return res;
}
