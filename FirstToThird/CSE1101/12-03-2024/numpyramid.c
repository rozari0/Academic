#include <stdio.h>

int main(){
  int num;
  printf("Input a number: ");
  scanf("%d", &num);
  int num2 = 1;
  for (int i = 1; i<= num; i++){
    for (int k = 1; k<= i; k++){
      printf("%2d ", num2);
      num2 += 1;
    }
    printf("\n");
  }
}
