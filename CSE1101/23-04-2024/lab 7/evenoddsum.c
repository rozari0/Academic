#include <stdio.h>
#define SIZE 10
int main(){
  int array[SIZE] = {0,1,2,3,4,5,6,7,8,9}, evensum=0,oddsum=0;
  for (int i = 0; i<SIZE; i++){
    if (array[i] % 2== 0){
      evensum += array[i];
    } else {
      oddsum += array[i];
    }
  }

  printf("Odd sum = %d\n",oddsum);
  printf("Even sum = %d\n", evensum);
  return 0;
}
