#include<iostream>
int add(int, int);
int main(){
  std::cout << "Enter two numbers: ";
  int x{}, y{};
  std::cin >> x >> y;
  int z {add(x,y)};
  std::cout << "The sum is: " << z << std::endl;

  return 0;
}
