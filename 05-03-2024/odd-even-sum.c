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
  int oddsum = 0, evensum = 0;

  for (int i = num1; i <= num2; i++)
  {
    if (i % 2 == 0)
    {
      evensum += i;
    }
    else
    {
      oddsum += i;
    }
  }
  printf("Even Sum of the number range %d - %d is %d\n", num1, num2, evensum);
  printf("Odd Sum of the number range %d - %d is %d", num1, num2, oddsum);

  return 0;
}
