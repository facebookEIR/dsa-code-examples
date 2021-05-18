#include <iostream>

int SumToN(int n) {
 if (n == 0) {
   return 0;
 }
 return SumToN(n - 1) + n;
}

int main() {
  int n = 0;

  std::cout << "Enter number to sum: ";
  std::cin >> n;
  std::cout << "Sum: " << SumToN(n) << std::endl;

  return 0;
}