#include <iostream>
#include "tower.h"

int main() {
  double towerHeight{ getTowerHeight() };
  double height{ towerHeight };
  int i{ 0 };
  while (height <= towerHeight) {
    height = getDistanceFallen(i);
    if (height < towerHeight) {
      std::cout << "At " << i << " seconds, the ball is at the height: " << towerHeight - height << " meters.\n";
    } else {
      std::cout << "At " << i << " seconds, the ball is on the ground.\n";
    }
    i++;
  }
  return 0;
}