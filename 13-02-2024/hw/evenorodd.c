#include <stdio.h>

int main() {
  int num;
  printf("Input a number to check: ");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("%d is even.\n", num);
  } else {
    printf("%d is odd.\n", num);
  }
}
