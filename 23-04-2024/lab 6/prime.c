#include <stdio.h>

int main(){
  int number,i, is_prime = 1;
  printf("Input a number to check: ");
  scanf("%d", &number);
  if (number < 2){
    is_prime = 0;
  } else {
    for (i = 2; i < number; i++){
      if (number % i == 0){
        is_prime = 0;
        break;
      }
    }
  }

  if (is_prime){
    printf("%d is a prime.\n");
  } else {
    printf("%d is not a prime.\n");
  }
  return 0;
}
