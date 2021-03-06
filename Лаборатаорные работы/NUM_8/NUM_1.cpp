#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Student
{
public:
	char sun[25], n[20], sn[25], num[20];
	int sc[5];
	float sred;

	Student()
	{

	}

	Student(string sun1, string n1, string sn1, string num1, int sc1[5])
	{
		int i;
		sred = 0;
		for (i = 0; i < sun1.size(); i++)
		{
			sun[i] = sun1[i];
		}
		for (i = i; i < 25; i++)
		{
			sun[i] = ' ';
		}
		for (i = 0; i < n1.size(); i++)
		{
			n[i] = n1[i];
		}
		for (i = i; i < 20; i++)
		{
			n[i] = ' ';
		}
		for (i = 0; i < sn1.size(); i++)
		{
			sn[i] = sn1[i];
		}
		for (i = i; i < 25; i++)
		{
			sn[i] = ' ';
		}
		for (i = 0; i < num1.size(); i++)
		{
			num[i] = num1[i];
		}
		for (i = i; i < 20; i++)
		{
			num[i] = ' ';
		}
		for (i = 0; i < 5; i++)
		{
			sc[i] = sc1[i];
			sred += sc1[i];
		}
		sred /= 5;
	}

	void show(Student out)
	{
		int i = 0;
		while (num[i] != ' ')
		{
			cout << num[i];
			i++;
		}
		cout << " ";
		i = 0;
		while (sun[i] != ' ')
		{
			cout << sun[i];
			i++;
		}
		cout << " ";
		i = 0;
		while (n[i] != ' ')
		{
			cout << n[i];
			i++;
		}
		cout << " ";
		i = 0;
		while (sn[i] != ' ')
		{
			cout << sn[i];
			i++;
		}
		cout << " ";
		for (i = 0; i < 5; i++)
		{
			cout << sc[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	setlocale(LC_CTYPE, "rus");
	int ans;
	cout << "Enter the way to file: "; string way; cin >> way;
	system("cls");
	for (;;)
	{
		cout << "База данных студентов" << endl << endl;
		cout << "1. Вывести текущее состояние базы данных в консоль;" << endl << "2. Добавить студента в базу данных;" << endl << "3. Отсортировать данные по среднему баллу;" << endl << "0. Выход." << endl << "Номер команды: ";
		cin >> ans;
		switch (ans)
		{
		case 0: { return 0; }
		case 1:
		{
			system("cls");
			Student stud;
			ifstream OP(way);
			while (OP.read((char*)&stud, sizeof(Student)))
			{
				stud.show(stud);
			}
			OP.close();
			system("pause");
			system("cls");
			break;
		}
		case 2:
		{
			system("cls");
			string sun, n, sn, num;
			int sc[5], sred;
			cout << "Введите данные студента (номер зачетной книжки, ФИО, баллы по пяти предметам): ";
			cin >> num >> sun >> n >> sn >> sc[0] >> sc[1] >> sc[2] >> sc[3] >> sc[4];
			Student stud(sun, n, sn, num, sc);
			ofstream IP(way, ios::app);
			IP.write((char*)&stud, sizeof(Student));
			system("cls");
			break;
		}
		case 3:
		{
			vector<Student> studbase;
			vector<Student>::iterator it1, it2;
			Student stud;
			ifstream OP(way);
			while (OP.read((char*)&stud, sizeof(Student)))
			{
				studbase.push_back(stud);
			}
			for (it1 = studbase.begin(); it1 != studbase.end() - 1; it1++)
			{
				for (it2 = it1 + 1; it2 != studbase.end(); it2++)
				{
					Student stud1 = *it1, stud2 = *it2;
					if (stud1.sred > stud2.sred) swap(*it1, *it2);
				}
			}
			OP.close();
			ofstream IP(way);
			for (int i = 0; i < studbase.size(); i++)
			{
				IP.write((char*)&studbase[i], sizeof(Student));
			}
			IP.close();
			system("cls");
			break;
		}
		}
	}
}