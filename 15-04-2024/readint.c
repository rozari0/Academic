#include <stdio.h>

int main(){
  int n,sum = 0;
  printf("Input a number: ");
  scanf("%d", &n);
  while (n > 9){
    sum = sum + n % 10;
    n = n / 10;
  }
  sum = sum + n;

  printf("%d\n", sum);
   
  
  return 0;
}
