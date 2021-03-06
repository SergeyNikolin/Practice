#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void show(int ** mas, int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

int** full(int ** mas, int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		mas[i] = new int[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			mas[i][j] = rand() % 40 + 10;
		}
	}
	return(mas);
}

int main()
{
	setlocale(LC_CTYPE, "rus"); srand(time(0));
	int x = rand()%25, y = rand()%25;
	int** mas = new int*[x];
	full(mas, x, y);
	show(mas, x, y);
	system("pause");
}