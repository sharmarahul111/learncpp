// I am sorry ok, just had to use public properties for this demonstration
// Is this a war crime?
#include<iostream>
using namespace std;

class A
{
	public:
		int data;
};
class B
{
	public:
		int data;
};
class C
{
	public:
		A a;
		B b;
};

int main()
{
	C c;
	c.a.data = 5;
	c.b.data = 7;

	cout << c.a.data << " & " << c.b.data << endl;

	return 0;
}