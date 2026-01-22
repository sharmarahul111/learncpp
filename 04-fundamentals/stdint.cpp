#include<iostream>
#include<cstdint>
int main(){
  std::int8_t x {127};
  std::int16_t y {2345};
  std::uint16_t z {43243};
  x+=5;
  std::cout << static_cast<int>(x) << '\n';
  std::cout << y << '\n';
  std::cout << z << '\n';
}
