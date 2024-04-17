#include <stdio.h>

int main() {
  int num, is_prime = 1;
  scanf("%d", &num);
  if (num == 1) {
    printf("%d is not a prime.\n", num);
  } else {
    for (int i = 2; i < num; i++) {
      if (num % i == 0) {
        is_prime = 0;
        break;
      }
    }

    if (is_prime == 1) {
      printf("%d is a prime.\n", num);
    } else {
      printf("%d is not a prime.\n", num);
    }
  }
}
