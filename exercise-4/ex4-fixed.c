#include <stdio.h>

/********
  Failing Program

  Run valgrind against code:

  make
  valgrind ./ex4
*********/

int main()
{
  int age = 10;
  int height = 30;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall\n", height);

  return 0;
}
