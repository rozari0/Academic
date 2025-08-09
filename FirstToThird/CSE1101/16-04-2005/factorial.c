#include <stdio.h>

int main() {
  int number;
  scanf("%d", &number);
  int fac = 1;
  for (int i = 2; i <= number; i++) {
    fac *= i;
  }
  printf("%d! is %d\n", number, fac);
}
