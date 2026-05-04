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
	A *ptr;
	A a(10);
	B b(40, 50);

	ptr = &a;
	ptr->disp();

	ptr = &b;
	ptr->disp();

}