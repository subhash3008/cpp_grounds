#include <iostream>
#include "get_input.h"
#include "handler.h"

int main() {
  int num{getInteger()};
  std::cout << num << std::endl;
  printBinary(num);
  return 0;
}
