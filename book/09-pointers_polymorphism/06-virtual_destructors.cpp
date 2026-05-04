#include<iostream>
using namespace std;

class A
{
	public:
		// without virtual, only base class is destroyed
		// class B object won't be destroyed
		// making base destructor virtual prevents memory leak
		virtual ~A()
		{
			cout << "A destroyed" << endl;
		}
};
class B: public A
{
	public:
		~B()
		{
			cout << "B destroyed" << endl;
		}
};

int main()
{
	A *ptr;
	ptr = new B;

	delete ptr;
	return 0;

	/*
	Output:
		B destroyed
		A destroyed
	*/
}