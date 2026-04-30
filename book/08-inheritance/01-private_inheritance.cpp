#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		int b;
		int get_a()
		{
			return a;
		}
};

class B:A // same as class B: private A
{
	private:
		int c;
	public:
		int d;
		void disp()
		{
			// cout << a << endl; // Not accessible directly
			cout << get_a() << endl;
			cout << b << endl;
			cout << c << endl;
			cout << d << endl;
		}
};

int main()
{
	B b;
	b.disp();
	// cout << b.a << endl; // Private
	// cout << b.b << endl; // Privately inherited so illegal
	// cout << b.c << endl; // Private
	cout << b.d << endl;
	return 0;
}