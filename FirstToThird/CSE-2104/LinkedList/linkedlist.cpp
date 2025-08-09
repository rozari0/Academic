#include <cstddef>
#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node *createLinkedList(int array[], int size){
    Node *head = NULL;
    Node *temp = NULL;
    Node *current = NULL;

    for (int i = 0; i<size; i++){
        temp = new Node(array[i]);
        if (head == NULL){
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

int Searching(Node *&HEAD, int item){
    int pointer = 0;
    Node *temp = HEAD;
    while (temp){
        if (temp->data == item){
            return pointer;
        }
        temp=temp->next;
        pointer++;
    }
    return -1;
}


int main(){
    int size = 5;
    int array[size] = {1,2,3,4,5};

    Node *HEAD = createLinkedList(array, size);
    Node *temp = HEAD;
    while (temp){
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "Null" << endl;
    cout <<Searching(HEAD, 5) << endl;
}
