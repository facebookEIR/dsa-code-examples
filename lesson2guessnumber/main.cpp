#include <iostream>

void GuessMyNumber() {
  std::cout << "Pick a number between 0 and 15, inclusive." << std::endl;
  std::cout << "If it's too high, type 1. If it's too low, type -1. If it's right, type 0." << std::endl;

  int result = 1;
  int start = 0;
  int end = 31;

  while (result != 0) {
    int guess = (start + end) / 2;
    std::cout << "My guess is: " << guess << std::endl;
    std::cin >> result;
    if (result == 1) { // Too high, move the end
      end = guess - 1;
    } else if (result == -1) { // Too low, move the start
      start = guess + 1;
    }
  }

  std::cout << "Nice! Thanks for playing!" << std::endl;
}

int main() {
  GuessMyNumber();
}