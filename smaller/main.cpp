#include <iostream>
#include "get_input.h"

int main() {
  int num1{ getInteger() };
  int num2{ getLargerNumber() };
  if (num2 < num1) {
    std::cout << "Swapping the values" << std::endl;
    int temp{num1};
    num1 = num2;
    num2 = temp;
    std::cout << "The smaller value is " << num1 << std::endl;
    std::cout << "The larger value is " << num2 << std::endl;
  }
  return 0;
}