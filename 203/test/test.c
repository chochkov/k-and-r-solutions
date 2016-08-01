#include <tap.h>
#include "../src/htoi.h"

typedef struct {
  char *input;
  int expected;
} TestCase;

TestCase *NewTestCase(const char *input, int expected)
{
  TestCase *test;

  test = (TestCase *)malloc(sizeof(TestCase));

  test->input = (char *)input;
  test->expected = expected;

  return test;
}

void htoiTest(TestCase *cases[], int testsCount)
{
  for (int i = 0; i < testsCount; i++) {
    cmp_ok(htoi(cases[i]->input), "==", cases[i]->expected, "calculates decimal from hex");
  }
}

int main(int argc, const char *argv[])
{
  int testsCount = 7;

  TestCase *cases[testsCount];

  cases[0] = NewTestCase("ff", 255);
  cases[1] = NewTestCase("f9", 249);
  cases[2] = NewTestCase("0XF9", 249);
  cases[3] = NewTestCase("0x0", 0);
  cases[4] = NewTestCase("0x", 0);
  cases[5] = NewTestCase("0F9", -1);
  cases[6] = NewTestCase("2af3", 10995);

  plan(testsCount);

  htoiTest(cases, testsCount);

  done_testing();

  for (int i = 0; i < testsCount; i++) {
    free(cases[i]);
  }

  return 0;
}

