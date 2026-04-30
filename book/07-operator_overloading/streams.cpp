#include<iostream>
#include<string.h>
using namespace std;

class Str
{
	private:
		char *data;
		int len;
	public:
		Str()
		{
			data = new char[1];
			*data = '\0';
			len = 0;
		}
		Str(char *ch)
		{
			len = strlen(ch);
			data = new char[len +1];
			strcpy(data, ch);
		}
		Str(const Str &s)
		{
			len = s.length();
			data = new char[len +1];
			strcpy(data, s.data);
		}
		int length()
		{
			return len;
		}
		friend ostream & operator<<(ostream & dout, Str s);
		~Str()
		{
			delete[] data;
		}
};
ostream & operator<<(ostream & dout, Str s)
{
	dout << s.data;
	return dout;
}
int main()
{
	Str s1("hello");
	Str s2("world");
	cout << s1 << " " << s2 << endl;
}