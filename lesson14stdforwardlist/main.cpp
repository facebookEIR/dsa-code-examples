#include <forward_list>
#include <iostream>
#include <iterator>

void PrintForwardList(std::forward_list<int> list) {
  std::forward_list<int>::iterator iter; 
  for (iter = list.begin(); iter != list.end(); iter++) {
    std::cout << *iter << " -> ";
  }
  std::cout << "NULL\n";
}

int main() {
  std::forward_list<int> a_list; // Declares a list of integers
  std::forward_list<int> z_list = {}; // Initializes an empty list of integers
  std::forward_list<int> s_list = {1, 2, 3, 4}; // Initializes a list of 4 integers

  s_list.pop_front(); // Remove from front
  s_list.push_front(5); // Insert 5 at front
  s_list.insert_after(s_list.begin(), 6); // Insert 6 AFTER the beginning (pos 1)

  std::forward_list<int>::iterator new_iter = s_list.begin();
  std::advance(new_iter, 2);
  s_list.insert_after(new_iter, 7); // Insert 7 AFTER pos 2 (in pos 3)

  PrintForwardList(s_list);
}
