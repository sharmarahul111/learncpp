#include<iostream>
int main(){
  char x {static_cast<int>(65)};
  int y = -3740;
  unsigned int z {static_cast<unsigned int>(y)};

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << z << '\n';
  return 0;
}
