#include <iostream>
using namespace std;

struct node {
  int value;
  struct node *next;
};

void printValues(node *HEAD) {
  node *temp = HEAD;
  while (temp) {
    cout << temp->value << " - ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  node *curr, *head;
  head = NULL;

  // curr = (node *)malloc(sizeof(node));
  curr->value = 10;
  curr->next = head;
  head = curr;

  // Second Element
  curr = (node *)malloc(sizeof(node));
  curr->value = 20;
  curr->next = head;
  head = curr;
  curr = head;

  printValues(head);
}