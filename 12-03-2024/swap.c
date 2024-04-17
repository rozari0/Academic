#include <stdio.h>

int main() {
  int var1, var2;
  printf("Input two number: ");
  scanf("%d %d", &var1, &var2);
  printf("Before swap %d %d\n", var1, var2);
  var1 = var1 + var2;
  var2 = var1 - var2;
  var1 = var1 - var2;
  printf("After swap %d %d\n", var1, var2);
}

