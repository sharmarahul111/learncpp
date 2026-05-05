#include<iostream>
#include<list>
#include<cstdlib>

using namespace std;
void display(string msg, list<int> &x)
{
	cout << msg << " (" << x.size() << "):" << endl;

	// using reference to the begin and ends
	for(list<int>::iterator itr = x.begin(); itr != x.end(); itr++)
	{
		cout.width(9);
		cout << *itr << " ";
	}
	cout << endl;
}
int main()
{
	list<int> x(3), y, z {101, 102, 103, 104};
	x.push_back(rand()/100);
	x.push_back(rand()/100);
	x.push_back(rand()/100);
	y.push_back(rand()/100);
	y.push_back(rand()/100);
	y.push_back(rand()/100);
	display("Initial list", x);
	x.push_back(28);
	x.push_front(45);
	display("push 2 elements", x);
	x.pop_back();
	x.pop_front();
	display("pop 2 element", x);
	x.erase(x.begin());
	display("Erasing 1st element", x);
	x.insert(x.begin(), 2, 99);
	display("After inserting", x);
	x.merge(y);
	display("After merging y", x);
	x.reverse();
	display("After reverse", x);
	x.sort();
	display("After sort", x);
	cout << "x.back() = " << x.back() << endl;
	cout << "x.empty() ? " << boolalpha << x.empty() << endl;
	x.clear();

	cout << "x.empty() ? " << boolalpha << x.empty() << endl;
	
	return 0;
}