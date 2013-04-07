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

  for (int i = 0, j = 4; i < 4; ++i, j--) {
    printf("State %d is %s J is %d\n", i, states[i], j);
  }
  return 0;
}
