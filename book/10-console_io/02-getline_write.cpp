#include<iostream>
using namespace std;

int main()
{
	char str[30];
	// gets 9 characters or till \n whichever comes first from the buffer
	// stores in str, +1 byte for \0 null character
	cin.getline(str, 10);
	// writes the 8 bytes of character from str
	cout.write(str, 8);
	cout << endl;
	// writes the 9 bytes
	// then writes 3 more garbage characters
	cout.write(str, 12);
	cout << endl;

	return 0;
}