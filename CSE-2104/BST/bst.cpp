#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    left = nullptr;
    right = nullptr;
  }
};

class BST {
private:
  Node *root;

  Node *insert(Node *node, int value) {
    if (node == nullptr) {
      return new Node(value);
    }

    if (node->data > value) {
      node->left = insert(node->left, value);
    } else if (node->data < value) {
      node->right = insert(node->right, value);
    }
    return node;
  }

  void inorder(Node *node) {
    if (node != nullptr) {
      inorder(node->left);
      cout << node->data << " ";
      inorder(node->right);
    }
  }

  void preorder(Node *node) {
    if (node != nullptr) {
      cout << node->data << " ";
      preorder(node->left);
      preorder(node->right);
    }
  }

  void postorder(Node *node) {
    if (node != nullptr) {
      postorder(node->left);
      postorder(node->right);
      cout << node->data << " ";
    }
  }

  bool search(Node *node, int value) {
    if (node == nullptr) {
      return false;
    }

    if (node->data == value)
      return true;
    else if (node->data > value)
      return search(node->left, value);
    else
      return search(node->right, value);
  }

public:
  BST() { root = nullptr; };

  void insert(int value){
    root = insert(root, value);
  }

  void inorder(){
    cout << "In order: ";
    inorder(root); 
    cout << endl;
  }
};


int main(){
    BST tree;
    tree.insert(10);
    tree.insert(20);

    tree.inorder();
}