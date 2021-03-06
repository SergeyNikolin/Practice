#include "pch.h"
#include <iostream>

using namespace std;

class Vector
{
	int x, y;
public:
	Vector(int xx, int yy)
	{
		x = xx; y = yy;
	}
	void operator=(Vector a)
	{
		x = a.x;
		y = a.y;
	}
	bool operator<(Vector a)
	{
		return x * x + y * y < a.x * a.x + a.y * a.y;
	}
	bool operator>(Vector a)
	{
		return x * x + y * y > a.x * a.x + a.y * a.y;
	}
	friend istream& operator>>(istream &inp, Vector &a) 
	{
		inp >> a.x;
		inp >> a.y;
		return inp;
	}
	friend ostream& operator<<(ostream &out, Vector &a) 
	{
		out << a.x << ' ' << a.y << endl;
		return out;
	}
};

int main()
{
	Vector a(0, 0), b(1, 2), c(3, 4);
	a = b;
	if (a > c) cout <<"a > c";
	else cout << "a <= c";
	cout << endl;
	cout << a << endl;
	cout << c << endl;
	system("pause");
}