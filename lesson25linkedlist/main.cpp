#include <iostream>

struct Node {
  int data;
  Node* next;
};

int main() {
  // Store head of our linked list
  Node* head = nullptr;

  // Insert new node into our linked list (empty)
  head = new Node;
  head->data = 0;
  head->next = nullptr;

  // Insert new nodes into our linked list (not empty)
  for (int i = 1; i <= 4; i++) {
    Node* temp = new Node;
    temp->data = i;
    temp->next = head;
    head = temp; 
  }

  // Iterate through our linked list using a while loop
  Node* curr = head;
  while (curr != nullptr) {
    std::cout << curr->data << " -> ";
    curr = curr->next;
  }
  std::cout << "NULL\n";

  // Remove node from front of our linked list 
  if (head != nullptr) {
    Node* node_to_delete = head;
    head = head->next;
    delete node_to_delete;
  }

  // Remove node from back of our linked list
  if (head != nullptr && head->next == nullptr) {
    delete head;
    head = nullptr;
  } else if (head != nullptr) {
    Node* second_to_last = head;
    Node* last = head->next;
    while (last->next != nullptr) {
      second_to_last = last;
      last = last->next;
    }
    delete last;
    second_to_last->next = nullptr;
  }

  // Iterate through our linked list using a while loop
  curr = head;
  while (curr != nullptr) {
    std::cout << curr->data << " -> ";
    curr = curr->next;
  }
  std::cout << "NULL\n";

  // Remove all elements from our linked list 
  while (head != nullptr) {
    curr = head->next;
    delete head;
    head = curr;
  }
}