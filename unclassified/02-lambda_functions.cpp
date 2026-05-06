#include<iostream>
#include<string>
// #include<typeinfo>

int main()
{
	// [capture list](parameters) -> return_type {
	// 	Function body
	// };
	auto func = [](){
		std::cout << "Hello from lambda" << std::endl;
	};
	func();
	[](std::string str){
		std::cout << "Immediately Invoked Function Expression " << str << std::endl;
	}("(IIFE)");
	// std::cout << typeid(func).name() << std::endl;

	// return without return type as well
	auto result = [](int a, int b){
		return a+b;
	}; // result holds the lambda function
	
	std::cout << result(7,8) << std::endl;
	
	// return type is optional but if used, must return something
	auto result2 = [](int a, int b)->double{
		return a+b;
	}(3,4); // result2 holds the return value
	std::cout << result2 << std::endl;

	
	return 0;
}