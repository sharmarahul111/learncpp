#include<iostream>
#include<string>
using namespace std;
void disp(const string &msg, string &str)
{
	cout << msg << endl;
	cout << "str = '" << str << "'" << endl;
	cout << "length = " << str.length() << endl;
	cout << "size = " << str.size() << endl;
	cout << "capacity = " << str.capacity() << endl;
	cout << "Empty = " << (str.empty()?"yes":"no") << endl;
	cout << endl;
}
int main()
{
	string s1 = "Hello world";
	string s2 = "Another string";
	cout << "Display using for loop:" << endl;
	for(int i=0;i<s1.length();i++)
		cout << s1.at(i);
		// cout << s1[i];
	cout << endl << endl;
	disp("Initial:", s1);
	s1.resize(18);
	disp("Resize 15:", s1);
	s1.resize(8);
	disp("Resize 18:", s1);

	cout << "Find 'll' = " << s1.find("ll") << endl;
	s1.insert(4, "yoyo");
	cout << "After insert = " << s1 << endl;
	s1.erase(4,3);
	cout << "After erase = " << s1 << endl;
	s1.replace(0, 2, "wgsq ");
	cout << "Replacing first 2 letters = " << s1 << endl;
	cout << "s1 > s2 = " << (s1<s2) << endl; // s1.compare(s2)
	cout << "Before swap: s1 + s2 =" << s1+s2 << endl;
	s1.swap(s2);
	cout << "After swap: s1 + s2 =" << s1+s2 << endl;
	s1.clear();
	disp("After clear:", s1);
	cout << "Max size = " << s1.max_size() << endl;
	return 0;

}