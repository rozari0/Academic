#include <stdio.h>

int main() {
  char fruits[10][100] = {"Mango", "Guava",  "Pear",  "Date",  "Peach",
                          "Fig",   "Lychee", "Apple", "Grape", "Olive"};

  for (int i = 0; i < 10; i++) {
    puts(fruits[i]);
  }
  return 0;
}
