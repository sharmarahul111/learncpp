#include<iostream>
class Shape
{
	public:
		virtual void draw()
		{
			std::cout << "Drawing shape" << std::endl;
		}
};
class Oval: public Shape
{
	public:
		// override is used to make sure we are overriding a method
		// that exists in the class we are inheriting from
		// good for spelling mistakes

		// Also, hides any other overloaded methods in base class and make it
		// necessary to implement in derived class if we need to use it
		// if override isn't used, base class method maybe used if argument match
		// isn't available in child class
		virtual void draw() override
		{
			std::cout << "Drawing oval" << std::endl;
		}
};
class Circle: public Oval
{
	public:
		virtual void draw() override
		{
			std::cout << "Drawing circle" << std::endl;
		}
};

int main()
{
	// nothing to do here for demonstration
	return 0;
}