#include <stdio.h>

int main(){
  int num1, num2;
  printf("Input two number to check which one is larger: ");
  scanf("%d %d", &num1, &num2);

  if (num1 == num2){
    printf("Both input is equal.\n");
  } else if( num1 > num2){
    printf("%d is the larger number.\n", num1);
  } else {
    printf("%d is the larger number.\n", num2);
  }
}
