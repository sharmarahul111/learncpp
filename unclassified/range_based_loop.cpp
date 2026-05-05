#include<iostream>
int main(){
	// int x[10] {1,6,5,8,9,3,0};
	// int x[10] = {1,6,5,8,9,3,0};
	int x[] {1,6,5,8,9,3,0};
	
	// for(int a: x){
	for(auto a: x){
		std::cout << a << std::endl;
	}
}