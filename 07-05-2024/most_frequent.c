#include <stdio.h>
#define SIZE 15
int main() {
  int array[SIZE] = {1, 0, 0, 7, 5, 9, 0, 0, 96, 5, 3, 9, 15, 29, 1};
  int max_element = 0, max = 0, temp;

  for (int i = 0; i < SIZE - 1; i++) {
    temp = 1;
    for (int j = i + 1; j < SIZE; j++) {
      if (array[i] == array[j]) {
        temp++;
      }
    }
    if (temp > max) {
      max = temp;
      max_element = array[i];
    }
  }

  printf("%d appers %d times.\n", max_element, max);
}
