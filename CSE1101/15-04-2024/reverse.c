#include <stdio.h>

int main() {
  /*
    1234;
    1 * 1000 + 2 * 100 + 3 * 10 + 4;

    4321;
    4 * 1000 + 3 * 100 + 2 * 10 + 1;
  */

  int n, reverse = 0;
  printf("Input a number: ");
  scanf("%d", &n);
  int m = n;
  while (n > 9) {
    // printf("%d", n % 10);
    reverse = reverse * 10 + n % 10;
    n = n / 10;
  }
  reverse = reverse * 10 + n;
  printf("%d\n", reverse);

  if (m == reverse) {
    printf("%d is a palindrome number.\n", m);
  } else {
    printf("%d is not a palindrome number.\n", m);
  }

  return 0;
}
