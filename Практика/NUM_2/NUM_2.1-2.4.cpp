#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, n, m, x, y, z, t;

	a = 4, 8; b = -7, 9; //Вариант 1
	if (a >= b) n = exp(1 / 3 * log(a - b));
	else n = a * a + (a - b) / sin(a*b);
	if (n < b) m = (n + a) / (-b) + sqrt(sin(a)*sin(a) - cos(n));
	else if (n == b) m = b * b + tan(n*a);
	else if (n > b) m = b * b*b + n * a*a;

	cout << a << " " <<  b << " " << n << " " << m << endl;

	a = -0.6; b = 5.3; //Вариант 2
	if (a < b) z = sqrt(abs(a*a - b * b));
	else z = 1 - 2 * cos(a) *sin(b);
	if (z < b) t = exp(1 / 3 * log(z + a * a*b));
	else if (z == b) t = 1 - log10(z) + cos(a*a*b);
	else if (n > b) t = 1 / cos(z*a);

	cout << a << " " << b << " " << z << " " << t << endl;

	a = 4.6; b = 1.5; //Вариант 3
	if (a <= b) y = (a - b) / (a + b)*(a + b) / (a*a - a * b + b * b);
	else y = a + log(b*b);
	if (y < b) t = sin(y)*sin(y) + 1 / tan(a - b);
	else if (y == b) t = (2 * y + sqrt(y*y - a)) / (2 * b - sqrt(a*a - y));
	else if (y > b) t = exp(1 / 3 * log(y*sin(a))) + 1 / sqrt(y*cos(b));

	cout << a << " " << b << " " << y << " " << t << endl;

	a = 3.5; x = -0.7; //Вариант 4
	if (a <= x) y = a + log(x + a);
	else y = sqrt(sin(a*x));
	if (a > y) t = y / (a - x);
	else if (a == y) t = y / (a - x) + (a + x) / y / y;
	else if (a < y) t = tan(a*x) + cos(2 * a*y);

	cout << a << " " << x << " " << y << " " << t << endl;
	cout << endl;
	system("pause");
}