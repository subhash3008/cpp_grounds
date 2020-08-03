#include <iostream>

int getInteger(){
  int num{};
  std::cout << "Enter a number between 0 and 255 : ";
  std::cin >> num;
  return num;
}