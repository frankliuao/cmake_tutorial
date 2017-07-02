#include <stdlib.h>
#include <iostream>

#include "Complex.hpp"

int main(int argc, char *argv[]) {
  Complex z(2, 1);
  Complex sumz = z + z;
  Complex subz = z - z;
  Complex negz = -z;
  std::cout << "Hello Complex!" << std::endl;
  std::cout << "The following results are the real part of the"
               "addition, subtraction and "
               "unary minus of the complex number 2 + i" << std::endl;
  std::cout << sumz.getreal() << std::endl;
  std::cout << subz.getreal() << std::endl;
  std::cout << negz.getreal() << std::endl;
  return 0;
}
