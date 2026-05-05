#include<iostream>
#include<limits>

int main(){
	/*
	std::numeric_limits<T>::min();
	std::numeric_limits<T>::max();
	std::numeric_limits<T>::lowest(); // for floats
	*/

	std::cout << "Int from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "Float from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
	std::cout << "Float (lowest)" << std::numeric_limits<float>::lowest() << std::endl;
}