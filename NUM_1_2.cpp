#include "pch.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	long double a, b;
	cout << "Enter the number \"a\": ";
	cin >> a;
	cout << "Enter the number \"b\": ";
	cin >> b;
	cout << endl << "a + b = " << a + b;
	cout << endl << "a - b = " << a - b;
	cout << endl << "a * b = " << a * b;
	if (b!=0) cout << endl << "a / b = " << a / b;
	else cout << endl << "b = 0, cannot divide these numbers!";
	cout << endl;
	system("pause");
}