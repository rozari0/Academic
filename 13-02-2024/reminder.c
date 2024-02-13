#include <stdio.h>

int main() {
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  int quotient = num1 / num2;
  int reminder = num1 - (quotient * num2);

  printf("%d %d\n", quotient, reminder);
}
