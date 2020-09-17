#include "class.h"
#include <iostream>

Class::Class() {
  value = 1;
}

void Class::execute() {
  std::cout << value;
}

