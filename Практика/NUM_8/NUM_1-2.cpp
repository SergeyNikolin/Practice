#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

int main() 
{
	string text;                            //NUM_1
	ofstream IP("C:\\test\\text_file.txt");
	if (!IP.is_open()) cout << "Error";
	cout << "Enter the text" << endl;
	getline(cin, text);
	IP << text;
	IP.close();

	ifstream OP("C:\\test\\text_file.txt"); //NUM_2
	if (!OP.is_open()) cout << "Error";
	while (!OP.eof())
	{
		OP >> text;
		cout << text << endl;
	}


	cin.get();
}