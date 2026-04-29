// Note to the reader:
// This is not how I write code, it's written this way to practice all the
// features of C++ while maintaining college standards;
#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
	private:
		char name;
		float x;
		float y;
		float angle;
		float magnitude;
	public:
		void polar()
		{
			magnitude = sqrt(x*x + y*y);
			angle = atan2(y,x);
		}
		Complex(){}
		Complex(char, float, float);
		friend Complex operator+(Complex, Complex);
		friend Complex operator-(Complex, Complex);
		Complex operator*(Complex c){
			return Complex('*', x*c.x+y*c.y, x*c.y+y*c.x);
		}
		void display()
		{
			cout << "(" << x << ", " << y << ")" << endl;
			// cout << "(r, theta) = (" << magnitude << ", " << angle << ")" << endl;
		}
};
Complex::Complex(char n, float ax=0,float ay=0)
{
	name = n;
	x = ax;
	y = ay;
	polar();
}
Complex operator+(Complex a, Complex b)
{
	Complex c('+', a.x+b.x, a.y+b.y);
	c.polar();
	return c;
}
Complex operator-(Complex a, Complex b)
{
	Complex c('C', a.x-b.x, a.y-b.y);
	c.polar();
	return c;
}

int main()
{
	Complex a('A',2,5), b('B',5,2);
	a.display();
	b.display();
	(a-b).display();
	(a-b).display();
	(a*b).display();
}