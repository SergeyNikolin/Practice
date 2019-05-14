#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

#pragma once
class complex
{
public:
	double real, imag;

	complex()
	{
		real = 0; imag = 0;
	}
	complex(double rl, double im)
	{
		real = rl; imag = im;
	}

	complex operator+(complex right)
	{
		real += right.real;
		imag += right.imag;

		complex result(real, imag);
		return result;
	}

	complex operator-(complex right)
	{
		real -= right.real;
		imag -= right.imag;

		complex result(real, imag);
		return result;
	}

	complex operator*(complex right)
	{
		double rr = right.real; double lr = real;
		double imr = right.imag; double iml = imag;

		real = lr * rr - iml * imr;
		imag = iml * rr + lr * imr;

		complex result(real, imag);
		return result;
	}

	complex operator=(complex right)
	{
		return right;
	}

	bool operator==(complex right)
	{
		if (real == right.real && imag == right.imag) return true;
		else return false;
	}

	complex operator++()
	{
		real++;
		return complex(real, imag);
	}

	complex operator --()
	{
		real--;
		return complex(real, imag);
	}

	complex operator >>(complex a)
	{
		real = a.real; imag = a.imag;
	}

	complex operator<<( complex a)
	{
		show(a);
	}
};

void show(complex x)
{
	cout << x.real << " " << x.imag;
}

int main() 
{
	
	cin.get();
}