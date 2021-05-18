#include <iostream>

// Input: integer array, integer query
// Output: integer representing index of query in array
// (or -1 if query is not in array) 
int LinearSearch(int array[], int size, int query) { 
  for (int i = 0; i < size; i++) {
    if (array[i] == query) { 
      return i;
    }
  }
  return -1;
}

int main() {
  int array[] = {6, 2, 4, 7, 9, 3, 12}; 
  std::cout << LinearSearch(array, 7, 3) << std::endl;
}