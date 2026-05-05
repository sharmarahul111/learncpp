#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	/*
	- refposition
	ios::beg  pointer to beginning
	ios::cur  pointer to current
	ios::end  pointer to end

	tellp/tellg - get current pointer
	p - put pointer
	g - get pointer
	seekp/seekg
	seekp(position) // absolute
	seekp(offset, refposition) // relative
	*/
	fstream f;
	// ios::trunc to open even if file doesn't exist
	f.open("data6.txt", ios::in | ios::out | ios::trunc);
	cout << "tellg = " << f.tellg() << ", tellp = " << f.tellp() << endl;
	char str[80];
	cin.getline(str, 80);
	cout << "Trying to write the following data: \"" << str << '"' << endl;
	f << str;
	cout << "tellg = " << f.tellg() << ", tellp = " << f.tellp() << endl;
	
	f.seekg(-3, ios::cur);
	cout << "tellg = " << f.tellg() << ", tellp = " << f.tellp() << endl;
	char str2[20];
	f.getline(str2, 80);
	cout << str2 << endl;
	f.close();
	return 0;
}