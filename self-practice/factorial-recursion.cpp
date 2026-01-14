// Print factorial of using recursion
#include<iostream>
int factorial(int);
int main(){
  std::cout << "Enter a number:";
  int x {};
  std::cin >> x;
  std::cout << "The factorial is: " << factorial(x) << std::endl;
}
int factorial(int x){
  if (x==0) {
    return 1;
  } else {
    return x*factorial(x-1);
  }
}
