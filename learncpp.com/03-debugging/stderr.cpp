#include <iostream>
int add(int x, int y) {
  // use std::cerr instead of std::cout when debugging
  // cuz std::cerr is unbuffered and produces result immediately
  // std::cout may have some delays
  std::cerr << "This function works";
  return x + y;
}
int main() {
  int x{6};
  int y{3};
  std::cout << add(x, y) << std::endl;
}
