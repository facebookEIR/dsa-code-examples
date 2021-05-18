#include <iostream> 
#include <unordered_set>

int main() {
  std::unordered_set<int> set = std::unordered_set<int>();
  bool is_empty = set.empty(); // is_empty = true
  std::cout << "Set is " << (is_empty ? "empty" : "not empty") << std::endl;

  std::unordered_set<int> set2 = {1, 2, 3, 4, 5};
  int n = set2.size(); // n = 5

  set2.insert(6); // set = {1, 2, 3, 6, 4, 5}
  n = set2.size(); // n = 6
  std::cout << "n = " << n << std::endl;

  set2.insert(0); // set = {1, 0, 2, 3, 6, 4, 5}
  n = set2.size(); // n = 7
  std::cout << "n = " << n << std::endl;

  set2.insert(5); // set = {1, 0, 2, 3, 6, 4, 5}
                 // no change since 5 already in set
  n = set2.size(); // n = 7
  std::cout << "n = " << n << std::endl;

  set2.erase(5); // set = {1, 0, 2, 3, 6, 4}
  n = set2.size(); // n = 6
  std::cout << "n = " << n << std::endl;

  set2.erase(8); // set = {1, 0, 2, 3, 6, 4}
                // no change since 8 not in set
  n = set2.size(); // n = 6
  std::cout << "n = " << n << std::endl;

  bool has_6 = set2.count(6) == 1; // has_6 = true
  if (has_6) {
    std::cout << "Set contains 6" << std::endl; 
  }

  // iterate through set; print order not guaranteed
  for (const int &elem : set2) {
    std::cout << elem << " ";
  }
}