#include "Realization.cpp"
#include "Header.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the first complex number: ";
	double a, b;
	cin >> a >> b;
	complex ac(a, b);
	cout << "Enter the second complex number: ";
	cin >> a >> b;
	complex bc(a, b);
	complex sc = ac + bc;
	complex dc = ac + bc;
	complex mc = ac * bc;
	cout << "Sum of complex numbers is: "; show(sc);
	cout << endl << "Difference of complex numbers is: "; show(dc);
	cout << endl << "Multiply of complex numbers is: "; show(mc);
	cout << endl;
	cin.get();
}