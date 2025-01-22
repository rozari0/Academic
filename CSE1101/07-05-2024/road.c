#include <stdio.h>

double area(double height, double width) { return height * width; }

int main() {
  double height, width, roadwidth;
  printf("Input height of area: ");
  scanf("%lf", &height);
  printf("Input width of area: ");
  scanf("%lf", &width);
  printf("Width of road: ");
  scanf("%lf", &roadwidth);

  printf("Area of road is %.2lf\n",
         area(height, width) - area(height - roadwidth, width - roadwidth));

  return 0;
}
