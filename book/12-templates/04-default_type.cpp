#include<iostream>
using namespace std;

template<class T1=int, class T2=float>
class Test
{
	private:
		T1 a;
		T2 b;
	public:
		Test(T1 x, T2 y):a(x), b(y) {}
		void disp()
		{
			cout << a << "\t" << b << endl;
		}
};

int main()
{
	Test<float, int> t1(34.2, 43);
	Test<> t2(45, 78.99);

	t1.disp();
	t2.disp();

	return 0;
}