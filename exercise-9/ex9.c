#include <stdio.h>


void displayNumbers(int numbers[]){
  // then print them out initialized
  printf("numbers: %d %d %d %d\n",
          numbers[0], numbers[1],
          numbers[2], numbers[3]);
}

void displayName(char name[]){
  printf("name each: %c %c %c %c\n",
        name[0], name[1],
        name[2], name[3]);
}

int main(int argc, char const *argv[])
{

  int numbers[4] = {0};
  char name[4] = {'a'};
  displayNumbers(numbers);
  displayName(name);
  printf("name: %s\n", name);

  // setup the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // setup the name
  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';

  displayNumbers(numbers);
  displayName(name);

  // print the name like a string
  printf("name: %s\n", name);

  // another way to use name
  char *another = "Zed";

  printf("another: %s\n", another);
  displayName(another);

  return 0;
}
