#include<iostream>
#include<map>
using namespace std;
// typedef map<int,string> Id;
int main()
{
	map<int,string> id;
	id[0] = "Mark";
	id[1] = "Jake";
	id[2] = "Avatar";
	// Inserting using pair<T1,T2>
	id.insert(pair<int,string>(3, "Watney"));
	cout << "Size of map: " << id.size() << endl;

	map<int,string>::iterator i;
	for(i=id.begin();i!=id.end();i++)
	{
		// can be used either way i-> or (*i)
		cout << "id["<< i->first <<"] = " << (*i).second << endl;
	}
	cout << "Like dictionary in python or js: id[2] = " << id[2] << endl;
	return 0;
}