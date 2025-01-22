#include <stdio.h>

int main() {
  int num;
  printf("Input a number: ");
  scanf("%d", &num);

  if (num % 3 == 0 && num % 13 == 0) {
    printf("%d is divisible by 3 and 13.\n", num);
  } else {
    printf("%d is not divisible by 3 and 13.\n", num);
  }

  return 0;
}
