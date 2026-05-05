#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream of;
	of.open("data3.txt");
	cout << "Enter some text:" << endl;
	char str[100];
	cin.getline(str, 100);
	of << str;
	of.close();

	// opening another file
	of.open("data4.txt");
	cout << "Enter some more text:" << endl;
	cin.getline(str, 100);
	of << str;
	of.close();

	cout << "Data successfully written to both files!" << endl;
	return 0;
}