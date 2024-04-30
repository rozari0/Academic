#include <stdio.h>
#define SIZE 15
int main() {
  int unordered[SIZE] = {88, 56, 32, 54, 1,  7,  48, 82,
                         43, 11, 22, 67, 19, 29, 34},
      reverse[SIZE], temp;
  for (int i = 0; i < SIZE - 1; i++) {
    for (int j = i + 1; j < SIZE; j++) {
      if (unordered[i] > unordered[j]) {
        temp = unordered[i];
        unordered[i] = unordered[j];
        unordered[j] = temp;
      }
    }
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", unordered[i]);
  }
  printf("\n");

  for (int i = 0; i < SIZE; i++) {
    reverse[i] = unordered[SIZE - i - 1];
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", reverse[i]);
  }
  printf("\n");
}
