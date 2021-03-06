#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	string mark, producer;
	int HP, year, milage;
};

class Bus :Car
{
public:
	int numOfSeats;
	Bus(string mk, string pd, int hp, int yr, int mg, int nos)
	{
		mark = mk; producer = pd; HP = hp; year = yr; milage = mg; numOfSeats = nos;
	}
};
class Offroad :Car
{
public:
	int GrClearence; string drive;
	Offroad(string mk, string pd, int hp, int yr, int mg, int GC, string drv)
	{
		mark = mk; producer = pd; HP = hp; year = yr; milage = mg; GrClearence = GC; drive = drv;
	}
};

class Light :Car
{
public:
	int maxSpeed;
	Light(string mk, string pd, int hp, int yr, int mg, int ms)
	{
		mark = mk; producer = pd; HP = hp; year = yr; milage = mg; maxSpeed = ms;
	}
};

class Truck :Car
{
public:
	int maxCarriage;
	Truck(string mk, string pd, int hp, int yr, int mg, int mc)
	{
		mark = mk; producer = pd; HP = hp; year = yr; milage = mg; maxCarriage = mc;
	}
};

int main()
{
	setlocale(LC_CTYPE, "rus");
	cout << "Введите 1. Марку \\ 2. Производителя \\ 3. Мощность двигателя в л.с. \\ 4. Год производства \\ 5. Пробег в км";
	string mk, pd; int hp, yr, mg;
	cout << endl << "1. ";
	getline(cin, mk);
	cout << "2. ";
	getline(cin, pd);
	cout << "3. ";
	cin >> hp;
	cout << "4. ";
	cin >> yr;
	cout << "5. ";
	cin >> mg;
	system("cls");
	bool true1 = 0;
	while (!true1)
	{
		system("pause");
		cout << "1. Легковой автомобиль" << endl
			<< "2. Грузовой автомобиль" << endl
			<< "3. Внедорожник" << endl
			<< "4. Автобус" << endl
			<< "Тип автомобиля: ";
		int ans;
		cin >> ans;
		switch (ans)
		{
		case 1:
		{
			system("cls");
			true1 = 1;
			cout << "Введите максимально возможную скорость: ";
			int max;
			cin >> max;
			Light car(mk, pd, hp, yr, mg, max);
			break;
		}
		case 2:
		{
			system("cls");
			true1 = 1;
			cout << "Введите максимальную грузоподъемность: ";
			int maxw;
			cin >> maxw;
			Truck car(mk, pd, hp, yr, mg, maxw);
			break;
		}
		case 3:
		{
			system("cls");
			true1 = 1;
			cout << "Введите клиренс: ";
			int gc;
			cin >> gc;
			bool true2 = 0;
			string dr;
			while (!true2)
			{
				cout << "Введите тип привода (front - передний, rear - задний, AWD - полный): ";
				cin >> dr;
				if (dr == "front" || dr == "rear" || dr == "AWD");
				true2 = 1;
				if (!true2) cout << "Вы ввели неправильный тип, попробуйте еще раз";
			}
			Offroad car(mk, pd, hp, yr, mg, gc, dr);
			break;
		}
		case 4:
		{
			system("cls");
			true1 = 1;
			cout << "Введите количество мест: ";
			int nos;
			cin >> nos;
			Bus car(mk, pd, hp, yr, mg, nos);
			break;
		}
		}
	}
}