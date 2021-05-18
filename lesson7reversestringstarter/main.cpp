#include <iostream>
#include <string>
#include <sstream>

std::string ReverseString(std::string str) {
  // Implement this function recursively. Don't forget
  // your base case! You might want to use these string 
  // methods in your function: 
  //   str.length() - returns length of str
  //   str.substr(i) - returns substring from index i to the end
  return "";
}

int main() {
  std::string str;
  std::cout << "Enter string: ";
  std::getline(std::cin, str);
  std::cout << "Reversed: " << ReverseString(str) << std::endl;

  return 0;
}
