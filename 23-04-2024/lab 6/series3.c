#include <stdio.h>

int main() {
  int nnnn, i, sum = 0;
  printf("Input number: ");
  scanf("%d", &nnnn);
  for (i = nnnn % 10; i != nnnn; i = i * 10 + nnnn % 10) {
    sum += i;
  }
  sum += i;

  printf("Sum of the series is %d.\n", sum);

  return 0;
}
