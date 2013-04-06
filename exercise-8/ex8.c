#include <stdio.h>


int main(int argc, char const *argv[])
{
  int areas[] = {10, 12, 13, 14, 20, 100};
  char name[] = "Chavez";
  char full_name[] = {
    'M', ' ',
    'C', 'h', 'a', 'v', 'e', 'z', '\0'
  };
  areas[0] = 100;
  areas[1] = 'X';
  name[5] = 'Z';
  full_name[1] = '.';
  printf("The size of an int %ld\n", sizeof(int));
  printf("The size of areas (int[]) %ld\n", sizeof(areas));
  printf("The number of ints in areas are %ld\n", sizeof(areas)/sizeof(int));
  printf("The first area is %d and the second is %d\n", areas[0], areas[1]);

  printf("The size of a char %ld\n", sizeof(char));
  printf("The size of name (char[]) %ld\n", sizeof(name));
  printf("The number of chars in name %ld\n", sizeof(name)/sizeof(char));

  printf("The size of full name (char[]) %ld\n", sizeof(full_name));
  printf("The number of chars in full name %ld\n", sizeof(full_name)/sizeof(char));

  printf("name=\"%s\" full_name=\"%s\"\n", name, full_name);

  return 0;
}
