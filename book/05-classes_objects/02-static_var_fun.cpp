#include<iostream>
using namespace std;

class Items
{
	private:
		int id;
		static int count;
	public:
		void input()
		{
			id = ++count;
		}
		void output()
		{
			cout << "ID: " << id << endl;
		}
		static void get_count(){
			cout << "Count: " << count << endl;
		}
};
int Items::count;
int main()
{
	Items i1, i2, i3;
	i1.input();
	i2.input();
	i3.input();
	i1.input();
	i1.output();
	i2.output();
	i3.output();

	Items::get_count();
	i1.get_count();
	i2.get_count();
	i3.get_count();
	// cout << Items::count;
	// cout << i1.count;
}