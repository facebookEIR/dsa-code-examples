#include <iostream>
#include <queue>
#include <string>

int main() {
  std::queue<std::string> queue = std::queue<std::string>();
  queue.push("Himaja");
  queue.push("Sule");
  queue.push("Charlie");

  std::string name;
  std::cout << "Welcome to the customer service desk!" << std::endl;
  std::cout << "Please enter your name to get in line: ";
  std::cin >> name;

  queue.push(name);
  
  std::cout << "Now helping the next person in line: " << queue.front() << std::endl;
  queue.pop();
  std::cout << "Now helping the next person in line: " << queue.front() << std::endl;
}