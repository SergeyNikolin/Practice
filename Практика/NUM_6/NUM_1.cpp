#include "pch.h"
#include <iostream>

using namespace std;

class Property
{
public:
	double worth;

	Property(double w) : worth(w) {}

	virtual double tax() = 0;
};

class Appartment: public Property
{
public:
	Appartment(double w) : Property(w) {}
	double tax()
	{
		return worth / 1000;
	}
};

class CountryHouse: public Property
{
public:
	CountryHouse(double w) : Property(w) {}
	double tax()
	{
		return worth / 500;
	}
};

class Car: public Property
{
public:
	Car(double w): Property(w) {}
	double tax()
	{
		return worth / 200;
	}
};

int main() 
{
	setlocale(LC_CTYPE, "rus");

	Property* mas[7];
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите цену квартиры " << i + 1 << ": ";
		double worth;
		cin >> worth;
		Appartment* app = new Appartment(worth);
		mas[i] = app;
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "Введите цену автомобиля " << i + 1 << ": ";
		double worth;
		cin >> worth;
		Car* car = new Car(worth);
		mas[i + 3] = car;
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "Введите цену дачи " << i + 1 << ": ";
		double worth;
		cin >> worth;
		CountryHouse* ch = new CountryHouse(worth);
		mas[i + 5] = ch;
	}

	cout << endl << "Налог:" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << mas[i]->tax() << endl;
	}

	cin.get();
	cin.get();
}