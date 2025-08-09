#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int value) {
    data = value;
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

    if (value < node->data)
      node->left = insert(node->left, value);
    else if (value > node->data)
      node->right = insert(node->right, value);

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
    if (node == nullptr)
      return false;
    if (node->data == value)
      return true;
    else if (value < node->data)
      return search(node->left, value);
    else
      return search(node->right, value);
  }

public:
  BST() { root = nullptr; }

  void insert(int value) { root = insert(root, value); }

  void inorder() {
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
  }

  void preorder() {
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
  }

  void postorder() {
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
  }

  void search(int value) {
    if (search(root, value))
      cout << value << " found in BST." << endl;
    else
      cout << value << " not found in BST." << endl;
  }
};

int main() {
  BST tree;

  int num, temp;
  cout << "How many node do you want to input: ";
  cin >> num;

  cout << "Input numbers: ";
  for (int i = 0; i < num; i++) {
    cin >> temp;
    tree.insert(temp);
  }

  tree.inorder();
  tree.preorder();
  tree.postorder();

  cout << "Search a number: ";
  cin >> temp;

  tree.search(temp);

  return 0;
}
