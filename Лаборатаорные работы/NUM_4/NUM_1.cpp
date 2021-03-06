#include "pch.h"
#include <iostream>

using namespace std;

class Complex
{
	double real, imag;
public:
	Complex(double re, double im)
	{
		real = re, imag = im;
	}

	Complex(const Complex& a)
	{
		real = a.real; imag = a.imag;
	}

	~Complex()
	{
		cout << "Object of class \"Complex\" has been destroyed!" << endl;
	}

	double getReal()
	{
		return real;
	}
	double getImag()
	{
		return imag;
	}
	double findModule()
	{
		return (sqrt(real * real + imag * imag));
	}
};

int main()
{
	cout << "Enter the complex number: "; double real, imag;
	cin >> real >> imag; Complex num(real, imag);
	cout << "Re: " << num.getReal() << " Im: " << num.getImag() << endl;
	cout << num.findModule() << endl;
	system("pause");
}