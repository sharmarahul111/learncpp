#include<iostream>
using namespace std;
// interface = abstract class with only pure virtual functions, no member variables
// meaning only implementation specification, no implementation
class StreamInsertable {
	public:
		virtual void stream_insert(ostream &) = 0;
	friend ostream & operator<< (ostream & dout, StreamInsertable & operand);
};

ostream & operator<< (ostream & dout, StreamInsertable & operand){
	operand.stream_insert(dout);
	return dout;
}

class Test: public StreamInsertable {
	private:
		float x, y;
	public:
		Test() = default;
		Test(float a, float b): x(a), y(b) {};
		void stream_insert(ostream & dout) override {
			dout << "(" << x << "," << y << ")";
		}
};

int main(){
	Test t{45, 59};
	cout << t << endl;
}