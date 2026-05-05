#include<iostream>
using namespace std;

int main()
{
	// fill left part with stars
	cout.fill('_');
	cout.width(20);
	cout << 20 << endl;

	// flags and bit fields
	/*
	cout.setf(arg1?, arg2);
	ios::adjustfield -> ios::left, ios::right, ios::internal
	ios::floatfield -> ios::scientific, ios::fixed
	ios::basefield -> ios::dec, ios::oct, ios::hex
	ios::showpos
	ios::showpoint
	ios::uppercase (for hex digits)
	ios::showbase (show 0, 0x part)
	*/

	cout << "Adjustfield flags:" << endl;
	cout.setf(ios::showpos); // show + sigh, stays unless reset
	cout.setf(ios::left, ios::adjustfield);
	cout.width(10);
	cout << 50 << endl;
	cout.setf(ios::right, ios::adjustfield);
	cout.width(10);
	cout << 50 << endl;
	cout.setf(ios::internal, ios::adjustfield);
	cout.width(10);
	cout << 50 << endl;

	cout << "\n\n";
	int i = 511;
	cout << "Basefield flags" << endl;
	cout.setf(ios::dec, ios::basefield);
	cout << i << endl;
	cout.unsetf(ios::showpos); // reset showpos
	cout.setf(ios::dec, ios::basefield);
	cout << i << endl;
	cout.setf(ios::oct, ios::basefield);
	cout << i << endl;
	cout.setf(ios::hex, ios::basefield);
	cout << i << endl;
	// cout.setf(ios::hex, ios::basefield);
	cout.setf(ios::uppercase);
	cout << i << endl;
	cout.setf(ios::showbase);
	cout << i << endl;
	cout.setf(ios::oct, ios::basefield);
	cout << i << endl;
	cout << "\n\n";

	float f = 12.000001f;
	float g = 1.234567f;
	cout << "Floatfield flags" << endl;
	cout.precision(3);
	cout << f << endl;
	cout.setf(ios::fixed, ios::floatfield);
	// cout.setf(ios::showpoint); // I assume floatfield comes with showpoint enabled
	cout << f << endl;
	cout.setf(ios::scientific, ios::floatfield);
	// cout.setf(ios::showpoint);
	cout << f << endl;
	cout.unsetf(ios::fixed | ios::scientific); // hack to restore notation
	cout << f << endl;

	return 0;
}