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
  int pivot = vec[right]; // Select last element as pivot
  int small_index = left - 1; // Keeps track of last element smaller than pivot

  for (int curr_index = left; curr_index < right; curr_index++) {  
    if (vec[curr_index] < pivot) {
      small_index++;
      Swap(vec, small_index, curr_index);
    }
  }

  Swap(vec, small_index + 1, right); // Swap pivot with first element larger than pivot
  return small_index + 1; // Return new location of pivot
}

void QuickSort(std::vector<int> &vec, int left, int right) {
  if (left < right){
    int pivot = Partition(vec, left, right);
    QuickSort(vec, left, pivot - 1);
    QuickSort(vec, pivot + 1, right);
  }
}

int main() {
  std::vector<int> vec = { 3, 6, 7, 2, 1, 5, 8, 4 };
  PrintVector(vec);
  QuickSort(vec, 0, vec.size() - 1);
  PrintVector(vec);
  return 0;
}