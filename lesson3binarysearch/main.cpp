#include <iostream>

// Input: sorted integer array, integer query
// Output: integer representing index of query in array (or -1 
// if query is not in array) 
int BinarySearch(int array[], int size, int query) { 
  int lower_bound = 0;
	int upper_bound = size - 1;

  // Iterate repeatedly until we've found the spot where the value should be
  while (lower_bound <= upper_bound) {
    // Take a guess
    int guess = (lower_bound + upper_bound) / 2;

    // Did we find the value?
    if (array[guess] == query) {
      return guess;
    }
    // If we're too low, re-search the second half
    else if (array[guess] < query) {
      lower_bound = guess + 1;
    // If we're too high, re-search the first half
    } else {
      upper_bound = guess - 1;
    }
  }

  // If we haven't found the value, we return false
  return -1;
}

int main() {
  int a[] = {1,5,6,8,9,10,23,42,59,73,105}; 
  for (int i = 0; i < 11; i++) {
    std::cout << BinarySearch(a, 11, a[i]) << std::endl;
  }
}
