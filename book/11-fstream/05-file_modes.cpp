#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	/*
	ios::app       append to end of file
	ios::ate go    to end of file on opening
	ios::binary    binary file
	ios:in open    file for reading only
	ios::nocreate  open fails if file doesn't exist
	ios::noreplace open fails if file exists
	ios::out       file for writing only
	ios::trunc     delete the contents of file if it exists

	pipe (\) can be used to combine multiple modes
	Eg. (ios::in | ios::out) for both reading and writing
	*/

	fstream fs;
	fs.open("data5.txt",ios::out);
	cout << "Enter some text:" << endl;
	char str[80], str2[80];
	cin.getline(str, 80);
	fs << str;
	
	fs.close();

	return 0;
}