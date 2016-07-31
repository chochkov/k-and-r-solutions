#include <tap.h>

typedef struct {
  const char *cmd;
  const char *expected;
} TestCase;

TestCase *NewTestCase(const char *cmd, const char *expected)
{
  TestCase *test;

  test = (TestCase *)malloc(sizeof(TestCase));

  test->cmd = cmd;
  test->expected = expected;

  return test;
}

void countCharsTest(TestCase *cases[], int testsCount)
{
  FILE *stream;
  char buff[1024];
  char buffEOF;
  int  i;

  for (i = 0; i < testsCount; i++)
  {
    stream = popen(cases[i]->cmd, "r");

    fgets(buff, 1024, stream);

    pclose(stream);

    is(buff, cases[i]->expected, "outputs the expected value.");
  }
}

int main(int argc, const char *argv[])
{
  int testsCount = 2;

  TestCase *cases[testsCount];

  cases[0] = NewTestCase("echo 'ivan \n\t\ngencho pesho' | ./bin/main", "Count: 6\n");
  cases[1] = NewTestCase("echo '\n\t\n' | ./bin/main", "Count: 4\n");

  plan(testsCount);

  countCharsTest(cases, testsCount);

  done_testing();

  for (int i = 0; i < testsCount; i++) {
    free(cases[i]);
  }

  return 0;
}
