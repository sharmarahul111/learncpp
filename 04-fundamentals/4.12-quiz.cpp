// To show ASCII code of a character
#include<iostream>
int main(){
  char c {};
  std::cout << "Enter a character: ";
  std::cin >> c;
  std::cout << "ASCII value of " << c << " is "
    << static_cast<int>(c) << ".\n";
  return 0;
}
