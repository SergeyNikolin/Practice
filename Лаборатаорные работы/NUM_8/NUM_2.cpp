#include "pch.h"
#include <iostream>
#include <list>
#include <iterator>

using namespace std;

class Complex
{
	int real, imag;
public:
	Complex(int re, int im)
	{
		real = re; imag = im;
	}

	void gett() 
	{
		cout << real << " + " << imag << 'i' << endl;
	}
};

int main()
{
	list<Complex> lict;
	Complex num1(1, 2);
	Complex num2(4, 5);
	lict.push_back(num1);
	lict.push_front(num2);
	list<Complex>::iterator it; it = lict.begin();
	Complex show(0, 0); show = *it;
	show.gett(); it++;
	show = *it; show.gett();
	lict.pop_front();
	lict.pop_back();
	system("pause");
}