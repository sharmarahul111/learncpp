#include<iostream>
using namespace std;

class A
{
	private:
		int a; // never accessible directly in any inheritance
	protected:
		int b;
	public:
		int c;
};
class B: private A
{
	// b = private
	// c = private
	public:
		void show()
		{
			cout << "In B:" << endl;
			cout << "b:" << b << endl;
			cout << "c:" << c << endl;
		}
	};
	class C: protected A
	{
		// b = protected
		// c = protected
		public:
			void show()
			{
				cout << "In C:" << endl;
				cout << "b:" << b << endl;
				cout << "c:" << c << endl;
			}
	};
	class D: public A
	{
		// b = protected
		// c = public
		public:
			void show()
			{
				cout << "In D:" << endl;
				cout << "b:" << b << endl;
				cout << "c:" << c << endl;
			}
	};
	int main()
	{
		B b;
		C c;
		D d;
		b.show();
		c.show();
		d.show();
		cout << "In main:" << endl;
		// cout << "b:" << d.b << endl; // illegal
		cout << "c:" << d.c << endl;

}