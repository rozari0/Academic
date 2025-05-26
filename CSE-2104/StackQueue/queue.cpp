#include <iostream>
using namespace std;

class Queue {
private:
  int front;
  int rear;
  int max;
  int *array;

public:
  Queue(int max) {
    this->max = max;
    this->front = -1;
    this->rear = -1;
    array = new int[max];
  }

  ~Queue() {
    delete[] array;
  }

  void enqueue(int x) {
    if (rear == max - 1) {
      cout << "Queue is full." << endl;
      return;
    }

    if (front == -1) front = 0; // First element inserted

    rear++;
    array[rear] = x;
    cout << x << " added to queue." << endl;
  }

  void dequeue() {
    if (front == -1 || front > rear) {
      cout << "Queue is empty." << endl;
      return;
    }

    cout << array[front] << " removed from queue." << endl;
    front++;

    // Reset if queue becomes empty
    if (front > rear) {
      front = rear = -1;
    }
  }

  void display() {
    if (front == -1 || front > rear) {
      cout << "Queue is empty." << endl;
      return;
    }

    cout << "Queue contents: ";
    for (int i = front; i <= rear; i++) {
      cout << array[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  Queue *queue = new Queue(10);

  queue->enqueue(10);
  queue->enqueue(20);
  queue->enqueue(30);

  queue->display();

  queue->dequeue();
  queue->display();

  delete queue;
  return 0;
}
