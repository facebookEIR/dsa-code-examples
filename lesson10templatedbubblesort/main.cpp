#import <vector>
#import <iostream>

template <typename T>
void PrintVector(const std::vector<T> &vec) {
  std::cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << "]" << std::endl;
}

template <typename T>
void Swap(std::vector<T> &vec, int x, int y) {
  T temp = vec[x];
  vec[x] = vec[y];
  vec[y] = temp;
}

template <typename T>
void BubbleSort(std::vector<T> &vec) {
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

  std::vector<float> vec2 = { 4.2, 1.5, 2.1, 7.9 };
  PrintVector(vec2);
  BubbleSort(vec2);
  PrintVector(vec2);

  return 0;
}