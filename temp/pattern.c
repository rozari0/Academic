#include <stdio.h>

int main(){
  int num;

  printf("Input a number: ");
  scanf("%d", &num);
  int star = 1;
  for (int i = 1; i<= num; i++){
    for (int j = 1; j<= i; j++){
      printf("%d ",star);
      star = star + 1;
    }
    printf("\n");
  }
  return 0;
}

// 1
// 2 3 
// 4 5 6
// 7 8 9 10
