#include <stdio.h>

int main() {
  int var1 = 10, var2 = 20, temp;
  printf("Before swap %d %d\n", var1, var2);
  temp = var1;
  var1 = var2;
  var2 = temp;
  printf("After swap %d %d\n", var1, var2);
}
