#include <stdio.h>
int main() {
  char a[100];
  fgets(a, sizeof(a), stdin);

  int Upper = 0, Lower = 0, Digit = 0, length = 0, i;
  for (i = 0; a[i]; i++) {
    if (a[i] != '\n') {
      length++;
    }
    if (a[i] >= 'A' && a[i] <= 'Z') {
      Upper++;
    } else if (a[i] >= 'a' && a[i] <= 'z') {
      Lower++;
    } else if (a[i] >= '0' && a[i] <= '9') {
      Digit++;
    }
  }
  printf("String Length = %d\n", length);
  printf("Uppercase Letter = %d\n", Upper);
  printf("Lowercase Letter = %d\n", Lower);
  printf("Digits = %d\n", Digit);
  return 0;
}
