#include<iostream>
using namespace std;
int main()
{
	// rounds up at the precision point, then removes extra zeros or unnecessary decimal
	float f[] = {1,3.14159, 3.14659, 2.50078, 2.0078, 1.001};
	// default is 6, stays at whatever value is set unless changed
	cout.precision(3);

	for(int i=0;i<6;i++)
	{
		// gets reset after every output
		// right justify
		cout.width(5);
		cout << f[i] << endl;
	}

	return 0;
}