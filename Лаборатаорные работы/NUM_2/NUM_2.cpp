#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

double Add(double x, double y)
{
	return x + y;
}

double Subt(double x, double y)
{
	return x - y;
}

double Mult(double x, double y)
{
	return x * y;
}

double(*function())(double a, double b)
{
	int answ;
	cout << "1. Sum; 2. Subtract; 3. Multiply;" << endl << "NUmber of command: ";
	cin >> answ;
	double(*actions[])(double x, double y) = { Add, Subt, Mult };
	if (answ > 0 && answ < 4)
	{
		return actions[answ - 1];
	}
	else return NULL;
}

int main() 
{
	cout << "Enter 2 numbers: "; double a, b;
	cin >> a >> b;
	double(*action) (double, double);
	action = function();
	double result;
	if (action == NULL) exit;
	else result = action(a, b);
	cout << endl << endl << "The result is: " << result << endl;
	cin.get();
	cin.get();
}