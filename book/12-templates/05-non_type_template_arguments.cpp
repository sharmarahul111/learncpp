#include<iostream>
using namespace std;

template<class T, int size>
class Array
{
	private:
		T a[size];
	public:
		void disp()
		{
			cout << "Listing..." << endl;
			for(int i=0;i < size; i++)
			{
				cout << a[i] << endl;
			}
		}
};

int main()
{
	Array<int,5> a;
	Array<float,2> b;
	a.disp();
	b.disp();
}