#include "circ_arr_queue.h"
  

CircArrQueue::CircArrQueue(){
  n = 0;
  front = 0;
  back = 0;
  capacity = 10;
  arr = new int[capacity];
}

CircArrQueue::~CircArrQueue(){
  if (arr != nullptr) {
    delete[] arr;
  }
}

void CircArrQueue::Enqueue(int elem) {
  if (n == capacity) {
    throw QueueFull();
  }
  arr[back] = elem;
  back = (back + 1) % capacity;
  n++;
}

void CircArrQueue::Dequeue() {
  if (IsEmpty()) {
    throw QueueEmpty();
  }
  front = (front + 1) % capacity;
  n--;
}

int CircArrQueue::Front() {
  if (IsEmpty()) {
    throw QueueEmpty();
  }
  return arr[front];
}

bool CircArrQueue::IsEmpty() {
  return n == 0;
}

int CircArrQueue::Size() {
  return n;
}