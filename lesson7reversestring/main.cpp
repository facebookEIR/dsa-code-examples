#include <iostream>
#include <string>
#include <sstream>

// Recursive solution
std::string ReverseString(std::string str) {
  if (str.length() <= 1) {
    return str;
  }
  return ReverseString(str.substr(1)) + str[0];
}

// Iterative solution
// std::string ReverseString(std::string str) {
//   std::string reversed = "";
//   for (int i = str.length() - 1; i >= 0; i--) {
//     reversed += str[i];
//   }
//   return reversed;
// }

int main() {
  std::string str;
  std::cout << "Enter string: ";
  std::getline(std::cin, str);
  std::cout << "Reversed: " << ReverseString(str) << std::endl;

  return 0;
}
