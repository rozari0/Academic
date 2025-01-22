#include <stdio.h>

int main() {
  int number;
  scanf("%d", &number);

  int first = 0, second = 1;
  int nextTerm = 0;
  for (int i = 1; i <= number; i++) {
    // printf("%d ", nextTerm);
    nextTerm = first + second;
    first = second;
    second = nextTerm;
  }
  printf("%d\n", nextTerm - first);
}
