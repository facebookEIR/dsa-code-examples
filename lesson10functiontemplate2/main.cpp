#include <iostream>
#include <string>

int FindMaxInt(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

float FindMaxFloat(float a, float b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

std::string FindMaxString(std::string a, std::string b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

template <typename T>
T FindMax(T a, T b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  std::cout << "Int: " << std::endl;
  std::cout << FindMaxInt(2, 0) << std::endl;
  std::cout << FindMax(2, 0) << std::endl;

  std::cout << "Float: " << std::endl;
  std::cout << FindMaxFloat(5.0, 5.0) << std::endl;
  std::cout << FindMax(5.0, 5.0) << std::endl;

  std::cout << "String: " << std::endl;
  std::cout << FindMaxString("hello", "world") << std::endl;
  std::cout << FindMax("hello", "world") << std::endl;
}