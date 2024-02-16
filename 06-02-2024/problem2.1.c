#include <stdio.h>

int main() {
  float centimeter;
  printf("Input your height in centimeter: ");
  scanf("%f", &centimeter);

  int inch = centimeter * 0.394;
  int feet = (inch / 12);
  inch = inch % 12;

  printf("Your Height is %d feet and %d inch\n", feet, inch);
  return 0;
}
