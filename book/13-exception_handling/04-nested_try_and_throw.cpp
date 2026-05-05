#include<iostream>
using namespace std;

void division(int a, int b)
{
	try
	{
		if (b!=0)
			cout << "Sum = " << a/b << endl;
		else
			throw b;
			// throw; // [1]    15125 IOT instruction (core dumped)  ./a.out
	}
	catch(int)
	// catch(int x) // storing is optional
	{
		cout << "Caught division by zero exception" << endl;
		throw; // throws the given object even if not stored via catch(int x)
		// throw 26; // manually change the thrown object
	}
}

int main()
{
	int a=20,b=0;
	try
	{
		division(a,b);
	}
	catch(int x)
	{
		cout << "Caught exception in outer layer: " << x << endl;
	}

	return 0;
}