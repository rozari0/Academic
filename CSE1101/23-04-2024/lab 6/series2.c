#include <stdio.h>

int main() {
  int n;
  double sum = 0;
  printf("Input the value of n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    sum = sum + (double)1.0 / i;
  }
  printf("Sum is %.2lf\n", sum);
  return 0;
}
