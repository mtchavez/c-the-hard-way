#include <stdio.h>


int main(int argc, char const *argv[])
{
  for (int i = 0; i < argc; ++i) {
    printf("Arg %d %s\n", i, argv[i]);
  }

  char *states[] = {
    "California",
    "Oregon",
    "Washington",
    "Texas"
  };

  for (int i = 0; i < 4; ++i) {
    printf("State %d is %s\n", i, states[i]);
  }
  return 0;
}
