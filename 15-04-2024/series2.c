#include <stdio.h>

int main(){
  int n;
  double sum = 0;
  scanf("%d", &n);
  for (int i =1 ; i<=n; i++){
    sum = sum + (double)1 / i;
  }
  printf("%.2lf\n", sum);
  return 0;
}
