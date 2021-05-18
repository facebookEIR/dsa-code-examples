#include<iostream>
#include <vector>

void PrintVector(const std::vector<int> &vec) {
  std::cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << "]" << std::endl;
}

void Swap(std::vector<int> &vec, int x, int y) {
  int temp = vec[x];
  vec[x] = vec[y];
  vec[y] = temp;
} 

void Heapify(std::vector<int> &vec, int size, int root) { 
  int left = 2 * root + 1;
  int right = 2 * root + 2;

  int largest = root;
  if (left < size && vec[left] > vec[largest]) {
    largest = left;
  }
  if (right < size && vec[right] > vec[largest]) {
    largest = right;
  }

  if (largest != root) {
    Swap(vec, root, largest);
    Heapify(vec, size, largest);
  }
}

void HeapSort(std::vector<int> &vec) {
  // std::cout << "Part 1" << std::endl;

  int size = vec.size();
  for (int i = size / 2 - 1; i >= 0; i--) {
    // std::cout << "i = " << i << ": ";
    Heapify(vec, size, i);
    // PrintVector(vec);
  }

  // std::cout << "Part 2" << std::endl;
  for (int i = size - 1; i > 0; i--) {
    // std::cout << "i = " << i << ": ";
    Swap(vec, 0, i);
    Heapify(vec, i, 0);
    // PrintVector(vec);
  }
}

int main() {
  std::vector<int> vec = { 2, 3, 0, 6, 4, 9 };
  PrintVector(vec);
  HeapSort(vec);
  PrintVector(vec);
  return 0;
}