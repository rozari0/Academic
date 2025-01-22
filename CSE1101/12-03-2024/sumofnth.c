#include <stdio.h>


int main(){
  int num, diff = 2;
  printf("Input a number: ");
  scanf("%d",&num);
  int sum = 0;
  for (int i = 1; i<= num; i++ ){
    sum += diff;
    diff *= 2;
  }
  printf("Sum of the first %dth number is %d\n", num, sum);
}
