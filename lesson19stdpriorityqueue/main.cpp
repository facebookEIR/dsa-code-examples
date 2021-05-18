#include <iostream> 
#include <queue>

int main() {
  std::priority_queue<int> pq = std::priority_queue<int>();
  bool is_empty = pq.empty(); // is_empty = true
  std::cout << "Priority queue is " << (is_empty ? "empty" : "not empty") << std::endl;

  pq.push(4);
  int top = pq.top(); // top = 4
  std::cout << "top = " << top << std::endl;
  int n = pq.size(); // n = 1

  pq.push(2);
  top = pq.top(); // top = 4
  std::cout << "top = " << top << std::endl;
  n = pq.size(); // n = 2
  std::cout << "n = " << n << std::endl;

  pq.push(7);
  top = pq.top(); // top = 7
  std::cout << "top = " << top << std::endl;

  pq.push(2);
  top = pq.top(); // top = 7
  std::cout << "top = " << top << std::endl;
  n = pq.size(); // n = 4
  std::cout << "n = " << n << std::endl;

  pq.pop();
  top = pq.top(); // top = 4
  std::cout << "top = " << top << std::endl;

  pq.pop();
  top = pq.top(); // top = 2
  std::cout << "top = " << top << std::endl;
  n = pq.size(); // n = 2
  std::cout << "n = " << n << std::endl;
}