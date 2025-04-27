#include <cstddef>
#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int value) {
    data = value;
    next = NULL;
  }
};

int Searching(Node *&HEAD, int item) {
  int pointer = 0;
  Node *temp = HEAD;
  while (temp) {
    if (temp->data == item) {
      return pointer;
    }
    temp = temp->next;
    pointer++;
  }
  return -1;
}

int main() {
  int size;
  Node *HEAD = NULL;
  cout << "Enter the size of the array: ";
  cin >> size;
  int item;
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++) {
    cin >> item;
    Node *temp = new Node(item);
    if (HEAD == NULL) {
      HEAD = temp;
    } else {
      temp->next = HEAD;
      HEAD = temp;
    }
  }

  Node *temp = HEAD;
  cout << "Printing the linked list: ";
  while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "Null" << endl;
  cout << "Enter the element to search: ";
    cin >> item;
    int result = Searching(HEAD, item);
    if (result != -1) {
      cout << "Element found at index: " << result << endl;
    } else {
      cout << "Element not found" << endl;
    }
}
