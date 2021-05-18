#import <vector>
#import <iostream>

void PrintVector(const std::vector<int> &vec) {
  std::cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << "]" << std::endl;
}

void InsertionSort(std::vector<int> &vec) {
  for (int i = 1; i < vec.size(); i++) {
    int element = vec[i];
    int j = i - 1;
    while (j >= 0 && vec[j] > element) {
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = element;
  }
}

int main() {
  std::vector<int> vec = { 8, 3, 4, 1, 2 };
  PrintVector(vec);
  InsertionSort(vec);
  PrintVector(vec);
  return 0;
}