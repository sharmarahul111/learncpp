#include<iostream>
using namespace std;

int main()
{
	float a,b;
	cout << "Enter two numbers for division:";
	cin >> a >> b;

	try
	{
		if (b!=0)
			cout << "Result = " << a/b << endl;
		else
			throw(b);
	}
	catch(float x)
	{
		cout << "Exception caught: DIVISION BY ZERO " << x << endl;
	}
}