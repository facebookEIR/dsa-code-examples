#include <iostream>
#include <list>
#include <queue>
#include <vector>

int main() {
  // Defines an empty queue of integers
  std::queue<int> q = std::queue<int>();
   
  int sz = q.size(); // Get size: sz = 0
  std::cout << "Get size: sz = " << sz << std::endl;

  q.push(3);
  int f = q.front(); // Get front: f = 3
  std::cout << "Get front: f = " << f << std::endl;
  int b = q.back(); // Get back: b = 3
  std::cout << "Get back: b = " << b << std::endl;

  q.push(6);
  b = q.back(); // Get back: b = 6
  std::cout << "Get back: b = " << b << std::endl;

  q.push(1);
  b = q.back(); // Get back: b = 1
  std::cout << "Get back: b = " << b << std::endl;
  sz = q.size(); // Get size: sz = 3
  std::cout << "Get size: sz = " << sz << std::endl;

  q.pop();
  b = q.back(); // Get back: b = 1
  std::cout << "Get back: b = " << b << std::endl;
  f = q.front(); // Get front: f = 6
  std::cout << "Get front: f = " << f << std::endl;
  sz = q.size(); // Get size: sz = 2
  std::cout << "Get size: sz = " << sz << std::endl;

  return 0;
}


