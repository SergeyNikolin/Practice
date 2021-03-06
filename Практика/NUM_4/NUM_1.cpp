#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

double* create(int size) 
{
	double* arr = new double [size];
	return arr;
}

double* fill(double* arr, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() / 10;
	}
	return arr;
}

void show(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void del(double* arr)
{
	delete[] arr;
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	cout << "Enter the size of new array: ";
	int size; cin >> size;
	double* mas = create(size);
	mas = fill(mas, size);
	show(mas, size);
	del(mas);
	system("pause");
}