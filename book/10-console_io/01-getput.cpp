#include<iostream>
using namespace std;

int main()
{
	char c;
	do
	{
		// not technically character by character input,
		// the terminal just pauses at line 12,
		// unless the user hits enter, no fault of C++
		c = cin.get();
		cout.put(c);
	} while(c != '\n');
	// } while(c != '5');

	return 0;
}