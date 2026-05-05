#include<iostream>
#include<iomanip>
using namespace std;

ostream & manip1(ostream & dout)
{
	dout << "like-a-prefix";
	return dout;
}
ostream & num(ostream & dout)
{
	dout.precision(2);
	dout << setw(10) << setiosflags(ios::fixed) << setiosflags(ios::showpos) << setiosflags(ios::showpoint);
	return dout;
}

ostream & currency(ostream & dout)
{
	dout << "Rs ";
	return dout;
}

int main()
{
	cout << "hello world" << manip1 << endl;
	cout << "Your bill is " << currency << num << 23.5 << endl;
	return 0;
}