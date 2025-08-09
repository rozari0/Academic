#include <stdio.h>

int main() {
  char string[100], alphabet;
  printf("Input a string: ");
  fgets(string, sizeof(string), stdin);
  printf("Input a character: ");
  scanf("%c", &alphabet);

  int i, count = 0;
  for (i = 0; string[i]; i++) {
    if (string[i] == alphabet) {
      count++;
    }
  }

  printf("%c has appeared in string %d times.\n", alphabet, count);
  return 0;
}
