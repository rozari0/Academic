#include <stdio.h>

int main() {
  int money;
  printf("Input Ammount: ");
  scanf("%d", &money);

  int taka1000 = money / 1000;
  money = money % 1000;

  int taka500 = money / 500;
  money = money % 500;

  int taka200 = money / 200;
  money = money % 200;

  int taka100 = money / 100;
  money = money % 100;

  int taka50 = money / 50;
  money = money % 50;

  int taka20 = money / 20;
  money = money % 20;

  int taka10 = money / 10;
  money = money % 10;

  int taka5 = money / 5;
  money = money % 5;

  int taka2 = money / 2;
  money = money % 2;

  int taka1 = money / 1;

  printf("1000 Taka \t= %d\n", taka1000);
  printf("500 Taka \t= %d\n", taka500);
  printf("200 Taka \t= %d\n", taka200);
  printf("100 Taka \t= %d\n", taka100);
  printf("50 Taka \t= %d\n", taka50);
  printf("20 Taka \t= %d\n", taka20);
  printf("10 Taka \t= %d\n", taka10);
  printf("5 Taka \t\t= %d\n", taka5);
  printf("2 Taka \t\t= %d\n", taka2);
  printf("1 Taka \t\t= %d\n", taka1);
}
