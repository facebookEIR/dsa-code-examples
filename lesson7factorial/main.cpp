#include <iostream>

// I'm using this for compatibility with Lobster:
// https://lobster.eecs.umich.edu. 
using namespace std;

// NOT tail recursive
// int Factorial(int n) {
//   if (n == 0) {
//     return 1;
//   }
//   return n * Factorial(n - 1);
// }

// Tail recursive 
int FactorialHelper(int n, int prod) {
  if (n == 0) {
    return prod;
  }
  return FactorialHelper(n-1, prod * n);
}

int Factorial(int n) {
  return FactorialHelper(n, 1);
}

int main() {
  int n = 0;

  cout << "Enter number: ";
  cin >> n;
  cout << "Factorial: " << Factorial(n) << endl;

  return 0;
}