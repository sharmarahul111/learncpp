#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream of("data3.txt");
	cout << "Enter some text:" << endl;
	char str[100];
	cin.getline(str, 100);

	of << str;

	cout << "Data successfully written!" << endl;
	return 0;
}