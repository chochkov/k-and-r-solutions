#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define BASE 16

/*
 * Write a function htoi(s), which converts a string of hexadecimal digits
 * (including an optional 0x or 0X) into its equivalent integer value. The
 * allowable digits are 0 through 9, a through f, and A through F.
 *
 */

int normalize(char str[]);
int htoi(char str[]);
