#include <stdio.h>


int main(int argc, char const *argv[])
{
  int i = 0;
  while(i < argc){
    printf("arg %d is %s\n", argc, argv[i]);
    i++;
  }

  char *states[] = {
    "California",
    "Oregon",
    "Washington",
    "Texas"
  };

  i = 0;
  int num_states = 4;
  while(i < num_states){
    printf("State %d is %s\n", i, states[i]);
    i++;
  }

  return 0;
}
