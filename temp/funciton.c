#include <stdio.h>

int add(int num1, int num2) { return num1 + num2; }

int sub(int x, int y) { return x - y; }

int multi(int x, int y) { return x * y; }

int divition(int x, int y) { return x / y; }

int main() {
  int num1, num2;
  printf("Input Two number: ");
  scanf("%d %d", &num1, &num2);
  char op;
  printf("Input operator: ");
  scanf(" %c", &op);

  switch (op) {
  case '+':
    printf("%d + %d = %d", num1, num2, add(num1, num2));
    break;
  case '-':
    printf("%d - %d = %d", num1, num2, sub(num1, num2));
    break;
  case '*':
    printf("%d x %d = %d", num1, num2, multi(num1, num2));
    break;
  case '/':
    printf("%d / %d = %d", num1, num2, divition(num1, num2));
    break;
  }
  printf("\n");
  return 0;
}
