#include<iostream>
#include<string>
using namespace std;
int main()
{
	// creating string objectss
	string s1;
	string s2("Hello");
	string s3 = "World";
	string s4 = "abc " + s3;
	string s5;
	cin >> s5; // one word

	cout << "s1 = " << s1 << endl;
	cout << "s2 + s3 = " << s2 + s3 << endl;
	cout << "s4 = " << s4 << endl;
	cout << "s5 = " << s5 << endl;
}