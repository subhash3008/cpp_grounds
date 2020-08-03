#include <iostream>
#include <cmath>

int isEven(int num) {
  return num % 2;
}

void printBinary(int num) {
  for (int i = 7; i >=0; i--) {
    std::cout << isEven(num / std::pow(2.0, i));
  }
  std::cout << '\n';
}