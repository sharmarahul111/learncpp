#include<iostream>
int main(){
  // "\n" is unconventional, use '\n'
  std::cout << "Hi" << 5 << '\n';
  // std::endl flushes the buffer
  // whuch is slow
  // so just use \n and let C++
  // decide when to output after a period
  // this is efficient, since multiple outputs
  // can be batched together
  std::cout << "Hi" << 5 << std::endl;
  return 0;
}
