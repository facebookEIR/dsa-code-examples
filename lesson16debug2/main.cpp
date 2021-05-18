#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::unordered_set<std::string> vips = {
    "karen@gmail.com",
    "alex@gmail.com",
  };

  std::string email;
  std::cout << "Welcome to my store!" << std::endl;
  std::cout << "Please enter your email address: ";
  std::cin >> email;

  if (vips.count(email) == 0) {
    std::cout << "Welcome, VIP! You get a 10% discount." << std::endl;
  }
  std::cout << "Welcome! If you'd like a 10% discount, please join our loyalty program." << std::endl;
}
