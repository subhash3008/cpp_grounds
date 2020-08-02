#include <iostream>
#include "constants.h"

double getTowerHeight() {
  double height{};
  std::cout << "Enter the height of tower in meters : ";
  std::cin >> height;
  return height;
}

double getDistanceFallen(int seconds) {
  double distanceFallen{ 0 };
  distanceFallen = .5 * GRAVITY * (seconds * seconds);
  return distanceFallen;
}