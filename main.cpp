#include <iostream>
#include "IEEE754.h"

int main() {
  IEEE754 ieee754;
  ieee754 = ieee754(3.14f);
  std::cout << ieee754 << std::endl;
  ieee754 = ieee754(0x7f800000U);
  std::cout << ieee754 << std::endl;
  ieee754 = ieee754("01111111100000000000000000000000");
  std::cout << ieee754 << std::endl;
  return 0;
}  // Output: