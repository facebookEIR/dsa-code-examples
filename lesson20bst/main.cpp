#include <iostream>

#include "bst.h"

void PrintContains(BST &bst, int n) {
  std::cout << "bst " << (bst.Contains(n) ? "contains " : "doesn't contain ") << n << std::endl;
}

void PrintMin(BST &bst) {
  std::cout << "min is " << bst.FindMin() << std::endl;
}

void PrintMax(BST &bst) {
  std::cout << "max is " << bst.FindMax() << std::endl;
}

int main() {
  BST bst = BST();

  bst.Insert(1);
  bst.Insert(3);
  bst.Insert(2);
  bst.Insert(4);
  bst.Insert(0);

  PrintContains(bst, 0);
  PrintContains(bst, 1);
  PrintContains(bst, 2);
  PrintContains(bst, 3);
  PrintContains(bst, 4);

  PrintMin(bst);
  PrintMax(bst);

  bst.Remove(4);
  bst.Remove(0);

  PrintContains(bst, 0);
  PrintContains(bst, 4);

  PrintMin(bst);
  PrintMax(bst);

  return 0;
}