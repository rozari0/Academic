#include <stdio.h>

int main(){
  int number = 10;
  do {
    printf("%d\n", number);
  } while(number > 0);

  /* 
  for (int number = 10; number > 0; number = number -1){
    printf("%d\n", number);
  }

  int number = 10;
  while (number > 0){
    printf("%d\n", number);
    number = number - 1;
  } */

  return 0;
}
