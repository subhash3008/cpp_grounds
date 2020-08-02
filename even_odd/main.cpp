#include <iostream>
#include "is_even.h"
#include "get_input.h"

int main() {
  int num{ getInteger() };
  if (isEven(num)) {
    std::cout << num << " is Even.\n";
  } else {
    std::cout << num << " is Odd.\n";
  }
  return 0;
}
