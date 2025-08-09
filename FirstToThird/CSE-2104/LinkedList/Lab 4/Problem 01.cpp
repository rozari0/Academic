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


int main(){
    int size;
    Node *HEAD = NULL;
    cout << "Enter the size of the array: ";
    cin >> size;
    int item;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++){
        cin >> item;
        Node *temp = new Node(item);
        if (HEAD == NULL){
            HEAD = temp;
        } else {
            temp->next = HEAD;
            HEAD = temp;
        }
    }

    
    Node *temp = HEAD;
    cout << "Printing the linked list: ";
    while (temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}
