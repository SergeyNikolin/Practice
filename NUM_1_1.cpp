#include "pch.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	char name[50];
	cout << "Please, enter your name: ";
	cin.getline(name, '/n');
	cout << "Welcome aboard, " << name << "!";
	Sleep(250);
	return 0;
}