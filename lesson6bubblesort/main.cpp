#include <vector>
#include <iostream>

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

void BubbleSort(std::vector<int> &vec) {
  for (int i = 0; i < vec.size() - 1; i++) {
    for (int j = 0; j < vec.size() - i - 1; j++) {
      if (vec[j] > vec[j + 1]) {
        Swap(vec, j, j + 1);
      }
    }
  }
}

int main() {
  std::vector<int> vec = { 8, 3, 4, 1, 2 };
  PrintVector(vec);
  BubbleSort(vec);
  PrintVector(vec);
  return 0;
}