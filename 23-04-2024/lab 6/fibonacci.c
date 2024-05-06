#include <stdio.h>

int main(){
  // 0 1 1 2 3 5 8 13
  int first = 0, next = 1, fibo,n;
  printf("Input n to get nth fibonacci number: ");
  scanf("%d", &n);
  for (int i = 1; i< n; i++){
    fibo = first + next;
    first = next;
    next = fibo;
  }
  printf("n-th fibonacci number is %d\n", first);
  return  0;
}
