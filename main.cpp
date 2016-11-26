#include <iostream>
#include <iomanip>

int main() {
  std::cout << std::setprecision(16); // show 16 digits
  float f = 3.3333333333333333333333333333333333333f;
  std::cout << f << std::endl;
  float b = f;
  std::cout << b << std::endl;
  return 0;
}
