#include <stdio.h>

int main() {
  int var1 = 10, var2 = 20;
  
  printf("Before swap %d %d\n", var1, var2);
  
  var1 = var1 + var2;
  var2 = var1 - var2;
  var1 = var1 - var2;
  
  printf("After swap %d %d\n", var1, var2);
}
