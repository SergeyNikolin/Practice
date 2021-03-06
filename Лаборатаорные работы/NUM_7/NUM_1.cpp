#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

class Human
{
public:
	string surname, name, midname; 
	unsigned short int age;

	Human()
	{
		name = "No data"; surname = name; midname = name; age = 0;
	}

	Human(string nm, string sn, string mn, int ag)
	{
		name = nm; surname = sn;
		midname = mn; age = ag;
	}

	~Human()
	{
		cout << "Object of class \"Human\" has been destroyed" << endl;
	}

	virtual void print() = 0;
};

class Student : Human
{
	bool onLesson;

	Student(): Human()
	{
		onLesson = 0;
	}

	Student(string nm, string sn, string mn, int ag, bool onL) : Human(nm, sn, mn, ag)
	{
		onLesson = onL;
	}

	~Student()
	{
		cout << "Object of class \"Student\" has been destroyed" << endl;
	}

	void print()
	{
		cout << name << " " << midname << " " << surname << " " << age << " " << onLesson << endl;
	}
};

class Boss : Human
{
	unsigned int numberOfWorkers;

	Boss() : Human()
	{
		numberOfWorkers = 0;
	}

	Boss(string nm, string sn, string mn, int ag, unsigned int num) : Human(nm, sn, mn, ag)
	{
		numberOfWorkers = num;
	}

	~Boss()
	{
		cout << "Object of class \"Boss\" has been destroyed" << endl;
	}

	void print()
	{
		cout << name << " " << midname << " " << surname << " " << age << " " << onLesson << endl;
	}
};

int main() 
{
	
	cin.get();
}