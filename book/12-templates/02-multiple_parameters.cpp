#include<iostream>
using namespace std;

template<class T1,class T2>
class Test
{
	private:
		T1 a;
		T2 b;
	public:
		void disp();
		Test(T1, T2);
};

template <class T1, class T2>
Test<T1,T2>::Test(T1 x, T2 y)
{
	a = x;
	b = y;
}
template <typename T1, class T2>
void Test<T1,T2>::disp()
{
	cout << a << b << endl;
}

int main()
{
	Test<int, float>t1(23, 45.6f);
	Test<char, int>t2('r', 45);
	Test<char, string>t3('4', "hello");

	t1.disp();
	t2.disp();
	t3.disp();
	return 0;
}