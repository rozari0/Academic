#include <stdio.h>

int main() {
  int num;
  printf("Input a number: ");
  scanf("%d", &num);

  if (num % 3 == 0 && num % 13 == 0) {
    printf("%d is divisible by %d and %d\n", num, 3, 13);
  }
  return 0;
}
