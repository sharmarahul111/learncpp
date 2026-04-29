#include<iostream>
using namespace std;

class Coord
{
	private:
		int x;
		int y;
	public:
		void input(int a, int b)
		{
			x = a;
			y = b;
		}
		void display()
		{
			cout << "(" << x << ", " << y << ")" << endl;
		}
		friend Coord sum(Coord, Coord);
};
Coord sum(Coord a, Coord b)
{
	Coord c;
	c.input(a.x+b.x, a.y+b.y);
	return c;
}
int main()
{
	Coord a,b,c;
	a.input(2,5);
	a.display();
	b.input(4,6);
	b.display();
	c = sum(a,b);
	c.display();
}