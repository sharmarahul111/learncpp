/////////////////////////////////////////////////
// - Depricated in C++11
// - Doesn't work from C++17
////////////////////////////////////////////////
#include<iostream>
using namespace std;
// the throw (type-list) only allows specifyied types to be thrown
// otherwise terminates the program
// this list doesn't affect any try/catch used internally in the function
void test(int x) throw (int, double) {
	switch(x)
	{
		case 0:
			throw 1;
		case 1:
			throw 1.0;
		default:
			throw 1.0f;
	}
	cout << "End of function" << endl;
}
int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;

	try{
		test(n);
	}
	catch(...)
	{
		cout << "Exception caught" << endl;
	}

	return 0;
}