#include <iostream>

int getInteger() {
  std::cout << "Enter an integer : \n";
  int num{};
  std::cin >> num;
  return num;
}