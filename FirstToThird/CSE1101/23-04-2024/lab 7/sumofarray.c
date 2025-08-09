#include <stdio.h>
#define SIZE 10
int main() {
  int intarray[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, sum = 0;
  for (int i = 0; i < SIZE; i++) {
    sum += intarray[i];
  }

  printf("Sum of the array is %d\n", sum);

  return 0;
}
