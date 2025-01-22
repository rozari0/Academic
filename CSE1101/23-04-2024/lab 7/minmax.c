#include <stdio.h>
#define SIZE 10
int main(){
  int array[SIZE] = { 2,3,5,6,7,8,9,0,1};
  int min = array[0], max = array[0];
  for (int i = 1; i<SIZE; i++){
    if (array[i] < min){
      min = array[i];
    }
    if (array[i] > max){
      max = array[i];
    }
  }

  printf("Minimum element is %d.\n", min);
  printf("Maxium element is %d.\n", max);
  return 0;
}
