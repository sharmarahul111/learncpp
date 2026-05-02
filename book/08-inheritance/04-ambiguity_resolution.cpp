#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
		void disp()
		{
			cout << "A::a = " << a << endl;
		}
};

class B: public A
{
	private:
		int b;
	public:
		void disp()
		{
			cout << "B::b = " << b << endl;
		}
		void disp_a()
		{
			A::disp();
		}
};

int main()
{
	B b;
	b.disp();
	b.A::disp();
	b.B::disp();
	b.disp_a();
}