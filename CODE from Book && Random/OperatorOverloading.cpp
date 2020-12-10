#include "pch.h"
#include <iostream>

class Shape
{
public:
	int length{};
	int width{};
	Shape() = default ;
	Shape(int a, int b)
	{	length = a;
		width = b;
	};
};

class Square : public Shape
{
public:
	int getArea() { return length * width; };
	Square(int a, int b) : Shape(a, b) {};

		/*inline Square operator+(Square& a, Square& b) //addSquareSize
		{
			int new Square.Length{};
			BoxLength += a.length ;
			this->width += a.width;
		}*/
};


int main()
{
	Square shapeSquare0(10, 20);
	Square shapeSquare1(15, 15);
	
	//std::cout << getArea(); 
}