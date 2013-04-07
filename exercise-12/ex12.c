#include <stdio.h>


int main(int argc, char const *argv[])
{
  if (argc == 1){
    printf("Not enough arguments.\n");
  }
  else if (argc > 1 && argc < 4){
    for (int i = 0; i < argc; i++){
      printf("Arg[%d] = %s\n", i, argv[i]);
    }
  }
  else {
    printf("Too many arguments\n");
  }
  return 0;
}
