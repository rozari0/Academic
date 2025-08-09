#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    next = nullptr;
  }
};

class LinkedList {
private:
  Node *head;

public:
  LinkedList() { head = nullptr; }
  void appendAtStart(int value) {
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
  }

  void appendAtEnd(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
      head = newNode;
      return;
    }
    Node *temp = head;
    while (temp->next) {
      temp = temp->next;
    }
    temp->next = newNode;
  }

  void appendAtPosition(int value, int pos) {
    if (pos < 1) {
      return;
    }
    Node *newNode = new Node(value);
    if (pos == 1) {
      appendAtStart(value);
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++) {
      if (not temp) {
        cout << "Limit exceeded." << endl;
        return;
      }
      temp = temp->next;
    }
    if (not temp) {
      cout << "Limit exceeded." << endl;
      return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }

  void display() {
    Node *temp = head;
    while (temp) {
      cout << temp->data << " - ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};

int main() {
  LinkedList list;
  cout << "Input elements to add in the linked list (press e to end): ";
  int i, pos;
  while (cin >> i) {
    list.appendAtEnd(i);
  }
  cout << "Current list: ";
  list.display();

  cin.clear();
  cin.ignore();
  cout << "Input a number to add at the start: ";
  cin >> i;
  list.appendAtStart(i);
  cout << "Current list: ";
  list.display();

  cout << "Input a number to add at the end: ";
  cin >> i;
  list.appendAtEnd(i);
  cout << "Current list: ";
  list.display();

  cin.clear();
  cout << "Input a number and a position to add: ";
  cin >> i >> pos;
  list.appendAtPosition(i, pos);
  cout << "Current list: ";
  list.display();

  return 0;
}
