#include<iostream>
using namespace std;

class A
{
	protected:
		int a;
	public:
		void input(int x)
		{
			a = x;
		}
		void show()
		{
			cout << "A: a = " << a << endl;
		}
};
class B: virtual public A
{
	public:
		void input(int x)
		{
			a = x;
		}
		void show()
		{
			cout << "B: a = " << a << endl;
		}
};
class C: virtual public A
{
	public:
		void input(int x)
		{
			a = x;
		}
		void show()
		{
			cout << "C: a = " << a << endl;
		}
};
class D: public B, public C
{
	public:
		void input(int x)
		{
			a = x;
		}
		void show()
		{
			cout << "D: a = " << a << endl;
		}
};

int main()
{
	D d;
	d.A::input(5);
	d.A::show();
	d.B::show();
	d.C::show();
	d.D::show();

	d.B::input(6);
	d.A::show();
	d.B::show();
	d.C::show();
	d.D::show();

	d.C::input(7);
	d.A::show();
	d.B::show();
	d.C::show();
	d.D::show();

	d.D::input(8);
	d.A::show();
	d.B::show();
	d.C::show();
	d.D::show();
	

	return 0;
}