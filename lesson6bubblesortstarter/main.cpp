#import <vector>
#import <iostream>

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
  // Implement bubble sort.
}

int main() {
  std::vector<int> vec = {8, 3, 4, 1, 2};
  PrintVector(vec);
  BubbleSort(vec);
  PrintVector(vec);
  return 0;
}