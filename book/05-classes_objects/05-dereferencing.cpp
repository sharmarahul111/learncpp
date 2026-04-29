#include<iostream>
using namespace std;

class ABC
{
	private:
		int roll;
	public:
		int dat;
		void set(int r=4)
		{
			roll = r;
		}
		void display()
		{
			cout << "Roll = " << roll << ", Dat = " << dat << endl;
		}

};

int main()
{
	// making pointer to dat and display function
	int ABC::*p = &ABC::dat;
	void (ABC::*fun)() = &ABC::display;
	ABC a;
	a.*p = 29;
	a.set(4);
	a.display();
	(a.*fun)();

	// making and accessing a pointer to an object of a class
	ABC *pointer = &a;

	pointer->*p = 30;
	(pointer->*fun)();
}