#include "pch.h"
#include <iostream>

using namespace std;

class Alive
{
	int age, mass, lenght, height;
public:
	Alive(int ag, int mas, int len, int hei)
	{
		age = ag; mass = mas; lenght = len; height = hei;
	}
};

class Bird : public Alive
{
	const bool canFly = 1;
	int lenghtOfWings;
public:
	Bird(int ag, int mas, int len, int hei, int lenOfW): Alive(ag, mas, len, hei)
	{
		lenghtOfWings = lenOfW;
	}
};

class Fish : public Alive
{
	const bool canBreatheUnderWater = 1;
public:
	Fish(int ag, int mas, int len, int hei) : Alive(ag, mas, len, hei) {}
};

class Animal : public Alive
{
	const bool canWalk = 1;
public:
	Animal(int ag, int mas, int len, int hei) : Alive(ag, mas, len, hei) {}
};

class Cat : public Animal
{
	const bool canMeow = 1;
public:
	Cat(int ag, int mas, int len, int hei) : Animal(ag, mas, len, hei) {}
};

class Dog : public Animal
{
	const bool canWoof = 1;
public:
	Dog(int ag, int mas, int len, int hei) : Animal(ag, mas, len, hei) {}
};

int main()
{
	
}