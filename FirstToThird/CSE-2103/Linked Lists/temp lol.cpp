#include <iostream>
using namespace std;

struct node {
  int value;
  struct node *next;
};

void printValues(node *HEAD) {
  node *temp = HEAD;
  while (temp) {
    cout << temp->value;
    temp = temp->next;
    if (temp) {
      cout << " - ";
    }
  }
  cout << endl;
}

void insert(node *&head, int val) {
  node *curr;
  curr = (node *)malloc(sizeof(node));
  curr->value = val;
  curr->next = head;
  head = curr;
  curr = head;
}

void deletion(node *&head, node element){
  
}

int main() {
  node *curr, *head;
  head = NULL;

  printValues(head);
  insert(head, 30);
  printValues(head);
  insert(head, 40);
  printValues(head);
}
