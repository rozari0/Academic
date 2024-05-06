#include <stdio.h>

int main() {
  int num1, num2, gcd;
  printf("Input two number: ");
  scanf("%d %d", &num1, &num2);
  int min = (num1 < num2) ? num1 : num2;
  for (int i = 1; i <= min; i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      gcd = i;
    }
  }

  printf("GCD is %d.\n", gcd);
  return 0;
}
