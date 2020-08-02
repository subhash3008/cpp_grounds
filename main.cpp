#include <iostream>
#include <plog/Log.h>
#include "plog/Initializers/RollingFileInitializer.h"

// Header Files
#include "calculator.h"
#include "get_input.h"

int main() {
//    int num1{ 0 };
//    int num2{ 0 };
//    std::cout << "Enter one integer : " << '\n';
//    std::cin >> num1;
//    std::cout << "Enter second integer : " << '\n';
//    std::cin >> num2;
//    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n';
//    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n';
  plog::init(plog::debug, "Logfile.txt");
  PLOGD << "main() called";
  
  double num{ getDouble() };
  double num2{ getDouble() };
  char operation{};
  std::cout << "Enter one of the following : +, -, * or / : \n";
  std::cin >> operation;
  std::cout << num << " " << operation << " " << num2 << " is " << calculate(num, num2, operation) << '\n';
  return 0;
}