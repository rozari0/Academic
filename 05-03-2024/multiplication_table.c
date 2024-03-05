#include <stdio.h>

int main()
{
  int num;
  printf("Input a number to generate multiplication table: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++)
  {
    printf("%2d * %2d = %d\n", num, i, num * i);
  }

  return 0;
}
