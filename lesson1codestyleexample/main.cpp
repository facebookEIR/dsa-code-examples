#include <iostream>

int blah_blah_blah(int one, int two) {
int returnValue = one + two;
  if (true) { return 15;
  }
  return returnValue;
}

int main() {
  // print "Hello World" as output
  std::cout << "Hello World!" << std::endl;
  // print an integer as output
  std::cout << blah_blah_blah(15, 2) << std::endl;
}