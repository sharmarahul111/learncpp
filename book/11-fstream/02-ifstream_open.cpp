#include<iostream>
#include<fstream>


using namespace std;

int main()
{
	ifstream inf;
	inf.open("data1.txt");
	char data1[50];
	cout << "**********data1.txt************";
	while(inf){
		inf >> data1;
		cout << data1 << endl;
	}
	inf.close();
	inf.open("data2.txt");
	cout << "\n\n**********data2.txt************";
	while(inf){
		inf >> data1;
		cout << data1 << endl;
	}
	inf.close();
	return 0;
}