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

void SelectionSort(std::vector<int> &vec) {
  for (int i = 0; i < vec.size(); i++) {
    int min = i;
    for (int j = i+1; j < vec.size(); j++) {
      if (vec[j] < vec[min]) {
        min = j;
      }
    }
    Swap(vec, i, min);
  }
}

int main() {
  std::vector<int> vec = { 8, 3, 4, 1, 2 };
  PrintVector(vec);
  SelectionSort(vec);
  PrintVector(vec);
  return 0;
}