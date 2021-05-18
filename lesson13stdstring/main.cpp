#include <string>
#include <iostream>

int main() {
  std::string str; //declaration
  str = "algorythm"; // assignment
  std::cout << str << std::endl;
  char first = str[0]; // access: first = 'd'
  str[5] = 'i'; // modification: str = "algorithm"
  std::cout << str << std::endl;
}