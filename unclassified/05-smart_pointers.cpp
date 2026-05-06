#include<iostream>
#include <memory>
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
		virtual void draw()
		{
			std::cout << "Drawing oval" << std::endl;
		}
};
class Circle: public Oval
{
	public:
		virtual void draw()
		{
			std::cout << "Drawing circle" << std::endl;
		}
};

int main()
{
	std::shared_ptr<Shape> shapes[] = {
		std::make_shared<Circle>(/*arglist*/),
		std::make_shared<Oval>(/*arglist*/),
		std::make_shared<Shape>(/*arglist*/),
	};

	for(auto &s: shapes)
	{
		s->draw();
	}
	return 0;
}