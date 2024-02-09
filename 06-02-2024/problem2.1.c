#include <stdio.h>

int main() {
  float centimeter;
  printf("Input your height in centimeter: ");
  scanf("%f", &centimeter);

  float foot = centimeter / 30.48;

  printf("Your Height is %.0f foot and %d inch\n", foot, (int)(foot * 10) % 10);
  return 0;
}
