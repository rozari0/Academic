#include <stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);

  int sum = 1, total_sum = 0;
  for (i = 0; sum != n; i++) {
    sum = sum + i;
    total_sum += sum;
  }
  printf("%d\n", total_sum);

  return 0;
}
