#include <stdio.h>

int main() {
  int grade, basic;
  printf("Enter your grade (between 6-9): ");
  scanf("%d", &grade);

  switch (grade) {
  case 6:
    basic = 35500;
    break;
  case 7:
    basic = 31800;
    break;
  case 8:
    basic = 27400;
    break;
  case 9:
    basic = 22000;
    break;
  default:
    return 1;
  }

  float houserent =
      (10000 < basic * (45.0 / 100)) ? basic * (45.0 / 100) : 10000;

  float medical = (1800 < basic * (10.0 / 100)) ? basic * (10.0 / 100) : 1800;

  float conveyance = (2000 < basic * (1.0 / 10)) ? basic * (1.0 / 10) : 2000;

  float others = (2500 < basic * (20.0 / 100)) ? basic * (20.0 / 100) : 2500;

  float provident_fund = basic * (8.0 / 100);

  float gross_salary = basic + houserent + medical + conveyance + others;

  float net_salary = gross_salary - provident_fund;

  printf("Gross Salary is %.2f.\n", gross_salary);
  printf("Net Salary is %.2f.\n", net_salary);

  return 0;
}
