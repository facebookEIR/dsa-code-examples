#ifndef __BST_H__
#define __BST_H__

class treeEmpty {};

class BST {
public:
  bool Contains(int elem);
  int FindMin(); 
  int FindMax();
  void Insert(int elem);
  void Remove(int elem);
  BST();
  ~BST();

private:
  struct Node {
    int   value; // The value stored at this node
    Node*  left; // Pointer to left child
    Node* right; // Pointer to right child
  };

  Node* root;

  bool ContainsHelper(Node *node, int elem);
  int FindMinHelper(Node *node);
  int FindMaxHelper(Node *node);
  void InsertHelper(Node *node, int elem);
  Node* RemoveHelper(Node *node, int elem);
};

#endif /* __BST_H__ */