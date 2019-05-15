#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

class complex
{
public:
	double real, imag;
	complex(double rl, double im)
	{
		real = rl; imag = im;
	}
};

int main() 
{
	string way;
	cout << "Enter the way to file: "; cin >> way;
	ifstream OP(way);
	double real, imag;
	OP >> real >> imag;
	complex num1(real, imag);
	OP >> real >> imag;
	complex num2(real, imag);
	cout << "num1+num2 = " << num1.real + num2.real << " " << num1.imag + num2.imag << endl;
	cout << "num1-num2 = " << num1.real - num2.real << " " << num1.imag - num2.imag << endl;
	cout << "num1*num2 = " << num1.real*num2.real - num1.imag*num2.imag << " " << num1.real*num2.imag + num1.imag*num2.real << endl;
	system("pause");
}