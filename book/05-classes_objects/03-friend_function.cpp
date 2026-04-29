#include<iostream>
using namespace std;
class XYZ;
class ABC
{
	private:
		int data;
	public:
		ABC()
		{
			data = 5;
		}
		void display()
		{
			cout << "Data: " << data << endl;
		}
		friend void sum(ABC, XYZ);
};
class XYZ
{
	private:
		int data;
	public:
		XYZ()
		{
			data = 9;
		}
		void display()
		{
			cout << "Data: " << data << endl;
		}
		friend void sum(ABC, XYZ);
};
void sum(ABC a, XYZ x)
{
	cout << "Sum of private members: "<< a.data + x.data << endl;
}

int main()
{
	ABC a;
	XYZ x;
	sum(a,x);

	return 0;
}