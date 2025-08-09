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
    Node *HEAD = new Node(1);
    Node *second = new Node(3);
    HEAD->next = second;

    Node *third = new Node(5);
    second->next = third;

    Node *fourth = new Node(7);
    fourth->next = HEAD;
    HEAD = fourth;



    Node *temp = HEAD;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
