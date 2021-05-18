#include <iostream>
#include "linked_stack.h"

void PrintTop(LinkedStack* stack) {
  try {
    int top = stack->Top();
    std::cout<< "Top: " << top << std::endl;
  } catch (StackEmpty) {
    std::cout << "Error: Stack is empty" << std::endl;
  }
}

void PrintSize(LinkedStack* stack) {
  std::cout<< "Size: " << stack->Size() << std::endl;
}

int main() {
  LinkedStack* stack = new LinkedStack();

  for (int i = 1 ; i <= 3; i++) {
    stack->Push(i);
    PrintTop(stack);
    PrintSize(stack);
  }

  while(!(stack->IsEmpty())) {
    stack->Pop();
    PrintTop(stack);
    PrintSize(stack);
  }

  delete stack;
}