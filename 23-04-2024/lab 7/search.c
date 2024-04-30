#include <stdio.h>
#define SIZE 10
int main() {
  int array[SIZE] = {11, 32, 9, 57, 99, 21, 56, 76, 8, 46}, number, index = -1;
  printf("Input a number to search: ");
  scanf("%d", &number);
  for (int i = 0; i < SIZE; i++) {
    if (array[i] == number) {
      index = i;
      break;
    }
  }
  if (index == -1) {
    printf("%d is not in the array.\n", number);
  } else {
    printf("Index of %d is %d.\n", number, index);
  }

  return 0;
}
