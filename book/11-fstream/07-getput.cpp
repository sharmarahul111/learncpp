#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	/*
	put - write one character and move put pointer by one
	get - read one character and move get pointer by one
	*/
	fstream f;
	// ios::trunc to open even if file doesn't exist
	f.open("data7.txt", ios::in | ios::out | ios::trunc);
	cout << "tellg = " << f.tellg() << ", tellp = " << f.tellp() << endl;
	char str[80];
	cin.getline(str, 80);
	for(int i=0;str[i]!='\0';i++)
		f.put(str[i]);
	cout << "tellg = " << f.tellg() << ", tellp = " << f.tellp() << endl;
	
	f.seekg(0);
	cout << "tellg = " << f.tellg() << ", tellp = " << f.tellp() << endl;
	char c;
	cout << "Now reading:" << endl;
	// flawed, prints last character 2 times because of EOF hitting after while(f) is checked
	// while(f)
	// {
	// 	f.get(c);
	// 	cout << c;
	// }
	while(f.get(c))
	{
		cout << c;
	}
	cout << endl;

	return 0;
}