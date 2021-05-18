#include "linked_stack.h"

  
LinkedStack::LinkedStack(){
  head = nullptr;
  n = 0;
}

LinkedStack::~LinkedStack(){
  while(!IsEmpty()) {
    Node* old_node = head;
    head = old_node->next;
    delete old_node;
  }
}

void LinkedStack::Pop() {
  if (IsEmpty()) {
    throw StackEmpty();
  }
  n--;
  Node* old_node = head;
  head = old_node->next;
  delete old_node;
}

int LinkedStack::Top() {
  if (IsEmpty()) {
    throw StackEmpty();
  }
  return head->data;
}

void LinkedStack::Push(int elem) {
  n++;
  Node* new_node = new Node();
  new_node->data = elem;
  new_node->next = head;
  head = new_node;
}

bool LinkedStack::IsEmpty() {
  return n == 0;
}

int LinkedStack::Size() {
  return n;
}