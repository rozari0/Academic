#include <stdio.h>

int main() {
  int ft, inch;

  printf("Input your height (foot): ");
  scanf("%d", &ft);

  printf("Input your height (inch): ");
  scanf("%d", &inch);

  float centimeter = (float)(ft * 30.48) + (float)(inch * 2.54);

  printf("Your height is %.2f centimeter.\n", centimeter);

  return 0;
}
