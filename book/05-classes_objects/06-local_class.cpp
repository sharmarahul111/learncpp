#include<iostream>
using namespace std;
static int i;
void fun()
{
	static int j = 7;
	int k = 5;
	class Local
	{
		private:
			int data;
		public:
			void set()
			{
				data = 9;
			}
			void output()
			{
				cout << data << endl;
				cout << "i = " << i << endl; // global variable access
				cout << "j = " << j << endl; // static variable of function access
				// cout << "k = " << k << endl; // local variable of function not accessible

			}
	};

	Local l;
	l.set();
	l.output();
}
int main()
{
	fun();
	return 0;
}