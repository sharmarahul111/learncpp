#include<iostream>
#include<vector>

using namespace std;
void display(string msg, vector<int> &x)
{
	cout << msg << " (" << x.size() << "):" << endl;
	// using normal for loop with x.size()
	// for (int i=0; i<x.size(); i++)
	// {
	// 	cout.width(5);
	// 	cout << x[i] << ", ";
	// }

	// using reference to the begin and ends
	for(vector<int>::iterator itr = x.begin(); itr != x.end(); itr++)
	{
		cout.width(5);
		cout << *itr << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> x(5);
	x[0] = 6;
	x[1] = 8;
	x[2] = 9;
	display("Initial list", x);
	x.push_back(9);
	x.push_back(45);
	display("push 2 elements", x);
	x.pop_back();
	display("pop 1 element", x);
	x.erase(x.begin()+3, x.begin()+5);
	display("Erasing 3rd and 4th element", x);
	x.insert(x.begin()+2, 2, 99);
	display("After inserting", x);
	cout << "x.at(3) = " << x.at(3) << endl;
	cout << "x.back() = " << x.back() << endl;
	cout << "Capacity = " << x.capacity() << ", Size = " << x.size() << endl;
	cout << "x.empty() ? " << boolalpha << x.empty() << endl;
	x.clear();
	cout << "Capacity = " << x.capacity() << ", Size = " << x.size() << endl;

	cout << "x.empty() ? " << boolalpha << x.empty() << endl;
	
	return 0;
}