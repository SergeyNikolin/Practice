#include "pch.h"
#include <iostream>

using namespace std;

class Shape
{
	virtual void draw() = 0;
};

class Quadrangle : public Shape
{
protected:

	int angles[4];
	int xOfDots[4];
	int yOfDots[4];

	Quadrangle(int x[4], int y[4])
	{
		for (int i = 0; i < 4; i++)
		{
			xOfDots[i] = x[i];
			yOfDots[i] = y[i];
		}
	}

	Quadrangle(int ang[4], int x[4], int y[4])
	{
		for (int i = 0; i < 4; i++)
		{
			angles[i] = ang[i];
			xOfDots[i] = x[i];
			yOfDots[i] = y[i];
		}
	}

	void draw()
	{
		//drawing of quadrangle
	}

};

class Rhombus : public Quadrangle
{
protected:
	Rhombus(int x[4], int y[4]): Quadrangle(x, y) {}

	Rhombus(int ang[4],int x[4], int y[4]) : Quadrangle(ang, x, y) {}

	void draw()
	{
		//drawing rhombus
	}
};

class Rectangle : public Quadrangle
{
protected:
	Rectangle(int x[4], int y[4]): Quadrangle(x, y) 
	{
		for (int i = 0; i < 4; i++)
		{
			angles[i] = 3.1415926/2;
		}
	}

	void draw()
	{
		//drawing rectangle
	}
};

int main() 
{
	
}