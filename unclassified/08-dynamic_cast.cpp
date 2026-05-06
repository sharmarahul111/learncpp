#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void disp()
		{
			cout << "Base disp" << endl;
		}
};
class Derived: public Base
{
	public:
		void disp2()
		{
			cout << "Derived disp" << endl;
		}
};
int main()
{
	Base *base_ptr;
	base_ptr = new Derived;
	base_ptr->disp();
	// dynamic_cast for transforming base class pointer or reference to that of
	// derived class at runtime
	// makes it possible to call non-polymorphic methods on derived class
	// Usage -> inside functions where you are given a base pointer but
	// need to call a derived method which doesn't exist in base
	// Caution: overuse is avoided, means a bad design
	// just make it polymorphic in most cases
	Derived *derived_ptr = dynamic_cast<Derived *>(base_ptr);
	if (derived_ptr) {
		derived_ptr->disp2();
	} else {
		cout << "Couldn't do dynamic_cast" << endl;
	}

	return 0;
}