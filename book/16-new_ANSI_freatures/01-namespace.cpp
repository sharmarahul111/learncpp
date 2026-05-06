#include<iostream>
using namespace std;
namespace name1
{
	int sum(int a, int b)
	{
		return a+b;
	}
	int diff(int a, int b);

	namespace name2 // can go any depth of nested namespace
	{
		int mul(int a, int b)
		{
			return a*b;
		}
	}
}
int name1::diff(int a, int b)
{
	return a-b;
}
// used for avoiding potential name clash between files
// every file has it's own unique  unnamed namespace
namespace // unnamed namespace
{
	void disp(int a)
	{
		cout << a << endl;
	}
}

int main()
{
	cout << name1::sum(4,5) << endl;
	cout << name1::diff(4,5) << endl;
	using name1::diff; // namespace keyword not needed
	cout << diff(4,5) << endl;
	using namespace name1;
	cout << sum(4,5) << endl;
	cout << name2::mul(8,9);

}