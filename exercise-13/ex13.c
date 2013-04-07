#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


int main(int argc, char const *argv[])
{
  if (argc != 2) {
    printf("Not enough arguments\n");
    return 1;
  }

  int i;
  char letter;

  for (i = 0; argv[1][i] != '\0'; i++)
  {
    letter = tolower(argv[1][i]);

    switch(letter) {
      case 'a':
        printf("%d: 'A'\n", i);
        break;
      case 'e':
        printf("%d: 'E'\n", i);
        break;
      case 'i':
        printf("%d: 'I'\n", i);
        break;
      case 'o':
        printf("%d: 'O'\n", i);
        break;
      case 'u':
        printf("%d: 'U'\n", i);
        break;
      case 'y': {
        srand(time(0));
        int random = rand();
        if (random % 2 == 0) {
          printf("%d: 'Y'\n", i);
        }
        else {
          printf("%d: Y is not a vowel right now.\n", i);
        }
        break;
      }
      default:
        printf("%d: %c is not a vowel\n", i, letter);
    }
  }
  return 0;
}
