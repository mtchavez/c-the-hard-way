#include <stdio.h>


int main(int argc, char const *argv[])
{
  if (argc == 1){
    printf("Not enough arguments.\n");
  }
  else if (argc >= 2 && argc < 4){
    for (int i = 1; i < argc; i++){
      printf("Arg[%d] = %s\n", i, argv[i]);
    }
  }
  else {
    printf("Too many arguments\n");
  }
  return 0;
}
