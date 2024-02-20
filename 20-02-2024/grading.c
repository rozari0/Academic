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

  float houserent = 10000;
  if (houserent < basic * (45.0 / 100)) {
    houserent = basic * (45.0 / 100);
  }

  float medical = 1800;
  if (medical < basic * (10.0 / 100)) {
    medical = basic * (10.0 / 100);
  }

  float conveyance = 2000;
  if (conveyance < basic * (1.0 / 10)) {
    conveyance = basic * (1.0 / 10);
  }

  float others = 2500;
  if (others < basic * (20.0 / 100)) {
    others = basic * (20.0 / 100);
  }

  float provident_fund = basic * (8.0 / 100);

  float gross_salary = basic + houserent + medical + conveyance + others;

  float net_salary = gross_salary - provident_fund;

  printf("Gross Salary is %.2f.\n", gross_salary);
  printf("Net Salary is %.2f.\n", net_salary);

  return 0;
}
