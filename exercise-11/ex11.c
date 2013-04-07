#include <stdio.h>

#define SIZE(x) (sizeof(x) / sizeof(x[0]))

int main(int argc, char const *argv[])
{
  char *states[] = {
    "California",
    "Oregon",
    "Washington",
    "Texas"
  };

  int i = 0;
  while(i < argc){
    printf("arg %d is %s\n", argc, argv[i]);
    if (i < SIZE(states)){
      states[i] = argv[i];
    }
    i++;
  }

  int num_states = SIZE(states);
  i = num_states - 1;
  while(i < num_states && i >= 0){
    printf("State %d is %s\n", i, states[i]);
    i--;
  }

  return 0;
}
