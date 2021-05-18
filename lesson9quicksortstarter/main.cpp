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

int Partition(std::vector<int> &vec, int left, int right) {
  // Implement this function;
  return left;
}

void QuickSort(std::vector<int> &vec, int left, int right) {
  // Implement this function recursively.
}

int main() {
  std::vector<int> vec = {3, 6, 7, 2, 1, 5, 8, 4};
  PrintVector(vec);
  QuickSort(vec, 0, vec.size() - 1);
  PrintVector(vec);
  return 0;
}