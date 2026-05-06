#include<iostream>
using namespace std;
template <typename T>
T mult(T a)
{
	return a*a;
}
template <>
const char * mult(const char *)
{
	// do someting for special cases
	return "sorry can't multiply characters";
}
int main()
{
	cout << mult(4) << endl;
	cout << mult(5.6) << endl;
	cout << mult("hello world") << endl;

	return 0;
}