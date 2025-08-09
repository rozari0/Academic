#include <stdio.h>

int main() {
  int num1, num2, lcm;
  printf("Input two number: ");
  scanf("%d %d", &num1, &num2);
  int max = (num1 > num2) ? num1 : num2;
  for (int i = num1 * num2; i >= max; i--) {
    if (i % num1 == 0 && i % num2 == 0) {
      lcm = i;
    }
  }

  printf("LCM is %d.\n", lcm);

  return 0;
}
