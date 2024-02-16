#include <stdio.h>

int main() {
  int num;
  printf("Input a number: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("%d is even.\n", num);
  } else {
    printf("%d is odd.\n", num);
  }

  if (num % 3 == 0 && num % 13 == 0) {
    printf("%d is divisible by 3 and 13.\n", num);
  } else {
    printf("%d is not divisible by 3 and 13.\n", num);
  }

  if (num > 0) {
    printf("%d is positive.\n", num);
  } else if (num < 0) {
    printf("%d is negetive.\n", num);
  } else {
    printf("This number is zero.\n");
  }

  return 0;
}
