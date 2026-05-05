#include<iostream>
using namespace std;
float division(float a, float b)
{
	if (b!=0)
	{
		cout << "Result = " << a/b << endl;
		return a/b;
	}
	else
		throw(b);
		// throw b;
		// throw;
}
int main()
{
	float a,b;
	cout << "Enter two numbers for division:";
	cin >> a >> b;

	try
	{
		// exceptions can be thrown from any level of nested blocks and function stacks
		division(a,b);
	}
	catch(float x)
	{
		cout << "Exception caught: DIVISION BY ZERO " << x << endl;
	}
}