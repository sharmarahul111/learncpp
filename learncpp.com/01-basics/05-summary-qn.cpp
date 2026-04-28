// Write a program that asks the user
// to enter a number,
// and then enter a second number.
// The program should tell the user what
// the result of adding and subtracting the
// two numbers is.
#include<iostream>
int main(){
  int x {};
  int y {};
  std::cout << "Enter a number: ";
  std::cin >> x;
  std::cout << "Enter a second number:";
  std::cin >> y;

  std::cout << "The addition is " << x+y << "\n";
  std::cout << "The subtraction is " << x-y << "\n";

}
