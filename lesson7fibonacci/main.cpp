#include <iostream>

int Fibonacci(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return Fibonacci(n-1) + Fibonacci(n-2);
}

int main() {
  int n = 0;

  std::cout << "Enter number: ";
  std::cin >> n;
  std::cout << "Fibonacci: " << Fibonacci(n) << std::endl;

  return 0;
}