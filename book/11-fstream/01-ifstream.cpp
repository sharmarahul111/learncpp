#include<iostream>
#include<fstream>


using namespace std;

int main()
{
	ifstream inf("data1.txt");
	char data1[50];
	while(inf){
		// usual whitespace buffering rules
		inf >> data1;
		cout << data1 << endl;
	}

	return 0;
}