#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	/*
	eof() - returns true(non zero value) if eof is encountered,
	        should be reset using clear() for further reading after seek
	fail() - returns true when an io operation has failed
	bad() - returns true if an invalid operation is attempted
	good() - returns true if above all return false,
			if false, then no further operation can be carried out
	*/
	ifstream fin;
	fin.open("data1.txt");
	char c;
	while(!fin.eof())
	{
		fin.get(c);
		if(fin.good())
			cout << c;

	}
	if (fin.eof()) cout << endl << "EOF reached!" << endl;
	fin.clear(); // disable EOF flag
	fin.seekg(0);
	while(!fin.eof())
	{
		fin.get(c);
		if(fin.good()) cout << c;
		
	}
	fin.close();
	fin.open("data-undefined.txt");
	if(fin.fail())
	{
		cout << "\nIO operation failed" << endl;
	}
	fin.close();

	return 0;
}