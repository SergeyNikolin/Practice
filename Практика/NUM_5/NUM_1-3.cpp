#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

void show(int* mas)
{
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

void show(double* mas)
{
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

void bubble(int* mas)
{
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 9; j++) 
		{
			if (mas[j] > mas[j + 1])
			{
				swap(mas[j], mas[j + 1]);
			}
		}
	}
	cout << "Сортировка пузырьком для массива int" << endl;
	show(mas);
}

void bubble(double* mas)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = i; j < 10-i-1; j++)
		{
			if (mas[j] > mas[j+1])
			{
				swap(mas[j], mas[j+1]);
			}
		}
	}
	cout << "Сортировка пузырьком для массива double" << endl;
	show(mas);
}

void choice(int* mas)
{
	for (int i = 0; i < 9; i++)
	{
		int min = mas[i]; int mini = i;
		for (int j = i+1; j < 10; j++)
		{
			if (min > mas[j])
			{
				min = mas[j]; mini = j;
			}
		}
		swap(mas[i], mas[mini]);
	}
	cout << "Сортировка выбором для массива int" << endl;
	show(mas);
}

void choice(double* mas)
{
	for (int i = 0; i < 9; i++)
	{
		double min = mas[i]; int mini = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (min > mas[j])
			{
				min = mas[j]; mini = j;
			}
		}
		swap(mas[i], mas[mini]);
	}
	cout << "Сортировка выбором для массива double" << endl;
	show(mas);
}

void insert(int* mas)
{
	for (int i = 0; i < 9; i++)
	{
		int key = i + 1;
		int max = mas[key];
		for (int j = i + 1; j > 0; j--)
		{
			if (max < mas[j - 1])
			{
				mas[j] = mas[j - 1];
				key = j - 1;
			}
		}
		mas[key] = max;
	}
	cout << "Сортировка вставками для массива int" << endl;
	show(mas);
}

void insert(double* mas)
{
	for (int i = 0; i < 9; i++)
	{
		int key = i + 1;
		int max = mas[key];
		for (int j = i + 1; j > 0; j--)
		{
			if (max < mas[j - 1])
			{
				mas[j] = mas[j - 1];
				key = j - 1;
			}
		}
		mas[key] = max;
	}
	cout << "Сортировка вставками для массива double" << endl;
	show(mas);
}



int main()
{
	setlocale(LC_CTYPE, "rus"); srand(time(0));
	int* masi = new int[10];
	for (int i = 0; i < 10; i++)
	{
		masi[i] = rand() % 100;
	}
	double* masd = new double[10];
	for (int i = 0; i < 10; i++)
	{
		masd[i] = rand() / 100;
	}
	cout << "Изначальный массив int" << endl;
	show(masi);
	cout << "Изначальный массив double" << endl;
	show(masd);
	bubble(masi);
	bubble(masd);
	choice(masi);
	choice(masd);
	insert(masi);
	insert(masd);
	system("pause");
}