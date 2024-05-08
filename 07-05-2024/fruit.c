#include <stdio.h>

int main() {
  char fruits[10][100];
  for (int i = 0; i < 10; i++) {
    printf("Fruit no %d: ", i + 1);
    fgets(fruits[i], sizeof(fruits[i]), stdin);
  }

  for (int i = 0; i < 10; i++) {
    printf("%s", fruits[i]);
  }
  return 0;
}
