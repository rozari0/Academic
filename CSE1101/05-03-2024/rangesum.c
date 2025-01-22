#include <stdio.h>

int main()
{
  int num1, num2;
  printf("Input two number to get sum of that range: ");
  scanf("%d %d", &num1, &num2);
  if (num1 > num2)
  {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  }
  int sum = 0;
  for (int i = num1; i <= num2; i++)
  {
    sum += i;
  }
  printf("Sum of the number range %d - %d is %d\n", num1, num2, sum);

  return 0;
}
