#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int* swap(*int mas)
{
	for (int i = 0; i < 12; i+=2)
	{
		swap(mas[i], mas[i + 1]);
	}
	return(mas);
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	int* mas = new int*[12];
	swap(mas);
	for (int i = 0; i < 12; i++)
	{
		cout << mas[i] << endl;
	}
	system("pause");
}