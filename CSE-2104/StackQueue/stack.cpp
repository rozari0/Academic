#include <iostream>
using namespace std;

class Stack {
private:
  int top;
  int max;
  int *array;

public:
  Stack(int max) {
    this->max = max;
    this->top = -1;
    array = new int[max];
  }
  ~Stack() { delete[] array; }
  void push(int x) {
    if (top == max - 1) {
      cout << "Stack is full." << endl;
      return;
    }
    top++;
    array[top] = x;
  }

  void pop() {
    if (top == -1) {
      cout << "Stack is empty" << endl;
      return;
    }
    cout << array[0] << " Removed from stack." << endl;
    top--;
  }

  void display() {
    if (top == -1) {
      cout << "Stack is empty" << endl;
      return;
    }

    for (int i = 0; i <= top; i++) {
      cout << array[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  Stack *stack = new Stack(10);
  stack->push(10);
  stack->display();
  stack->pop();
  stack->push(11);
  stack->display();

  return 0;
}