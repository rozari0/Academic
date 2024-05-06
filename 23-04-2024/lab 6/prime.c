#include <stdio.h>

int main() {
  int number, i, is_prime = 1;
  printf("Input a number to check: ");
  scanf("%d", &number);
  if (number < 2 || (number % 2 == 0 && number != 2)) {
    is_prime = 0;
  } else {
    for (i = 3; i * i <= number; i = i + 2) {
      if (number % i == 0) {
        is_prime = 0;
        break;
      }
    }
  }

  if (is_prime) {
    printf("%d is a prime.\n", number);
  } else {
    printf("%d is not a prime.\n", number);
  }
  return 0;
}
