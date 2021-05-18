#include <iostream>
#include "circ_arr_queue.h"

void PrintFront(CircArrQueue* queue) {
  try {
    int front = queue->Front();
    std::cout<< "Front: " << front << std::endl;
  } catch (QueueEmpty) {
    std::cout << "Error: Queue is empty" << std::endl;
  }
}

void PrintSize(CircArrQueue* queue) {
  std::cout<< "Size: " << queue->Size() << std::endl;
}

int main() {
  CircArrQueue* queue = new CircArrQueue();

  for (int i = 1 ; i <= 3; i++) {
    queue->Enqueue(i);
    PrintFront(queue);
    PrintSize(queue);
  }

  while(!queue->IsEmpty()) {
    queue->Dequeue();
    PrintFront(queue);
    PrintSize(queue);
  }

  delete queue;
}