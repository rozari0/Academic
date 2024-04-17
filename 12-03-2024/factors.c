#include <stdio.h>

int main(){
  int num, factors = 0;
  printf("Input a number: ");
  scanf("%d", &num);

  for (int i = 1; i<= num; i++){
    if (num % i == 0){
      printf("%d ", i);
      factors += 1;
    }
  }
  printf("\n%d has %d factor.\n", num, factors);
}
