#include <tap.h>

void test()
{
  FILE *stream;
  char buff[1024];

  stream = popen("./bin/main", "r");

  fgets(buff, 1024, stream);

  pclose(stream);

  is(buff, "Fahrenheit | Celsius\n", "outputs the expected header.");
}

int main(int argc, const char *argv[])
{
  plan(NO_PLAN);

  test();

  done_testing();

  return 0;
}
