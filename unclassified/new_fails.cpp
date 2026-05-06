#include<iostream>
int main()
{
	// using try/catch
	try {
		int *a {new int[1000000000000000]};
		std::cout << "Memory allocated";
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// using std::nothrow to not get exception
	int *b {new (std::nothrow) int[1000000000000000]};
	if (b == nullptr) {
		std::cout << "memory failed to allocate ;(" << std::endl;
	} else {
		std::cout << "memory allocated to b" << std::endl;
	}
}