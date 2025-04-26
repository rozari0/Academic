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


Node *arrayToLinkedList(int array[], int size){
    Node *HEAD = NULL;
    Node *temp = NULL;

    for (int i = 0; i<size; i++){
        temp = new Node(array[i]);
        if (HEAD == NULL){
            HEAD = temp;
        } else {
            temp->next = HEAD;
            HEAD = temp;
        }
    }

    return HEAD;

}


int main(){
    int array[5] = {2,4,6,8,10};

    Node *HEAD = arrayToLinkedList(array, 5);
    // Node *second = new Node(3);
    // HEAD->next = second;
    //
    // Node *third = new Node(5);
    // second->next = third;
    //
    // Node *fourth = new Node(7);
    // fourth->next = HEAD;
    // HEAD = fourth;



    Node *temp = HEAD;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
