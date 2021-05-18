#include <iostream>
#include <list>
#include <stack>
#include <vector>

int main() {
  // Declares a stack of integers using a list (doubly linked list) for storage
  std::stack<int, std::list<int>> s = std::stack<int, std::list<int>>();

  // Declares a stack of integers using a vector (dynamic array) for storage
  std::stack<int, std::vector<int>> s2 = std::stack<int, std::vector<int>>();

  int sz = s.size(); // Get size: sz = 0
  std::cout << "Get size: sz = " << sz << std::endl;

  s.push(3);
  sz = s.size(); // Get size: sz = 1
  std::cout << "Get size: sz = " << sz << std::endl;
  int top = s.top(); // Get top: top = 3
  std::cout << "Get top: top = " << top << std::endl;

  s.push(6);
  sz = s.size(); // Get size: sz = 2
  std::cout << "Get size: sz = " << sz << std::endl;
  top = s.top(); // Get top: top = 6
  std::cout << "Get top: top = " << top << std::endl;

  s.push(1);
  sz = s.size(); // Get size: sz = 3
  std::cout << "Get size: sz = " << sz << std::endl;
  top = s.top(); // Get top: top = 1
  std::cout << "Get top: top = " << top << std::endl;

  s.pop();
  sz = s.size(); // Get size: sz = 2
  std::cout << "Get size: sz = " << sz << std::endl;
  top = s.top(); // Get top: top = 6
  std::cout << "Get top: top = " << top << std::endl;

  return 0;
}

