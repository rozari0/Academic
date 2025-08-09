#include <stdio.h>

int main() {
  int number, temp, digit = 1, sumofdigit = 0, reverse = 0;
  printf("Input a number: ");
  scanf("%d", &number);
  temp = number;
  while (temp > 9) {
    sumofdigit += temp % 10;
    reverse = reverse * 10 + temp % 10;
    temp /= 10;
    digit += 1;
  }
  sumofdigit += temp;
  reverse = reverse * 10 + temp;

  printf("%d has %d digit.\n", number, digit);
  printf("sum of the digits of %d is %d.\n", number, sumofdigit);
  printf("Reverse of the %d is %d.\n", number, reverse);
  if (number == reverse) {
    printf("%d is palindrome.\n", number);
  } else {
    printf("%d is not palindrome.\n", number);
  }
  return 0;
}
