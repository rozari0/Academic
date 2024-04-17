#include <stdio.h>

int main(){
  int limit;
  printf("Input limit: ");
  scanf("%d", &limit);
  
  for (int i = 1; i<= limit; i++){
    //int num;
    //printf("Input a number to check: ");
    // scanf("%d", &num);
    if (i % 2 == 0){
      printf("%d nishat even\n",i);
    } else {
      printf("%d - odd\n",i);
    }
  }

  return 0;
}
