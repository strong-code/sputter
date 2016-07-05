#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {
  puts("Sputter Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  while (1) {
    fputs("lispy> ", stdout);

    fgets(input, 2048, stdin);

    printf("%s", input);
  }

  return 0;
}
