#include<iostream>
using namespace std;

// abstract class because of use of pure function
class A
{
	public:
		int a1;
		A(int x):a1(x){}
		virtual void disp() = 0;
};
	class B: public A
	{
		public:
			int b1;
			B(int x, int y):A(x),b1(y){}
			// compulsory to implement pure virtual function of base class
			// or make this class abstract also
			// virtual void disp() = 0;
			void disp()
			{
				cout << "B = " << b1 << endl;
			}
};

int main()
{
	A *ptr;
	// A a(10); // can't make object's of abstract classes
	B b(40, 50);

	ptr = &b;
	ptr->disp();
	return 0;
}