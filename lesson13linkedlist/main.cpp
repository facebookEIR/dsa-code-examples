#include <iostream>

struct Node {
  double data;
  Node* next;
};

int main() {
  // Let's create our first node!
  Node* head = new Node; // Allocates memory on heap
  head->data = .5;
  Node* current = head;

  // Let's create the rest of the nodes
  for (double i = 1; i <= 2.0; i+=.5) {
    Node* temp = new Node;
    temp->data = i;
    current->next = temp;
    current = temp;
  }
  current->next = nullptr;

  // Let's print out our linked list
  for (Node* iter = head; iter != nullptr; iter = iter->next) {
    std::cout << iter->data << " -> ";
  }
  std::cout << "NULL\n";

  // Let's release our memory!
  while (head != nullptr) {
    Node* iter = head->next;
    delete head;
    head = iter;
  }
}