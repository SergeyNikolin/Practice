#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

class Student
{
public:
	string name, surname, patronymic, numOfColle;
	bool onALection;

	Student()
	{
		name = "No data"; surname = name; patronymic = name; numOfColle = name;
	}

	Student(string nm, string sn, string pat, string NOC)
	{
		name = nm; surname = sn; patronymic = pat; numOfColle = NOC;
	}
};

class Captain : Student
{
	bool haveAJournal;

	Captain() : Student()
	{
		haveAJournal = true;
	}
	Captain(string nm, string sn, string pat, string NOC) : Student(nm, sn, pat, NOC)
	{
		haveAJournal = true;
	}

	void onLesson(Student* N)
	{
		N->onALection = 1;
	}

	void notOnLesson(Student* N)
	{
		N->onALection = 0;
	}
};

int main() 
{
	
	cin.get();
}