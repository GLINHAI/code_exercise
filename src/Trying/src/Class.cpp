#include <iostream>
#include "Trying/Class.h"

int JustTry::IntAdd(int x, int y) {
  int result;
  result = (x + y) * inter_;
  return result;
}

bool JustTry::Compa(int x, int y) {
  int z;
  z = x + y;
  if (inter_ > z) {
    return 1;
  } else {
    return 0;
  }
}

void JustTry::Output(double x) {
  std::cout << "The result is: " << x + dinter_ << std::endl;
}
