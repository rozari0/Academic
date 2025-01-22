#include <stdio.h>
#define SIZE 20
int main(){
  int array[SIZE],i,temp,j;
  for (int i = 0; i<SIZE; i++){
    array[i] = rand() % 100;
  }

  for (i = 0; i<SIZE - 1; i++){
    for (j = i+1; j<SIZE; j++){
      if (array[i] < array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  
  for (i=0; i<SIZE; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
}
