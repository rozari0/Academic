#include <iostream>
using namespace std;

int main() {
  int num = 10;
  int *ptr = &num;

  cout << num << endl;
  cout << *ptr << endl;
  cout << ptr << endl;
  cout << &num << endl;

  cout << &ptr << endl;
}
