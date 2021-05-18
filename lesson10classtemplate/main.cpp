#include <iostream>
#include <string>
#include "pair.h"

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
  std::string str1 = "eggs";
  Pair<std::string, int> pair1 (str1, 3);
  std::string str2 = "flour";
  Pair<std::string, int> pair2 (str2, 2);
  std::cout << "Compare (\"eggs\", 3) with (\"flour\", 2): " << Compare(pair1, pair2) << std::endl;
  std::cout << "Compare (\"eggs\", 3) with (\"eggs\", 3): " << Compare(pair1, pair1) << std::endl;
  std::cout << "Compare (\"flour\", 2) with (\"eggs\", 3): " << Compare(pair2, pair1) << std::endl;
}