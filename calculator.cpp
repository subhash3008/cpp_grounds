#include "calculator.h"

double calculate(double num1, double num2, char operation) {
  switch(operation) {
    case '+': return num1 + num2;
    case '-': return num1 - num2;
    case '*': return num1 * num2;
    case '/': return num2 == 0.0 ? 0.0 : (num1 / num2);
    default: return 0.0;
  }
}