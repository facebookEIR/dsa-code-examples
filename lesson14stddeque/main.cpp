#include <iostream>
#include <deque>

int main() {
  // Defines an empty deque of integers
  std::deque<int> d = std::deque<int>();
  int sz = d.size(); // Get size: sz = 0
  std::cout << "Get size: sz = " << sz << std::endl;

  d.push_back(3);
  int f = d.front(); // Get front: f = 3
  std::cout << "Get front: f = " << f << std::endl;
  int b = d.back(); // Get back: b = 3
  std::cout << "Get back: b = " << b << std::endl;

  d.push_back(6);
  b = d.back(); // Get back: b = 6
  std::cout << "Get back: b = " << b << std::endl;

  d.push_front(1);
  f = d.front(); // Get front: f = 1
  std::cout << "Get front: f = " << f << std::endl;
  sz = d.size(); // Get size: sz = 3
  std::cout << "Get size: sz = " << sz << std::endl;

  d.pop_front();
  f = d.front(); // Get front: f = 3
  std::cout << "Get front: f = " << f << std::endl;
  b = d.back(); // Get back: b = 6
  std::cout << "Get back: b = " << b << std::endl;
  sz = d.size(); // Get size: sz = 2
  std::cout << "Get size: sz = " << sz << std::endl;
}


