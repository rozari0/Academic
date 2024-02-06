#include <stdio.h>

int main() {
  float centimeter;
  printf("Input your height in centimeter: ");
  scanf("%f", &centimeter);

  float foot = centimeter / 30.48;

  printf("Height is %.0f foot and %d", foot, (int)(foot * 100) % 100);
  return 0;
}
