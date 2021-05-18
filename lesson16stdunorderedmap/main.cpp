#include <iostream> 
#include <string>
#include <unordered_map>

int main() {
  std::unordered_map<std::string, int> empty_map = std::unordered_map<std::string, int>();
  bool is_empty = empty_map.empty(); // is_empty = true
  std::cout << "Map is " << (is_empty ? "empty" : "not empty") << std::endl;

  std::unordered_map<std::string, int> map = {
    {"banana", 3},
    {"mango", 5}
  };
  int n = map.size(); // n = 2
  std::cout << "n = " << n << std::endl;

  int value = map["mango"]; // value = 5
  std::cout << "value = " << value << std::endl;
  map["mango"] = 6; 
  value = map["mango"]; // value = 6
  std::cout << "value = " << value << std::endl;
  n = map.size(); // n = 2
  std::cout << "n = " << n << std::endl;

  map.erase("banana"); 
  n = map.size(); // n = 1
  std::cout << "n = " << n << std::endl;
  map.erase("pear");
  n = map.size(); // n = 1
  std::cout << "n = " << n << std::endl;

  map.insert({"kiwi", 2}); 
  map.insert({"apple", 2}); 
  n = map.size(); // n = 3
  std::cout << "n = " << n << std::endl;

  bool has_apple = map.count("apple") == 1; // has_apple = true
  if (has_apple) {
    std::cout << "Map contains apple" << std::endl; 
  }

  // iterate through map; print order not guaranteed
  std::cout << "Printing map entries:" << std::endl;
  for (const std::pair<const std::string, int> &entry : map) {
    std::cout << entry.first << ", " << entry.second << std::endl;
  }
}