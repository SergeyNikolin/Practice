#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child
{
	string name;
	string surname;
	int age;
public:
	Child()
	{
		name = "No data"; surname = "No data"; age = 0;
	}

	Child(string nm, string sn, int ag)
	{
		name = nm; surname = sn; age = ag;
	}

	Child(const Child& obj)
	{
		name = obj.name; surname = obj.surname; age = obj.age;
	}
	
	void setData()
	{
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Surame: ";
		cin >> surname;
		cout << "Enter age: ";
		cin >> age;
	}
	void getData()
	{
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
	}
};


int main()
{
	Child ch1, ch2;
	ch1.setData();
	ch1.getData();
	ch2.setData();
	ch2.getData();
	system("pause");
}