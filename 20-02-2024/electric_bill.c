#include <stdio.h>

int main() {
  int unit;
  const int SC = 10, MC = 30;
  float temp_bil, Total_bill;
  printf("Input total unit: ");
  scanf("%d", &unit);

  if (unit <= 75) {
    temp_bil = unit * 4.94;
  } else if (unit <= 200) {
    temp_bil = unit * 7.38;
  } else if (unit <= 300) {
    temp_bil = unit * 10.56;
  } else {
    temp_bil = unit * 12.18;
  }
  temp_bil = temp_bil + MC + SC;
  Total_bill = temp_bil + temp_bil * (5.0 / 100.0);

  float penalty = 20;
  if (penalty < Total_bill * 0.015) {
    penalty = Total_bill * 0.015;
  }

  printf("Total bill without penalty is: %.2f\n", Total_bill);
  printf("Total bill with penalty is: %.2f\n", Total_bill + penalty);
  return 0;
}
