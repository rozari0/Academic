#include <stdio.h>

int main() {
  float centimeter;
  printf("Input your height in centimeter: ");
  scanf("%f", &centimeter);

  float inch = centimeter * 0.394;
  int feet = inch / 12;
  inch = (int)inch % 12;

  printf("Your Height is %d feet and %.0f inch\n", feet, inch);
  return 0;
}
