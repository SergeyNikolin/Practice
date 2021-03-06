#include "pch.h"
#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

class Student
{
public:
	string name, sname, patron, stud; //ФИО студента и номер студенческого билета
	Student()
	{
		name = ' '; sname = ' '; patron = ' '; stud = ' ';
	}
	Student(string nm, string sn, string  pt, string st)
	{
		name = nm; sname = sn; patron = pt; stud = st;
	}
};

class Gruppe
{
public:
	vector<Student> Group;
	void show()
	{
		for (int i = 0; i < Group.size; i++)
		{
			cout << i+1 << ". " << Group[i].sname << " " << Group[i].name << " " << Group[i].patron << " " << Group[i].stud;
		}
	}

	void sort() //Сортировка по Фамилии в алфавитном порядке
	{
		vector<Student>::iterator it1, it2;
		for (it1 = Group.begin(); it1 < Group.end() - 2; it1++)
		{
			for (it2 = Group.begin(); it2 < Group.end() - 1; it2++)
			{
				Student a = *it1, b = *it2;
				if (a.sname > b.sname) swap(*it1, *it2);
			}
		}
	}
};

int main()
{
	setlocale(LC_CTYPE, "rus");
	Gruppe AG;
	for (;;)
	{
		system("cls");
		cout << "1. Просмотреть текущее состояние группы;" << endl << "2. Добавить нового студента;" << "3. Исключить студента(не надо так)" << "0. Выход" << endl << "Номер команды: ";
		short int ans;
		cin >> ans;
		switch (ans)
		{
		case 1: 
		{
			system("cls");
			AG.show();
			break;
		}
		case 2:
		{
			system("cls");
			string sname, name, patr, stud;
			cout << "Введите ФИО студента и номер студенческого билета" << endl;
			cin >> sname >> name >> patr >> stud;
			Student newOne(sname, name, patr, stud);
			AG.Group.push_back(newOne);
			AG.sort();
			break;
		}
		case 3:
		{
			system("cls");
			AG.show();
			cout << endl << endl << "И сегодня Дважды Краснознаменный Балтийский флот пополнит студент под номером... ";
			int num;
			cin >> num;
			vector<Student>::iterator it;
			it = AG.Group.begin();
			for (int i = 0; i < num - 1; i++, it++);
			AG.Group.erase(it);
			break;
		}
		case 0: {return 0; }
		default: {cout << "Команда введена неверно, повторите ввод" << endl; system("pause"); }
		}
	}
}