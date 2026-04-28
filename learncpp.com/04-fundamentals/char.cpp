#include<iostream>
int main(){
  char a {'a'};
  std::cout << a << '\n';
  std::cout << "Enter a char(y/n):" ;
  char c {};
  std::cin >> c;
  if (c == 'y') {
    std::cout << "You pressed y";
  } else {
    std::cout << "You denied the operation.";
  }
  std::cout << '\n';
  std::cin.get(c);
  std::cout << "Next char including whitespace:(" << c << ")\n";

  return 0;
}
