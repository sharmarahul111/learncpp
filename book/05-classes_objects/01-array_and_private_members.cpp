#include<iostream>
using namespace std;
class Array
{
	private:
		int item[1000];
		int size;
		bool check(int i)
		{
			return i<size;
		}
	public:
		Array(int s=10)
		{
			size = s;
		}
		void set(int i, int value)
		{
			if(check(i))
			{
				item[i] = value;
			}
			else
			{
				cout << "Array index out of bounds: " << i << endl;
			}
		}
		void display()
		{
			cout << "List:" <<  endl;
			for(int i=0; i<size; i++)
			{
				cout << item[i] << endl;
			}
		}
};

int main()
{
	Array a;
	a.set(0,5);
	a.set(20,5);
	a.display();
}