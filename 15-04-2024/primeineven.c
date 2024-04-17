#include <stdio.h>

int is_prime_number(int num) {
  int is_prime = 1;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      is_prime = 0;
      break;
    }
  }
  return is_prime;
}

int main() {
  int number;
  scanf("%d", &number);

  for (int i = 2; i <= number; i += 1) {
    if (is_prime_number(i) && is_prime_number(number - i)) {
      printf("%d\t%d\n", i, number - i);
    }
  }

  return 0;
}
