#include <stdio.h>

int main() {
  char character;
  printf("Input a character: ");
  scanf("%c", &character);
  printf("ASCII Value of %c is %d\n", character, character);

  return 0;
}
