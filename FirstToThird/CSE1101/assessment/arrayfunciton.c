#include <stdio.h>

int plusone(int *array, int size){
  for (int i = 0; i<size; i++){
    array[i]++;
  }
  

}

int main(){
  int array[5] = {1,2,3,4,5};
  
  plusone(array,sizeof(array)/ sizeof(array[0]));
  for (int i = 0; i<5; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}
