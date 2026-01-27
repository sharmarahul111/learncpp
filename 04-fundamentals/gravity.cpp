#include<iostream>
float hf(float t, float h){
  float g = 9.8f;
  float dh {h-g*t*t/2.0f};
  if (dh >= 0) {
    return dh;
  }
  return 0;
}
void disp(int t, float h){
  std::cout << "Height at " << t << " seconds: "
    << hf(t,h) << " meters.\n";
}
int main(){
  std::cout << "Enter height:";
  float height {};
  std::cin >> height;
  std::cout << '\n';
  disp(0,height);
  disp(1,height);
  disp(2,height);
  disp(3,height);
  disp(4,height);
  disp(5,height);
  return 0;
}
