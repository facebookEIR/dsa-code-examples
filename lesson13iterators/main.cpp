#include <iterator>
#include <vector>
#include <iostream>

int main() { 
  std::vector<double> vec = {1.1, 2.2, 3.3, 4.4, 5.5};
    
  // Declaring iterator to a vector 
  std::vector<double>::iterator iter; 
    
  // Printing vector elements using begin() and end() 
  std::cout << "The vector elements are: "; 
  for (iter = vec.begin(); iter < vec.end(); iter++){
    std::cout << *iter << " ";
  }
} 