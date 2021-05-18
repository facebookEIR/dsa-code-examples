#include <iostream>

struct Node {
  int value;
  Node* left;
  Node* right;
};

Node* MakeBST() {
  Node *node_24 = new Node;
  node_24->value = 24;
  Node *node_18 = new Node;
  node_18->value = 18;
  Node *node_30 = new Node;
  node_30->value = 30;
  Node *node_10 = new Node;
  node_10->value = 10;
  Node *node_21 = new Node;
  node_21->value = 21;
  Node *node_27 = new Node;
  node_27->value = 27;
  Node *node_20 = new Node;
  node_20->value = 20;
  Node *node_22 = new Node;
  node_22->value = 22;

  node_24->left = node_18;
  node_24->right = node_30;
  node_18->left = node_10;
  node_18->right = node_21;
  node_30->left = node_27;
  node_30->right = nullptr;
  node_10->left = nullptr;
  node_10->right = nullptr;
  node_21->left = node_20;
  node_21->right = node_22;
  node_27->left = nullptr;
  node_27->right = nullptr;
  node_20->left = nullptr;
  node_20->right = nullptr;
  node_22->left = nullptr;
  node_22->right = nullptr;

  return node_24;
}

bool BinarySearch(Node *root, int n) {
  if (root == nullptr) {
    return false;
  } else if (root->value == n) {
    return true;
  } else if (root->value < n) {
    return BinarySearch(root->right, n);
  } else {
    return BinarySearch(root->left, n);
  }
}

int main() {
  Node *root = MakeBST();

  std::cout << 24 << (BinarySearch(root, 24) ? " IS " : " is NOT ") << "in the BST" << std::endl;
  std::cout << 22 << (BinarySearch(root, 22) ? " IS " : " is NOT ") << "in the BST" << std::endl;
  std::cout << 5 << (BinarySearch(root, 5) ? " IS " : " is NOT ") << "in the BST" << std::endl;
}