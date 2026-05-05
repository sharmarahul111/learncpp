#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << setw(20) << setfill('_') << 20 << endl;


	cout << "Adjustfield flags:" << endl;
	cout << setiosflags(ios::showpos) << setiosflags(ios::left) << setw(10) << 50 << endl;
	cout.setf(ios::right, ios::adjustfield);
	cout << setw(10) << 50 << endl;
	cout.setf(ios::internal, ios::adjustfield);
	cout << setw(10) << 50 << endl;

	cout << endl << endl;
	float f = 12.005001f;
	cout << "Floatfield flags" << endl;
	cout << resetiosflags(ios::showpos) << f << endl;
	cout << setprecision(3) << f << endl;
	cout << endl << endl;
	// major difference between cout functions and manipulator being
	// cout functions return previous state which can then later be restored
	// whereas manipulators don't save previous states
	cout << "Previous state" << endl;
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << f << endl;
	int j = cout.precision(4);
	cout << f << endl;
	cout.precision(j);
	cout << f << endl;
	return 0;
}