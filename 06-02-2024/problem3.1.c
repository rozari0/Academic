#include <stdio.h>

int main() {
  int character;
  printf("Input a ASCII Value to see that as character: ");
  scanf("%d", &character);
  printf("ASCII value %d's character is %c\n", character, character);

  return 0;
}
