#include <list>
#include <iostream>
#include <iterator>

void PrintList(std::list<int> list) {
  std::list<int>::iterator iter; 
  for (iter = list.begin(); iter != list.end(); iter++) {
    std::cout << *iter << " -> ";
  }
  std::cout << "NULL\n";
}

int main() {
  std::list<int> g_list; // Declares a list of integers
  std::list<int> m_list = {}; // Initializes an empty list of integers
  std::list<int> s_list = {1, 2, 3, 4}; // Initializes a list of 4 integers

  PrintList(s_list);
  std::cout << "Size: " << s_list.size() << std::endl;

  s_list.pop_front(); // Remove from front
  s_list.pop_back(); // Remove from back - can’t do with forward_list!
  s_list.push_front(5); // Insert at front
  s_list.push_back(6); // Insert at back - can’t do with forward_list!

  s_list.insert(s_list.begin(), 7); // Insert 7 BEFORE the beginning (new pos 0)
  std::list<int>::iterator iter = s_list.begin();
  std::advance(iter, 2);
  s_list.insert(iter, 8); // Insert 8 BEFORE pos 2 (new pos 2)

  PrintList(s_list);
  std::cout << "Size: " << s_list.size() << std::endl;
}
