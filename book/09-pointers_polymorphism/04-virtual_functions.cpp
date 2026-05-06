#include<iostream>
using namespace std;

class A
{
	public:
		int a1;
		A(int x):a1(x){}
		virtual void disp()
		{
			cout << "A = " << a1 << endl;
		}
	};
	class B: public A
	{
		public:
			int b1;
			B(int x, int y):A(x),b1(y){}
			void disp()
			{
				cout << "B = " << b1 << endl;
			}
};

int main()
{
	/*
	Caution
	- avoid default arguments in virtual functions,
	> static binding causes base class default arguments
	to be used instead of from derived one

	- never call a virtual function from a constructor or destructor
	> we will get static binding because the code will never to a more derived
	class than currently executing constructor or destructor
	> if needed, make a separate function and call it manually
	*/
	A *ptr;
	A a(10);
	B b(40, 50);

	ptr = &a;
	ptr->disp();

	ptr = &b;
	ptr->disp();

}