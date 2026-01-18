#include<iostream>
#define HI

int main(){
  std::cout << "Hi";
  #ifdef HI
    std::cout "eeee";
  #endif
  return 0;

}
