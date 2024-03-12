#include <stdio.h>

int main(){

  int num;
  printf("Number: ");
  scanf("%d", &num);

  for (int i = num; i; i--){
    for (int j = 1; j<= i; j++){
      printf("* ");
    }
    printf("\n");
  }
}
