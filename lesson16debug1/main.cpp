#include <iostream>
#include <string>
#include <stack>

int main() {
  std::stack<std::string> browser_history = {};

  std::string input = "";
  std::cout << "Welcome to my browser!" << std::endl;
  std::cout << "Type a URL to go to a website. Or type BACK to return to a previous website or EXIT to exit." << std::endl;
  while (true) {
    std::cin >> input;
    if (input == "EXIT") {
      break;
    } else if (input == "BACK") {
      std::string url = browser_history.top();
      browser_history.pop();
      std::cout << "You are at " << url << std::endl;
    } else {
      browser_history.push(input);
      std::cout << "You are at " << input << std::endl;    
    }
  }
}