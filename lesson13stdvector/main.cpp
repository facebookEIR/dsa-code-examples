#include <vector>
#include <string>
#include <iostream>

template <typename T>
void PrintVector(const std::vector<T> &vec) {
  std::cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << "]" << std::endl;
}

int main() {
  std::vector<char> vec; // Declares a vector of characters
  std::vector<int> vec2 = {1, 2, 3, 4}; // Defines a vector of 4 specific ints
  std::vector<float> vec3(5, 1.5); // Defines a vector of 5 floats (all 1.5s)
  std::vector<std::string> vec4 = {}; // Defines an empty vector of strings

  PrintVector(vec);
  PrintVector(vec2);
  PrintVector(vec3);
  PrintVector(vec4);
}

