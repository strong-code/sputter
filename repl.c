#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {
  puts("Sputter Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  while (1) {
    char* input = readline("sputter> ");

    add_history(input);

    printf("%s\n", input);
    free(input);
  }

  return 0;
}
