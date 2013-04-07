#include "ex14.h"


void print_arguments(int argc, char *argv[]) {
  for (int i = 0; i < argc; ++i) {
    print_letters(argv[i], strlen(argv[i]));
  }
}

void print_letters(char arg[], int length) {
  for (int i = 0; i < length; ++i)
  {
    char ch = arg[i];
    if (isalpha(ch) || isblank(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
  return 0;
}
