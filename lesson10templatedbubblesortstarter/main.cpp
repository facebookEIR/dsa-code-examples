#include <vector>
#include <iostream>

// 0. I've already converted PrintVector into a
// function template as an example.
template <typename T> // Added this line
void PrintVector(const std::vector<T> &vec) { // Modified this line
  std::cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << "]" << std::endl;
}

// 1. Make this function into a function template.
void Swap(std::vector<int> &vec, int x, int y) {
  int temp = vec[x];
  vec[x] = vec[y];
  vec[y] = temp;
}

// 2. Make this function into a function template
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
  std::vector<int> vec = { 1, 7, 2, 7, 3, 4, 3, 5, 6, 7, 8, 2, 3 };
  PrintVector(vec);
  BubbleSort(vec);
  PrintVector(vec);

  // 3. Uncomment the code below and make sure your function 
  // template works for floats! 
  // std::vector<float> vec2 = { 4.2, 1.5, 2.1, 7.9 };
  // PrintVector(vec2);
  // BubbleSort(vec2);
  // PrintVector(vec2);

  return 0;
}