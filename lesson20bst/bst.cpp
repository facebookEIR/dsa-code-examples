#include "bst.h"

bool BST::Contains(int elem) {
  return ContainsHelper(root, elem);
}

bool BST::ContainsHelper(Node *node, int elem) {
  if (node == nullptr) {
    return false;
  } else if (node->value == elem) {
    return true;
  } else if (node->value < elem) {
    return ContainsHelper(node->right, elem);
  } else {
    return ContainsHelper(node->left, elem);
  }
}

int BST::FindMin() {
  if (root == nullptr) {
    throw treeEmpty();
  }
  return FindMinHelper(root);
}

int BST::FindMinHelper(Node *node) {
  if (node->left == nullptr) {
    return node->value;
  }
  return FindMinHelper(node->left);
}

int BST::FindMax() {
  if (root == nullptr) {
    throw treeEmpty();
  }
  return FindMaxHelper(root);
}

int BST::FindMaxHelper(Node *node) {
  if (node->right == nullptr) {
    return node->value;
  }
  return FindMaxHelper(node->right);
}

void BST::Insert(int elem) {
  if (root == nullptr) {
    root = new Node;
    root->value = elem;
    root->left = nullptr;
    root->right = nullptr;
  } else {
    InsertHelper(root, elem);
  }
}

void BST::InsertHelper(Node *node, int elem) {
  if (node->value < elem) {
    if (node->right == nullptr) {
      Node* new_node = new Node;
      new_node->value = elem;
      new_node->left = nullptr;
      new_node->right = nullptr;
      node->right = new_node;
    } else {
      InsertHelper(node->right, elem);
    }
  } else {
    if (node->left == nullptr) {
      Node* new_node = new Node;
      new_node->value = elem;
      new_node->left = nullptr;
      new_node->right = nullptr;
      node->left = new_node;
    } else {
      InsertHelper(node->left, elem);
    }
  }
}

void BST::Remove(int elem) {
  if (root == nullptr) {
    return;
  }
  RemoveHelper(root, elem);
}

BST::Node* BST::RemoveHelper(Node *node, int elem) {
  if (node == nullptr) {
    return node;
  }
  if (elem < node->value) {
    node->left = RemoveHelper(node->left, elem);
  } else if (elem > node->value) {
    node->right = RemoveHelper(node->right, elem);
  } else {
    if (node->left == nullptr){
      Node *temp = node->right;
      delete node;
      return temp;
    } else if (node->right == nullptr){
      Node *temp = node->left;
      delete node;
      return temp;
    }
    int min_value = FindMinHelper(node->right);
    node->value = min_value;
    node->right = RemoveHelper(node->right, min_value);
  }
  return node;
}

BST::BST() {
  root = nullptr;
}
 
BST::~BST() {}