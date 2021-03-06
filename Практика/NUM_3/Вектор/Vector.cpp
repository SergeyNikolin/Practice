#include "pch.h"
#include <iostream>

using namespace std;

class Vector
{
public:
	int x, y;

	Vector()
	{
		x = 0; y = 0;
	}

	Vector(int xx, int yy)
	{
		x = xx; y = yy;
	}

	double module() { return sqrt(x*x + y * y); }

	Vector sum(Vector b)
	{
		Vector res;
		res.x = x + b.x;
		res.y = y + b.y;
		return res;
	}

	Vector difference(Vector b)
	{
		Vector res;
		res.x = x - b.x;
		res.y = y - b.y;
		return res;
	}
};

int main()
{
	Vector a(-1, 2), b(3, -4);
	cout << "Sum of Vectors: " << a.sum(b).x << ' ' << a.sum(b).y << endl;
	cout << "Difference of Vectors: " << a.difference(b).x << ' ' << a.difference(b).y << endl;
	cout << "Module of Vector \"a\": " << a.module() << endl;
	system("pause");
}