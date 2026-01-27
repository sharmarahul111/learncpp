#include<iostream>
int main(){
  int a {0b001111};
  int b {0xFf};
  int c {027};
  std::cout << a << '\n';
  std::cout << b << '\n';
  std::cout << c << '\n';
}
