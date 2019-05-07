#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int* swapping(int* mas)
{
	for (int i = 0; i < 12; i += 2)
	{
		swap(mas[i], mas[i + 1]);
	}
	return(mas);
}

int main()
{
	setlocale(LC_CTYPE, "rus"); srand(time(0));
	int* mas = new int[12];
	for (int i = 0; i < 12; i++)
	{
		mas[i] = rand(); cout << mas[i] << endl;
	}
	cout << endl << endl;
	swapping(mas);
	for (int i = 0; i < 12; i++)
	{
		cout << mas[i] << endl;
	}
	system("pause");
}