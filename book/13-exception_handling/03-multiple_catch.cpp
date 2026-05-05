#include<iostream>
using namespace std;
class A {};
int main()
{
	int n;
	cout << "Enter a number:";
	cin >> n;

	try
	{
		switch(n)
		{
			case 0:
				throw 1;
			case 1:
				throw 1.0f;
			case 2:
				throw A();
			default:
				throw 'A';
		}
	}
	catch(int x)
	{
		cout << "Int exception";
	}
	catch(float x)
	{
		cout << "FLoat exception";
	}
	catch(A a)
	{
		cout << "Class A object exception";
	}
	// catches the rest of the exceptions, can be used alone
	catch(...)
	{
		cout << "Caught some exception";
	}

	cout << endl;
}