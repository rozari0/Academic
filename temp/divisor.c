#include <stdio.h>

int main(){
  int T;
  printf("Input a number: ");
  scanf("%d", &T);
  for (int i = 1; i<= T; i++){
    int N;
    scanf("%d", &N);
    for (int j = 1; j<= N; j++){
      if (N % j == 0){
        printf("%d ", j);
      }
    }
  }
  return 0;
}
