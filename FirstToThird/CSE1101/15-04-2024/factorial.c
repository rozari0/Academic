#include <stdio.h>

int main(){
  int number;
  printf("Input a number: ");
  scanf("%d", &number);
  int factorial = 1;
  
  while (number > 0){
    factorial = factorial * number;
    number--;
  }
  // printf("\n");

  printf("%d\n", factorial);
}
