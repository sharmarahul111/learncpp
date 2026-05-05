#include<iostream>
#include<fstream>
using namespace std;
void display(float f[])
{
	cout << "listing members..." << endl;
	for(int i=0;i<4;i++)
	{
		cout.width(10);
		cout.precision(2);
		cout << f[i] << endl;
	}
}
int main()
{
	float f[] {1.0f, 4.67f, 198.25f, 160.70f};
	ofstream fout;
	fout.open("data8.bin", ios::binary);
	// used for putting data as-is in binary format directly from memory without conversion
	// needs to be casted to (char *)
	// can even write class objects (only members, not functions)
	fout.write((char *) & f, sizeof(f));
	fout.close();

	// reset all values to zero
	for(auto &i: f)
		i = 0;
	display(f);
	ifstream fin;
	fin.open("data8.bin", ios::binary);
	fin.read((char *) & f, sizeof(f));
	cout << "After reading:" << endl;
	display(f);
	
}
