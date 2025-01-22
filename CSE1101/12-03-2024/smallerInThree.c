#include <stdio.h>

int main(){
  int num1, num2, num3;
  printf("Input three number: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  int smaller = num1;
  if (num1 == num2 && num2 == num3){
    printf("All input is equal.\n");
    // Exit Program.
    return 1;
  }

  if (smaller > num2) smaller = num2;
  if (smaller > num3) smaller = num3;

  printf("%d is the smallest number.\n", smaller);
}
