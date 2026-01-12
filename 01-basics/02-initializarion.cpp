#include<iostream>
int main(){
  int a; // default initialization
  // Traditional
  int b = 5; // copy initialization
  int c (6); // direct initialization
  // Modern
  int d {7}; // direct list initialization
  // as of c++17 above all 3 behave the same in most cases
  std::cout << b << c << d;

  // value initialization
  [[maybe_unused]] int w {};
  double g {9.8};
  
  return 0;
}
