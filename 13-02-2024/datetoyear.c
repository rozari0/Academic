#include <stdio.h>

int main() {
  int days;
  printf("Input day to convert in year, month and days: ");
  scanf("%d", &days);

  int year = days / 365;
  int month = (days % 365) / 30;
  int day = (days % 365) % 30;

  printf("%d is equal %d Y - %d M - %d D\n", days, year, month, day);
}
