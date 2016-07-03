#include <tap.h>
#include <math.h>
#include "../src/conversion.h"

int main(int argc, const char *argv[])
{
  plan(NO_PLAN);

  cmp_ok(32, "==", toFahrenheit(0));

  cmp_ok(39, "==", toFahrenheit(4));

  done_testing();

  return 0;
}
