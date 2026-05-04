#include<iostream>
using namespace std;

class A
{
	public:
		int a1;
		A(int x):a1(x){}
		void disp()
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

	// Pointer to derived class object still calls base class function
	// Can't access new properties or methods added in derived class
	ptr = &b;
	cout << ptr -> a1 << endl;
	// cout << ptr -> b1 << endl; // Can't access
	ptr->disp();

}