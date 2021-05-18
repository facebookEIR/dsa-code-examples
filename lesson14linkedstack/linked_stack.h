#ifndef __LINKED_STACK_H__
#define __LINKED_STACK_H__


#include "node.h"

// Exception classes
class StackEmpty {};

// NOTE: This simplified example does not include overriding 
// copy constructor or assignment operator, but you should do this
// in a full implementation of the LinkedStack class. 
class LinkedStack {
  private:
    Node* head;
    int n;

  public: 
    LinkedStack(); // Constructor
    ~LinkedStack(); // Destructor
    void Pop();
    int Top();
    void Push(int);
    bool IsEmpty();
    int Size(); 
};

#endif /* __LINKED_STACK_H__ */