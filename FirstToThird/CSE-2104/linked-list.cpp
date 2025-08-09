#include <iostream>
using namespace std;

struct node {
  int value;
  node *next;
};

void printLinkedList(node *head) {
  node *temp = head;
  while (temp) {
    cout << temp->value << " ";
    temp = temp->next;
    if (temp) {
      cout << "-> ";
    }
  }
  cout << endl;
}

int main() {
  node *a, *b, *c;

  a = (node *)malloc(sizeof(node));
  b = (node *)malloc(sizeof(node));
  c = (node *)malloc(sizeof(node));

  a->value = 10;
  b->value = 20;
  c->value = 30;

  a->next = b;
  b->next = c;
  c->next = NULL;

  printLinkedList(a);

  return 0;
}
