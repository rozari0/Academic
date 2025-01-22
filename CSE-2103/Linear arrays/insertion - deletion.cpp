#include <iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertItem(int array[], int *n, int position, int item){
    for ( int i = *n; i>= position; i--){
        array[i] = array[i- 1];
    }
    array[position - 1] = item;
    *n = *n + 1;
}

int deleteItem(int array[], int *n, int position){
    int item = array[position - 1];
    for (int i = position - 1; i<= *n; i++){
        array[i] = array[i + 1];
    }
    *n = *n - 1;

    return item;
}

int main(){
    int array[100] = {1, 2, 4, 5, 6};
    int n = 5;

    printArray(array, n);
    insertItem(array, &n, 3, 3);
    printArray(array, n);
    deleteItem(array, &n, 4);
    printArray(array, n);
}
