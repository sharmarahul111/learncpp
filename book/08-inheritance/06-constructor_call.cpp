#include<iostream>
using namespace std;

class A
{
	private:
		int a1, a2;
	public:
		A(int x, int y):a1(x)
		{
			a2 = y;
			show();
		}
		void show()
		{
			cout << "A: " << a1 << "\t" << a2 << endl;
		}
};

class B
{
	private:
		float b1, b2;
	public:
		B(float x, float y): b1(x), b2(y)
		{
			show();
		}
		void show()
		{
			cout << "B: " << b1 << "\t" << b2 << endl;
		}
};

class C: public B, public A
{
	private:
		char c1, c2;
	public:
		// Initializing the constructors of A and B, gets called in order of inheritance on line 35
		C(int a, float b, char c): A(a, a*5%7), B(b, b*b/2.7f)
		{
			c1 = c;
			c2 = c+11;
			show();
		}
		void show()
		{
			cout << "C: " << c1 << "\t" << c2 << endl;
		}
};

int main()
{
	C c(26, 37.8f, 'c');
}