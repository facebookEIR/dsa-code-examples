#include<iostream>
#include <vector>

void PrintVector(const std::vector<int> &vec) {
  std::cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << "]" << std::endl;
}

void Merge(std::vector<int> &vec, int left, int mid, int right){
  int left_size = mid - left + 1;
  int right_size = right - mid;

  std::vector<int> left_vec(left_size, 0);
  for (int i = 0; i < left_size; i++) {
    left_vec[i] = vec[left + i];
  }

  std::vector<int> right_vec(right_size, 0);
  for (int j = 0; j < right_size; j++) {
    right_vec[j] = vec[mid + 1 + j];
  }

  int left_index = 0;
  int right_index = 0;
  int merged_index = left;
  while (left_index < left_size && right_index < right_size) {
    if (left_vec[left_index] <= right_vec[right_index]){
      vec[merged_index] = left_vec[left_index];
      left_index++;
      merged_index++;
    } else {
      vec[merged_index] = right_vec[right_index];
      right_index++;
      merged_index++;
    }
  }

  while (left_index < left_size) {
    vec[merged_index] = left_vec[left_index];
    left_index++;
    merged_index++;
  }

  while (right_index < right_size) {
    vec[merged_index] = right_vec[right_index] ;
    right_index++;
    merged_index++;
  }
}

void MergeSort(std::vector<int> &vec, int left, int right){
  if (left < right){
    int mid = (left + right)/ 2;
    MergeSort(vec, left, mid);
    MergeSort(vec, mid + 1, right);
    Merge(vec, left, mid, right);
  }
}

int main() {
  std::vector<int> vec = { 4, 6, 7, 2, 1, 10, 9, 3 };
  PrintVector(vec);
  MergeSort(vec, 0, vec.size() - 1);
  PrintVector(vec);
  return 0;
}