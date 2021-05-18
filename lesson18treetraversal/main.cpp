#include <iostream>
#include <queue>

struct BinaryTreeNode {
  char value;
  BinaryTreeNode* left;
  BinaryTreeNode* right;
};

BinaryTreeNode* MakeBinaryTree() {
  BinaryTreeNode *a = new BinaryTreeNode;
  a->value = 'a';
  BinaryTreeNode *b = new BinaryTreeNode;
  b->value = 'b';
  BinaryTreeNode *c = new BinaryTreeNode;
  c->value = 'c';
  BinaryTreeNode *d = new BinaryTreeNode;
  d->value = 'd';
  BinaryTreeNode *e = new BinaryTreeNode;
  e->value = 'e';
  BinaryTreeNode *f = new BinaryTreeNode;
  f->value = 'f';
  BinaryTreeNode *g = new BinaryTreeNode;
  g->value = 'g';
  BinaryTreeNode *h = new BinaryTreeNode;
  h->value = 'h';

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;
  d->left = nullptr;
  d->right = nullptr;
  e->left = nullptr;
  e->right = nullptr;
  f->left = h;
  f->right = nullptr;
  g->left = nullptr;
  g->right = nullptr;
  h->left = nullptr;
  h->right = nullptr;
  return a;
}

void PreOrder(BinaryTreeNode *node) {
  if (node != nullptr) {
    std::cout << node->value << " ";
    PreOrder(node->left);
    PreOrder(node->right);
  }
}

void PostOrder(BinaryTreeNode *node) {
  if (node != nullptr) {
    PostOrder(node->left);
    PostOrder(node->right);
    std::cout << node->value << " ";
  }
}

void InOrder(BinaryTreeNode *node) {
  if (node != nullptr) {
    InOrder(node->left);
    std::cout << node->value << " ";
    InOrder(node->right);
  }
}

void LevelOrder(BinaryTreeNode *node) {
  if (node == nullptr) {
    return;
  }

  std::queue<BinaryTreeNode *> queue = std::queue<BinaryTreeNode *>();
  BinaryTreeNode *curr = nullptr;
  
  queue.push(node);
  while (!queue.empty()) {
    curr = queue.front();
    queue.pop();
    if (curr != nullptr) {
      std::cout << curr->value << " ";
      if (curr->left != nullptr) {
        queue.push(curr->left);
      }
      if (curr->right != nullptr) {
        queue.push(curr->right);
      }
    }
  }
}

int main() {
  BinaryTreeNode *root = MakeBinaryTree();

  std::cout << "Pre-order: ";
  PreOrder(root);
  std::cout << std::endl;

  std::cout << "Post-order: ";
  PostOrder(root);
  std::cout << std::endl;

  std::cout << "In-order: ";
  InOrder(root);
  std::cout << std::endl;

  std::cout << "Level-order: ";
  LevelOrder(root);
  std::cout << std::endl;
}