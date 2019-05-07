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
		switch (x[i])
		{
		case '1': {res = res * 10 + 1; break; }
		case '2': {res = res * 10 + 2; break; }
		case '3': {res = res * 10 + 3; break; }
		case '4': {res = res * 10 + 4; break; }
		case '5': {res = res * 10 + 5; break; }
		case '6': {res = res * 10 + 6; break; }
		case '7': {res = res * 10 + 7; break; }
		case '8': {res = res * 10 + 8; break; }
		case '9': {res = res * 10 + 9; break; }
		case '0': {res = res * 10; break; }
		}
		if (x[i] == '.')
		{
			i++;
			int k = -1;
			while (i <= x.length())
			{
				switch (x[i])
				{
				case '1': {res = res + 1 * pow(10, k); k--; i++; break; }
				case '2': {res = res + 2 * pow(10, k); k--; i++; break; }
				case '3': {res = res + 3 * pow(10, k); k--; i++; break; }
				case '4': {res = res + 4 * pow(10, k); k--; i++; break; }
				case '5': {res = res + 5 * pow(10, k); k--; i++; break; }
				case '6': {res = res + 6 * pow(10, k); k--; i++; break; }
				case '7': {res = res + 7 * pow(10, k); k--; i++; break; }
				case '8': {res = res + 8 * pow(10, k); k--; i++; break; }
				case '9': {res = res + 9 * pow(10, k); k--; i++; break; }
				case '0': {k--; i++; break; }
				}
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

class Const: public Expression
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