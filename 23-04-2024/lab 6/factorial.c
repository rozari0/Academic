#include <stdio.h>

int main(){
  int number, factorial = 1;
  printf("Input a number to get factorial: ");
  scanf("%d", &number);

  for (int i = 1; i<= number; i++){
    factorial = factorial * i;
  }
  printf("Factoral is %d.\n", factorial);
}
