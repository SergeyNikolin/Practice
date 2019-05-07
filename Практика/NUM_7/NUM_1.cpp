#include "pch.h"
#include <iostream>

using namespace std;

class Animal
{
protected:
	int age;
	double weight, length, height;
public:
	Animal(int ag, double w, double l, double h)
	{
		age = ag; weight = w; length = l; height = h;
	}

	virtual void anyFunction() = 0;
};

class Cat : public Animal
{
	void anyFunction()
	{
		//do anything;
	}
};

class Dog : public Animal
{
	void anyFunction()
	{
		//do anything;
	}
};

class Parrot : public Animal
{
	void anyFunction()
	{
		//do anything;
	}
};



int main() 
{
	
}