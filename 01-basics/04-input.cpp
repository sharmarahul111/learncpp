#include<iostream>
int main(){
  int x {};
  int y {};
  std::cout << "Enter a number: ";
  std::cin >> x;
  std::cout << "You entered: " << x << '\n';
  std::cout << "Enter a number: ";
  std::cin >> x >> y;
  std::cout << "You entered: " << x << y << '\n';

  return 0;
}
