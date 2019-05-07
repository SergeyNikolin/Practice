#include "pch.h"
#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

class Student
{
	string name, sname, patron; //ФИО студента
	short int sc[5]; //Оценки по 5-и предметам
public:
	Student()
	{
		name = ''; sname = ''; patron = '';
		for ( int i = 0; i < 5; i++ ) sc[i] = 0;
	}
	Student(string nm, string sn, string  pt, int sco[5])
	{
		name = nm; sname = sn; patron = pt;
		for (int i = 0; i < 5; i++) sc[i] = sco[i];
	}
};

class Gruppe
{
	vector<Student> Group;
public:
	void show()
	{
		for (int i = 0; i < Group.size; i++)
		{
			cout << Group[i].sname << " " << Group[i].name << " " << Group[i].patron;
			for (int j = 0; j < 5; j++) cout << " " << Group[i].sc[j];
		}
	}
};

int main()
{
	setlocale(LC_CTYPE, "rus");
	
	system("pause");
}