#include<iostream>
using namespace std;
/*

In C++, the only language-level differences are defaults:
struct-> Default member access and default inheritance are public
class -> Default member access and default inheritance are private
*/
struct Program
{
		int pid; // Default public
	private:
		int mem;
		float priority;

	public:
		void output()
		{
			cout << "Data: " << pid << "\t" << mem << "\t" << priority << endl;
		}
};

int main()
{
	Program p;
	p.pid = 5;
	// p.mem = 4096; // illegal
	p.output();

	return 0;

}