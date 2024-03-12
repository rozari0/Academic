#include <stdio.h>

int main(){
  int num;
  printf("Input a number: ");
  scanf("%d", &num);
  
  for (int i = num; i; i--){
    for (int j = 1; j<=i; j++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
