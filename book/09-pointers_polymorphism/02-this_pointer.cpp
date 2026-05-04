#include<iostream>
using namespace std;

class A
{
	private:
		int data;
	public:
		A& greater(A& a)
		{
			if (a.data > data)
				return a;
			else
				return *this;
		}
		int get()
		{
			return data;
		}
		A(int x):data(x) {}
};

int main()
{
	A x(10), y(20), z(115);
	cout << "X = " << x.get() << endl;
	cout << "Y = " << y.get() << endl;
	cout << "Z = " << z.get() << endl;
	cout << "X,Y = " << x.greater(y).get() << endl;
	cout << "Y,X = " << y.greater(x).get() << endl;
	cout << "Y,Z = " << z.greater(y).get() << endl;
	return 0;
}