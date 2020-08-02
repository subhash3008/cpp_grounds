#include <iostream>
#include <plog/Log.h>

int getInteger() {
  PLOGD << "getINTEGER() called";
  int num{};
  std::cout << "Enter an integer  : \n"; 
  std::cin >> num;
  return num;
}

int getDouble() {
  PLOGD << "getDouble() called";
  double num{};
  std::cout << "Enter a double value :\n";
  std::cin >> num;
  return num;
}

int getChar() {
  return 'a';
}