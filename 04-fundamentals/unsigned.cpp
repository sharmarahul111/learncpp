#include<iostream>
int main(){
  unsigned short x {65535};
  std::cout << "Initial value: " << x << '\n';
  x = x+7;
  std::cout << "Overflow: " << x << '\n';
  return 0;
}
