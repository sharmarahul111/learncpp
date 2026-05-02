#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
	private:
		float x,y;
	public:
		Complex()
		{
			x=0, y=0;
		}
		Complex(float a, float b): x(a), y(b) {}
		operator float()
		{
			return sqrt(x*x+y*x);
		}
};

int main()
{
	Complex c(2,3);
	cout << "Complex to float:" << float(c);
	return 0;
}