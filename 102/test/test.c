#include <tap.h>

void helloWorldTest()
{
  FILE *stream;
  char buff[14];
  char buffEOF;

  stream = popen("./bin/main", "r");

  fgets(buff, 14, stream);

  buffEOF = fgetc(stream);

  pclose(stream);

  is(buff, "\tHello\bWorld\n", "outputs the expected value.");

  ok(buffEOF == EOF, "outputs only the expected value.");
}

int main(int argc, const char *argv[])
{
  plan(2);

  helloWorldTest();

  done_testing();

  return 0;
}
