#include <stdio.h>
#define SIZE 10
int main() {
  int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, is_prime, sum = 0;
  for (int i = 0; i < SIZE; i++) {
    is_prime = 1;
    if (array[i] < 2)
      is_prime = 0;
    for (int j = 2; j < array[i]; j++) {
      if (array[i] % j == 0) {
        is_prime = 0;
        break;
      }
    }
    if (is_prime) {
      sum += array[i];
    }
  }

  printf("Sum of the primes in array is %d.\n", sum);
  return 0;
}
