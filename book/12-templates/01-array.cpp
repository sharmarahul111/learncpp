#include<iostream>
using namespace std;

template <class T>
class Array
{
	private:
		T* data;
		int size;
	public:
		Array(int s): size(s)
		{
			data = new T[size];
			for(int i=0;i<size;i++)
			{
				data[i] = 0;
			}
		}
		Array(const T& t, int s):size(s)
		{
			data = new T[size];
			for(int i=0;i<size;i++)
			{
				data[i] = t[i];
			}
		}
		void disp();
		T& operator[](int i)
		{
			return data[i];
		}
};

template <class T>
void Array<T>::disp()
{
	cout << "Listing..." << endl;
	for(int i=0;i<size;i++)
	{
		cout << data[i] << endl;
	}
}

int main()
{
	Array<int>a(5);
	Array<float>b(5);
	a[2] = 25;
	a[4] = 64;
	b[3] = 34.5;
	b[0] = 24.1;
	a.disp();
	b.disp();
	return 0;
}