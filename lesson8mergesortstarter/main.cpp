#include<iostream>
#include <vector>

void PrintVector(const std::vector<int> &vec) {
  std::cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << "]" << std::endl;
}

void Merge(std::vector<int> &vec, int left, int mid,  int right){
  // Implement this function.
}

void MergeSort(std::vector<int> &vec, int left, int right){
  // Implement this function.
}

int main() {
  std::vector<int> vec = {4, 6, 7, 2, 1, 10, 9, 3};
  PrintVector(vec);
  MergeSort(vec, 0, vec.size() - 1);
  PrintVector(vec);
  return 0;
}