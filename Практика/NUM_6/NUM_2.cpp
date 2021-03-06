#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

// functions

double stringToDouble(string x)
{
	double res = 0;
	for (int i = 0; i < x.length(); i++)
	{
		res = res * 10 + static_cast<int>(x[i]);
		if (x[i] == '.')
		{
			i++;
			int k = -1;
			while (i <= x.length())
			{
				res = res + static_cast<int>(x[i]) * pow(10, k);
				k--; i++;
			}
		}
	}
	return res;
}

bool isDouble(string x)
{
	for (int i = 0; i < x.length(); i++)
	{
		if (!(x[i] >= 0 && x[i] <= 9)) return false;
	}
	return true;
}

//==============================================================

//classes

class Expression
{
public:
	virtual void type() = 0;
	virtual void findDerivative() = 0;
};

class Const : public Expression
{
	double x;
public:
	void type() { cout << x; }

	void findDerivative() { cout << "0"; }
};

class Variable : public Expression
{
	string x;

public:

	Variable(string in) : x(in) {}

	void type() { cout << x; }

	void findDerivable() { cout << "1"; }
};

class Sum : public Expression
{
	string x, y;

public:

	Sum(string a, string b)
	{
		x = a; y = b;
	}

	void type()
	{
		cout << x << " + " << y;
	}

	void findDerivative()
	{
		if (!isDouble(x))
		{
			cout << x << " ";
		}
		if (!isDouble(y))
		{
			cout << "+ " << y;
		}
		if (isDouble(x) && isDouble(y)) cout << "0";
	}
};

class Diff : public Expression
{
	string x, y;

public:

	Diff(string a, string b)
	{
		x = a; y = b;
	}

	void type()
	{
		cout << x << " - " << y;
	}

	void findDerivative()
	{
		if (!isDouble(x))
		{
			cout << x << " ";
		}
		if (!isDouble(y))
		{
			cout << "- " << y;
		}
		if (isDouble(x) && isDouble(y)) cout << "0";
	}
};

class Mult : public Expression
{
	string x, y;

public:

	Mult(string a, string b)
	{
		x = a; y = b;
	}

	void type()
	{
		cout << x << " * " << y;
	}

	void findDerivative()
	{
		if (!isDouble(x))
		{
			cout << x;
		}
		else if (!isDouble(y))
		{
			cout << y;
		}
		else if (isDouble(x) && isDouble(y)) cout << "0";
		else { cout << x << " + " << y; }
	}
};

class Div : public Expression
{
	string x, y;

public:

	Div(string a, string b)
	{
		x = a; y = b;
	}

	void type()
	{
		cout << x << " / " << y;
	}

	void findDerivative()
	{
		if (!isDouble(x) && isDouble(y))
		{
			cout << x;
		}
		else if (!isDouble(y) && isDouble(x))
		{
			cout << "-1 / " << y << "^2";
		}
		else if (isDouble(x) && isDouble(y)) cout << "0";
		else { cout << x << " - " << y << " / " << y << "^2"; }
	}
};


int main()
{
	//.....
}