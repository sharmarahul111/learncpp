#include<iostream>
using namespace std;

void add(int i, int j)
{
	cout << "Sum = " << i+j << endl;
}
void sub(int i, int j)
{
	cout << "Subtract = " << i-j << endl;
}

typedef void (*FunPtr)(int, int);

int main()
{
	void (*fp)(int, int);
	// Using typedef
	// FunPtr fp;

	fp = &add;
	fp(5,7);
	fp = &sub;
	fp(5,7);

	return 0;
}