#include <stdio.h>
#include <time.h>
#define SIZE 10
int main() {
  srandom(time(NULL));
  int random[SIZE];
  for (int i = 0; i < SIZE; i++) {
    random[i] = rand() % 100;
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", random[i]);
  }
  printf("\n");

  return 0;
}
