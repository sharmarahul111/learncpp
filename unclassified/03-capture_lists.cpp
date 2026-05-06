#include<iostream>
using namespace std;
int main() {
	int c = 0;
	// capture lists help access to variables of outer scope to a lambda function
	// normally the outer scope variables are inaccessible
	// just passing variable name sends a copy so later changes, don't affect the value in lambda
	// passing by reference helps later changes take effect in the lambda
	auto func = [c](){
		cout << "Value of c in lambda: " << c << endl;
	};
	for(int i=0;i<5;i++){
		func();
		c++; // dayum C++ mentioned!!!
	}
	int d = 0;
	auto func2 = [&d](){
		cout << "Value of d in lambda: " << d << endl;
	};
	for(int i=0;i<5;i++){
		func2();
		d++; // dayum C++ mentioned!!!
	}

	// capture all in context
	// [=] - capture all by value
	// [&] - capture all by reference
	auto func3 = [=](){
		cout << "c and d and everything else accessible here!!!" << endl;
		cout << "c = " << c << ", d = " << d << endl;
	};

	func3();
}