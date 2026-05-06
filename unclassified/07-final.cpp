class A
{
	public:
		virtual void fun(){};
};
class B: public A
{
	public:
		// final makes sure that no further override is possible down
		// the inheritance chain
		virtual void fun() override final {};
};
// final for class means no furthur derived class possible
class C final: public B
{
	// virtual void fun() override {}; // illegal
};
// not possible to derive from a final class
// class D: public B, public C {}; // illegal to derive from C