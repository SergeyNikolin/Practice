#include "pch.h"
#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Car
{
	string index, color, model;
public:
	Car(string number, string color, string model) :index(number),
		color(color), model(model) {}
	void gett() 
	{
		cout << "Model: " << model <<
			"\nColor: " << color << "\nNumber: " << index << endl;
	}
};


int main()
{
	queue<Car> queve;
	Car num1("A123BO", "gray", "Opel \"Blitz\"");
	Car num2("H321ET", "green", "FIAT 626");
	queve.push(num1);
	queve.push(num2);
	queve.back().gett();
	cout << endl;
	queve.front().gett();
	system("pause");
}