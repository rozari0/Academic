#include <stdio.h>

int main(){
  int num;
  printf("Input a number: ");
  scanf("%d", &num);

  for (int i = num; i; i--){
    for (int j = 1; j<= num - i; j++){
      printf("  ");
    }
    for (int k = 1; k<= i; k++){
      printf("* ");
    }
    printf("\n");
  }
}
