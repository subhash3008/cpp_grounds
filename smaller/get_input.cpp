#include <iostream>

int getInteger() {
  std::cout << "Enter an integer : ";
  int num{};
  std::cin >> num;
  return num;
}

int getLargerNumber() {
  std::cout << "Enter a larger integer : ";
  int num{};
  std::cin >> num;
  return num;
}