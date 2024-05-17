#include <stdio.h>
#define SIZE 10
int main() {
  int array[SIZE] = {1, 0, 0, 7, 5, 9, 0, 0, 96, 1};
  int max_element = 0, max = 0, temp_max;

  for (int i = 0; i < SIZE - 1; i++) {
    temp_max = 1;
    for (int j = i + 1; j < SIZE; j++) {
      if (array[i] == array[j]) {
        temp_max++;
      }
    }
    if (temp_max > max) {
      max = temp_max;
      max_element = array[i];
    }
  }

  printf("%d is the most frequent element.\n", max_element);
}
