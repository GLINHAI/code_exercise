#include <iostream>
#include "Trying/Class.h"

int main() {
  bool right;
  int res;
  JustTry fun = JustTry(3, 2.8);
  res = fun.IntAdd(3, 3);
  right = fun.Compa(6, 7);
  fun.Output(1.5);

  std::cout << res << " " << right << " " << std::endl;
  return 0;
}
