#include<iostream>
using namespace std;

class Num
{
	private:
		int x;
		int y;
	public:
		Num(int a=0, int b=0)
		{
			x = a;
			y = b;
		}
		void display()
		{
			cout << "(" << x << ", " << y << ")" << endl;
		}
		void operator-()
		{
			x = -x;
			y = -y*2;

		}
};

int main()
{
	Num n(4,7);
	n.display();
	-n;
	n.display();
}