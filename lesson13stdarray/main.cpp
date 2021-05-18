#include <array>
#include <iostream>


template<typename T, std::size_t SIZE>
void PrintArray(std::array<T, SIZE> arr) {
  std::cout << "[ ";
  for (int i = 0; i < arr.size(); i++){
    std::cout << arr[i] << " ";
  }
  std::cout << "]" << std::endl;
}

int main() {
  std::array<char, 6> arr_one = {'a', 'b', 'c', 'd', 'e', 'f'};
  std::array<int, 4> arr_two = {1, 2, 3, 4}; 
  std::array<int, 7> arr_three = {};
  std::array<int, 5> arr_four;

  PrintArray(arr_one);
  PrintArray(arr_two);
  PrintArray(arr_three);
  PrintArray(arr_four);
}