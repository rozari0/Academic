#include <stdio.h>

int main() {
  int character;
  printf("Input a ASCII Value to see that as character: ");
  scanf("%d", &character);
  printf("%d's as character is %c\n", character, character);

  return 0;
}
