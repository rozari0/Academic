#include <stdio.h>

int main() {
  int n, digitcount = 1;
  printf("Input a number: ");
  scanf("%d", &n);
  int m = n;
  while (m > 9) {
    m /= 10;
    digitcount++;
  }
  printf("%d has %d digit\n", n, digitcount);

  m = n;

  int sum = 0;
  while (m > 9) {
    sum += m % 10;
    m /= 10;
  }
  sum += m;

  printf("Sum of the digits of %d is %d\n", n, sum);

  m = n;
  int reverse = 0;
  while (m > 9) {
    reverse = reverse * 10 + m % 10;
    m /= 10;
  }
  reverse = reverse * 10 + m;

  printf("Reverse of %d is %d\n", n, reverse);

  if (reverse == n) {
    printf("%d is a palindrome number.\n", n);
  } else {
    printf("%d is not a palindrome number.\n", n);
  }

  return 0;
}
