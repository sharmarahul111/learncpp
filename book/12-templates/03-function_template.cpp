#include<iostream>
using namespace std;
template <class T>
void Tswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <class T>
void disp(T a, T b)
{
	cout << "Before swap: a = " << a << ", " << "b = " << b << endl;
	Tswap(a, b);
	cout << "After swap: a = " << a << ", " << "b = " << b << endl;
}
int main()
{
	disp(3,4);
	disp('a', 'c');
	disp(3.14, 1.43);
	disp("Hello", "world");

	return 0;
}