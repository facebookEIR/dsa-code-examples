#include <iostream>
#include <string>

int CompareInt(int a, int b) {
  if (a < b) {
    return -1;
  } else if (a == b) {
    return 0;
  } else {
    return 1;
  }
}

int CompareFloat(float a, float b) {
  if (a < b) {
    return -1;
  } else if (a == b) {
    return 0;
  } else {
    return 1;
  }
}

int CompareString(std::string a, std::string b) {
  if (a < b) {
    return -1;
  } else if (a == b) {
    return 0;
  } else {
    return 1;
  }
}

template <typename Item>
int Compare(Item a, Item b) {
  if (a < b) {
    return -1;
  } else if (a == b) {
    return 0;
  } else {
    return 1;
  }
}

int main() {
  std::cout << "Int: " << std::endl;
  std::cout << CompareInt(2, 0) << std::endl;
  std::cout << Compare(2, 0) << std::endl;

  std::cout << "Float: " << std::endl;
  std::cout << CompareFloat(5.0, 5.0) << std::endl;
  std::cout << Compare(5.0, 5.0) << std::endl;

  std::cout << "String: " << std::endl;
  std::cout << CompareString("hello", "world") << std::endl;
  std::cout << Compare("hello", "world") << std::endl;
}